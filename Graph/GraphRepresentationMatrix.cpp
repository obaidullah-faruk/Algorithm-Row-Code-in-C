// MD. Obaidullah Al-Faruk
// LAB 1
// CSE245 , Sec 2.
// Directed Graph Using Matrix

#include<bits/stdc++.h>

using namespace std;

int Mat[100][100]={0};
int Vertex ;

void CreateGraph()
{
    int i,j,k;

    cout<<"Enter the total number of Vertex : "<<endl;
    cin>>Vertex;

    cout<<"Vertices named with 1 to 100 "<<endl<<endl;

    cout<<"Now Enter the Directed Edges of the Graph : "<<endl;
    cout<<"For Example Node 1 to 2 Enter 1 2 . Means 1 -> 2 . "<<endl<<endl;

    k=1;
    while(1)
    {
        cout<<"Edge "<<k<<": ";
        cin>>i>>j;
        if((i<0)|| (i>Vertex))
        {
            cout<<"Invalid Input "<<endl;
        }
        else if((i==0)||(j==0))
        {
            break;
        }
        else
        {
            Mat[i][j]=1;
            k++;
        }
    }
    cout<<endl;
    cout<<"Input Ended . "<<endl<<endl;

    return;
}

void InDegree()
{
    int a;
    int cnt=0;
    cout<<"Enter the Node for which you want to see the InDegree : "<<endl;
    cin>>a;

    for(int i=1; i<=Vertex; i++)
    {
        for(int j=a; j<=a; j++)
        {
            if(Mat[i][a]==1)
            {
                cnt++;
            }
        }
    }
    cout<<"The Indegree of "<<a<<" is : "<<cnt<<endl<<endl;
    return;
}

void OutDegree()
{
    int a;
    int cnt=0;
    cout<<"Enter the Node for which you want to see the OutDegree : "<<endl;
    cin>>a;

    for(int i=a; i<=a; i++)
    {
        for(int j=1; j<=Vertex; j++)
        {
            if(Mat[a][j]==1)
                cnt++;
        }
    }
    cout<<"The Outdegree of "<<a<<" is : "<<cnt<<endl<<endl;
    return;
}

int ShowGraph()
{
    int count=0;
    cout<<"Graph Representation : "<<endl<<endl;

    for(int i=1; i<=Vertex; i++)
    {
        for(int j=1; j<=Vertex; j++)
        {
            if(Mat[i][j]==1)
            {
                cout<<"1"<<" ";
                count++;
            }
            else
            {
                cout<<"0"<<" ";
                continue;
            }
        }
        cout<<endl;
    }
    cout<<endl;
    return count;
}

void Degree()
{
    int n=ShowGraph();

    cout<<"Total Outdegree : "<<n<<endl;
    cout<<"Total Indegree : "<<n<<endl;
    return;
}

void Odd_Indegree()
{
    int a;

    for(int a=1; a<=Vertex; a++)
    {
        int cnt=0;
        for(int i=1; i<=Vertex; i++)
        {
            for(int j=a; j<=a; j++)
            {
                if(Mat[i][a]==1)
                {
                    cnt++;
                }
            }
        }
        if(cnt%2==1)
        {
            cout<<a<<" ";
        }
    }
    cout<<endl;
}

void Maximum_Indegree()
{
    int a;
    int Max=0;;

    for(int a=1; a<=Vertex; a++)
    {
        int cnt=0;
        for(int i=1; i<=Vertex; i++)
        {
            for(int j=a; j<=a; j++)
            {
                if(Mat[i][a]==1)
                {
                    cnt++;
                }
            }
        }
        if(cnt>Max)
        {
            Max=a;
        }
    }
    cout<<"Vertex With Maximum Indegree : "<<Max<<endl;
    cout<<endl;
}

void Menu()
{
    int a;
    cout<<"\t\tDirected Graph Representation Using Matrix "<<endl<<endl;
    while(1)
    {
        cout<<"Option : "<<endl<<endl;
        cout<<"Enter 1 For create a Graph "<<endl;
        cout<<"Enter 2 For Show the Graph "<<endl;
        cout<<"Enter 3 for Show the Total Indegree and Outdegree : "<<endl;
        cout<<"Enter 4 for Show Individual Indegree : "<<endl;
        cout<<"Enter 5 for Show Individual Outdegree : "<<endl;
        cout<<"Enter 6 for Show the Vertices with Odd Indegree : "<<endl;
        cout<<"Enter 7 for Show the vertex with Maximum Indegree : "<<endl;
        cout<<"Enter 8 For EXIT "<<endl<<endl;
        cin>>a;

        switch(a)
        {
        case 1:
            CreateGraph();
            break;
        case 2:
            ShowGraph();
            break;
        case 3:
            Degree();
            break;
        case 4:
            InDegree();
            break;
        case 5:
            OutDegree();
            break;
        case 6:
            Odd_Indegree();
            break;
        case 7:
            Maximum_Indegree();
            break;
        case 8:
            exit(0);
        default:
            cout<<"Enter As The Menu Says . "<<endl<<endl;
        }
    }
}

int main()
{
    Menu();

    return 0;
}
