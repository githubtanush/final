#include<iostream>
using namespace std;
void ctokandf(int n){
    double k = n + 273.15;
    double f = (9/5.0 * n)+32.00;
    cout<<"The given temp "<<n<<" is convert it into kelvin : "<<k<<" and fahrenheit : "<<f;
}

int main(){
    double n;
cout<<"Enter the temprature in celsius for which u want to convert into fahrenheit and kelvin : ";
cin>>n;
    ctokandf(n);
return 0;
}