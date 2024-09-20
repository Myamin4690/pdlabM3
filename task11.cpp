#include<iostream>
using namespace std;
main()
{
int population;
 int birth_rate;
int fpopulation;

cout<<"Enter the current world population:"<<endl;
cin>>population;
cout<<"Enter the monthly birth rate: "<<endl;
cin>> birth_rate;
fpopulation=population+birth_rate*360;
cout<<"The population in three decades will be :"<<fpopulation;



}