#include<iostream>
using namespace std;

class MarksValidationException{
public:
const char*what() const

{
    return"This is a Marks Validation Exception";
}    
};
int main(){
    float marks;
    cout<<"Enter the marks:"<<endl;
    cin>> marks;
    try{
        if(marks<0||marks>100){
            throw MarksValidationException();
        }
    }
    catch(MarksValidationException &n)
    {
        cout<<n.what();
    }
}