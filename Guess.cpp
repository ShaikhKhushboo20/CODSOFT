#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
    srand(time(0)^clock());
    int num=(rand()%100)+1;
    int guess=0;
    do
    {
     cout<<"Enter your Guess between 1-100"<<endl;
     cin>>guess;
     if(guess>num)
     cout<<"Guess lower"<<endl;
     else if(guess<num)
     cout<<"Guess Higher"<<endl;
     else
     cout<<"You WON"<<endl;
    } while (guess!=num);
    
    return 0;
    
}
