#include <iostream>
using namespace std;

class NotEligibleException{
    public:
    const char* what() const{
        return "Not eligible to Vote";
    }
};
int main(){
    int age;
    cout<<"Enter the age:"<<endl;
    cin>>age;
    try{
        if(age<18)
        {
            throw NotEligibleException();
        }
        cout<<"Eligible to Vote"<<endl;
    }
    catch(NotEligibleException &n){
        cout<<n.what();
    }
}