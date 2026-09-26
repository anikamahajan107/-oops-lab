#include <iostream>
using namespace std;

class Area
{
public:
void areaSquare(int side){
    cout<<"Area of square is :"<<side*side<<endl;
    
}
void areaRectangle(int length,int breadth){
    cout<<"Area of rectangle is :"<<length*breadth<<endl;
}
void areaCircle(double radius){
    cout<<"Area of circle is :"<<3.14*radius*radius<<endl;
}
};

int main(){
    Area a1,a2,a3;
    a1.areaSquare(16);
    a2.areaRectangle(34,25);
    a3.areaCircle(12.5);
    return 0;
}
