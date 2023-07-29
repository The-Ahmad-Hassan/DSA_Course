#include<iostream>
#include<vector>


using namespace std;


void revrseArray(vector<int>& arr,int m){
  int start=m+1; int end=arr.size()-1;


  while(start<=end){

  swap(arr[start],arr[end]);
 start++; end--;
  }


}


int main(){


vector<int> arr;

arr.push_back(1);
arr.push_back(2);
arr.push_back(3);
arr.push_back(4);
arr.push_back(5);





revrseArray(arr,2);


for(auto i:arr){

cout<< i << " ";

}


}