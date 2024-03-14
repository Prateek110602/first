#include<iostream>
using namespace std;
class stack{
    int top;
    int *arr;
    int size;
    public:
    stack()
    {
        size=500;
        arr= new int(size);
        top=-1;
        
    }
    void push(int d){
        top++;
        arr[top]=d;
    }
    int pop(){
        if(top==-1)
        {
            cout<<"stack is empty";
            return -1;
        }
        
        else
        {  int popped=arr[top];
            top--;
            return popped;

        }
        
    }
    void display()
    {
        for(int i=0;i<=top;i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
    }


};
int main()
{
    stack s;
    s.push(5);
    s.push(8);
    s.push(9);
    s.display();
    s.pop();
    s.display();
    return 0;

}