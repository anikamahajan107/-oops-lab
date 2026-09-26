#include<iostream>
using namespace std;
class Maximum
{
    public:
    void max(int x,int y){
        if(x>y)
        cout<<"Max is:"<<x<<endl;
        else
        cout<<"Max is:"<<y<<endl;
    } 
    void max(int x, int y, int z){
  if(x>y&&x>z)
 cout<<"Max is:"<<x<<endl;
    if(y>x&&y>z) 
    cout<<"Max is:"<<y<<endl;
if(z>x&&z>y)
cout<<"Max is:"<<z<<endl;
    }
    void max(double x,double y){
        if(x>y)
        cout<<"Max is:"<<x;
        else
        cout<<"Max is:"<<y;
    }
};

int main(){
    Maximum m1,m2,m3;
    m1.max(78,90);
    m2.max(45,87,56);
    m3.max(45.7,23.6);
    return 0;
    
}




