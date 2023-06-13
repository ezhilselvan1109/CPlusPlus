/*

We want to store the information about different vehicles. Create a class named Vehicle with two data member named mileage and price.
Create its two subclasses
*Car with data members to store ownership cost, warranty (by years), seating capacity and fuel type (diesel or petrol).
*Bike with data members to store the number of cylinders, number of gears, cooling type(air, liquid or oil), wheel type(alloys or spokes) and
fuel tank size(in inches)
Make another two subclasses Audi and Ford of Car, each having a data member to store the model type. Next, make two subclasses Bajaj and TVS,
each having a data member to store the make-type.
Now, store and print the information of an Audi and a Ford car (i.e. model type, ownership cost, warranty, seating capacity, fuel type, mileage and price.)
Do the same for a Bajaj and a TVS bike.

*/

#include<iostream>

using namespace std;

class vehicles{
    int mileage,price;
    public :
        vehicles(int mileage,int price){
            this -> mileage=mileage;
            this -> price=price;
        }
        void diplay(){
            cout<<"MILEAGE : "<<mileage<<endl;
            cout<<"PRICE : "<<price<<endl;
        }
};
class Car:public vehicles{
    int ownership_cost,warranty,seating_capacity;
    string fuel_type;
    public :
        Car(int ownership_cost,int warranty,int seating_capacity,string fuel_type,int mileage,int price):vehicles(mileage,price){
            this -> ownership_cost=ownership_cost;
            this -> warranty=warranty;
            this -> seating_capacity=seating_capacity;
            this -> fuel_type=fuel_type;
        }
        diplay(){
            cout<<"OWNERSHIP COST : "<<ownership_cost<<endl;
            cout<<"WARRANTY : "<<warranty<<endl;
            cout<<"SEATING CAPACITY : "<<seating_capacity<<endl;
            cout<<"FUEL TYPE : "<<fuel_type<<endl;
            vehicles::diplay();
        }

};

class Bike:public vehicles{
    int number_of_cylinders,number_of_gears,fuel_tank_size;
    string cooling_type,wheel_type;
    public :
        Bike(int number_of_cylinders,int number_of_gears,int fuel_tank_size,string cooling_type,string wheel_type,int mileage,int price):vehicles(mileage,price){
            this -> number_of_cylinders=number_of_cylinders;
            this -> number_of_gears=number_of_gears;
            this -> fuel_tank_size=fuel_tank_size;
            this -> cooling_type=cooling_type;
            this -> wheel_type=wheel_type;
        }
        void diplay(){
            cout<<"NUMBER OF CYLINDERS : "<<number_of_cylinders<<endl;
            cout<<"NUMBER OF GEARS : "<<number_of_gears<<endl;
            cout<<"FUEL TANK SIZE : "<<fuel_tank_size<<endl;
            cout<<"COOLING TYPE : "<<cooling_type<<endl;
            cout<<"WHEEL TYPE : "<<wheel_type<<endl;
            vehicles::diplay();
        }
};

class Audi:public Car{
    string model_type;
    public :
        Audi(string model_type,int ownership_cost,int warranty,int seating_capacity,string fuel_type,int mileage,int price):Car(ownership_cost,warranty,seating_capacity,fuel_type,mileage,price){
            this -> model_type=model_type;
        }
        void diplay(){
            cout<<"MODEL TYPE : "<<model_type<<endl;
            Car::diplay();
        }
};

class Ford:public Car{
    string model_type;
    public :
        Ford(string model_type,int ownership_cost,int warranty,int seating_capacity,string fuel_type,int mileage,int price):Car(ownership_cost,warranty,seating_capacity,fuel_type,mileage,price){
            this -> model_type=model_type;
        }
        void diplay(){
            cout<<"MODEL TYPE : "<<model_type<<endl;
            Car::diplay();
        }
};

class Bajaj:public Bike{
    string model_type;
    public :
        Bajaj(string model_type,int number_of_cylinders,int number_of_gears,int fuel_tank_size,string cooling_type,string wheel_type,int mileage,int price) : Bike(number_of_cylinders,number_of_gears,fuel_tank_size,cooling_type,wheel_type,mileage,price){
            this -> model_type=model_type;
        }
        void diplay(){
            cout<<"MODEL TYPE : "<<model_type<<endl;
            Bike::diplay();
        }
};

class TVS:public Bike{
    string model_type;
    public :
        TVS(string model_type,int number_of_cylinders,int number_of_gears,int fuel_tank_size,string cooling_type,string wheel_type,int mileage,int price) : Bike(number_of_cylinders,number_of_gears,fuel_tank_size,cooling_type,wheel_type,mileage,price){
            this -> model_type=model_type;
        }
        void diplay(){
            cout<<"MODEL TYPE : "<<model_type<<endl;
            Bike::diplay();
        }
};

int main(){
    //model type, ownership cost, warranty, seating capacity, fuel type, mileage and price
    //bike(string model_type,int number_of_cylinders,int number_of_gears,int fuel_tank_size,string cooling_type(air, liquid or oil),string wheel_type(alloys or spokes),int mileage,int price)
    TVS TVSObj("tvs",2,6,5,"air","spokes",65,10000);
    cout<<"TVS : \n";
    TVSObj.diplay();
    cout<<endl;

    Bajaj BajajObj("Bajaj",2,6,5,"liquid","alloys",60,15000);
    cout<<"Bajaj : \n";
    BajajObj.diplay();
    cout<<endl;
    //car(string model_type,int ownership cost,int warranty (by years),int seating capacity,string fuel_type (diesel or petrol),int mileage,int price)
    Ford FordObj("Ford",100000,1,4,"diesel",25,150000);
    cout<<"Ford : \n";
    FordObj.diplay();
    cout<<endl;

    Audi AudiObj("Audi",200000,1,6,"petrol",25,250000);
    cout<<"Audi : \n";
    AudiObj.diplay();
    cout<<endl;
}
