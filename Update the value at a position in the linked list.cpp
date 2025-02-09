#include <iostream>

using namespace std;

char value;int position,current_pos,k_position;

class node{
  public:
  char data;
  node*next;
  
  node(char value){
      data=value;
      next=NULL;
  }
};

node*head,*tail;

void insertAthead(node*&head,char value){
    node*temp=new node(value);
    temp->next=head;
    head=temp;
}

void insertAttail(node*&head,char value){
    node*new_node=new node(value);
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
}

void insertAtposition(node*&head,char value, int position){
    if(position==0){
        insertAthead(head,value);
        return;
    }
    node*node_to_be_inserted=new node(value);
    node*temp=head;
    while(current_pos!=position-1){
        temp=temp->next;
        current_pos++;
    }
    node_to_be_inserted->next=temp->next;
    temp->next=node_to_be_inserted;
}

void update(node*&head,int k_position,char value){
    node*temp=head;
    current_pos=0;
    while(current_pos!=k_position){
        temp=temp->next;
        current_pos++;
    }
    temp->data=value;
}

void print_list(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    
insertAthead(head,'c');
insertAthead(head,'b');
insertAthead(head,'a');
insertAttail(head,'d');
insertAttail(head,'e');
print_list(head);
cout<<endl;
insertAtposition(head,'f',4);
print_list(head);

cout<<"Update the character value=";
cin>>value;
cout<<"Enter the position=";
cin>>k_position;
update(head,k_position,value);
print_list(head);
    return 0;
}

