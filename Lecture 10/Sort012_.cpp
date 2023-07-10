#include<iostream>
using namespace std;

void sort123_(int arr[],int size){
int i=0; int mid=0; int j=size-1;


while(i<j && mid < j){

if(arr[j]==0 && arr[i]==2 && arr[mid]==1){
  swap(arr[i],arr[j]);

}

else if(arr[j]==0 && arr[i]==2 && arr[mid]!=1)
mid++;



else if(arr[j]==1 && arr[i]==1 && arr[mid]==2){
swap(arr[mid],arr[j]);
mid++; j++;

}



}

}














int main(){
int arr[5]={2,1,2,1,0};
int size=sizeof(arr)/sizeof(int);
sort123_(arr,size);













}