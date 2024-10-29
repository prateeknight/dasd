#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#define MAX_Size 5
using namespace std;
class stack
{
    private:
    int value,i;
    int arr_stack[MAX_Size];
    int top;
    public:
     stack()
    {
        top=0;
    }
    void push()
    {
      if(top==MAX_Size)
      {
        cout<<"the stack is full";
      }
      else
      {
        cout<<"enter the value to be pushed"<<endl;
        cin>>value;
        arr_stack[top++]=value;
        }}
     void pop()
     {
        if(top == 0)
        {
            cout<<"stack is empty";
        
        }
        else
        {
           cout<<arr_stack[top]<<endl;
           cout<<"the value popped"<<(*arr_stack[top]);
            top=--top;
        }}
        void display()
        {
            for(int i=top-1;i>=0;i--)
            {
                cout<<arr_stack[i]<<" ";
                cout<<endl;

            }
        }
     
};
    int main()
    {
        stack object;
        int choice,exit_p=1;
        do{
            cout<<"simple stack menu"<<endl;
            cout<<"pick one"<<endl;
            cout<<"1.push"<<endl;
            cout<<"2.pop"<<endl;
            cout<<"3.display"<<endl;
            cin>>choice;
            switch(choice)
            {
                case 1:
                object.push();
                break;
                case 2:
                object.pop();
                break;
                case 3:
                object.display();
                break;
                default:
                exit_p=0;
                break;

            }

        }while(exit_p);
        return 0;
    }