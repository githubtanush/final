#include<iostream>
using namespace std;
float kilometertomiles(float km){
    float _1km = 0.621371;
    float miles = km * _1km;
    return miles;
}

int main(){

    float km;
    cout<<"Enter the kilometer for which u want to convert into miles : ";
    cin>>km;
    cout<<"The value for which u enter in kilometers in miles it is : "<<kilometertomiles(km)<<endl;

    return 0;
}