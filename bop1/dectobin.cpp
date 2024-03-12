#include<iostream>
#include<cmath>
using namespace std;

int  decimaltobinaryMethod1(int n){
    //Division method
    int binaryno = 0;
    int i = 0;
    while(n>0){
        int bit = n % 2;
        binaryno = bit *pow(10,i++)+binaryno;
        n = n/2;
    }
    return binaryno;
}

int decimaltobinaryMethod2(int n){
    //Bitwise method
    int binaryno = 0;
    int i = 0;
    while(n>0){
        int bit = n & 1;
        binaryno = bit*pow(10,i++)+binaryno;
        n = n>>1;
    }
    return binaryno;
}
int main(){
    int n;
    cout<<"Enter the number for which you convert decimal to binary : ";
    cin>>n;
    int binary = decimaltobinaryMethod1(n);
    cout<<"The given number in the binary is : "<<binary<<endl;
    

    //When we do this problem then it is suggestion that u use only bitwise operator because it is very fast than non - bitwise operator 
    //and it is fast because computer is work in bitwise mode
    int binary2 = decimaltobinaryMethod2(n);
    cout<<"The given number in the binary is : "<<binary2<<endl;

return 0;
}