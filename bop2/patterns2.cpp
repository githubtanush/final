#include<iostream>
using namespace std;

int main(){
    
    //hollow diamond pattern
    // int num;
    // cout<<"Enter how many big diamond pattern you want to print : ";
    // cin>>num;
    // int n = num/2;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j <= 2*n; j++){
    //         if(j>=n-i && j <= n+i){
    //             cout<<"  ";
    //         }
    //         else{
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int i = 0; i < n;i++){
    //     for(int j = 0; j <= 2*n;j++){
    //         if(j>=i+1 && j<=(2*n)-1-i){
    //             cout<<"  ";
    //         }
    //         else{
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // //numeric pyramid pattern
    // int n;
    // cout<<"Enter how many big pyramid u want to print : ";
    // cin>>n;
    // for(int i = 0; i < n;i++){
    //     for(int j = 0; j <2*(i+1)-1; j++){
    //         if(j%2==0)
    //         cout<<(i+1)<<" ";
    //         else
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //Hollow half pyramid
    // int n;
    // cout<<"Enter that how many big pyramid u want to print : ";
    // cin>>n;
    // for(int i = 0; i < n;i++){
    //     for(int j = 0; j < n;j++){
    //         if(i==0 || j==0 || j== (n-1)-i){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //numeric pattern
    int n;
    cout<<"Enter the list that how many big u want to print : ";
    cin>>n;
    for(int i = 0; i < n;i++){
        char ch;
        for(int j = 0; j <= i;j++){
            int number = j+1;
            ch = number + 'A' - 1;
            cout<<ch<<" ";
        }
        for(char alphabet = ch;alphabet>'A';){
            alphabet = alphabet - 1;
            cout<<alphabet<<" ";
        }
        cout<<endl;
    }

return 0;
}