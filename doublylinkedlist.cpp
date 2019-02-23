#include <iostream>

using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
node *create_doubly_linkedlist(int );
void display_doubly_linkedlist_forward(node *head);
void display_doubly_linkedlist_backward(node *head);

int main()
{ node *head;
    int n;
    cout<<"how many nodes you want to insert";
    cin>>n;
   head=create_doubly_linkedlist(n);
   display_doubly_linkedlist_forward(head);
   display_doubly_linkedlist_backward(head);

}
node *create_doubly_linkedlist(int n)
{
    node *curr=NULL;
    node *head=NULL;
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
    return head;
}
void display_doubly_linkedlist_forward(node *head)
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
void display_doubly_linkedlist_backward(node *head)
{
    node *curr=head;
    if(head==NULL)
    {
        cout<<"list is empty";
    }
    else
    {
        while(curr->next!=NULL)
        {
          curr=curr->next;

        }
        while(curr!=NULL)
        {
            cout<<curr->data<<" ";
            curr=curr->prev;
        }

    }
    cout<<endl;

}




