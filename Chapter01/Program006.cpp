// Lecture 6 Area and Perimeter of a Rectangle
#include<iostream>
using namespace std;

int main(){
float length,breadth,areaofrect,periofrect;

cout<<"Length of Rectangle : ";
cin>> length;
cout<<"Breadth of Rectangle : ";
cin>> breadth;
areaofrect=length*breadth;
periofrect=2*(length+breadth);
cout<<"Area of Rectangle :"<<areaofrect<<endl;
cout<<"Perimeter of Rectangle:"<<periofrect;


    return 0;
}
