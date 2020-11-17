import java.util.Scanner;

public class pow{
		public static class PowerOfNumber {
		   public static void main(String args[]){
		      Scanner sc = new Scanner(System.in);
		      System.out.println("Enter the base number ::");
		      int base = sc.nextInt();
		      int temp = base;
		      System.out.println("Enter the exponent number ::");
		      int exp = sc.nextInt();

		      for (int i=1; i<exp; i++){
		         temp = temp*temp;
		      }
		      System.out.println("Result of "+base+" power "+exp+" is "+temp);
		   }
		}
	}


