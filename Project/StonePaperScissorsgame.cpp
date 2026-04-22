#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

int main(){
    string user_guess;
    int x;
    srand(time(NULL));
    vector <string> v1;
    int count=0;
    v1={"Stone","Paper","Scissors"};
    while(true){
        cout<<"Press 1 if you wanted to exit the game else press any key to contiue "<<endl;
        cin>>x;
        
        cout<<"Enter your guess"<<endl;
        cin>>user_guess;
          for(int i=0;i<user_guess.size();i++){
            user_guess[0]=toupper(user_guess[0]);
        
            user_guess[i+1]=tolower(user_guess[i+1]);
        


    }
        int guess=rand()%3;
        string bg=v1[guess];
        if(x!=1){
                if (user_guess==bg){

                
                cout<<"Oh it s a draw "<<endl;
                count+=0;}
                
                else if((user_guess=="Stone" && v1[guess]=="Scissors")
                ||(user_guess=="Scissors" && v1[guess]=="Paper")
                ||(user_guess=="Paper" && v1[guess]=="Stone") ){
                cout<<"You won "<<endl;
                count+=1;}
                else if((user_guess=="Scissors" && v1[guess]=="Stone")
                ||(user_guess=="Paper" && v1[guess]=="Scissors")
                ||(user_guess=="Stone" && v1[guess]=="Paper") ){
                    cout<<"Oh No you loose "<<endl;

                }
        

                else{
                    cout<<"Please Enter Paper or  Stone or Scissors "<<endl;
                }


        }
        else{
            cout<<"..............Exitting the game........... "<<endl;
            break;
        }
    }
    cout<<".......................Sucessfully Exitted the match your total score is "<<count<<endl;    

}
