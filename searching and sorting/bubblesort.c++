#include<iostream>
#include<algorithm>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i = 0 ;  i < n;i++){
        for(int j = 0; j < n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[] = {5,4,3,2,1};
    int n = 5;
    bubblesort(arr,n);
    for(int i = 0; i < n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}