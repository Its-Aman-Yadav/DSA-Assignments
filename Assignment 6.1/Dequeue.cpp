#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int value;
    node* next_key;
    node* prev_key;
    node(int input)
    {
        value=input;
        next_key=NULL;
        prev_key=NULL;
        return;
    }
};

class DeQueues
{
    node* head;
    node* tail;
    public:
    DeQueues()
    {
        head=NULL;
        tail=NULL;
    }

    void push_back(int value)
    {
      node* newNode = new node(value);
      if(head==NULL)
        head=tail=newNode;
      else{
        tail->next_key=newNode;
        newNode->prev_key=tail;
        tail=newNode;
      }
    }

    void push_front(int value)
    {
        node* newNode = new node(value);
       if(head==NULL)
        head=tail=newNode;
       else{
           newNode->next_key=head;
           head->prev_key=newNode;
           head=newNode;
       }
    }

    void pop_front()
    {
      if(head==NULL)
        cout<<"underflow";
      else{
        head = head->next_key;
      }
    }

    void pop_back()
    {   
        if(tail==NULL)
         cout<<"underflow";
        tail = tail->prev_key;
    }

    int get_front(){
        if(head==NULL)
    	   return 0;
        else{
            return head->value;
        }
    }


    int get_back(){
        if(tail==NULL)
    	  return 0;
        return tail->value;

    }
    void display_queue()
    {
        if(head==NULL)
         cout<<"Empty";
        else{
            node* temp=head;
            while(temp->next_key!=NULL){
                cout<<temp->value<<" ";
                temp=temp->next_key;
            }
        }
    }
};


int main()
{
    DeQueues s;
    s.push_front(0);
    s.push_front(1);
    s.push_front(2);
    s.push_back(-1);
    cout<<"front: "<<s.get_front()<<"\n";
    cout<<"back: "<<s.get_back()<<"\n";
    s.display_queue();
}
