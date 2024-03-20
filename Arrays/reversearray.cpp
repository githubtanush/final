#include<iostream>
using namespace std;
void inputarray(int arr[],int n){
    for(int i = 0; i < n;i++){
        cin>>arr[i];
    }
}
void printarray(int arr[],int n){
        for(int i = 0; i < n;i++){
        cout<<arr[i]<<" ";
    }
}
void reversearray(int arr[],int n){
    int left = 0;
    int right = n - 1;
    while(left<right){
        int t = arr[left];
        arr[left]  = arr[right];
        arr[right] = t;
        left++;
        right--;
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[1000];
    inputarray(arr,n);
    printarray(arr,n);
    reversearray(arr,n);
    cout<<endl;
    printarray(arr,n);

return 0;
}