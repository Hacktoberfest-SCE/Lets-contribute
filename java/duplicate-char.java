//program to print ducplicate characters in a string
//
import java.util.Scanner;

public class DuplStr {
 public static void main(String argu[]) {

  String str;
  int cnt = 0;
  Scanner str = new Scanner(System.in);
  char[] inp = str.toCharArray();
  System.out.println("Duplicate Characters are:");
  for (int i = 0; i < str.length(); i++) {
   for (int j = i + 1; j < str.length(); j++) {
    if (inp[i] == inp[j]) {
     System.out.println(inp[j]);
     cnt++;
     break;
    }
   }
  }
 }
}
