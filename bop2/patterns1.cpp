#include<iostream>
using namespace std;

int main(){

    //for square pattern
    //  Outerloop run 4 times
    // for(int i = 0; i  < 4; i++){
    //  Innerloop  run 4 times
    //     for(int j = 0; j < 4; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //for rectangle pattern
    // //  Outerloop run 3 times
    // for(int i = 0; i < 3;i++){
    //     //Innerloop run 5 times
    //     for(int j = 0; j < 5; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    // //for hollow rectangle
    // int row;
    // cout<<"Enter that u want how many rows: ";
    // cin>>row;
    // int col;
    // cout<<"Enter that u want how many rows: ";
    // cin>>col;
    // for(int i = 0; i < row;i++){
    //     for(int j = 0; j < col;j++){
    //         if(i==0 || i==row-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             if(j==0 || j==col-1){
    //                 cout<<"* ";
    //             }
    //             else{
    //                 cout<<"  ";
    //             }
    //         }
    //     }
    //     cout<<endl;
    // }


    //half pyramid
    // for(int i = 0; i < 4;i++){
    //     for(int j = 0; j < i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    // //Inverse half pyramid
    // for(int i = 0; i < 4;i++){
    //     for(int j = 0; j < 4-i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    //Numeric half pyramid
    // int num;
    // cout<<"Enter the number that how big you print numeric pyramid: ";
    // cin>>num;
    // for(int i = 0; i<num;i++){
    //     for(int j = 0; j < i+1;j++){
    //         cout<<j+1<<" ";
    //     }
    //     cout<<endl;
    // }

    //inverted numeric half pyramid
    // int num;
    // cout<<"Enter the number that how big you print inverted numeric pyramid: ";
    // cin>>num;
    // for(int i = 0; i < num;i++){
    //     for(int j = 0; j < num-i;j++){
    //         cout<<j+1<<" ";
    //     }
    //     cout<<endl;
    // }

    //Hollow square pattern
    // int num;
    // cout<<"Enter the number of lines u want in square : "<<endl;
    // cin>>num;
    // for(int i= 0; i < num;i++){
    //     for(int j = 0; j < num;j++){
    //         // if(i==0 || i== num-1){
    //         //     cout<<"* ";
    //         // }
    //         // else{
    //         //     if(j==0 || j== num-1){
    //         //         cout<<"* ";
    //         //     }
    //         //     else{
    //         //         cout<<"  ";
    //         //     }
    //         // }
    //         if(i==0 || i==num-1 || j==0 || j==num-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    //}


    //Hollow inverted half pyramid
    // int n;
    // cout<<"tell me how big you want to print : ";
    // cin>>n;
    // for(int i = 0; i < n;i++){
    //     for(int j = 0; j < n-i;j++){
    //         if(i==0 || j==0 || j== n-i-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    //}


    // //full pyramid
    // int n;
    // cout<<"Enter the number of lines you want in full pyramid: ";
    // cin>>n;
    // for(int i= 0; i < n;i++){
    //     int k = 0;
    //     for(int j = 0; j < (2*n)-1 ; j++){
    //         if(j<n-i-1){
    //             cout<<"  ";
    //         }
    //         else if(k<2*i+1){
    //             cout<<"* ";
    //             k++;
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;.
    // }


    //  //Hollow full pyramid
    // int n;
    // cout<<"Enter the number of lines you want in full pyramid: ";
    // cin>>n;
    // for(int i= 0; i < n;i++){
    //     int k = 0;
    //     for(int j = 0; j < (2*n)-1 ; j++){
    //         if(j<n-i-1){
    //             cout<<"  ";
    //         }
    //         else if(k<2*i+1){
    //             if(k==0 || k== 2*i || i==n-1){
    //             cout<<"* ";
    //             }
    //             else{
    //                 cout<<"  ";
    //             }
    //             k++;
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //inverse full pyramid
    // int n;
    // cout<<"Enter the number n that how much big pyramid u want to print : ";
    // cin>>n;
    // for(int i = 0 ; i < n;i++){
    //     for(int j = 0; j < 2*n-1;j++){
    //         if(j>=i && j<=2*(n-1)-i){
    //             cout<<"* ";
    //         }
    //         else {
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // //inverse hollow full pyramid
    // int n;
    // cout<<"Enter the number n that how much big pyramid u want to print : ";
    // cin>>n;
    // for(int i = 0 ; i < n;i++){
    //     for(int j = 0; j < 2*n-1;j++){
    //         if(i==0 || j==i|| j==2*(n-1)-i){
    //             cout<<"* ";
    //         }
    //         else {
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


    //Diamond pattern
    //  int num;
    // cout<<"Enter the number of lines you want in full pyramid: ";
    // cin>>num;
    // int n = num/2;
    // for(int i= 0; i < n;i++){
    //     int k = 0;
    //     for(int j = 0; j < (2*n)-1 ; j++){
    //         if(j<n-i-1){
    //             cout<<"  ";
    //         }
    //         else if(k<2*i+1){
    //             cout<<"* ";
    //             k++;
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int i = 0 ; i < n;i++){
    //     for(int j = 0; j < 2*n-1;j++){
    //         if(j>=i && j<=2*(n-1)-i){
    //             cout<<"* ";
    //         }
    //         else {
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //Inverse diamond pattern
    //  int num;
    // cout<<"Enter the number of lines you want in full pyramid: ";
    // cin>>num;
    // int n = num/2;
    // for(int i= 0; i < n;i++){
    //     int k = 0;
    //     for(int j = 0; j < (2*n)-1 ; j++){
    //         if(j<n-i-1){
    //             cout<<"  ";
    //         }
    //         else if(k<2*i+1){
    //             if(k==0 || k== 2*i){
    //             cout<<"* ";
    //             }
    //             else{
    //                 cout<<"  ";
    //             }
    //             k++;
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int i = 0 ; i < n;i++){
    //     for(int j = 0; j < 2*n-1;j++){
    //         if(j==i|| j==2*(n-1)-i){
    //             cout<<"* ";
    //         }
    //         else {
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

return 0;
}