#include <iostream>

using namespace std;
struct node
{
    int data;
    struct node *next;
};
node *create_linked_list(int n);
void display(node *);
//node *insert_the_node_at_the_begining(node *head);
//void insert_the_node_at_the_end(node *head);

int insert_the_node_in_between(node *head,int a);


int main()
{ int n,a;
node *head;
cout<<"how many nodes you want to display";
cin>>n;
head=create_linked_list(n);
//insert_the_node_at_the_end(head);
cout<<"enter the no after which the node to be inserted";
cin>>a;
insert_the_node_in_between(head,a);

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
 int   j=1;
    while(temp3!=NULL)
    {
        cout<<"value of "<<j <<" node is "<<temp3->data<<endl;
        temp3=temp3->next;
        j++;
    }
}
/*node *insert_the_node_at_the_begining(node *head)
{
    node *temp3=new node;
    cout<<"insert the value of node to be inserted";
    cin>>temp3->data;
    temp3->next=head;
    head=temp3;
    return head;

}

void insert_the_node_at_the_end(node *head)
{
    node *temp3=new node;
    node *temp4=head;
    temp3->data=70;
    temp3->next=NULL;
    while(temp4->next!=NULL)
    {
     temp4=temp4->next;
    }
    temp4->next=temp3;

}
*/

int insert_the_node_in_between(node *head,int a)
{ node *temp=head;
     node *temp1=new node;
     cout<<"enter the new node to be inserted";
     cin>>temp1->data;
     if(head==NULL)
     {
         cout<<"linked list is empty";
         return 0;
     }
    while(temp->next!=NULL)
    {  if(temp->data!=a)
        temp=temp->next;
        else
            break;
    }
    if(temp->data==a)
    {
        temp1->next=temp->next;
        temp->next=temp1;

    }
    else
     {
         cout<<"no such element"<<endl;
     }
     return 0;

}


















