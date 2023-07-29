#include<iostream>

using namespace std;

void MergaeArray(int arr1[],int n,int arr2[],int m,int arr3[]){
int k=0;
int i=0;
int j=0;
//two pointer appproach
while(i<n && j<m){
if(arr1[i]<arr2[j])
{
arr3[k++]=arr1[i++];

}


else {

  arr3[k++]=arr2[j++];
  

}
}

// copy remaining element

while(i<n){
 arr3[k]=arr1[i];
 i++,k++;
 

}


while(j<m)
{


    arr2[k]=arr2[j];
    k++,j++;
}

}


void printarray(int arr[],int size){

for(int i=0; i<size; i++){

 cout<< arr[i]<< "  ";

}
cout<<endl;
}

int main(){

int arr1[5]={1,3,5,7,9};
int arr2[3]={2,4,6};

int arr3[8]={0};



MergaeArray(arr1,5,arr2,3,arr3);


printarray(arr3,8);


}