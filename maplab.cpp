#include<iostream>
#include<map>
#include <algorithm>
using namespace std;

template <typename t,typename u>
void display(map<t,u> &m1){
    typename map <t,u> :: iterator itr;
     for(itr=m1.begin();itr!=m1.end();itr++){
        cout<<(*itr).first<<":"<<(*itr).second<<endl;

     }
}
template <typename T,typename U>
void get_data(map<T,U> &m){
    T key;
    U value;
    int c;
    cout<<"Enter the total element you want to insert in the map"<<endl;
    cin>>c;
    for(int i=0;i<c;i++){
        cout<<"Enter the serial number"<<endl;
        cin>>key;
        if (key==1 || key==2 || key==3 || key==4){
            cout<<"Do nt use similar serial number duplicating is blocked ";
            break;
            
        }
        else{
            cout<<"Enter the value of the index "<<endl;
            cin>>value;
            m.insert({key,value});
        }
        
    }
    cout<<endl;
    display(m);
        

}

    



int main(){
    map <int,string> m;
    m={{1,"CSE"},{2,"EEE"},{3,"Civil"}};
    display(m);
    cout<<m.size();
    m.insert({4,"AI ML"});
    m.erase(1);
    cout<<endl;
    cout<<m.size()<<endl;
    display(m);
    get_data(m);




}