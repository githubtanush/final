#include<iostream>
using namespace std;
void inputarray(int arr[1000],int n){
for(int i  = 0; i < n;i++){
    cin>>arr[i];
}
}

// bool keypair(int arr[1000],int n,int x){
//     for(int i = 0; i < n;i++){
//         for(int j = i+1; j < n-1;j++)
//         if(arr[i]+arr[j] == x){
//                 return true;
//         }
//     }
//     return false;
// }

bool TwoPointerApproach(int arr[1000],int n,int x){
    int low = 0;
    int high = n - 1;
    while(low < high){
        if(arr[low]+arr[high]==x){
            return true;
        }
        else if(arr[low]+arr[high]>x){
            high--;
        }
        else if(arr[low]+arr[high]<x){
            low++;
        }
    }
    return false;
}

int main(){

    int arr[1000];
    
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    inputarray(arr,n);
    int x;
    cout<<"Enter that how much target value you find in the array : ";
    cin>>x;
    sort(arr,arr+n);
    
//    bool hero =  keypair(arr,n,x);
bool hero =  TwoPointerApproach(arr,n,x);
   if(hero==false){
    cout<<"The sum which is find in the array is not exist.";
   }
   else{
    cout<<"The sum which is find in the array is exist.";
   }

return 0;
}