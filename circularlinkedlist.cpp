#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
node *create_linked_list(int n);
void display(node *);
node *insert_at_beg(node *head);
void insert_in_between(node *head);
void insert_node_at_end(node *head);
//node *insert_the_node_at_the_begining(node *head);
//void insert_the_node_at_the_end(node *head);



int main()
{ int n;
node *head, *new_head;
cout<<"how many nodes you want to display";
cin>>n;
head=create_linked_list(n);
//insert_the_node_at_the_end(head);
//head=insert_at_beg(head);
insert_in_between(head);
//insert_node_at_end(head);

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

    }

    return head;
}
void display(node *head)
{
node *temp3=head;

    while(temp3!=NULL)
    {
        cout<<temp3->data<<" ";
        temp3=temp3->next;

    }
    temp3=head;
    cout<<temp3->data;
}
node *insert_at_beg(node *head)
{ node *temp=new node;
cout<<"enter the no to be inserted";
cin>>temp->data;
temp->next=head;
head=temp;
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

    while(curr->next!=NULL)
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
void insert_node_at_end(node *head)
{ node *curr=head;
node *temp=new node;
cout<<"enter the node to be inserted at the end";
cin>>temp->data;
temp->next=NULL;
if(head!=NULL)
    {while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    }
    curr->next=temp;

}
