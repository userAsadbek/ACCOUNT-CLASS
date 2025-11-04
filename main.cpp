//main.cpp
// termianal codes for visual studio below
//g++ main.cpp Account.cpp CharRange.cpp -o program
//.\ program.exe
    #include <iostream>
    #include <iomanip>
    #include <cctype>
    #include "Account.h"
    #include "CharRange.h"
    using namespace std;

    void displayMenu();
    void makeDeposit(Account &);
    void withdraw(Account &);

    int main(){ 
        Account savings;
        CharRange input('A','G');
        char choice;
        cout<<fixed<<showpoint<<setprecision(2);
        do {
            displayMenu();
            choice=input.getChar();
            switch(choice) {
                case 'A': cout<<"The current balance is $";
                        cout<<savings.getBalance()<<endl;
                        break;
                case 'B': cout<<"There have been ";
                        cout<<savings.getTransactions()<<" transactions."<<endl;
                        break;
                case 'C': cout<<"Interest earned for this period:  $";
                        cout<<savings.getInterest()<<endl;
                        break;
                case 'D': makeDeposit(savings);
                        break;
                case 'E': withdraw(savings);
                        break;
                case 'F': savings.calcInt();
                        cout<<"Interest has been added to your account."<<endl;
                        break;} }
            while(choice != 'G');
            return 0; }

    void displayMenu() {
        cout<<endl;
        cout<<"A) Display the current balance"<<endl;
        cout<<"B) Display the number of transactions.\n";
        cout<<"C) Display interest earned for this period.\n";
        cout<<"D) Make a deposit.\n";
        cout<<"F) Make a withdrawal.\n";
        cout<<"E) Add interest for this period.\n";
        cout<<"G) Exit the program.\n";
        cout<<"Enter your choice (A-G): "; } 
    void makeDeposit(Account &account) {
        double dollars;
        cout<<"Enter the amount of deposit: $";
        cin>>dollars;
        cin.ignore();
        account.makeDeposit(dollars); }

    void withdraw(Account &account) {
        double dollars;
        cout<<"Enter the amount of withdrawal: $";
        cin>>dollars;
        cin.ignore();
        if(!account.withdraw(dollars)){ 
            cout<<"Error: Withdrawal amount too large."<<endl;
        } }
