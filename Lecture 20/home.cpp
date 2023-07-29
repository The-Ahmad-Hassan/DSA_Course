#include<iostream>
#include<vector>
using namespace std;





int main(){

vector<int> v={0,1,0,3,12};




//two pointer approach

int i=0;
int j=i+1;
while(i<v.size() && j<v.size()){

if(v[i]==0 && v[j]>0){

swap(v[i],v[j]);
i++;
j++;


}


else if(v[i]==0 && v[j]==0){
  if (j + 1 < v.size() && v[j + 1] > 0){
 swap(v[j],v[j+1]);
}


}

else {

i++;
j++;

    
}




}



for(int i=0; i<v.size(); i++){

cout<< v[i] << " ";

}

}