// MD. Obaidullah Al-Faruk
// ID : 2013-2-60-038
// LAB Exam
// CSE245 , Sec 2

#include<bits/stdc++.h>
using namespace std;

void Naive_String_Match_a(char *String,char *Pattern)
{
    int N=strlen(String);
    int M=strlen(Pattern);

    if(N<M)
    {
        cout<<"No, Overlength pattern"<<endl;
        return;
    }
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
            cnt++;
        }
    }


    if(cnt!=0)
    {
        cout<<"Yes"<<endl;
        return;
    }
    else
    {
        cout<<"No"<<endl;
    }

}

void Naive_String_Match_b(char *String,char *Pattern)
{
    int N=strlen(String);
    int M=strlen(Pattern);

    if(N<M)
    {
        cout<<"No, Overlength pattern"<<endl;
        return;
    }

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
            cnt++;
        }
    }
    cout<<cnt<<" Match Found"<<endl;

    return;
}


void Naive_String_Match(char *String,char *Pattern)
{
    int N=strlen(String);
    int M=strlen(Pattern);

    if(N<M)
    {
        cout<<"No, Overlength pattern"<<endl;
        return;
    }

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
            cout<<"Match found in "<<i<<endl;
        }
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
        char c;
        cin>>c;
        switch(c)
        {
    case 'a':
        Naive_String_Match_a(String,Pattern);
        break;
    case 'b':
        Naive_String_Match_b(String,Pattern);
        break;
    case 'c':
        Naive_String_Match(String,Pattern);
        break;

        }
    }

    return 0;
}

