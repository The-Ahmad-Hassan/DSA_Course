#include<iostream>

using namespace std;


int sqrt(int x){

int s=0; int e=x;
int mid=s+(e-s)/2;
int sqrt,ans;
while(s<e){
sqrt=mid*mid;
if(sqrt==x){

    return mid;
}

else if(sqrt>x){
  
  e=mid-1;

  }

else {
ans=mid;
s=mid+1;

}


mid=s+(e-s)/2;
}


return ans;

}

double percision(int percision,int temp,int n){
double ans=temp;
double factor=1;
for(double i=0; i<percision; i++){
factor=factor/10;
for(double j=ans; j*j<n; j=j+factor)
ans=j;

}

return ans;

}


int main(){

int x=6;

int temp=sqrt(x);


cout<<"Square root of " << x<< " is "<<percision(3,temp,x)<<endl;


}