#include<iostream>
using namespace std;
void inputarray(int arr[],int n){
    for(int i = 0; i < n;i++){
        cin>>arr[i];
    }
}
void countzeroone(int arr[],int n){
    int zerocount = 0;
    int onecount = 0;
    for(int i = 0; i < n;i++){
        if(arr[i]==0){
            zerocount++;
        }
        if(arr[i]==1){
            onecount++;
        }
    }
    cout<<"Total zerocount is : "<<zerocount<<endl;
    cout<<"Total onecount is : "<<onecount<<endl;
}

int main(){

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[1000];
    inputarray(arr,n);
    countzeroone(arr,n);


return 0;
}