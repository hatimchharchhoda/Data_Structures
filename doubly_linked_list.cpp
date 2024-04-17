#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* next;
    node* prev;
    node()
    {
        data=0;
        next='\0';
        prev='\0';
    }
    node(int x)
    {
        this->data=x;
        this->next='\0';
        this->prev='\0';
    }
};

class linkedlist
{
public:
    node* head;
    node* tail;
    linkedlist()
    {
        head='\0';
        tail='\0';
    }
    void insertend(int data)
    {
        node* newnode = new node(data);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        node* temp=tail;
        temp->next=newnode;
        tail=newnode;
        tail->prev=temp;
    }
    void insertfront(int data)
    {
        node* newnode = new node(data);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        node* temp=head;
        temp->prev=newnode;
        newnode->next=temp;
        head=newnode;
    }
    void deletenode(int x)
    {
        node* ptr=head;
        node* pptr;

        while(ptr->next->data!=x && ptr!=NULL)
        {
            ptr=ptr->next;
        }
        pptr=ptr->next;
        if(ptr==NULL)
        {
            cout<<"there is no such data"<<endl;
            return;
        }
        pptr->data='\0';
        pptr->next->prev=ptr;
        ptr->next=pptr->next;
    }
    void print()
    {
        node* ptr=head;
        if(ptr==NULL)
        {
            cout<<"no data to read"<<endl;
            return;
        }
        cout<<"Data is : ";
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        cout<<endl;
    }
};

int main()
{
    linkedlist l;
    l.insertend(1);
    l.insertend(2);
    l.insertend(3);
    l.insertfront(0);
    l.print();
    l.deletenode(2);
    l.print();
    return 0;
}
