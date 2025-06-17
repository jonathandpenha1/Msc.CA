/* 
    Program 10 
    Date: 6th August 2024 
*/

class Calculation{
    void fact(int n){
        int fact=1;
        for (int i = 1; i <=n; i++) {
            fact=fact*i;
        }
        System.err.println("Factorial is: "+fact);
    }
    public static void main(String[] args) {
        new Calculation().fact(5);
    }
}