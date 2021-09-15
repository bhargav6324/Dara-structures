#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;
};

class linkedlist
{
    node* first;
public:
    linkedlist()
    {
        first=nullptr;
    }
    linkedlist(int a[],int n)
    {
        node*last,*t;
        int i=0;
        first=new node;
        first->data=a[0];
        first->next=nullptr;
        last=first;

        for(int i=1;i<n;i++)
        {
            t=new node;
            t->data=a[i];
            t->next=nullptr;
            last->next=t;
            last=t;
        }
    }
    ~linkedlist()
    {
        node*p=first;
        while(p)
        {
            first=first->next;
            delete p;
            p=first;
        }
    }

    void display()
    {
        node* p=first;
        while(p)
        {
            cout<<p->data<<" ";
            p=p->next;
        }
        cout<<endl;
    }

    int length()
    {
        int len;
        node* p=first;
        while(p)
        {
            len++;
            p=p->next;
        }
        return len;
    }

    void in(int index,int x)
    {
     if(index<0 || index>length())
        return;
     node* t=new node;
     node* p=first;
     int i=0;
     t->data=x;
     t->next=nullptr;
     if(index==0){
        t->next=first;
     first=t;}
     else
     {
         for(i=0;i<index-1;i++)
         {
             p=p->next;
         }
         t->next=p->next;
         p->next=t;
     }

    }

     int delet(int index)
    {
        node* p,*q=nullptr;
        int x,i=0;
        if(index<1|| index>length())
            return -1;

        if(index==1)
        {
            p=first;
            first=first->next;
            x=p->data;
            delete p;

        }
        else
        {
            p=first;
            for(i=0;i<index-1;i++)
            {
                p=q;
                p=p->next;
            }
            q->next=p->next;
            x=p->data;
            delete p;
        }
        return x;
    }
    void revers()
    {
        node* p=first,*q=nullptr;
        node *r=nullptr;
        while(p)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        first=q;
    }
};

int main()
{
    int a[]={1,7,3,4,5};
    linkedlist l(a,5);
    l.revers();
    l.display();
    l.length();
    return 0;
}
