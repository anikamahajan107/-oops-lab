#include <iostream>
using namespace std;

class Text{
    private:
    string str;

  public:
  Text(){
      cout<<"Enter the string name:";
      cin>>str;
      
  }
  void Strlen(){
    int i=0;
    while(str[i]!='\0')
    {
        
    i++;
    
    }
    cout<<"The length of string :"<<i;
  } 
    
};
int main(){
Text t;
t.Strlen();
}
  