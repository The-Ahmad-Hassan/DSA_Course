#include<iostream>
#include<vector>
using namespace std;

void moveZeores(int arr[],int n){
  int nonZero=0;

  for(int j=0; j<n; j++){
  if(arr[j]!=0){
    swap(arr[nonZero],arr[j]);
    nonZero++;
  }

  }

 
}

int main(){

int arr[5]={0,0,3,2,1};
  moveZeores(arr,5);

  for(int i=0; i<5; i++){
    cout<< arr[i] << " ";
   }


}