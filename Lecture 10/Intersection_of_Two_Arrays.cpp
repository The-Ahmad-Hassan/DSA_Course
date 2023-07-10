#include<iostream>
#include<vector>
using namespace std;



vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
vector<int> v;

int i=0; int j=0;
while(i<n &&  j<m){



//case 1 when arr1[i]==arr2[j]
if(arr1[i]==arr2[j]){
v.push_back(arr1[i]);
i++; j++;

}
//case 2 when arr1[i]<arr2[j]
else if(arr1[i]<arr2[j]){
  i++;

}

else if(arr2[j]>arr1[i]){
  j++;

}

}

for(auto i:v){

    cout<< i << " " ;
}
cout<<endl;




return v;


}

int main(){


vector<int> arr1={1,2,3,4,5};  
int n=arr1.size();

 vector<int>  arr2={2,3,5}; 
int m=arr2.size();


findArrayIntersection(arr1,n,arr2,m);







}