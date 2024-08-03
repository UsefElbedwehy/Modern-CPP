#include <iostream>
/// @brief stack class
class Stack
{
private:
    /* data */
    int *st;
    int size;
    int top;
    static int stack_ind;
public:
    Stack(int nsize=10)
{
    size=nsize;
    top=0;
    st = new int[size];
    stack_ind++;
    std::cout << "Stack is initialized successfully." << "\n" ;
}
    ~Stack()
{
    stack_ind--;
    delete[] st;
    std::cout << "Stack is deleted successfully." << "\n" ;
}

    void push(int val){
    if(size == top){
        std::cout << "stack is full." << "\n";
    }else{
    st[top] = val;
    top++;
    }
}
    int pop(){
    if(size == 0){
        std::cout << "stack is empty." << "\n";
    }else{
        top--;
        return st[top];
    }
}
    static int index_stack()
    {
        return stack_ind;
    }

};


int Stack::stack_ind = 0;  // Initialize static member

/// @brief main function of the program
/// @return 0
int main()
{
    int Last_stack_item = 0;
    Stack Stack1;
    Stack Stack2;
    Stack Stack3;
    Stack1.push(3);
    Stack1.push(5);
    Last_stack_item = Stack1.pop();

    int n = Stack::index_stack() ;
    std::cout << "stack index: " << n << "\n";

    std::cout << "Last item in the stack (popped): "<< Last_stack_item << "\n";

    return 0;
}