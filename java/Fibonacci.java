import java.util.*;


public class Fibonacci {
    public static void main(String[] args) {
        int a=0,b=1,c,n,i;
        System.out.println("Enter how many numbers to print");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        sc.close();
        System.out.println("Fibonacci Series starts");
        System.out.println(a +"\n" + b);
        for (i = 0; i < n-2; i++){
            c = a+b;
            System.out.println(c);
            a = b;
            b = c;
        }

    }
}