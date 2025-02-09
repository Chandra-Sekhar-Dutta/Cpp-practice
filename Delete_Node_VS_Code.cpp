#include <iostream>

using namespace std;

string value;int position,current_position;

class node{
  public:
  string data;
  node*next;
  node*previous;
  
  node(string value){
      data=value;
      next=NULL;
      previous=NULL;
  }
};

node*head;
node*tail;

void insertAthead(node*&head,string value){
    node*temp=new node(value);
    temp->next=head;
    if(head!=NULL){
        head->previous=temp;
    }
    head=temp;
}

void insertAttail(node*&head,string value){
    if(head==NULL){
        insertAthead(head,value);
    }
    node*new_node=new node(value);
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
    new_node->previous=temp;
}

void print_list(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"<->";
        temp=temp->next;
    }
    cout<<"NULL";
}

void Delete(node*& head, int position) {
    node* temp = head;
    int current_position = 0;

    while (current_position != position) {
        temp = temp->next;
        current_position++;
    }

    temp->previous->next = temp->next;
    temp->next->previous = temp->previous;

    if (temp->next == NULL) {
        if (current_position == position) {
            temp->previous->next = NULL;
        }
    }

    delete temp;
    
    //print_list(head);
}



int main()
{
     //node*head=NULL;
     insertAthead(head,"Suraj");
     insertAttail(head,"Pandu");
     insertAttail(head,"Samay");
     insertAttail(head,"Druv");
     insertAttail(head,"Manoj");

     print_list(head);
     cout<<endl;

    Delete(head,2);
    print_list(head);
    return 0;
}