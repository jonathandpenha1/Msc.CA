/* 
    Program 9 
    Date: 6th August 2024 
*/

class Student{                                  //student class
    int rollno;
    String name;
    void insertRecord(int r, String n)
    {
        rollno=r;
        name=n;
    }
    void displayinformation()
    {
        System.err.println(rollno+" "+name);
    }
}

public class TestStudent{                           //main class
    public static void main(String[] args) {
        Student s1=new Student();
        Student s2=new Student();
        s1.insertRecord(111, "Jonathan");
        s2.insertRecord(222, "Aryan");
        s1.displayinformation();
        s2.displayinformation();
    }
}