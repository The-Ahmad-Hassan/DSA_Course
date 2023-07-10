#include<iostream>

using namespace std;



int getMax(int arr[],int size){

int min=INT16_MIN;

for(int i=0; i<size; i++){


if(arr[i]>min){

min=arr[i];


}

}

return min;


}



int main(){


int arr[10]={2,3,4,5,6,3,20,1,30,50};

int size=sizeof(arr)/sizeof(int);

int Max=getMax(arr,size);
cout<<"Maximum no of array is "<<Max <<endl;


}