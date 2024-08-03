#include <iostream>

class Stack{
    private:
        int size;
        int top;
        int *st;
        static int counter;

        

    public:
        friend void ViewContent(Stack a);
        
        Stack(int nsize=10){
            size = nsize;
            top;
            st = new int[size];
            counter++;
            std::cout << "Stack constructor is called "<< counter << "\n" ;
        }
        Stack(Stack & z)
        {
            top = z.top;
            size=z.size;
            st = new int[size];
            for(int i=0;i<top;i++)
            {
                st[i] = z.st[i];
            }
            counter++;
            std::cout << "Stack copy constructor is called "<< counter << "\n" ;
        }
        ~Stack(){
            delete[] st;
            counter--;
            std::cout << "Stack destructor is called " << counter+1 << "\n" ;
        }

        void push(int PushVal)
        {
            if(top == size)
            {
                std::cout << "Stack is full." << "\n";
            }
            else{
                st[top] = PushVal;
                top++;
                std::cout << "item is pushed successfully ("<< st[top-1] <<")" << "\n";     
            }
        }

        int pop()
        {
            if(top == 0)
            {
                std::cout << "Stack is empty." << "\n";
            }
            else{
                top--;
                std::cout << "item is popped successfully (" << st[top] <<")\n";
                return st[top];
            }
        }

        static int stack_counter()
        {
            std::cout << "number of constructors: " << counter << "\n";
        }

};

int Stack::counter = 0;


// ---1---- viewcontent function once call by value and without copy constructor
// void ViewContent(Stack a)
// {
//     int I = a.top;
//     while(I > 0)
//     {
//         std::cout << a.st[--I] << "\n";
//     }

// }

// ---2---- viewcontent function once call by reference
// void ViewContent(Stack &a)
// {
//     int I = a.top;
//     while(I > 0)
//     {
//         std::cout << a.st[--I] << "\n";
//     }

// }

// ---3---- viewcontent function once call by reference
void ViewContent(Stack a)
{
    int I = a.top;
    while(I > 0)
    {
        std::cout << a.st[--I] << "\n";
    }
}

int main()
{
    Stack S1(20);
    S1.push(11);
    S1.push(22);
    S1.push(33);
    ViewContent(S1);
    S1.push(51);

    Stack::stack_counter();

    return 0;
}