#include<iostream>
using namespace std;
void inputarray(int arr[],int n){
    for(int i = 0; i < n;i++){
        cin>>arr[i];
    }
}
void sortzeroone(int arr[],int n){
    // int zerocount = 0;
    // int onecount = 0;
    // for(int p = 0; p < n ;p++){
    //     if(arr[p] == 0){
    //         zerocount++;
    //     }
    //     if(arr[p]==1){
    //         onecount++;
    //     }
    // }
    // int i;
    // for(i = 0 ; i < zerocount;i++){
    //     arr[i]=0;
    // }
    // for(int j = i ;j < n;j++){
    //     arr[j] = 1;
    // }
    // for(int m = 0; m < n;m++){
    //     cout<<arr[m]<< " ";
    // }
    int left = 0;
    int right = n - 1;
    while(left < right){
        if(arr[left]==0){
            left++;
        }
        else if(arr[right]==1){
            right--;
        }
       else{
            swap(arr[left],arr[right]);
            left++;
            right--;
        }

        }
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
    sortzeroone(arr,n);
    

return 0;
}