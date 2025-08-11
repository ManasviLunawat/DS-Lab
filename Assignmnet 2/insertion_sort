/* When playing card games, players often use an approach similar to insertion sort to  organize their cards. They pick one card at a time and insert it into the correct position in their hand, maintaining a sorted sequence. Write a program that demonstrates how to organize (sort) cards in a hand using insertion sort  */

#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"\n\nEnter number of cards:";
    cin>>n;
    int card[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter card "<<i+1<<":";
        cin>>card[i];
    }
    int p,j,temp=0;
    for(p=0;p<n;p++)
    {
        temp=card[p];
        j=p-1;
        while(j>=0 && temp<card[j])
        {
            card[j+1]=card[j];
            j--;
            card[j+1]=temp;
            cout << "\nAfter inserting card "<< p + 1 << ": ";
            for (int k = 0; k <= p; k++)
            {
		cout << card[k] << "\t";
            }
        }
    }
    cout<<"\n\nSorted cards are: ";
    for(i=0;i<n;i++)
    {
        cout<<card[i]<<"\t";
    }
    return 0;
}
