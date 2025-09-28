/*In a multi-user environment, printers often use a circular queue to manage print jobs. Each print job is added to the queue, and the printer processes them in the order they arrive. Once a print job is completed, it moves out of the queue, and the next job is processed, efficiently managing the flow of print tasks. Implement the Printer Spooler system using a circular queue without using built-in queues. */
#include <iostream>
#define SIZE 3
using namespace std;
class Printer {
public:
    int rear, front;
    int job_queue[SIZE];

    Printer() {
        rear = -1;
        front = -1;
    }

    int isfull() {
        return ((rear + 1) % SIZE == front);
    }

    int isempty() {
        return (front == -1);
    }

    void Enqueue(int job_no) {
        if (isfull()) {
            cout<<"Queue is full! Cannot add job "<<job_no<<endl;
        }
        else {
            if (front == -1) {              //first job is added
                front = 0;
            }
            rear = (rear + 1) % SIZE;
            job_queue[rear] = job_no;
            cout<<"Print job "<<job_no<<" added to queue"<<endl;
        }
    }

    void Dequeue() {
        if (isempty()) {
            cout<<"Queue is empty! No jobs to process."<<endl;
            return;
        }

        cout<<"Processing print job "<<job_queue[front]<<endl;

        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            front = (front + 1) % SIZE;
        }
    }

    void display() {
        if (isempty()) {
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<"Current Print jobs queue: ";
        int i = front;
        while (true) {
            cout<<job_queue[i]<<" ";
            if (i == rear)
                break;
            i = (i + 1) % SIZE;
        }
        cout<<endl;
    }
};

int main() {
    Printer p;
    int choice, t;
    char c;
    do {
        cout<<"\n------Printer Spooler Menu------"<<endl;
        cout<<"1. Add Print job\n2. Process Print job\n3. Display Print jobs\n4. Exit "<<endl;
        cout<<"Enter your choice (1/2/3/4): ";
        cin>>choice;

        switch (choice) {
            case 1:
                cout<<"Enter job number: ";
                cin>>t;
                p.Enqueue(t);
                break;

            case 2:
                p.Dequeue();
                break;

            case 3:
                p.display();
                break;

            case 4:
                cout<<"Exiting..."<<endl;
                return 0;

            default:
                cout<<"Invalid choice! Try again."<<endl;
        }
        cout<<"Do you want to continue (Y/N): ";
        cin>>c;
    } while (c == 'y' || c == 'Y');

    return 0;
}
