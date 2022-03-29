#include <iostream>
#include<string>
using namespace std;
int main(int argc, char *argv[])
{
 int choice;
 
 while(true)
 {
    cout<<"the 100 game \n" ;
    cout<<"1 - Start  game \n";
    cout<<"0 - Quit game \n";
    cout<<"choose one if you want to start the game or choose zero if you want to end the game  \n";
    cin>>choice;
    if (choice == 1)
        cout<<"start playing \n";
    else if(choice == 0)
    {
        cout<<"end the game. \n";
        void exit( );
    }
    else 
    {
        cout<<"'invalid number. try again\n";
        cout<<"1 - Start  game \n";
        cout<<"0 - Quit game \n";
        cout<<"choose one if you want to start the game or choose zero if you want to end the game \n";
        cin>>choice;
        if (choice == 1)
             cout<<"start playing \n";
        else if (choice == 0)
        {
             cout<<"end the game \n";
             void exit( );
        }
    }
    cout<<"player 1, what is your name? \n";
    string first_name ;
    cin>>first_name;
    cout<<"player 2, what is your name? \n";
    string second_name ;
    cin>>second_name ;
    cout<<" hey ,  " <<  first_name << " and " << second_name << ", and welcome to 100 game. every one of you will  take his turn to put a number between 1 and 10. the first person who reach 100 will be the winner \n " ;
    int sum = 0 ;
    while (sum < 100)
    {        int number1 ;
        cout<<first_name << ", give me a number between 1 and 10 :  \n ";
        cin>>number1 ;
        if (number1 > 10 or  number1 <0 )
        {
            cout<<"you can not put a number bigger than ten or less than zero  ,   try again \n";
            cout<<first_name << ", give me a number between 1 and 10 :  \n ";
            cin>>number1 ;
        }
        sum += number1;
        cout<<"sum is " << sum<<"\n";
        if (sum >= 100 )
        {
            cout<<first_name << " you are the winner\n";
            break;
        }
                
        int number2 ;
        cout<<second_name << ", give me a number between 1 and 10 : ";
        cin>>number2;
        if (number2 > 10  or  number2 < 0 )
        {
            cout<<"you can not put a number bigger than ten or less than zero  ,   try again  \n";
            cout<<second_name << ", give me a number between 1 and 10 :  ";
            cin>>number2;
        }
        sum += number2 ;
        cout<<"sum is " << sum<<"\n";
        if (sum >= 100 )
        {
            cout<<second_name << "  you are the winner  \n";
            break;
        }
    }
            
 
 return 0 ;
 }
 
 }