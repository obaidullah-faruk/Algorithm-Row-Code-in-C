#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

string::iterator it;

string S,Str="This is a string.";

void Insert_Sub()
{
    int pos;
    cout<<"Enter the Substring to be Inserted :"<<endl;
    cin>>S;
    cout<<"Enter the Position after Substring to be Inserted :"<<endl;
    cin>>pos;

    if(pos<=Str.length())
    {
        Str.insert(pos,S);
    }
    else
    {
        cout<<"Position out of Bounds "<<endl;
    }
    return;
}

void Erase()
{
    int pos,len;
    cout<<"Enter the position after Substring to be Erased :"<<endl;
    cin>>pos;
    cout<<"Enter the Length of the substring to be Erased :"<<endl;
    cin>>len;
    Str.erase(pos,len);
    return;
}

void Append()
{
    S="This is an append string.";
    Str.append(S);
    return;
}

void Replace_Sub()
{
    S="An Example";
    Str.replace(9,5,S);
    return;
}

void Size()
{
    cout<<"Size of the string : "<<Str.size()<<endl;
    return;
}

void Display()
{
    for(it=Str.begin(); it!=Str.end(); it++)
    {
        cout<<*it;
    }
    cout<<endl;
}

void Menu()
{
    int choice;

    cout<<"String Implementation in STL "<<endl<<endl;
    cout<<"Initial String is :"<<Str<<endl;

    while(1)
    {
        cout<<"Enter 1 for Insert Substring in String "<<endl;
        cout<<"Enter 2 for Erase Substring from a String "<<endl;
        cout<<"Enter 3 Append Substring to a string "<<endl;
        cout<<"Enter 4 Replace the Substring with a string "<<endl;
        cout<<"Enter 5 to Show the Size of a String "<<endl;
        cout<<"Enter 6 to find Substring in a String "<<endl;
        cout<<"Enter 7 to Display the String "<<endl;
        cout<<"Enter 8 for EXIT "<<endl<<endl;

        cin>>choice;
        switch(choice)
        {
        case 1:
            Insert_Sub();
            break;
        case 2:
            Erase();
            break;
        case 3:
            Append();
            break;
        case 4:
            Replace_Sub();
            break;
        case 5:
            Size();
            break;
        case 6:
        case 7:
            Display();
            break;
        case 8:
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
