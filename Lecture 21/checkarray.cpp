#include<iostream>
#include<vector>
using namespace std;

bool check_root_sorted(vector<int> num ){
int cnt=0;
int n=num.size();
int i=1;


for(int i=1; i<n; i++){
if(num[i-1]>num[i]){

 cnt++;


}


}


if(num[n-1]>num[0])
cnt++;

return cnt<=1;

}

int main(){

vector<int> t ={1,2,3,4,5};
vector<int> v ={1,1,1};
vector<int> nums = {2,1,3,4};



int a=check_root_sorted(v);
cout<<a;

}



