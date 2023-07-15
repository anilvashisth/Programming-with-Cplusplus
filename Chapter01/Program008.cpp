/*Lecture 8 
Sphere,Hemisphere,Cube,Cuboid etc.*/ 
//Lecture 8.1 Volume, LSA, and TSA of Sphere
#include<iostream>
using namespace std;

int main(){
    float radius,volumnofsphere,pi=3.14,lsa,tsa;
    cout<<"The radius of sphere:";
    cin>>radius;
    volumnofsphere=(4*pi*radius*radius*radius)/3;
    lsa=4*pi*radius*radius;
    tsa=4*pi*radius*radius;

    cout<<"The Volumn of Sphere : "<<volumnofsphere<<endl;
    cout<<"The LSA of Sphere : "<< lsa<<endl;
    cout<<"The TSA of Sphere : "<<tsa <<endl;


    return 0;
}
