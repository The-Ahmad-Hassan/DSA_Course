#include<iostream>
#include<vector>
using namespace std;

void printArray(int arr[],int s){

 for(int i=0; i<s; i++){
cout<< arr[i]<< " ";

 }
cout<<endl;
}


void SelectionSort(int arr[],int s){
   vector<int> temp;
    int min=0;
   for(int i=0; i<s; i++){
        int counter=i;
           min=i;
        for(int j=i+1; j<s; j++){
            if(arr[min]>arr[j]){
                    min=j;
            
            }
            
}
 
 temp.push_back(arr[min]);

 
}


  for(int i:temp){
    cout<< i << " ";
  }

return temp;
}


int main(){

int arr[4]={3,5,1,2};
int s=sizeof(arr)/sizeof(arr[0]);
  SelectionSort(arr,s);
 
 
 
  return 0;



}