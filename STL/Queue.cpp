#include<bits/stdc++.h>

using namespace std;

queue<int>q;

void Insert()
{
    int n;
    cout<<"Enter the value to be inserted : "<<endl;
    cin>>n;
    q.push(n);
    return;
}

void Delete()
{
    int n=q.front();
    q.pop();
    cout<<"Element "<<n<<" Deleted ."<<endl;
    return;
}

void Size()
{
    cout<<"Size of Queue is : "<<q.size()<<endl;
    return;
}

void Front()
{
    cout<<"Front element of the queue : "<<q.front()<<endl;
    return;
}

void Rear()
{
    cout<<"Last element of the queue : "<<q.back()<<endl;
    return;
}

void Menu()
{
    int choice;

    while(1)
    {
        cout<<"Queue Implementation in STL :"<<endl<<endl;
        cout<<"Enter 1 to Insert element into Queue : "<<endl;
        cout<<"Enter 2 to Delete element from the Queue : "<<endl;
        cout<<"Enter 3 to see the size of Queue : "<<endl;
        cout<<"Enter 4 to show the Front element of the Queue : "<<endl;
        cout<<"Enter 5 to show the Last element of the Queue : "<<endl;
        cout<<"Enter 6 for EXIT : "<<endl<<endl;

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
            Front();
            break;
        case 5:
            Rear();
            break;
        case 6:
            exit(0);
        default:
            cout<<"Enter Accordingly to the menu ."<<endl;
        }
    }

}

int main()
{
    Menu();

    return 0;
}
