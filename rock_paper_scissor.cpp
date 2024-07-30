#include<iostream>
#include<cstdlib>                //for generating random number
#include<ctime>
using namespace std;

int main()
{
 int rounds;
 int player_score=0,computer_score=0;
 string player_name;
 cout<<"Enter your name:";
 cin>>player_name;
 system("cls");                       //for clearing the screen 
 cout<<player_name<<",How many rounds you want to play? :";
 cin>>rounds;
 system("cls");            //for clearing the screen after every round

 for(int round=1; round<=rounds; round++)
 {
  cout<<"    "<<"***ROCK PAPER SCISSORS***"<<endl;
  cout<<"GAME MENU"<<endl;
  cout<<"--------------------------------"<<endl;
  int player_choice,computer_choice;
  cout<<"Round no.: "<<round<<"/ "<<rounds<<endl;
  cout<<player_name<<"'s score= "<<player_score<<endl;
  cout<<"COMPUTER SCORE = "<<computer_score<<endl;
  cout<<"\n1.ROCK"<<endl;
  cout<<"\n2.PAPER"<<endl;
  cout<<"\n3.SCISSOR\n"<<endl;
  
  do         //using do-while loop for restricting user to choose between 1-3 only
  {
   cout<<"Select your choice : ";
   cin>>player_choice; 
   if(player_choice > 3)
   {
    cout<<"invalid choice..."<<endl; 
    }
    }while(player_choice !=1 && player_choice !=2 && player_choice !=3);
  
srand(time(0));   //setting random number with time and the number generated are purely random
computer_choice=(rand()%3)+1;   //function returning random number between 1 to 3 for computer
     
 if(player_choice==1 && computer_choice==3)
 {
 cout<<"PLAYER CHOOSE:- ROCK"<<endl;
 cout<<"COMPUTER CHOOSE:- SCISSOR\n"<<endl;
 cout<<player_name<<"  WON"<<endl;
 player_score++;     //increasing the player's score
 }

 else if(player_choice==2  && computer_choice==1)
 {
 cout<<"PLAYER CHOOSE:- PAPER"<<endl;
 cout<<"COMPUTER CHOOSE:- ROCK\n"<<endl;
 cout<<player_name<<"  WON"<<endl;
 player_score++;                //increasing the player's score
 }
 else if(player_choice=3 && computer_choice==2)
 {
  cout<<"PLAYER CHOOSE:- SCISSOR"<<endl;
  cout<<"COMPUTER CHOOSE:- PAPER\n"<<endl; 
  cout<<player_name<<"  WON\n"<<endl;
  player_score++;             //increasing the player's score
 }
 else if(player_choice == computer_choice)
 {
 cout<<"DRAW!!!"<<endl;
 }
 else if(player_choice==3 && computer_choice==1)
 {
cout<<"PLAYER CHOOSE:- SCISSOR"<<endl;
cout<<"COMPUTER CHOOSE:- ROCK\n"<<endl; 
cout<<"COMPUTER WON"<<endl;                        //increasing the computer's score
computer_score++; 
}
else if(player_choice==1 && computer_choice==2)
{
cout<<"PLAYER CHOOSE:- ROCK"<<endl;
cout<<"COMPUTER CHOOSE:- PAPER\n"<<endl; 
 cout<<"COMPUTER WON"<<endl;                       //increasing the computer's score
computer_score++; 
}
else if (player_choice==2 && computer_choice==3)
{
cout<<"PLAYER CHOOSE:- PAPER"<<endl;
cout<<"COMPUTER CHOOSE:- SCISSOR\n"<<endl; 
cout<<"COMPUTER WON\n"<<endl;        //increasing the computer's score

computer_score++; 
}
}
 if(computer_score==player_score)
 {
  cout<<"NO ONE WON, it's a DRAW!!!"<<endl;
 }
 else if(player_score>computer_score)
 {
  cout<<player_name<<",YOU WON THE GAME!!!"<<endl;
 }
 else if(player_score<computer_score)
 {
  cout<<"COMPUTER WON THE GAME!!!"<<endl;
 }
 return 0;
}
