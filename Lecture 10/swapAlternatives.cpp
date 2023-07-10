#include<iostream>
using namespace std;


void swapAlternatives(int arr[],int size){

int i=0; 
while(i<size){


swap(arr[i],arr[i++]);
 
i++;


}

for(int i=0; i<size; i++){

    cout<< arr[i]<<" ";
}

}


int main(){

int arr[11]={1,2,3,4,5,6,7,8,9,10,11};
cout<<"Before "<<endl;
int size=sizeof(arr)/sizeof(int);

for(int i=0; i<size; i++){

    cout<< arr[i]<<" ";
}
cout<<endl;

swapAlternatives(arr,size);











}