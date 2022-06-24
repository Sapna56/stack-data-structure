#include<iostream>
using namespace std;
#define max 1000
class stack{
    public:
    int arr[max];
    int top=-1;
    
    void push(int num){
        if(top>=max)
        cout<<"stack full\n";
        else
        {
            top=top+1;
        arr[top]=num;
            cout<<"pushed\n";
        }
        
    }
    void pop(){
        if(top<0)
        cout<<"stack empty\n";
        else{
            
        top=top-1;
        cout<<"popped\n";
        
        }
        
    }
    int peek(){
        if(top<0)
        cout<<"stack empty";
        else
        return arr[top];
        
        
    }
    
};
int main(){
    
    
    stack s1;
    s1.pop();
    s1.push(4);
    s1.push(5);
    s1.push(6);
    s1.push(7);
   cout<< s1.peek()<<"\n";
    s1.pop();
  cout<<  s1.peek()<<"\n";
    s1.pop();
    cout<<s1.peek()<<"\n";
s1.pop();
s1.pop();
s1.pop();
s1.peek();
    return 0;
    
    
}
   