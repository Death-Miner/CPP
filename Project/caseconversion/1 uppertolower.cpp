#include<iostream>
using namespace std;

void uppertolower(string &word){
    
    int len=word.length();
    string temp;
    cout<<"The string before conversion is "<<word<<endl;
    cout<<"After converting to lower case the word is ";
    for (int i=0;i<len;i++){
        temp=tolower(word[i]);
        cout<<temp;
       
        
    }
}
int main(){
    string word;
    cout<<"Enter the word ";
    cin>>word;
    uppertolower(word);
    return 0;
}
