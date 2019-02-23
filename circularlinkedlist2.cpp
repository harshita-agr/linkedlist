#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
node *create_linked_list(int n);
int display(node *);
node *insert_at_beg(node *head);
void insert_in_between(node *head);
node *insert_node_at_end(node *head);
int main()
{ int n;
node *head, *new_head;
cout<<"how many nodes you want to display";
cin>>n;
head=create_linked_list(n);
head=insert_at_beg(head);
insert_in_between(head);
head=insert_node_at_end(head);

display(head);
}
node* create_linked_list(int n)
{
    node *head=NULL;

    node *temp1=NULL;
    node *temp=NULL;
    for(int i=1; i<=n; i++)
    {
         node *temp=new node;
        cout<<"enter the value for node "<<i<<": ";
        cin>>temp->data;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            temp1=head;

        }

        else{
                temp1->next=temp;
                temp1=temp1->next;
        }
    temp1->next=head;

    }


    return head;
}
int display(node *head)
{ int i=1;
node *temp3=head;
if(head!=NULL)
    {
        cout<<temp3->data<<" ";
        temp3=temp3->next;
    }
else
    {
    cout<<"list is empty";
    return 0;
}
    while(temp3!=head)
    {
        cout<<temp3->data<<" ";
        temp3=temp3->next;
        i++;

    }
    cout<<temp3->data;

    return 0;
}
node *insert_at_beg(node *head)
{ node *temp=new node;
node *curr=head;
cout<<"enter the no to be inserted";
cin>>temp->data;
if(head!=NULL)
{while(curr->next!=head)
{
    curr=curr->next;
}

curr->next=temp;
temp->next=head;
head=temp;
}
else
    {
        curr=temp;
        head=curr;
        curr->next=head;

    }
return head;
}
void insert_in_between(node *head)
{  node *curr =head;
    int a;
    node*temp =new node;
    cout<<"enter the no after which node to be inserted";
    cin>>a;
    cout<<"insert new node to be inserted";
    cin>>temp->data;

    while(curr->next!=head)
    { if(curr->data!=a)
       {
           curr=curr->next;
        }
        else
            break;

    }
    if(curr->data==a)
    {
        temp->next=curr->next;
        curr->next=temp;

    }
    else
        {
            cout<<"match not found";

        }
}
node *insert_node_at_end(node *head)
{ node *curr=head;
node *temp=new node;
cout<<"enter the node to be inserted at the end";
cin>>temp->data;
temp->next=NULL;
if(head!=NULL)
    {while(curr->next!=head)
    {
        curr=curr->next;
    }

    curr->next=temp;
    temp->next=head;
    }
    else
        {
            curr=temp;

            head=curr;
            curr->next=head;
            }

return head;
}


