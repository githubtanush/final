#include<iostream>
using namespace std;

int binarytodecimalmethod1(int n){
        int decimalno = 0;
        int i = 0;
        while(n>0){
            int digit = n % 10;
            decimalno = decimalno + digit * pow(2,i++);
            n = n / 10;
        }
        return decimalno;
}


//check this bitwise code 
// int binarytodecimalmethod2(int n){
//         int decimalno = ;
//         int i = 0;
//         while(n>0){
//             int digit = n & 1;
//             decimalno = decimalno + digit * pow(2,i++);
//             n = n >> 1;
//         }
//         return decimalno;
// }

int main(){
    int n;
    cout<<"Enter the number for which you convert binary to decimal : ";
    cin>>n;
    int decimal = binarytodecimalmethod1(n);
    cout<<"The given number in the binary is : "<<decimal<<endl;
    int decimal2 = binarytodecimalmethod2(n);
    cout<<"The given number in the binary is : "<<decimal2<<endl;
    

return 0;
}