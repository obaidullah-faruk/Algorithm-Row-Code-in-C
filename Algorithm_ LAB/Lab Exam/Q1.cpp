#include<bits/stdc++.h>

using namespace std;

vector<int>V;
vector<int>::iterator it;

void Naive_String_Match(char *String,char *Pattern)
{
    int N=strlen(String);
    int M=strlen(Pattern);

    int cnt=0;
    for(int i=0; i<=N-M; i++)
    {
        int count=0;
        for(int j=0; j<M; j++)
        {
            if(String[i+j]==Pattern[j])
            {
                count++;
            }
        }
        if(count==M)
        {
            V.push_back(i);
            cnt++;
        }
    }
    if(cnt!=0)
    {
        cout<<"Yes"<<endl;
    }

    if(cnt==0)
    {
        cout<<"No"<<endl;
    }

    if(N<M)
    {
        cout<<"No, Overlength pattern"<<endl;
        return;
    }
    if(cnt!=0)
    {
        cout<<cnt<<" Match Found"<<endl;
        for(it=V.begin(); it!=V.end(); it++)
        {
            cout<<"Match found in "<<*it<<endl;
        }
        V.clear();
    }

    return;
}

int main()
{
    char String[40],Pattern[40];

    while(1)
    {
        cout<<"Enter the String: "<<endl;
        cin>>String;
        cout<<"Enter the Pattern : "<<endl;
        cin>>Pattern;

        Naive_String_Match(String,Pattern);
    }
}
