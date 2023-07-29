#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> & boards,int n,int k, int mid){
int PainterCount=1;
int  boardSum=0;
for(int i=0; i<n; i++){


if(boards[i]+boardSum<=mid){

  boardSum +=boards[i];


}

else {
 PainterCount++;

 if(PainterCount>k || boards[i]>mid)
{
 return false;
}
boardSum=boards[i];
 
}

} 


return true;

}


int findLargestMinDistance(vector<int>&boards,int k){
int s=0,sum=0,minDistance=-1;
int n=boards.size();

for(int i=0; i<n; i++){

    sum +=boards[i];

}
int e=sum;
int mid=s+(e-s)/2;
while(s<e){
if(isPossible(boards,n,k,mid)){
 minDistance=mid;
 e=mid-1;
}
else{
s=mid+1;
    }
 mid=s+(e-s)/2;
}
return minDistance;
}
int main(){
vector<int> boards={1,2,2,3,1};
int k=1;
cout<<findLargestMinDistance(boards,k);

}