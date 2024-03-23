#include<iostream>
using namespace std;
void inputarray(int arr[],int n){
    for(int i = 0; i < n;i++){
        cin>>arr[i];
    }
}
void printtriplets(int arr[],int n){
    for(int i = 0; i < n;i++){
        for(int j =  i; j < n;j++){
            for(int k = j; k < n;k++){
                cout<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<endl;
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[1000];
    inputarray(arr,n);
    printtriplets(arr,n);

return 0;
}