
#include <iostream>
using namespace std;
 template <class T>
 class Pair{
     public:
     T num1;
     T num2;
     
     Pair(T a,T b){
     num1=a;
     num2=b;
     }
void displayMax(){
    if(num1>num2){
        cout<<"The maximum is:"<<num1<<endl;
        cout<<"The minimum is:"<<num2<<endl;
    }
    else
    {
        cout<<"The maximum is:"<<num2<<endl;
        cout<<"The minimum is:"<<num1<<endl;
    }
}
};
int main(){
    cout<<"For Integers:"<<endl;
    Pair<int> p(2,8);
    p.displayMax();
    cout<<"For Floating Point-Numbers:"<<endl;
    Pair<float> q(12.78f,13.89f);
    q.displayMax();
}