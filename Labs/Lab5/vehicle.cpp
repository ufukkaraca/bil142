#include <iostream>
#include <string>
#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle(){
    cout<<"What is the type of vehicle 1?"<<endl;
    cin>>type;
}

Vehicle::Vehicle(string type1){
    type=type1;
}

Brand::Brand(){
    string brand1;
    cout<<"What is the brand of vehicle 1?"<<endl;
    cin>>brand1;
    brand=brand1;
}

Brand::Brand(string type1, string brand1):Vehicle(type1) {
    brand=brand1;
}

Model::Model(){


    cout<<"What is the model of vehicle 1?"<<endl;
    cin>>model;

    cout<<"What is the speed of vehicle 1?"<<endl;
    cin>>speed;

    cout<<"What is the price of vehicle 1?"<<endl;
    cin>>price;
}

Model::Model(string type1, string brand1, string model1, int speed1, int price1):Brand(type1, brand1) {
    model=model1;
    speed=speed1;
    price=price1;
}

int main()
{
	Model araba1;
	Model araba2("Car","Renault","Clio",140,250);

	cout<<"Type of vehicle 1: "<<araba1.getType()<<endl;
	cout<<"Brand of vehicle 1: "<<araba1.getBrand()<<endl;
	cout<<"Model of vehicle 1: "<<araba1.getModel()<<endl;
	cout<<"Max speed of vehicle 1: "<<araba1.getSpeed()<<endl;
	cout<<"Price of vehicle 1: "<<araba1.getPrice()<<endl<<endl;
	cout<<"Type of vehicle 2: "<<araba2.getType()<<endl;
	cout<<"Brand of vehicle 2: "<<araba2.getBrand()<<endl;
	cout<<"Model of vehicle 2: "<<araba2.getModel()<<endl;
	cout<<"Max speed of vehicle 2: "<<araba2.getSpeed()<<endl;
	cout<<"Price of vehicle 2: "<<araba2.getPrice()<<endl;

	return 0;
}

string Model::Vehicle::getType() {
    return type;
}


string Model::Brand::getBrand() {
    return brand;
}


string Model::getModel() {
    return model;
}

int Model::getSpeed() {
    return speed;
}

int Model::getPrice() {
    return price;
}





