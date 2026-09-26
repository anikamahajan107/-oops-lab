#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;

bool equalArea(Rectangle r){
    return (length*breadth==r.length*r.breadth);
    }

};
Rectangle mergeRectangles(Rectangle r1,Rectangle r2){
    Rectangle temp;
    temp.length=r1.length+r2.length;
    temp.breadth=r1.breadth+r2.breadth;
    return temp;
}
int main(){
    Rectangle r1,r2,r3;
    cout<<"Enter the length and breadth of rectangle 1:"<<endl;
    cin>>r1.length>>r1.breadth;
    cout<<"Enter the length and breadth of rectangle 2:"<<endl;
    cin>>r2.length>>r2.breadth;
    
    if(r1.equalArea(r2)){
        cout<<"Both rectangles have equal area"<<endl;
    }
    else{
        cout<<"Both rectangles do not have equal area"<<endl;
    }
    
    r3=mergeRectangles(r1,r2);
    cout<<"Merged rectangle dimensions:"<<endl;
    cout<<"Length:"<<r3.length<<endl;
    cout<<"Breadth:"<<r3.breadth<<endl;
    return 0;
}