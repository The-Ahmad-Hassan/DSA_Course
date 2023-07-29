#include<iostream>
#include<map>
using namespace std;



int main(){
//initilize


map<int,string> m;
cout<<"  Key    Value"<<endl;
m [7295]="my pass";
m [7294]= " my second pass";
m [1122]= " Ambulance no";
m.insert({1127,"my pass"});


cout<<" Before Erase"<<endl;

for(auto i:m){
//auto i belongs to m

cout<<i.first << "  " << i.second<<endl;

}
m.erase(1122);


cout<<" After Erase"<<endl;

for(auto i:m){
//auto i belongs to m

cout<<i.first << "  " << i.second<<endl;




}


cout<<" Find kr 1127"<< m.count(1127)<<endl;



}