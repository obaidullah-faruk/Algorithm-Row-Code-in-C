#include<iostream>
#include<cstdlib>
#include<vector>

using namespace std;

vector<int>V;
vector<int>::iterator it;


void Insert()
{
    int n;
    cout<<"Enter the value to be Inserted "<<endl;
    cin>>n;
    V.push_back(n);
    return;
}

void Delete_Last()
{
    int n=V.back();
    V.pop_back();
    cout<<"Element "<<n<<" Deleted "<<endl;
    return;
}

void Size()
{
    cout<<"Size of the vector is : "<<V.size()<<endl;
    return;
}

void Display()
{
    for(int i=0;i<V.size();i++)
    {
        cout<<V[i]<<" ";
    }
    cout<<endl;
}

void Display_it()
{
    for(it=V.begin();it!=V.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

void Clear()
{
    V.clear();
    cout<<"Vector Cleared "<<endl;
}

void Menu()
{
    int choice;
    cout<<"Vector Implementation in STL "<<endl<<endl;

    while(1)
    {
        cout<<"Enter 1 to Insert element in Vector "<<endl;
        cout<<"Enter 2 to Delete Last element of Vector "<<endl;
        cout<<"Enter 3 to Show the Size of the vector "<<endl;
        cout<<"Enter 4 to Display by Index "<<endl;
        cout<<"Enter 5 to Display by Iterator "<<endl;
        cout<<"Enter 6 to Clear the Vector "<<endl;
        cout<<"Enter 7 for EXIT "<<endl<<endl;

        cin>>choice;

        switch(choice)
        {
        case 1:
            Insert();
            break;
        case 2:
            Delete_Last();
            break;
        case 3:
            Size();
            break;
        case 4:
            Display();
            break;
        case 5:
            Display_it();
            break;
        case 6:
            Clear();
            break;
        case 7:
            exit(0);
        default:
            cout<<"Enter Correctly "<<endl<<endl;
        }
    }
}

int main()
{
    Menu();
    return 0;
}
