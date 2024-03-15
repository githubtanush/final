#include<iostream>
#include<algorithm>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i = 0 ;  i < n-1;i++){
        int minIndex = i;
        for(int j = i+1; j < n;j++){
            if(arr[j]<arr[minIndex]){
                swap(arr[j],arr[minIndex]);
            }
        }
    }
}
int main(){
    int arr[] = {5,4,3,2,1};
    int n = 5;
    selectionsort(arr,n);
    for(int i = 0; i < n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}