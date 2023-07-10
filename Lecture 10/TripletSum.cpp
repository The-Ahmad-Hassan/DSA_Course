#include<iostream>
#include<vector>
using namespace std;

vector<int> findTriplets(vector<int> & arr, int K) {
  
vector<int>temp;
    int i=0; int j=1; int k=2;
   while(i<arr.size() && i<arr.size() && i<arr.size())
  {
  if(arr[i]+arr[j]+arr[k]==K){
   
    temp.push_back(arr[i]);
    temp.push_back(arr[j]);
      temp.push_back(arr[k]);   

 
  }
    i++; j++; k++;

}



for(auto i:temp){
    cout<< i << " ";
}

return temp;
}
int main(){

vector<int> arr={1,2,3,4,5,6};
int n=5;
int K=5;
findTriplets(arr,12);


}