/* 
    Program 4 
    Date: 6th August 2024 
*/
import java.util.Scanner;

public class Fibonacci{
    public static void main(String[] args) {
        int a;
        int b;
        int c;
        int i;
        a=0;
        b=1;

        try (Scanner scanner = new Scanner(System.in)) {
            
            System.err.println("Enter range of Fibonacci Series: ");
            int n= scanner.nextInt();
            
            System.err.println(a);
            System.err.println(b);
            for(i=2;i<n;i++)
            {
                c=a+b;
                System.err.println(c);
                a=b;
                b=c;
                
            }
        }

    }
}