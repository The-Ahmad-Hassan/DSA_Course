#include<iostream>
using namespace std;

void sort01_(int arr[],int size){
int s=0; int e=size-1;
int mid=0;


while(mid<=e)
{

if(arr[mid]==0){

swap(arr[mid++],arr[s++]);

}

else if(arr[mid]==1){
   mid++;
}

else {
swap(arr[mid],arr[e--]);
}




}



}
int main(){

int arr[10]={1,0,2,2,1,2,1,0,0,0};
int size=sizeof(arr)/sizeof(int);
cout<<"Before Sort "<<endl;
for(int i=0; i<size; i++){

    cout<< arr[i]<<" ";
}
cout<<endl;



sort01_(arr,size);

cout<<"After Sort "<<endl;
for(int i=0; i<size; i++){

    cout<< arr[i]<<" ";
}
cout<<endl;

}