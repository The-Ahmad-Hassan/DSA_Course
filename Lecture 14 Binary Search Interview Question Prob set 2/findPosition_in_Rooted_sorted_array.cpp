#include<iostream>
#include<vector>

using namespace std;
int getPivot(int arr[],int n){
int s=0; int e=n-1;
int mid=s+(e-s)/2;
while(s<e){
if(arr[mid]>=arr[0]){
s=mid+1;
}
else {

e=mid;
}
mid=s+(e-s)/2;
}
return s;
// or return e both are valid
}

int binarySearch(int arr[],int s,int e ,int k){

int mid=s+(e-s)/2;

while(s<=e){

//left wla part
if(arr[mid]>k){
e=mid;

}

else if(arr[mid]==k){
    return mid;
}

//right wla part
else {

s=mid+1;

}

mid=s+(e-s)/2;

}

return -1;

}

int findPosition(int arr[] ,int n,int k){
int pivot=getPivot(arr,n);

  //Second Line
if(k>=arr[pivot]  && k<=arr[n-1]){
return binarySearch(arr,pivot,n-1,k);

}


//first Line
else {

return binarySearch(arr,0,pivot-1,k);

}

}





int main(){




int arr[7]={7,9,1,2,3,4,5};

int size=sizeof(arr)/sizeof(int);




cout<<"Element is present at index  -> "<<findPosition(arr,size,1);



}