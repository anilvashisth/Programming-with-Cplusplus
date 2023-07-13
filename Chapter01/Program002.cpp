//Lecture 2 WAP to Print Quotient and Reminder using C++
#include<iostream>
using namespace std;

int main(){
    int divisor,dividend,quotient,remainder;
    
    cout<<"Enter Dividend : ";
    cin>> dividend;
    cout<<"Enter Divisor : ";
    cin>> divisor;

    //dividend = divisor*quotient+remainder;
    quotient = dividend/divisor;
    remainder = dividend-(divisor*quotient);
    cout<<"Dividend is : " << dividend <<endl;
    cout<<"Divisor is  : " << divisor <<endl; 
    cout<<"Quotient is : " << quotient <<endl;
    cout<<"Reminder is : " << remainder <<endl;

    return 0;
}
