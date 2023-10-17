#include <iostream>
using namespace std;

int main() {
    int k,i,j;

    cout<<"Enter the number of rows :";
    cin>>k;

    for(i = 0;i < k;i++)
    {
        for(j = 0;j < i;j++)
        {
            cout<<i;
        }

        cout<<endl;
    }

    return 0;
}
