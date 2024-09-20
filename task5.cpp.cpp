#include<iostream>
using namespace std;
main()
{
string name;
int matric_marks;
int inter_marks;
int ecat_marks;
float aggregate;
cout<<"Enter your name:"<< endl;
cin>> name;
cout<<"Enter your matric marks:"<<endl;
cin>> matric_marks;
cout<<"Enter your inter marks:"<<endl;
cin>>inter_marks;
cout<<"Enter your ecat marks:"<<endl;
cin>>ecat_marks;
aggregate=(matric_marks*0.10/1100)+(inter_marks*0.40/560+(ecat_marks*0.50/400)*100;
cout<<"your aggregate is :"<<aggregate;
} 