#include<iostream>
using namespace std;
void inputarray(int arr[],int n){
    for(int i = 0; i < n;i++){
        cin>>arr[i];
    }
}
void extremeprint(int arr[],int n){
    int left = 0; 
    int right = n - 1;
    while(left <= right){
        if(left==right){
            cout<<arr[left]<<" ";
        }
        else{
        cout<<arr[left]<<" "<<arr[right]<<" ";
        }
        left++;
        right--;
    }
}
void printarray(int arr[],int n){
        for(int i = 0; i < n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
 int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[1000];
    inputarray(arr,n);
    extremeprint(arr,n);
    cout<<endl;
    printarray(arr,n);
    

return 0;
}