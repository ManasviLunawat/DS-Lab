#include<iostream>
#define SIZE 3
using namespace std;

class coffeeshop  {
    public:
    int rear, front;
    int token_queue[SIZE];

    coffeeshop()  {
        rear = -1;
        front = -1;
    }   
    
    int isfull() {
        if(rear == SIZE - 1) {
            return 1;  
        }
        else 
            return 0;  
    }   
    
    int isempty() {
        if(front == -1 || front > rear) {
            return 1; 
        }
        else 
            return 0;   
    }
    
    void Enqueue(int token_no) {
    if(isfull()) {
        cout << "Queue is full" << endl;
    }
    else {
        if(rear == -1) {
            front = 0;
        }
        rear += 1;
        token_queue[rear] = token_no;
        cout << "Token " << token_no << " added to queue" << endl;  
    }
}
    
    int Dequeue() {
        if(isempty()) {
            cout << "Queue is empty" << endl;
            return 0;
        }
        else {
            int token_no = token_queue[front];
            cout << "Order processed for token " << token_queue[front] << endl;
            front += 1;
            return token_no;
        }
    }
    
    void display() {
        if(isempty()) {
            cout << "Queue is empty" << endl;
        }
        else {
            cout << "Current Queue: ";
            for(int i = front; i <= rear; i++) {
                cout << token_queue[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    coffeeshop C;
    int choice, t;
    char c;
    do {
        cout << "\n-------Welcome to the Coffee Shop-------" << endl;
        cout << "1. Get token\n2. Process token\n3. Display Queue\n4. Exit " << endl;
        cout << "Enter your choice (1/2/3/4): ";
        cin >> choice;
        switch(choice) {
            case 1: 
                cout << "Enter token number: ";
                cin >> t;
                C.Enqueue(t);
                break;
            
            case 2:  
                C.Dequeue();
                break;

            case 3:
                C.display();
                break;
            
            case 4: 
                cout<<"Exiting..."<<endl;
                return 0;
        }
        
        cout << "Do you want to continue (Y/N): ";
        cin >> c;
    } while (c == 'y' || c == 'Y');

    return 0;
}
