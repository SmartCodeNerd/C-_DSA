#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* next;

node(int val)
{
    data = val;
    next = NULL;    
}

~node()
{
    //cout<<"Node Destructor Called\n";
    if(next != NULL)
    {
        delete next;
        next=NULL;
    }
}

};

class List
{
    node* head;
    node* tail;

public:
List()
{
    head=NULL;
    tail=NULL;
}

~List()
{
    //cout<<"List Destructor Called\n";
    if(head != NULL)
    {
        delete head;
        head = NULL;
    }
}

void push_front(int val)
{
    node* newNode = new node(val);

    if(head == NULL)
    {
        head = tail = newNode;
    }
    else
    {
        newNode->next=head;
        head=newNode;
    }
}

void push_back(int val)
{
    node* newNode = new node(val);

    if(head == NULL)
    {
        head=tail=newNode;
    }
    else
    {
        tail->next=newNode;
        tail=newNode;
    }
}

void printList()
{
    if(head == NULL)
    cout<<"Linked List is Empty"<<endl;
    else
    {
        node* temp=head;
        while(temp != NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
        cout<<endl;
    }
}

void insert(int val,int pos)
{
    node* newNode = new node(val);
    node* temp=head;
    int idx=0;
    while(idx != pos-1)
    {
        temp=temp->next;
        idx--;
    }
    // for(int i=0;i<pos-1;i++)
    // {
    //     temp=temp->next;
    // }
    newNode->next=temp->next;
    temp->next=newNode;
}

void pop_front()
{
    if(head == NULL)
    {
        cout<<"List is Empty\n";
        return;
    }
    node* temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
}

void pop_back()
{
    node* temp=head;
    while(temp->next != tail)
    {
        temp=temp->next;
    }
    temp->next=NULL;
    delete tail;
    tail=temp;
}

int searchitr(int val)
{
    node* temp = head;
    int pos=0;
    while(temp != NULL)
    {
        if(temp->data == val)
        return pos;

        temp=temp->next;
        pos++;
    }
    return -1;
}

int searchRec(int val,node* temp,int pos)
{
    if(temp == NULL)
    return -1;
    if(temp->data == val)
    return pos;
    return searchRec(val,temp->next,pos++);
}

void reverse()
{
    node* prev=NULL;
    node* curr=head;
    
    node* next=head->next;
    while(curr != NULL)
    {
        //node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        next=curr->next;
    }
    head=prev;
}

void remove_nth_from_last(int n)
{
    node* temp=head;
    int len=0;
    while(temp != NULL)//to find the size of the ll
    {
        temp=temp->next;
        len++;
    }

    temp=head;
    
    for(int i=1;i<(len-n);i++)
    {
        temp=temp->next;
    }

    if(n == len)
    {
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        node* temp1=temp->next;
        temp->next=temp1->next;
        temp1->next=NULL;
        delete temp1;
    }
}

};

int main()
{
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    //ll.printList();

    ll.insert(10,1);

    ll.printList();
    // ll.pop_back();

    // ll.printList();
    //cout<<ll.searchitr(2);
    //cout<<ll.searchRec(3,ll.head,0);
    //ll.reverse();
    ll.remove_nth_from_last(4);
    ll.printList();
}