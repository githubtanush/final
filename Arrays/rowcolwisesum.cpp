#include<iostream>
using namespace std;
void inputarray(int brr[1000][1000],int row,int col){
    for(int i = 0; i < row;i++){
        for(int j = 0; j < col;j++){
            cout<<"Enter the element for row "<<i<<" and col "<<j<<" is : ";
            cin>>brr[i][j];
        }
    }
}
void colwisesum(int arr[1000][1000],int row,int col){
    for(int i = 0; i < col;i++){
        int sum = 0;
        for(int j = 0;  j < row;j++){
            sum = sum+arr[j][i];
        }
        cout<<"The sum for col "<<i <<" is : "<<sum<<endl;
    }
}
void rowwiseSum(int arr[1000][1000],int row,int col){
    for(int i = 0; i < row;i++){
        int sum = 0;
        for(int j = 0; j < col;j++){
            sum = sum + arr[i][j];
        }
        cout<<"The sum for row "<<i <<" is : "<<sum<<endl;
    }
}

void diagonalsum(int arr[1000][1000],int row,int col){
    int sum = 0;
    for(int i = 0; i < row;i++){
        sum = sum + arr[i][i];
    }
    cout<<"The sum of diagonal elements is : "<<sum<<endl;
}

void transpose(int arr[1000][1000],int row,int col){
    for(int i = 0; i < row;i++){
        for(int j = i; j < col;j++){//avoid j = 0 because it start always with starting position and it is very dangerous because again swapping is occur
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i = 0; i < row;i++){
        for(int j = 0; j < col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){

    int crr[1000][1000];
    int row;
    cout<<"how many rows you want in matrix : ";
    cin>>row; 
    int col;
    cout<<"how many cols you want in matrix : ";
    cin>>col;
    inputarray(crr,row,col);
    rowwiseSum(crr,row,col);
    colwisesum(crr,row,col);
    diagonalsum(crr,row,col);
    transpose(crr,row,col);
return 0;
}