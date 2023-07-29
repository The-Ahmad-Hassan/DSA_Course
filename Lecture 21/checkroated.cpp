#include<iostream>
#include<vector>

using namespace std;

bool checkRotatedSorted(vector<int> arr){
   int size=arr.size();
   int cnt=0;

   for(int i=1; i<size; i++){
   
   if(arr[i-1]>arr[i]){
     cout<<"Count inside " << cnt<<endl;
     
    cnt++;
    
   }  

   }

   if(arr[size-1]>arr[0])
    cnt++;
  
     cout<<"Count outside " <<cnt<<endl;
     return cnt<=1;


}


int main(){


vector<int> arr={3,4,5,6,1,2};
 cout<<checkRotatedSorted(arr);






}

