#include<iostream>
using namespace std;
void printarray(int arr[][4],int row,int col){
for(int i = 0; i < row;i++){
    for(int j = 0; j < col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}
bool findtarget(int arr[][4],int row,int col,int target){
    for(int i = 0; i < row;i++){
        for(int j = 0; j < col;j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}
void printarrcolwise(int arr[][4],int row,int col){
    for(int i = 0; i < col;i++){
        for(int j = 0;  j < row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}


int main(){

int array[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
int row = 3;
int col = 4;
int target;
cout<<"Target the element which u want to find : ";
cin>>target;
printarray(array,row,col);
printarrcolwise(array,row,col);
cout<<findtarget(array,row,col,target);


return 0;
}



//initialize 2D array
// int arr[2][2];
// int brr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
// int crr[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
// int crr[3][]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};//error
//when we initialize 2D array we atleast give col size 
//formula to conversion 2d array to 1d array 
//is (c*i+j) so conversion ke liye 2d array ki hme cols ki jrurt hoti hai na esliye hmara liye col btana jruri hai 