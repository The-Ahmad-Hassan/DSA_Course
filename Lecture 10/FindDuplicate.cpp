#include<iostream>
#include<vector>
using namespace std;



int findDuplicate(vector<int> &arr) 
{
    
int fiDuplicate=0;

int i=0; int j=arr.size()-1;
int k=j-1;


while(i<arr.size() && j>0 && k<arr.size())
{


if(arr[i]==arr[j]){

fiDuplicate=arr[i];
return fiDuplicate;

}



else if(arr[k]==arr[j]){
  return arr[j];

}

else if(arr[i]==arr[k])
{
return arr[j];
    
    }
i++;  k=k-2;



}

return fiDuplicate;

}



int main(){


vector<int> arr ={1,2,3,4,2};


cout<<findDuplicate(arr);




}