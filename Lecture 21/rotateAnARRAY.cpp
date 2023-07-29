#include<iostream>
#include<vector>
using namespace std;

vector<int> rotate (vector<int>arr,int k){
   int size=arr.size();
  cout<< " size -> "<<size <<endl;
vector<int> temp(arr.size());

   for(int i=0; i<size; i++){
   
   temp[(i+k)%size]=arr[i];



   }



for(int i:temp)
{
    cout<< i << " ";
}

return temp;
}


int main(){
vector<int> arr={1,2,3,4};

rotate(arr,3);


}