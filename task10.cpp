#include<iostream>
using namespace std;
main()
{
string name;
int wins;
int draws;
int losses;
int points;
cout<<" Enter the name of crciket team:"<<endl;
cin>> name;
cout<<"Enter the number of wins:"<<endl;
cin>> wins;
cout<<"Enter the number of draws:"<<endl;
cin>> draws;
cout<<"Enter the name of losses:"<<endl;
cin>> losses;
wins= 3*wins;
draws=1*draws;
losses= 0*losses;
points=wins+losses+draws;
cout<<"Pakistan has obtained"<<points<<"points in the asia cup tornament";


}