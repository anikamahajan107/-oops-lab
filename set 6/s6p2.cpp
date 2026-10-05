#include <iostream>
#include<cmath>
using namespace std;
        
class NegativeNumberException{
    public:  
        const char*what()const{
        return "This is a Negative Number Exception";
    }
};
int main(){
    int n;
    cout<<"Enter the number="<<endl;
    cin>>n;
    try{
        if(n<0){
            throw NegativeNumberException();
        }
      cout<<"Square root of given number is:"<<sqrt(n);
    }
    catch(NegativeNumberException &e)
    {
      cout<<  e.what();
    }
}