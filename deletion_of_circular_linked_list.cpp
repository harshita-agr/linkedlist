#include <iostream>

using namespace std;
struct node
{
    int data;
    struct node *next;
};
node *create_linked_list(int n);
node *deletion_of_node_beg(node *head);
void display(node *);
int main()
{ int n;
node *head, *new_head;
cout<<"how many nodes you want to display";
cin>>n;
head=create_linked_list(n);
//insert_the_node_at_the_end(head);
head=deletion_of_node_beg(head);
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
node *deletion_of_node_beg(node *head)
{
    node *curr=head;
    if(head==NULL)
    {
        cout<<"list is empty";
    }
    else
    {
        head=curr->next;
    }
    return head;
}
