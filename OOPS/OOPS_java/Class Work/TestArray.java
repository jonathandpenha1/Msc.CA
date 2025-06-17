/* 
    Program 7 
    Date: 6th August 2024 
*/

public class TestArray{
    public static void main(String[] args) {
        int[] a = new int[5];//declaration and instiantion
        a[0]=10;
        a[1]=20;
        a[2]=30;
        a[3]=40;
        a[4]=50;

        System.out.println("Length of Array: " + a.length);

        //Traverssing array
        for (int i = 0; i < a.length; i++) // a.length is the length of the array 
        {
            System.out.println(a[i]);
            
        }
    }
}