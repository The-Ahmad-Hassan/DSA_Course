#include<iostream>
#include<vector>
using namespace std;


vector<int> pairSum(vector<int> & arr1 , int s){
vector<int> v;
int sz=arr1.size()-1;

for(int i=0; i<sz; i++){
int j=i+1;
for(j; j<sz; j++){

if((arr1[i]+arr1[j])==s){
v.push_back(arr1[i]);
v.push_back(arr1[j]);

}


}



}

for(auto i:v){
cout<<i << " "; 

}cout<<endl;

return v;



}

int main(){



vector<int> arr1={1,2,3,4,5};
pairSum(arr1,5);

}