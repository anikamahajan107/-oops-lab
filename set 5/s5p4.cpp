#include<iostream>
using namespace std;
class Vehicle{
    protected:
    string regNo;
    string company;
    
    public:
    Vehicle(string r,string c){
        regNo=r;
        company=c;
    }
void displayVehicle(){
    cout<<"Registeration Number : "<<regNo<<endl;
    cout<<"Company Name : "<<company<<endl;
}
};
class Car:public Vehicle{
    private:
    string fuelType;
    int engineCapacity;
    
    public:
    Car(string r,string c,string f,int e):Vehicle(r,c){
        fuelType=f;
        engineCapacity=e;
    }
    void display(){
        displayVehicle();
        cout<<"Fuel type : "<<fuelType<<endl;
        cout<<"Engine Capacity : "<<engineCapacity<<endl;
        cout<<endl;
    }
};
class Bike:public Vehicle{
    private:
    string fuelType;
    int engineCapacity;
    
    
    public:
    Bike(string r,string c,string f,int e):Vehicle(r,c)
    {
        fuelType=f;
        engineCapacity=e;
    }
    void display()
    {
        displayVehicle();
        cout<<"Fuel Type : "<<fuelType<<endl;
        cout<<"Engine Capacity : "<<engineCapacity<<endl;
        cout<<endl;
    }
};
        
    int main()
    {
        Car c1("JK02AB1234","Hyundai","Petrol",1498);
        Car c2("JK02CD5432","Toyoto","Diesel",1456);
        
    
        Bike b1("JK02AD6789","Honda","Petrol",123);
        Bike b2("JK02CD7869","Royal Enfield","Petrol",350);
        
        cout <<"Car 1"<<endl;
        c1.display();
        
        cout <<"Car 2"<<endl;
        c2.display();
    
        cout<<"Bike 1"<<endl;
        b1.display();
        cout<<"Bike 2"<<endl;
        b2.display();
    
}