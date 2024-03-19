#include<iostream>
using namespace std;

int main(){

    int a = 5;
    cout<<"Address of a is : "<<&a<<endl;
    cout<<"Size of a is : "<<sizeof(a)<<endl;
    int arr[4];
    //for base address of arr you can write & operator or not it's your decision
    cout<<"Base address of Arr is : " << arr<<endl;
    cout<<"Base address of Arr is : " << &arr<<endl;
    cout<<"Size of Array is : "<<sizeof(arr)<<endl;

    //Array initialization
    int drr[] = {1,2,3,4,5};
    int brr[5] = {2,4,6,8,10};
    int crr[5] = {3,9};
    //int drr[2] = {2,8,3,38,34};//giving error because array create of less element but insert more elements


    //Bad practice
    // int n;
    // cin>>n;//very very bad practice;
    // int arr[n];
return 0;
}