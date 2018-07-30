#include<iostream>
#include<cstdlib>
#include<stack>

using namespace std;

stack<int>s;

void Insert()
{
    int n;
    cout<<"Enter the value to be inserted : "<<endl;
    cin>>n;
    s.push(n);
    return;
}

void Delete()
{
    int n=s.top();
    s.pop();
    cout<<"Element "<<n<<" Deleted "<<endl;
    return;
}

void Size()
{
    cout<<"Size of The Stack : "<<s.size()<<endl;
    return;
}

void Top()
{
    cout<<"Top Stack is : "<<s.top()<<endl;
    return;
}

void Menu()
{
    int choice;
    while(1)
    {
        cout<<"Stack Implementation in STL :"<<endl<<endl;
        cout<<"Enter 1 to Insert element in Stack : "<<endl;
        cout<<"Enter 2 to Delete element from Stack : "<<endl;
        cout<<"Enter 3 to See the Size of the Stack : "<<endl;
        cout<<"Enter 4 to Show the top Stack : "<<endl;
        cout<<"Enter 5 for EXIT "<<endl<<endl;

        cin>>choice;

        switch(choice)
        {
        case 1:
            Insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            Size();
            break;
        case 4:
            Top();
            break;
        case 5:
            exit(0);
        default:
            cout<<"Enter Correctly : "<<endl;
        }
    }

}

int main()
{
    Menu();

    return 0;
}
