//Sorting an array without using sort function
public class SortStringWithoutPredefinedMethodsTest {
   public static void main(String[] args) {
      String str = "jdkoepacmbtr";
      System.out.println("Before Sorting:" + str);
      int j = 0;
      char temp = 0;
      char[] chars = str.toCharArray();
      for(int i=0; i < chars.length; i++) {
         for(j=0; j < chars.length; j++) {
            if(chars[j] > chars[i]) {
               temp = chars[i];
               chars[i] = chars[j];
               chars[j] = temp;
            }
         }
      }
      System.out.println("After Sorting:");
      for(int k=0; k < chars.length; k++) {
         System.out.println(chars[k]);
      }
   }
}
