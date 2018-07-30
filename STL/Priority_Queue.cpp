#include<iostream>
#include<cstdlib>
#include<queue>

using namespace std;

priority_queue<int>pq;

void Insert()
{
    int n;
    cout<<"Enter the value to be Inserted "<<endl;
    cin>>n;
    pq.push(n);
    return;
}

void Delete()
{
    int n=pq.top();
    if(!pq.empty())
    {
        pq.pop();
        cout<<"Element "<<n<<" Deleted "<<endl;
        return;
    }
    else
    {
        cout<<"Priority Queue is Empty "<<endl;
        return;
    }
}

void Size()
{
    cout<<"Size of the Priority Queue : "<<pq.size()<<endl;
    return;
}

void Top()
{
    cout<<"Top Element : "<<pq.top()<<endl;
    return;
}

void Menu()
{
    int choice;

    cout<<"Priority Queue Implementation in STL "<<endl<<endl;

    while(1)
    {
        cout<<"Enter 1 to Insert in Priority Queue :"<<endl;
        cout<<"Enter 2 to Delete from Priority Queue:  "<<endl;
        cout<<"Enter 3 to Show the Size of the priority Queue "<<endl;
        cout<<"Enter 4 to show the Top element of the Priority Queue :"<<endl;
        cout<<"Enter 5 for EXIT "<<endl;

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
            cout<<"Enter Correctly "<<endl;
        }
    }
}

int main()
{
    Menu();

    return 0;
}


