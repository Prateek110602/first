#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void display(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
void insert_athead(node* &head,int d)
{ 
    node* temp=new node(d);
    temp->next=head;
    head=temp;
    
}
void insert_attail(node* &tail, int d)
{
     node* temp=new node(d);
     tail->next=temp;
     temp->next=NULL;
     tail=temp;
}

int main()
{
    node* node1=new node(2);
    node* head=node1;
    node* tail=node1;
    insert_athead(head,3);
    insert_athead(head,4);
    insert_athead(head,5);
    insert_attail(tail,89);
    insert_attail(tail,54);
    display(head);
    return 0;

}