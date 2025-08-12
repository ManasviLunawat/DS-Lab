/* Write a game development program that implements the Bubble Sort algorithm. The program will simulate a simple game where the player can input a set of numbers and the numbers will be sorted using Bubble Sort to simulate a "level-up" scenario where the player's scores are sorted in ascending order. */
#include<iostream>
using namespace std;
int main()
{
int i,n,p,c,temp=0;
cout<<"\n\nEnter number of rounds: ";
cin>>n;
int player1[n];
int player2[n];

cout<<"Enter PLAYER 1 scores \n";
for(i=0;i<n;i++)
{
cout<<"Round "<<i+1<<" score: ";
cin>>player1[i];
}

for(p=0;p<n;p++)
{
   for(c=0;c<n-p-1;c++)
   {
       if(player1[c]<player1[c+1])
       {
           temp=player1[c];
           player1[c]=player1[c+1];
           player1[c+1]=temp;
           }
   }
}
cout<<"After sorting the scores of player 1 is:";
for(i=0;i<n;i++)
{
   cout<<"\t"<<player1[i];
}

cout<<"\n\nEnter PLAYER 2 scores \n";
for(i=0;i<n;i++)
{
cout<<"Round "<<i+1<<" score: ";
cin>>player2[i];
}

for(p=0;p<n;p++)
{
   for(c=0;c<n-p-1;c++)
   {
       if(player2[c]<player2[c+1])
       {
           temp=player2[c];
           player2[c]=player2[c+1];
           player2[c+1]=temp;
       }
   }
}

cout<<"After sorting the scores of player 2 is:";
for(i=0;i<n;i++)
{
   cout<<"\t"<<player2[i];
}
if (player1[0]>player2[0])
{
cout<<"\n\n\t\t--------THE WINNER IS PLAYER 1--------";
}
else if(player2[0]>player1[0])
{
   cout<<"\n\n\t\t--------THE WINNER IS PLAYER 2--------";
}
else
{
   cout<<"\n\n\t\t--------IT'S A TIE--------";
}
return 0;
}
