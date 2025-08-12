/*Write a program of a load balancing system using hashing, where  a basic hash table for mapping incoming requests to a set of servers. */

#include <iostream>
using namespace std;
int main() {
    int numServers;
    cout<<"\n\nEnter the number of servers: ";
    cin>>numServers;

    //To check no. of servers is valid
    if (numServers <= 0) {
        cout<<"Error: Number of servers must be greater than zero.\n";
        return 0;
    }

    // Arrays to store request IDs and their assigned servers
    const int MAX = 100;
    int requests[MAX], serversAssigned[MAX];
    int count = 0;
    char choice;

    cout<<"\n--- Hash-Based Load Balancer Started ---\n";

    // Loop until the user decides to stop
    while (true) {
        cout<<"\nDo you want to add a new request? (Y/N): ";
        cin>>choice;

        if (choice == 'Y' || choice == 'y') {
            cout<<"Enter Request ID (integer): ";
            cin>>requests[count];

            //Using Hash function
            serversAssigned[count] = requests[count] % numServers;

            cout<<"Request "<<requests[count]
                 <<" assigned to Server "<<serversAssigned[count] << "\n";

            count++;
            if (count >= MAX) {
                cout<<"Request limit reached.\n";
                break;
            }
        }
        else if (choice == 'N' || choice == 'n') {
            break; 
        }
        else {
            cout<<"Invalid choice! Please enter Y or N.\n";
        }
    }
    // Displaying summary of all requests handled
    cout<<"\n    Load Balancer Summary\n";
    cout<<"--------------------------------\n";
    cout<<"Request ID\tAssigned Server\n";
    cout<<"--------------------------------\n";
    for (int i = 0; i < count; i++) {
        cout<<requests[i]<<"\t\tServer "<<serversAssigned[i]<<"\n";
    }
    cout<<"--------------------------------\n";
    cout<<"\nLoad balancer stopped.\n";
    return 0;
}
