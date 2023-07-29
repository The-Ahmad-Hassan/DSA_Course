#include<iostream>
using namespace std;

long long int binarysquare( long long int num){
long long int s=0;
long long int e = num;
long long int mid=s+(e-s)/2;

while(s<=e){

if(mid*mid==num){
return mid;

}

if(mid*mid>num){

    e=mid-1;

}

else {
    s=mid+1;
}

mid=(e+s)/2;
}


}



int main(){
cout<<binarysquare(250000000000);

}