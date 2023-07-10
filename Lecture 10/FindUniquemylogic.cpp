#include<iostream>
using namespace std;

int findUnique(int *arr, int size)
{  

for(int i=0; i<size; i++){

for(int j=i+1; j<size; j++)
{
if(arr[j]==arr[i]){
arr[i]=0; arr[j]=0;
}
}

}

for(int i=0; i<size-1; i++){
if(arr[i]>arr[i+1])
    return arr[i];

}
return 0;
 
}



int main(){




int arr[5]={3,1,1,4,3};
cout<<findUnique(arr,5);


}