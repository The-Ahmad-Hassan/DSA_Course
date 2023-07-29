#include<iostream>
using namespace std;

//Pivot is defined as the maximum element of an array 

int getPivot(int arr[],int n){
int s=0; int e=n-1;
int mid=s+(e-s)/2;

while(s<e){

if(arr[mid]>=arr[0]){

s=mid+1;

}

else {

e=mid;

}

mid=s+(e-s)/2;

}


return s-1;
// or return e-1 both are valid

}


int main(){

int arr[6]={7,10,20,21,2,3};

int size=sizeof(arr)/sizeof(int);
cout<<"Pivot Element is at index -> "<<getPivot(arr,size);



}