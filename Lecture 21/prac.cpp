#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int getLength(char ch[]){
  int count=0;

  for(int i=0; ch[i]!='\0'; i++){
       count++;

  }
return count;

}

char ConvertLower(char ch){
  if(ch>='a' && ch<='z')
 {
  return ch;
 }
 else {

  ch=ch-'A'+'a';
  
 }
 return ch;
}


void reverseString(char ch[],int length){
   int s=0; int e=length-1;
   while(s<e){
     swap(ch[s++],ch[e--]);
   }


}

//brute force approach o(n^2) when letter are case senstive

bool checkPalindrome(char ch[],int length){
         char temp[length];

         for(int i=0; temp[i]!='\0'; i++){
            temp[i]=ch[i];

         }

         cout<<"temp "<<temp <<endl;      
       reverseString(ch,length);
    cout<<"ch -> "<< ch<<endl;
  
     int i=0; int j=0;
     while(i<length ){

          if(ch[i]==temp[i]){

          }
     
     else if(ch[i]!=temp[i]) {
           

      return false;
     }
      i++;
     }
return true;

}

//best approach linear tc
//apply both senstive or insentstive
bool checkPaliDrome(char ch[],int length){
  int i=0; int j=length-1;

  while(i<=j){
   if(ConvertLower(ch[i])!=ConvertLower(ch[j]))
   
{
  return false;
}


i++; j--;

  }

return true;
}

int GETMax(string ch){
      
  int arr[26]={0};
  
  for(int i=0; i<ch.length()-1; i++){
       int cha=ch[i]-'a';  
        cout<<"char is -> " <<cha <<endl;
       arr[cha]++;            


  }


int max=0;
int index=0;
for(int i=0; i<26; i++){
  if(max<arr[i]){
    max=arr[i];
    index=i;
  }


  }
char ch1=index+'a';

return ch1;


}





int main(){
int arr[26];
string ch;
ch="MY Name";
cout<<" Before Length is -> "<< ch.length()<<endl;



for(int i=0; i<ch.length(); i++){

if(ch[i]==' '){
 int index=i;
  ch.push_back('0');
  ch.push_back('0');
  int e=ch.length()-1; int count=ch.length()-3;   
  while(count>index){
ch[e--]=ch[count--];
}

ch[index]='@';
ch[index+1]='4';
ch[index+2]='0';


}

}

cout<< ch <<endl;

// string ch=" ";
// cin>>ch;
// char ch1=GETMax(ch);
// cout<<"Maximum alphabet in this string is -> "<<ch1<<endl;
// cin>>ch;
// int length=getLength(ch);
// cout<< "Length is "<<length<<endl;
// cout<<"Palidindrome or not? -> "<<checkPalindrome(ch,length)<<endl;;
// cout<<"Palidindrome or not? -> "<<checkPaliDrome(ch,length);
//  char ch1='C';
//  cout<<endl;
//  cout<<ConvertLower(ch1);



}