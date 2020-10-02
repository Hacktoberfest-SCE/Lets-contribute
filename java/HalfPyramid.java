import java.util.Scanner;

public class HalfPyramid {
    public static void main(String[] args) {
        System.out.print("Enter N number : ");
        Scanner sc = new Scanner(System.in);

        int row = sc.nextInt();

        for(int i=1; i<=row; i++) {
            for(int j=0; j<i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}