#include<iostream>
using namespace std;

int findUnique(int *arr, int size)
{
 
int findUnique=0;

for(int i=0; i<size; i++){

findUnique=findUnique ^ arr[i];


}

return findUnique;
 
}



int main(){

int arr[5]={5,5,4,3,4};
cout<<findUnique(arr,5);


}