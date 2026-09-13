#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;
    int area;
    public:
    void input(){
        cout<<"Length of Rectangle:"<<endl;
        cin>>length;
        cout<<"Breadth of Rectangle:"<<endl;
        cin>>breadth;
    }
    void calculateArea(){
    cout<<"Area of Rectangle:"<<endl;
    area=length * breadth;
}
void displayArea(){
    cout<<area;
}
};
int main(){
Rectangle r;
r.input();
r.calculateArea();
r.displayArea();
}