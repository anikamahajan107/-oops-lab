#include<iostream>
using namespace std;
class B;
class A{
private:
int a;

public:
void input(){
    cout<<"Enter the number:";
    cin>>a;
    
}
friend void sum(A,B);
};
class B{
    private:
    int b;
    public:
    void input(){

    cout<<"Enter the number:";
    cin>>b;
}
friend void sum(A,B);
};
void sum(A a1,B b1){
    cout<<"The sum is:"<<a1.a+b1.b;
    
}
int main(){
    A a1;
    B b1;
    a1.input();
    b1.input();
    sum(a1,b1);
    return 0;
}
