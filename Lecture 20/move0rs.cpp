#include<iostream>
#include<vector>

using namespace std;

void move_zeros(vector<int>&num){
 int non_zero=0;

 for(int j=0; j<num.size(); j++){
   if(num[j]!=0){

  swap(num[non_zero],num[j]);
  non_zero++;

   }


 }
  


}


void print(vector<int> num )
{

for(int i=0; i<num.size(); i++){

    cout<< num[i] << "  ";
}

}

int main(){

vector<int> v={1,0,2,0,2};


move_zeros(v);
print(v);





}