#include<iostream>
using namespace std;
class Distance{
    public:
int feet;
int inches;

public:
Distance operator +(Distance d)
{
    Distance temp;
    temp.feet=feet+d.feet;
 temp.inches=inches+d.inches;
   if(inches>=12)
   {
       feet++;
       inches=inches-12;
   }
   return temp;
}
void getDetails(){
    cout<<"Enter the number of feets:"<<endl;
    cin>>feet;
    cout<<"Enter the number of inches:"<<endl;
    cin>>inches;
}
void displayDetails(){
    cout<<feet<<"ft";
    cout<<inches<<"in"<<endl;
}

};
int main(){
    Distance d1,d2;
    d1.getDetails();
    d2.getDetails();
    Distance d3=d1+d2;
    d3.displayDetails();
    return 0;
}