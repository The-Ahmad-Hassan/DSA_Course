#include<iostream>
using namespace std;


int binarySearch(int arr[],int size,int k){
int s=0; int e=size-1;

int mid=(e-s)/2+s/2;

while(s<=e){

//left wla part
if(arr[mid]>k){
e=mid;

}

else if(arr[mid]==k){
  cout<<"Number is Present ";
    return arr[mid];
}

//right wla part
else {

s=mid+1;

}

mid=(e-s)/2+s/2;

}





return -1;

}



int main(){

cout<<INT32_MAX;

int arr[5]={ 13333333,13333334,13333335,13333336,214748364};
cout<<binarySearch(arr,5,13333333);




}


