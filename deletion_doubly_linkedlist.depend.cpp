#include <iostream>

using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void create_doubly_linkedlist(int );
void deletion_of_first();
void deletion_of_last();
void display_doubly_linkedlist_forward();
void deletion_in_between();

node *head=NULL;

int main()
{
    int n;
    cout<<"how many nodes you want to insert";
    cin>>n;
create_doubly_linkedlist(n);
//deletion_of_first();
//deletion_of_last();
deletion_in_between();
   display_doubly_linkedlist_forward();
}


void create_doubly_linkedlist(int n)
{
    node *curr=NULL;
    for(int i=1; i<=n; i++)
    {
        node *temp = new node;
        cout<<"value of node "<<i;
        cin>>temp->data;
        temp->next=NULL;
        temp->prev=NULL;
        if(head==NULL)
        {
            head=temp;
            curr=head;
        }
        else
            {
                curr->next=temp;
                temp->prev=curr;
                curr=curr->next;
            }

    }
}


void display_doubly_linkedlist_forward()
{
    node *curr=head;
    if(head==NULL)
    {
        cout<<"list is empty";
    }
    else
    {
        while(curr!=NULL)
        {
          cout<<curr->data<<" ";
          curr=curr->next;

        }

    }
    cout<<endl;
}


void deletion_of_first()
{
    node *curr=head;
    if(head!=NULL)
    {
        head=curr->next;
        curr=curr->next;
        if(curr!=NULL)
        {curr->prev=NULL;
        }
    }

}


void deletion_of_last()
{
     node *curr=head;
     node *previous=NULL;
    if(head!=NULL)
    {
        while(curr->next!=NULL)
        { previous=curr;
            curr=curr->next;
        }
        if(curr==head)
        {
            head=NULL;

        }
        else
        {
            previous->next=NULL;
        }
    }
}
void deletion_in_between()
{int a;
node *curr=head;
node *previous=curr;
cout<<"node you want to delete";
cin>>a;
if(head!=NULL)
{
    while(curr!=NULL && curr->data!=a)
{
     previous=curr;
    curr=curr->next;
}

if(curr->data==a)
{
  if(curr!=head)
    {
        curr=curr->next;
        previous->next=curr;
        if(curr!=NULL)
            curr->prev=previous;
    }
    else{
        curr=curr->next;
        if(curr!=NULL)
        curr->prev=NULL;
        head=curr;
    }
}
}
}
