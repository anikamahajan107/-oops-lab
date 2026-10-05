#include<iostream>
using namespace std;

int main()
{
	int numerator,denominator;
	cout<<"Enter the numerator = "<<endl;
	cin>>numerator;
	cout<<"Enter the denominator = "<<endl;
	cin>>denominator;
	try {
		if(denominator==0) {
			throw"Divison by zero is not allowed";
		}
		double result=(double)numerator/denominator;
		cout<<"Result:"<<result<<endl;

	}
	catch(const char*message) {
		cout<<"Error:"<<message<<endl;
	}
}