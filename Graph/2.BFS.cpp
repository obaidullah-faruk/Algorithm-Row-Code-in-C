#include<bits/stdc++.h>

using namespace std;

int main()
{
    int Vertex, Edge, C, V;
    cout<<"Enter the total number of Vertex : "<<endl;
    cin>>Vertex;
    int N=Vertex;
    vector<list<int> >AdjecentList(N);
    for(int i=0; i<N; i++)
    {
        cout<<"Enter how many vertex connected with Node "<<i<<" :"<<endl;
        cin>>C;
        cout<<"Enter the Vertices : "<<endl;
        for(int j=1; j<=C; j++)
        {
            cin>>V;
            AdjecentList[i].push_back(V);
        }
    }
    {
        cout<<"Connection with Vertex "<<i<<" "<<endl;
        list<int>::iterator itr = AdjecentList[i].begin();
        while(itr!=AdjecentList[i].end())
        {
        //    cout<<*itr<<" ";
         //   itr++;



        }
        queue<int>Q;
        cout<<"Enter the Starting Vertex : "<<endl;
    }



    return 0;
}
