#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
 
 vector<int> sumArray (vector<int> a,vector<int> b){
     int i=a.size()-1;
     int j=b.size()-1;
  vector<int> temp;
    int carry=0;
  
    while(i>=0 && j>=0){
   
     int sum=a[i]+b[j]+carry;
     carry=carry/10;
     sum=sum%10;
     temp.push_back(sum);
     i--; j--;

}

//for remaining a numbers

  while(i>=0 ){
   
     int sum=a[i]+carry;
     carry=carry/10;
     sum=sum%10;
     temp.push_back(sum);
     i--; 

} 
 while( j>=0){
   
     int sum=b[j]+carry;
     carry=carry/10;
     sum=sum%10;
     temp.push_back(sum);
      j--;

}
 

 while(carry!=0){
   
     int sum=carry;
     carry=carry/10;
     sum=sum%10;
     temp.push_back(sum);
     

}


 reverse(temp.begin(),temp.end());
   return temp;

 }



int main(){

vector<int> a={5,4,2};
vector<int> b={2,1,4};


vector<int> sum=sumArray(a,b);

for(int i:sum){

    cout<< i << " ";
}


}