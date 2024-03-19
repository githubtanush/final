#include<iostream>
using namespace std;

int main(){

    int n,n2;
    cout<<"Enter both number for which u find hcf : ";
    cin>>n;
    cin>>n2;

    //For finding the H.C.F
    // while(n!=n2){
    //     if(n>n2){
    //         n = n - n2;
    //     }
    //     else{
    //         n2 = n2 - n;
    //     }
    // }
    // cout<<"The hcf of these two numbers is : "<<n;



    //For finding LCM
    // for(int i = n>n2?n:n2; i<=n*n2;i++){
    //     if(i%n==0 && i%n2==0){
    //         cout<<"The LCM of two numbers is : "<<i;
    //         break;
    //     }
    // }

return 0;
}