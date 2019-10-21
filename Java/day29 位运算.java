import java.util.*;

public class Solution {

    private static final Scanner scanner = new Scanner(System.in);
    public static void main(String[] args) {
        int t = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        for (int tItr = 0; tItr < t; tItr++) {
            String[] nk = scanner.nextLine().split(" ");
            int n = Integer.parseInt(nk[0]);
            int k = Integer.parseInt(nk[1]);

            int ans = MaximumPossibleValue(n,k);

            System.out.println(ans);
        }
        scanner.close();


    }

    private static int MaximumPossibleValue(int n, int k) {
        int biggest = Integer.MIN_VALUE;
        for(int i = 1 ;i < n ; i ++){
            for(int j = i+1 ; j<= n ;j++)
            {
                int temp =  BinaryCal(i,j);
                if(temp > biggest && temp < k)
                    biggest = temp;
            }
        }
        return biggest;
    }

    private static int BinaryCal(int a, int b) {
        int ans = 0;
        ans = a&b;
//        System.out.println(a+"&"+b+"="+ans);
        return ans;
    }
}
