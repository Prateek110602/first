#include<iostream>
using namespace std;
class queue{
    int front,end,maxsize,currsize;
    int *arr;
    public:
    queue(int max_ize){
        this->maxsize=maxsize;
        arr=new int [maxsize];
        front=-1;
        end=-1;
        currsize=0;
    }
    void push(int e){
        if(currsize==maxsize)
        {
            cout<<"queue is full"<<endl;

        }
        if(end==-1)
        {
          front=0;
          end=0;
          
        }
        else end=(end+1)%maxsize;
        arr[end]=e;
        currsize++;
    }
    int pop()
    {
        if(front==-1)
        {
          cout<<"queue is empty"<<endl;

        }
        int popped=arr[front];
        if(currsize==1)
        {
            front=-1;
            end=-1;
        }
        else front=(front+1)%maxsize;
        currsize--;
        return popped;
    }
    void print()
    {
        for(int i=front;i<=end;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main()
{
    queue q(6);
    q.push(8);
    q.push(4);
    q.push(5);
    q.print();
    q.pop();
    q.print();
    return 0;


}