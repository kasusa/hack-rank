import java.io.*;
import java.util.*;

public class Solution {
    public static void PrimeOrNot(int x){
        if(x == 1){
            System.out.println("Not prime");return;
        }
        double dx = x;
        dx = Math.sqrt(dx);
        for(int i = 2 ; i<= dx ; i++)
        {
            if(x%i == 0){
                System.out.println("Not prime");
                return;
            }
        }
        System.out.println("Prime");
    }

    public static void main(String[] args) {
        int n = 0 , n_;
        List<Integer> list = new LinkedList<>();

        Scanner scan = new Scanner(System.in);
        n = scan.nextInt();

        n_ = n;
        while (n_ --> 0){

            int temp = scan.nextInt();
            list.add(temp);
        }
        scan.close();

//        System.out.println("n is now" + n);
        for(int i = 0;i<n;i++){
            PrimeOrNot(list.get(i));
        }
    }
}

