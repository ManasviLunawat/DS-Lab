/* Write a program that implements a simple task scheduler using a singly linked list. Each node in the linked list represents a task with its priority and execution time. 
Tasks are scheduled based on their priority, with higher priority tasks being executed first. */

#include <iostream>
using namespace std;
class Node {
public:
    string task_name;
    int priority;
    int exe_time;
    Node* next;

    Node(string tn, int p, int e) {
        task_name = tn;
        priority = p;
        exe_time = e;
        next = NULL;
    }

    void display() {
        cout << "Task name: " << task_name << endl;
        cout << "Priority: " << priority << endl;
        cout << "Execution time: " << exe_time << "s" << endl;
    }
};

int main() {
    Node* header = NULL, *temp = NULL,*t,*current,*prev;
    int n;
    string tn;
    int p, e;
 
    cout << "\nHow many tasks do you want to add: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter task name: ";
        cin >> tn;
        cout << "Enter task priority (greater number means higher priority): ";
        cin >> p;
        cout << "Enter execution time (in seconds): ";
        cin >> e;

        temp = new Node(tn, p, e);
        if (header == NULL || header->priority < temp->priority) {
            temp->next = header;
            header = temp;
        }
        else {
            prev = header;
            current = header->next;
            
            if(current == NULL) {
				header->next=temp;   
			}
			else  {
				while (current->next != NULL || current->priority > temp->priority) {
                prev = current;
                current = current->next;
            }
            
               if(current->next == NULL && current->priority > temp->priority)   {
				current->next=temp;
			  }
              else {
				temp->next=current;
				prev->next=temp;
              }
        }
    }
}
    cout<<"\n\n";
    cout << "The Priority List is as follows:\n";
    t = header;
    while (t != NULL) {
        t->display();
        cout << "----------------------\n";
        t = t->next;
    }


    return 0;
}

