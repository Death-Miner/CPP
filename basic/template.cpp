#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

template <class c1>
class marks{
    public:
    vector <c1> marks;
    c1 mark;
    string subject;
    int n;
    void get_marks(){
        cout<<"Enter the total subject of the student "<<endl;
        cin>>n;
        for(int i=0;i<n;i++){
           
            cout<<"Enter the marks of the "<<i+1<<"subject"<<endl;
            cin>>mark;
            marks.push_back(mark);
        }


    }
    void display_marks(){
    
        int i=1;
        for(auto itr=marks.begin();itr!=marks.end();itr++,i++){
            cout<<"marks of the subject "<<i <<" are "<<*itr<<endl;
        }
    }

};
template <class c1,class c2>
class student_profile:public marks<c1>{
    c1 name;
    c2 reg_id;
    public:
    void get_details(){
        cout<<"Enter student  name "<<endl;
        cin>>name;
        cout<<"Enter student registration id "<<endl;
        cin>>reg_id;
        
    }
    void show_details(){
        cout<<"The name of the student is "<<name<<endl;
        cout<<"Registration id of the student is "<<reg_id<<endl;
    }
    
    
    
};
int main(){
    student_profile<string,int>s1;
    student_profile<string,string>s2;
    string x;
    cout<<"Name and Registration number format "<<endl;
    cout<<"If you want String Int format write in format strint /n If you want String String format write strstr " <<endl;
    getline(cin,x);
    if(x=="strint"){

        s1.get_details();
        s1.get_marks();
        s1.show_details();
        s1.display_marks();
    }
    else if(x=="strstr"){
        
        s2.get_details();
        s2.get_marks();
        s2.show_details();
        s2.display_marks();
    }

}