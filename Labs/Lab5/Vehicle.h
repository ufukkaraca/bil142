#include <string>
using namespace std;
 /*
	Asagida verilen classlarin fonksiyonlarinin icerigini bir .cpp dosyasinda
	yazin ve ardindan en asagida verilen main fonksiyonunu kullanarak dogru 
	calisip calismadigini kontrol edin.
	Classlarda bir degisiklik yapmayin(yeni variable ve ya fonksiyon eklemeyin)
	Default constructorlarda( Vehicle() gibi) degerleri klavyeden alacaksınız.
	
	String variable'ına deger atarken:
		Direkt deger atarken-->  string asd="hello world";
		Klavyeden--> cin>>asd;
					 getline(cin,asd); yöntemlerini kullanabilirsiniz
	
	getline klavyeden enter' a kadar girilen bütün girdiyi(satırı) aliyor ve belirttiginiz string' atıyor
 
 
 
 */
class Vehicle
{	private:
		string type;
    public:
        Vehicle();
		Vehicle(string);
		string getType();
};
class Brand:public Vehicle
{	private:
		string brand;
    public:
        Brand();
		Brand(string type, string brand);
		string getBrand();
};
class Model:public Brand
{	private:
		string model;
		int speed{};
		int price{};
    public:
        Model();
		Model(string type, string brand, string model, int speed, int price);
		string getModel();
		int getSpeed();
		int getPrice();
		
};



/*
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
*/