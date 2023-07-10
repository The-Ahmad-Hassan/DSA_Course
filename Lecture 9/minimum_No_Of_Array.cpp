#include<iostream>

using namespace std;

int getMin(int arr[],int size){

int min=INT8_MAX;

for(int i=0; i<size; i++){
if(min>arr[i]){

min=arr[i];

}




}

return min;


}


int main(){


int arr[6]={1,2,3,4,0,6};


int size=sizeof(arr)/sizeof(int);

cout<<"Size of array is "<<size<<endl;

int Min=getMin(arr,size);

cout<<"Minimum no of array is "<< Min <<endl;









}