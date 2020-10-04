// very basic java program for hello world
// it aske user for its name and then output hello world followed by the name
// I made this only for hactoberfest but it also gives u a genral idea of the java program
import java.util.*;//the library class imported for taking input from user
class hello
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);// creates the object sc for Scanner class
        System.out.println("enter your name");
        String s=sc.nextLine();// calls the function nextLine(); it takes input whose code is implemented in Scanner class
        System.out.println("hello world "+s);
    } 
}
