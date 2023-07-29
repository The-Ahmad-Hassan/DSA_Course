#include<iostream>
using namespace std;

void insertionSort(int arr[],int size){
 int temp=0;
for(int i=1; i<size; i++){

temp=arr[i];
int j=i-1;

while(j>=0){

if(arr[j]>temp){
    arr[j+1]=arr[j];
}

else {
    break;
}
j--;
}
arr[j+1]=temp;

}




}


void printArray(int arr[],int size){
for(int i=0; i<size; i++){

cout<< arr[i]<<" ";


}
cout<<endl;
}

int main(){

int arr[6]={6,5,4,3,2,1};
int size=sizeof(arr)/sizeof(int);

insertionSort(arr,size);
printArray(arr,size);



}