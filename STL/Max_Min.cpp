#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int X[]={1,4,6,9,3,76,90,2,3};
    unsigned int array_length=sizeof(X)/sizeof(int);

    cout<<"Maximum Element : "<<*max_element(X,X+array_length)<<endl;
    cout<<"Minimum Element : "<<*min_element(X,X+array_length)<<endl;

    cout<<endl<<endl;

    vector<char>V;
    V.push_back('a');
    V.push_back('d');
    V.push_back('x');

    cout<<"Maximum Element : "<<*max_element(V.begin(),V.end())<<endl;
    cout<<"Minimum Element : "<<*min_element(V.begin(),V.end())<<endl;

    return 0;
}
