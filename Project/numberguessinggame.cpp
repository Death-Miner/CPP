#include <iostream>
#include <ctime>
#include<iomanip>
using namespace std;

int get_data(){
    int number;
    while (true){
        cout<<" Enter the number that you guessed "<<endl;
        cin>>number;
        if(cin.fail()){
            cout<<"Invalid please enter a number "<<endl;
            continue;
        }
        else{
            break;
        }

    }
    return number;
    

}
int rand_number(){
    int x;
    int n;
    cout<<"Enter till which you wanna play this its starts from 0 onwards you can set the upper limit "<<endl;
    cin>>n;
    srand(time(0));
    x=(rand()%n)+1;
    return x;
}

int main(){
    int score=0;
    int x;
    while(true){
        int guessed_number=rand_number();
        int user_number=get_data();
        if (user_number==guessed_number){
            cout<<"Yeah You won the match "<<endl;
            score+=1;
        }
        else{
            cout<<"Oh no you lost the match "<<endl;
            
        }
        cout<<"Press 1 to exit the game or anything else to continue it "<<endl;
        cin>>x;
        if (x==1){
            cout<<"Exiting and thank you for playing the game ......"<<endl;
            cout<<"Your score is "<<endl<<setw(20)<<score<<endl;
            
            break;
        }
        
    }

    return 0;
}
