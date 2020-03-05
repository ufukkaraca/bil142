#include <iostream>
using namespace std;

/*
Bu fonksiyon bir int array, baslangıc index'i ve bir uzunluğu input olarak aliyor.
Verilen index'ten baslayarak uzunluk kadar input array'in elemanini yeni bir array'a kopyaliyor.
Ornek, subArray(array,5,4)  array[5], array[6], array[7], and array[8] degerlerini iceren bir array donuyor.
Bu fonksiyonun icinde başka fonksiyon cagırmayın. Start ve length negatif olamaz.
*/
int *subArray(int *array, int start, int length)
{

	if(start<0 || length<0)
		return NULL;

	int* newArray;
	for(int i=0; i<length; i++)
		newArray[i]=array[start+i];
	
	return newArray;
}


/*
Bu fonksiyonda girilen input array'i yeni bir array'a girilen boyut kadar kopyalayıp dondurmelisiniz.
size negatif olamaz.
*/
int* duplicateArray(int *array, int size)
{
	if(size<0)
		return NULL;
		
	int* newArray[size];
	for(int i=0; i<size; i++)
		newArray[i]= &array[i];

return array;
}

/*
Bu fonksiyon subArray fonksiyonu ile ayni inputlari aliyor ve ayni sonucu veriyor.
Ama bu fonksiyonda duplicateArray fonksiyonunu kullanarak yeni array'i yaratmalısınız.
Start ve length negatif olamaz.
*/
int *subArray2(int *array, int start, int length)
{
	int* newArray = duplicateArray(array, length);
	
	for(int i=0; i<length; i++)
		newArray[i]=array[start+i];

	return newArray;
}

int main(int argc, char* argv[])
{
	cout << endl << "testing subArray:" << endl;
	int testData4[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "test data:";
	for (int i = 0; i < 10; i++)
	{
		cout << " " << *(testData4 + i);
	}
	cout << endl;
	cout << "start: 5 length: 4" << endl;
	cout << "Expected result: 6 7 8 9" << endl;
	int *resultSubArray = subArray(testData4, 5, 4);
	cout << "Actual result: ";
	for (int i = 0; i < 4; i++)
	{
		cout << " " << *(resultSubArray + i);
	}
	cout << endl;
	cout << endl << "testing subArray2:" << endl;
	int testData5[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "test data:";
	for (int i = 0; i < 10; i++)
	{
		cout << " " << *(testData5 + i);
	}
	cout << endl;
	cout << "start: 5 length: 4" << endl;
	cout << "Expected result: 6 7 8 9" << endl;
	int *resultSubArray2 = subArray2(testData4, 5, 4);
	cout << "Actual result: ";
	for (int i = 0; i < 4; i++)
	{
		cout << " " << *(resultSubArray2 + i);
	}

	delete[] resultSubArray;
	delete[] resultSubArray2;

	return 0;
}

