#include<iostream>
using namespace std;
void inputarray(int arr[],int n){
    for(int i = 0; i < n;i++){
        cin>>arr[i];
    }
}
int getunique(int arr[],int n){
    int ans = 0; 
    for(int i = 0; i < n;i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
int main(){
int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[1000];
    inputarray(arr,n);
    cout<<"The unique element in the given array is : "<<getunique(arr,n);

return 0;
}