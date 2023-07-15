//Lecture 5 Arithmatic operation of float datatype
#include<iostream>
using namespace std;

int main(){
    float a,b,sum,diff,multiply,div;
    cout<<" Enter First No :";
    cin>>a;
    cout << " Enter Second No:";
    cin>> b;
    sum = a+b;
    diff = a-b;
    multiply = a*b;
    div = a/b;

    cout<<"The sum of two no :"<<sum <<endl;
    cout<<"The diff of two no :"<<diff <<endl;
    cout<<"The Product of two no: "<<multiply <<endl;
    cout<<"The Division of two no: "<<div <<endl;

    return 0;
}
