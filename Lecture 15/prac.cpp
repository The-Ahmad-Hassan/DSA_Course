#include<iostream>
#include<vector>

using namespace std;
bool isPossible(int n, int m, vector<int> time,int mid){
 int daysCount=1;  int pageSum=0;
    
	for(int i=0; i<m; i++){
    
	  if(pageSum+time[i]<=mid){
          pageSum +=time[i];

	  }
 
     else {
		 daysCount++;
	     if(daysCount>n || time[i]<m){
            return false;                 
  
 }
	    pageSum=time[i];
	 }
	
    }

   return true;

}

long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
int s=0; int sum=0;  long long int ans=-1;
for(int i=0; i<m; i++){
  sum +=time[i];

}
int e=sum;
int mid=s+(e-s)/2;
while(s<e){

if(isPossible(n,m,time,mid)){
ans=mid;
e=mid-1;

}

else{
	s=mid+1;
}

mid=s+(e-s)/2;

}

return ans;


}

int main(){
vector<int> time={1,2,2,3,1};
int n=3;
cout<<ayushGivesNinjatest(n,5,time);
}