#include<iostream>
using namespace std;
class Number{
    private:
    int x;
    int y;
    public:
void input(){
    cout<<"Enter the number x:"<<endl;
    cin>>x;
    cout<<"Enter the number y:"<<endl;
    cin>>y;
}
friend void larger(Number n);
};
void larger(Number n){
if(n.x>n.y)
    cout<<"The larger number is:"<<n.x;
    else
    cout<<"The larger number is:"<<n.y;
}
int main(){
    Number n;
    n.input();
    larger(n);
    return 0;
}