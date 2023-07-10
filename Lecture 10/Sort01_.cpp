#include<iostream>
using namespace std;

void sort01_(int arr[],int size){
int i=0; int j=size-1;
while(i<=j)
{
// case 1 when i=0;

if(arr[i]==0 ){
i++;
}
else if(arr[j]==1){
    j--;
}

else{
    swap(arr[i++],arr[j--]);
}

}

}

int main(){

int arr[6+4]={1,1,1,0,0,0,1,0,1,0};
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