#include <iostream>
#include <vector>

using namespace std;

class Person
{
protected:
    string firstName;
    string lastName;
    int id;

public:
    Person(string firstName, string lastName, int identification)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson()
    {
        cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
    }
};

class Student : public Person
{
private:
    vector<int> testScores;

public:
    /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
    // Write your constructor here
    Student(string firstname, string lastname, int id, vector<int> scores) : Person(firstname, lastname, id)
    {

        testScores = scores;
    }

    /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
    // Write your function here
    char calculate()
    {
        char Grade;
        int size = testScores.size();
        int addUp = 0;
        while (testScores.empty() != true)
        {
            addUp += testScores.back();
            testScores.pop_back();
        }
        int a = addUp / size;
        if (90 <= a && a <= 100)
        Grade = 'O';
        if (80 <= a && a < 90)
        Grade = 'E';
        if (70 <= a && a < 80)
        Grade = 'A';
        if (55 <= a && a < 70)
        Grade = 'P';
        if (40 <= a && a < 55)
        Grade = 'D';
        if (a < 40)
        Grade = 'T';
        return Grade;
    }

};

int main()
{
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for (int i = 0; i < numScores; i++)
    {
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student *s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}