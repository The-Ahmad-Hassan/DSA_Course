#include<iostream>
using namespace std;


int findPosition(int arr[] ,int n,int k){
 int s=0; int e=n-1;
 int mid=s+(e-s)/2;
  //Second Line

while(s<=e){
if(arr[mid]==k  || arr[mid+1]==k  || arr[mid-1]==k){
   
   if(arr[mid+1]==k){
    return mid+1;
   }

else if(arr[mid-1]==k) {
return mid-1;
}

    return mid;
}

else if(k<=arr[0] && k<=arr[e]){
s=mid+1;

}

else {
e=mid;
}
mid=s+(e-s)/2;
}
return -1;

}





int main(){




int arr[8]={12,15,18,2,4};

int size=sizeof(arr)/sizeof(int);

int n=size-1;


cout<<"Element is present at index  -> "<<findPosition(arr,size,12);
cout<<endl;

}