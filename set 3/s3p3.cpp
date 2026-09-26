#include<iostream>
using namespace std;
class Distance{
    public:
int feet;
int inches;

public:
void addDistance(Distance d1,Distance d2)
{
    feet=d1.feet+d2.feet;
   inches=d1.inches+d2.inches;
   if(inches>=12)
   {
       feet++;
       inches=inches-12;
   }
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
    Distance obj1,obj2,obj3;
    obj1.getDetails();
    obj2.getDetails();
    obj3.addDistance(obj1,obj2);
    
   obj3.displayDetails();
    
}