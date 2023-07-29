#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

vector<int> a;


a.push_back(1);
a.push_back(3);
a.push_back(6);
a.push_back(7);


//bs function
cout<<"Find no using BS "<<binary_search(a.begin(),a.end(),6)<<endl;
  

//upper and lower bound

//find iterator using lower and upper bound
cout<<"Lower bound : "<< lower_bound(a.begin(),a.end(),6) - a.begin() <<endl;
cout<<"Upper bound : "<< upper_bound(a.begin(),a.end(),6) - a.begin() <<endl;


int b=3;
int c=5;

//get max and min funtion

cout<<"Max "<< max(b,c)<<endl;

cout<<"Min "<< min(b,c)<<endl;


// Swap function,


swap(b,c);


cout<< "b -> "<< b <<endl;
cout<< "c -> "<< c <<endl;


 

//reverse string 


string abcd = "abcd";

reverse(abcd.begin(),abcd.end());

cout << " String -> "<<abcd<<endl;


//rotate element

rotate(a.begin(),a.begin()+1,a.end());


cout<<" After Rotate "<<endl;

for(auto i:a)
{

cout<<i<<" ";

}
cout<<endl;


// Sort Function 

cout<<"After sort "<<endl;

sort (a.begin(),a.end());



for(auto i:a)
{

cout<<i<<" ";

}



}