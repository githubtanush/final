#include<iostream>
using namespace std;
void inputarray(int arr[],int n){
    for(int i = 0; i < n;i++){
        cin>>arr[i];
    }
}
int minno(int arr[],int n){
    // int mini = arr[0];
    // for(int i = 0; i < n;i++){
    //     if(arr[i]<mini){
    //         mini = arr[i];
    //     }
    // }
    // return mini;


    //Method 2 
    // int minAns = INT_MAX;//initialize minAns with INT_MAX so that the maximum number is stored in these because value is not above than INT_MAX;
    // for(int i = 0; i < n;i++){
    //     if(arr[i]<minAns){
    //         minAns = arr[i];
    //     }
    // }
    // return minAns;


    //Method 3
    int minAns = INT_MAX;//initialize minAns with INT_MAX so that the maximum number is stored in these because value is not above than INT_MAX;
    for(int i = 0; i < n;i++){
        minAns = min(arr[i],minAns);
    }
    return minAns;
}

int main(){

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[1000];
    inputarray(arr,n);
    cout<<"The minimum number in the array is : "<<minno(arr,n);

return 0;
}