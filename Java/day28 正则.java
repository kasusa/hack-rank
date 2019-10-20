import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {
    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        Vector<String> names = new Vector();
        int N = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int NItr = 0; NItr < N; NItr++) {
            String[] firstNameEmailID = scanner.nextLine().split(" ");
            String firstName = firstNameEmailID[0];
            String emailID = firstNameEmailID[1];
//            System.out.println(firstName + " "+ emailID);
            if(IsName(firstName)&&IsGmail(emailID)){
                names.add(firstName);
            }
        }
        Collections.sort(names);
        int n = names.size();
       for(int i = 0 ; i < n ; i++){
            String name = names.get(i);
            System.out.println(name);
        }

        scanner.close();
    }

    private static Boolean IsGmail(String inputMail) {
        int length = inputMail.length();
        if(length>50){
            //too long
            return false;
        }

        String myRegExString = "[a-z]*[@]gmail[.]com";
        Pattern p = Pattern.compile(myRegExString);
        Matcher m = p.matcher(inputMail);
        if (m.find()) {
            // Print the match
//            System.out.println(m.group());
            return true;
        }
        return false;
    }
    private static Boolean IsName(String inputName) {
        int length = inputName.length();
        if(length>20){
            //too long
            return false;
        }

        String myRegExString = "[a-z]+";
        Pattern p = Pattern.compile(myRegExString);
        Matcher m = p.matcher(inputName);
        if (m.find()) {
            // Print the match
//            System.out.println(m.group());
            return true;
        }
        return false;
    }

}
