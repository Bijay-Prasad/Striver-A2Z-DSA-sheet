#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=n-1;i>=0;i--){
        char ch = 'A' + i;
        for(int j=0;j<n-i;j++){
            cout<<ch++<<" ";
        }
        cout<<endl;
    }
    return 0;
}