#include<iostream>
using namespace std;
void inputarray(int arr[],int n){
    for(int i = 0; i < n;i++){
        cin>>arr[i];
    }
}
void shiftarray(int arr[],int n,int k){
    int temp[1000];
    for(int i = 0; i< k;i++){
         temp[i] = arr[n-k+i];
        //  cout<<i<<": "<<temp[i];
    }
    cout<<endl;
    int j = 0;
    for(int i = k; i < n;i++){
        temp[i] = arr[j];
        j++;
    }
    for(int i = 0; i < n;i++){
        cout<<temp[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int k ;
    cout<<"Enter how many rotations you want : ";
    cin>>k;
    int arr[1000];
    inputarray(arr,n);
    shiftarray(arr,n,k);
    

return 0;
}