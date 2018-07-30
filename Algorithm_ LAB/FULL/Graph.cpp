#include<bits/stdc++.h>
#define White 0;
#define Grey 1;
#define Black 2;

using namespace std;

int Mat[100][100]= {0};
int Clr[100],Dis[100],Prev[100],fin[100];
int t=0;
int Vertex;

void Directed_Graph()
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

void Undirected_Graph()
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
            Mat[j][i]=1;
            k++;
        }
    }
    cout<<endl;
    cout<<"Input Ended . "<<endl<<endl;

    return;

}

void ShowGraph()
{
    cout<<endl<<endl;
    for(int i=1; i<=Vertex; i++)
    {
        for(int j=1; j<=Vertex; j++)
        {
            if(Mat[i][j]==1 || Mat[j][i]==1)
            {
                cout<<"1"<<" ";
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
}

void BFS()
{
    int s,u;

    cout<<"Enter the Source Vertex : "<<endl;
    cin>>s;

    queue<int>Q;

    for(int i=1; i<=Vertex; i++)
    {
        Clr[i]=0;
        Dis[i]=100000000;
        Prev[i]=-1;
    }

    cout<<s<<" ";

    Clr[s]=1;
    Dis[s]=0;

    Q.push(s);

    while(!Q.empty())
    {
        u=Q.front();
        Q.pop();

        for(int i=1; i<=Vertex; i++)
        {
            if(Mat[u][i]==1 && Clr[i]==0)
            {
                cout<<i<<" ";
                Clr[i]=1;
                Dis[i]=Dis[u]+1;
                Prev[i]=u;
                Q.push(i);
            }
        }
        Clr[u]=2;
    }
}

void DFS_Visit(int s)
{
    int j;
    t=t+1;
    Dis[s]=t;
    Clr[s]=1;
    for(int i=1; i<=Vertex; i++)
    {
        if(Mat[s][i]==1 && Clr[i]==0)
        {
            Prev[i]=s;
            DFS_Visit(i);
        }
    }
    Clr[s]=2;
   cout<<s<<" ";
    t++;
    fin[s]=t;

}

void Menu()
{
    int choice;
    while(1)
    {
        cout<<"Enter 1 for Create a Directed Graph : "<<endl;
        cout<<"Enter 2 for Create an Undirected Graph : "<<endl;
        cout<<"Enter 3 for Show Graph : "<<endl;
        cout<<"Enter 4 for Breath Fast Traversal ( BFS ) : "<<endl;
        cout<<"Enter 5 for Depth Fast Traversal ( DFS ) : "<<endl;
        cout<<"Enter 8 for EXIT : "<<endl;

        cin>>choice;

        switch(choice)
        {
        case 1:
            Directed_Graph();
            break;
        case 2:
            Undirected_Graph();
            break;
        case 3:
            ShowGraph();
            break;
        case 4:
            BFS();
            break;
        case 5:
            for(int i=1; i<=Vertex; i++)
            {
                Clr[i]=0;
            }
            for(int i=1; i<=Vertex; i++)
            {
                if(Clr[i]==0)
                    DFS_Visit(i);
            }
            break;
        case 8:
            exit(0);
        default:
            continue;
        }
    }

}

int main()
{
    Menu();

    return 0;
}
