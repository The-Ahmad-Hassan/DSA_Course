#include<iostream>
#include<vector>
using namespace std;




void sort(vector<int> root , int k){

  vector<int>temp(root.size());

   for(auto i=0; i<root.size(); i++){

     temp[(k+i)% root.size()]=root[i];


   }


root=temp;

for (auto i:root){

cout<< i << " ";

}

}


int main(){

vector<int> v={1,3,4,5,6,7};



sort(v,3);










}
