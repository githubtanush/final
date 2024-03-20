#include<iostream>
using namespace std;
void inputarray(int arr[],int n){
    for(int i = 0; i < n;i++){
        cin>>arr[i];
    }
}
void printpairs(int arr[],int n){
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n;j++){
            cout<<arr[i]<<", "<<arr[j]<<endl;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[1000];
    inputarray(arr,n);
    printpairs(arr,n);
    

return 0;
}