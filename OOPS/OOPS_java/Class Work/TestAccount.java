/* 
    Program 11 
    Date: 6th August 2024 
*/

class Account{
    int acc_no;
    String name;
    float amount;
    //method to initialize object
    void insert(int a, String n, float amt)
    {
        acc_no=a;
        name=n;
        amount=amt;
    }

    //deposit method
    void deposit(float amt)
    {
        amount=amount+amt;
        System.out.println("Amount Deposited: "+amt);
    }

    //withdraw method
    void withdraw(float amt)
    {
        if(amount<amt)
        {
            System.out.println("Insufficient Balance");
        }
        else
        {
            amount = amount -amt;
            System.out.println(amt+" Amount Has been withdrawn");

        }
    }

    //checkBalance amount
    void checkBalance()
    {
        System.err.println("Balance is: "+amount);
    }

    //display method
    void display()
    {
        System.out.println("Account Number:"+acc_no+" Name:"+name+" Amount:"+amount);
    }
}

class TestAccount{
    public static void main(String[] args) {
        Account a1= new Account();
        a1.insert(1234, "Jonathan", (float) 19287.17);
        a1.display();
        a1.checkBalance();
        a1.withdraw(200);
        a1.checkBalance();
        a1.display();

    }
}