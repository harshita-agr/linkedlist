#include <iostream>

using namespace std;


struct node
{
    int data;
    struct node *next;
};

node  *frnt[100]={NULL};
node  *rear[100]={NULL};

void creation_of_queues(int n);
void display(int );
void insert_element();

int main()
{
    int n;
    cout<<"how many queues you have to insert";
    cin>>n;
    creation_of_queues(n);
    insert_element();
    display(n);

    return 0;


}


void creation_of_queues(int n)
{
    int a,i,j;

    cout<<"how many nodes you want to insert";
    cin>>a;

    for(i=0; i<n; i++ )
    {
        cout<<"for "<<i+1<<" queue"<<endl;

        for(j=0; j<a; j++)
        {
            node *temp=new node;

            cout<<"type data for node "<<j+1<<" ";
            cin>>temp->data;
            temp->next=NULL;

            if(frnt[i]==NULL)
            {
                frnt[i]=temp;
                rear[i]=temp;
            }
            else
            {
                rear[i]->next=temp;
                rear[i]=rear[i]->next;
            }
         }
    }

}
void insert_element()
{
    int n,i;

    cout<<"how many elements you want to insert ";
    cin>>n;

    for(i=0; i<n; i++)
    { node *temp= new node;
        int a;

        cout<<"in which queue you want to insert ";
        cin>>a;

        cout<<"type the value to be inserted ";
        cin>>temp->data;
        temp->next=NULL;

        rear[a-1]->next=temp;
        rear[a-1]=rear[a-1]->next;
    }
}

void display(int n)
{
    int i,j;
    node *temp[n];

    for(i=0; i<n; i++ )
    {

        temp[i]=frnt[i];

        cout<<endl<<"for "<<i+1<<" queue"<<endl;

        for(j=0; temp[i]!=NULL; j++)
        {
            cout<<temp[i]->data<<endl;
            temp[i]=temp[i]->next;


        }


    }

}
