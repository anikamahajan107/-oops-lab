#include <iostream>
using namespace std;
 template <class T>
 class Result{
     public:
   T marks[5];
     
     void input(){
         cout<<"Enter the marks of 5 students : ";
         for(int i=0;i<5;i++){
             cin>>marks[i];
         }
     }
      
      T Total(){
          T sum=0;
          for(int i=0;i<5;i++){
              sum = sum + marks[i];
          }
          return sum;
      }
      
      double Average(){
          return Total()/5.0;
      }

T HighestMarks()
    {
        T high = marks[0];

        for (int i = 1; i < 5; i++)
        {
            if (marks[i] > high)
                high = marks[i];
        }

        return high;
    }

    T LowestMarks()
    {
        T low = marks[0];

        for (int i = 1; i < 5; i++)
        {
            if (marks[i] < low)
                low = marks[i];
        }

        return low;
    }
    void DisplayResult() 
    {
    cout<<"Total Marks = "<<Total()<<endl;
    cout<<"Average Marks = "<<Average()<<endl;
    cout<<"Highest Marks = "<<HighestMarks()<<endl;
    cout<<"Lowest Marks = "<<LowestMarks()<<endl;
    cout<<endl;
   }

};
int main(){
    Result<int> r1;

    cout << "Integer Result :\n";
    r1.input();
    r1.DisplayResult();


    Result<float> r2;

    cout << "\nFloating-Point Result :\n";
    r2.input();
    r2.DisplayResult();

     return 0;

}