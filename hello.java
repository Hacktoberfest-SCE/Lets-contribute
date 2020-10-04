// very basic java program for hello world
// it aske user for its name and then output hello world followed by the name
// I made this only for hactoberfest but it also gives u a genral idea of the java program
import java.util.*;
class hello
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter your name");
        String s=sc.nextLine();
        System.out.println("hello world "+s);
    } 
}
