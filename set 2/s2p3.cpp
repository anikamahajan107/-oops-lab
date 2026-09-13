#include <iostream>
using namespace std;
class Number{
    private:
    int num;
    int result;
public:
void input()
{
    cout<<"Enter the number:"<<endl;
    cin>>num;
}
void isEven()
{
 if(num%2==0)
 result = 1;
  
}
void displayResult()
{
    if(result=1)
    cout<<"Number is Even";
    else
    cout<<"Number is Odd";
}
};
int main(){
    Number n;
    n.input();
    n.isEven();
    n.displayResult();
    
}