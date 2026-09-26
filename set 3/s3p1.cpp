#include <iostream>
using namespace std;

class Number{
    public:
    int n;
};
Number add(Number a,Number b){
    Number n3;

    n3.n=a.n+b.n;
    return n3;
}
int main(){
 Number a,b;
 cout<<"Ënter the value of integer:"<<endl;
 cin>>a.n;
 cin>>b.n;
 Number d;
 d=add(a,b);
 cout<<d.n;
 return 0;
}