#include<iostream>
using namespace std;



int firstOcc(int arr[],int size,int k){
int s=0; int e=size-1; int ans;
int check=0;
int mid=s+(e-s)/2;
while(s<=e){
//case 1
if(arr[mid]==k){
  ans=mid;
  e=mid-1;
 check=1;
}
//case 2 agr k>mid
else if(k>arr[mid]){
s=mid+1;
}
//case 3 agr k<mid
else{
e=mid-1;
}
mid=s+(e-s)/2;
}

if(check==0){
    return  -1;
}

return ans;
}


int lastOcc(int arr[],int size,int k){
int s=0; int e=size-1; int ans;
int mid=s+(e-s)/2;
bool check=0;
while(s<=e){

if(arr[mid]==k){
ans=mid;
s=mid+1;
check=1;
}


else if(arr[mid]<k){
s=mid+1;

}

else if(arr[mid]>k){

    e=mid-1;
}


mid=s+(e-s)/2;

}

if(check==0){
    return  -1;
}



return ans;

}




int main(){

int arr[7]={0,1,2,3,4,4,4};
int size=sizeof(arr)/sizeof(arr[0]);

int k=5;

cout<<"First Occurence is at index "<<firstOcc(arr,size,k)<<endl;
cout<<"Last Occurence is at index " <<lastOcc(arr,size,k)<<endl;





}