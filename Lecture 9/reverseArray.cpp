#include<iostream>
#include<vector>
using namespace std;



void reverseArray(int arr[],int size){
int s=0;  int e=size-1;
int temp=0;
while(s<e){
 //swap Algorithm
temp=arr[s];
arr[s++]=arr[e];
arr[e--]=temp;
/////   Swap Algorithm
}
}




void printArray(int arr1[],int size){
for(auto i=0; i<size; i++){
cout<< arr1[i]  << "  ";  }  cout<<endl;  }

int main(){


int arr[5]={1,2,3,4,5};
int size=sizeof(arr)/sizeof(int);

cout<<"Before Reverse "<< endl;
 printArray(arr,size);
 cout<<"After Reverse "<< endl;
 reverseArray(arr,size);
 printArray(arr,size);
  return 0;

}