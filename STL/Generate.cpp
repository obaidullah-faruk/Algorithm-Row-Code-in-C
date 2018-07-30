#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector<int>V(16);
    generate(V.begin(),V.end(),rand);

    for(int i=0;i<V.size();i++)
    {
        cout<<V[i]<<endl;
    }

    return 0;
}
