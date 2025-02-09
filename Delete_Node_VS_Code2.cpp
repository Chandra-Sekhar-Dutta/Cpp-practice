#include <iostream>
using namespace std;

class node {
public:
    string data;
    node* next;
    node* previous;

    node(string value) {
        data = value;
        next = NULL;
        previous = NULL;
    }
};

void insertAthead(node*& head, string value) {
    node* temp = new node(value);
    temp->next = head;
    if (head != NULL) {
        head->previous = temp;
    }
    head = temp;
}

void insertAttail(node*& head, string value) {
    node* new_node = new node(value);
    if (head == NULL) {
        head = new_node;
    }
    else {
        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->previous = temp;
    }
}

void Delete(node*& head, int position) {
    if (head == NULL) {
        return;
    }
    node* temp = head;
    if (position == 0) {
        head = temp->next;
        if (head != NULL) {
            head->previous = NULL;
        }
        delete temp;
        return;
    }
    int current_position = 0;
    while (temp != NULL && current_position != position) {
        temp = temp->next;
        current_position++;
    }
    if (temp == NULL) {
        return;
    }
    if (temp->next != NULL) {
        temp->next->previous = temp->previous;
    }
    if (temp->previous != NULL) {
        temp->previous->next = temp->next;
    }
    // else{
        
    // }
    delete temp;
}

void print_list(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "<->";
        temp = temp->next;
    }
    cout << "NULL";
}

int main() {
    node* head = NULL;

    insertAthead(head, "Suraj");
    insertAttail(head, "Pandu");
    insertAttail(head, "Samay");
    insertAttail(head, "Druv");
    insertAttail(head, "Manoj");

    print_list(head);
    cout << endl;

    Delete(head, 4);

    print_list(head);

return 0;
}
