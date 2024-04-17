#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* next;
    node()
    {
        data=0;
        next='\0';
    }
    node(int x)
    {
        this->data=x;
        this->next='\0';
    }
};

class linkedlist
{
public:
    node* head;
    linkedlist()
    {
        head='\0';
    }
    void insertnode(int data)
    {
        node* newnode = new node(data);
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        node* temp=head;
        while(temp->next !=NULL)
            temp=temp->next;
        temp->next=newnode;
    }
    void deletenode(int x)
    {
        node* ptr=head;

        while(ptr->next->data!=x && ptr!=NULL)
            ptr=ptr->next;
        if(ptr==NULL)
        {
            cout<<"there is no such data"<<endl;
            return;
        }
        ptr->next->data='\0';
        ptr->next=ptr->next->next;
    }
    void print()
    {
        node* ptr=head;
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
    l.insertnode(1);
    l.insertnode(2);
    l.insertnode(3);
    l.insertnode(4);
    l.print();
    l.deletenode(3);
    l.print();
    return 0;
}
