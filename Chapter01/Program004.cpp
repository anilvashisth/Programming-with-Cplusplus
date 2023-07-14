//Lecture 4 WAP to find out Simple Interest amount provided by user
#include<iostream>
using namespace std;

int main(){
    float principal,time,rate,si;

    cout<<"Enter Value of Principal :"<<endl;
    cin>> principal;
    cout<<"Enter Time span : "<<endl;
    cin>> time;
    cout<<" Enter Rate of Interest : "<<endl;
    cin>> rate;

    si=(principal * time * rate)/100;
    cout<<"The Value of SI is Rs:"<<si;

    return 0;
}
