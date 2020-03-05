#include <iostream>

using namespace std;

int fib_itr(int n){
    int arr[n-1];
    arr[0]=0; arr[1]=1;

    for(int i=2; i<n; i++)
        arr[i]=arr[i-1]+arr[i-2];

    return arr[n-1];
}

int arr[256]; 

int fib_mem(int n) 
{     
    if (n <= 1) 
        return n;  //çünkü 0. fibonacci 0 ve 1. fibonacci 1

    if (term[n] != 0) 
        return arr[n]; //daha önceden hesaplandıysa direk değeri veriyor, bir daha hesaplamıyor
  
    else { 
        arr[n] = fib_mem(n - 1) + fib_mem(n - 2); //yalnızca henüz hesaplanmamış değerlerde çalışıyor
        return arr[n]; 
    } 
} 

int main(){
    
    int n;
    cout<<"Please enter the n for the nth element of the fibonacci sequence: ";
    cin>>n;
    cout<<"***"<<endl<<"The nth element in the fibonacci sequence is: "<<fib_itr(n); //eğer iteratif hesaplanma isteniyorsa
    cout<<"***"<<endl<<"The nth element in the fibonacci sequence is: "<<fib_mem(n); //eğer memoizationlı recursive isteniyorsa
    return 0;

}