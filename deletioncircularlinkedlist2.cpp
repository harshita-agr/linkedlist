#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
node *create_linked_list(int n);
int display(node *);
node *deletion_of_node_beg(node *head);
node *deletion_of_node_end(node *head);
int main()
{ int n;
node *head, *new_head;
cout<<"how many nodes you want to display";
cin>>n;
head=create_linked_list(n);
//head=insert_at_beg(head);
//insert_in_between(head);
//head=insert_node_at_end(head);
//head=deletion_of_node_beg(head);
head=deletion_of_node_end(head);
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
node *deletion_of_node_beg(node *head)
{
    node *curr=head;
    if(head==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    else
    { if(curr->next==head)
    {
        head=NULL;
        return head;
    }
        while(curr->next!=head)
        {
            curr=curr->next;
        }
        curr->next=head->next;
        head=head->next;
    }

    return head;
}
node *deletion_of_node_end(node *head)
{
    node *curr=head;
    if(head==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    else
    { if(curr->next==head)
    {
        head=NULL;
        return head;
    }
        while(curr->next->next!=head)
        {
            curr=curr->next;
        }
        curr->next=head;

    }

    return head;
}
