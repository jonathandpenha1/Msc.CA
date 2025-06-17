/* 
    Program 8 
    Date: 6th August 2024 
*/

public class PassArrayToMethod {                //main class 
    public static void main(String[] args) {
        int[] arr = {10, 2, 33, 4, 50, 6};

        findMin(arr);

    }

    // Method to find the minimum value in an array
    public static void findMin(int[] array) {     // static function
        int min = array[0];

        for (int i = 1; i < array.length; i++) {
            if (min > array[i]) {
                min = array[i];
            }
        }

        System.out.println("The minimum value in the array is: " +min);
    }
}
