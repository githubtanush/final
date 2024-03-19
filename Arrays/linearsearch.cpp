#include<iostream>
using namespace std;
void inputarray(int arr[],int n){
    for(int i = 0; i < n;i++){
        cin>>arr[i];
    }
}
bool LinearSearch(int arr[],int n,int target){
    // 0 - not found;
    //1 - found;
    for(int i = 0; i < n;i++){
        if(arr[i]==target){
            
            return 1;
        }
    }
    return 0;
}

int main(){

    int n;
    cout<<"Enter the size for the array : "<<endl;
    cin>>n;
    int arr[1000];
    int target;
    cout<<"Enter the target for which u want to find in the array : "<<endl;
    cin>>target;
    inputarray(arr,n);
    if(LinearSearch(arr,n,target)==1){
        cout<<"Target found"<<endl;
    }
    else{
        cout<<"Target not found"<<endl;
    }
return 0;
}