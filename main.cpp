#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> calorias(4);
    string pasos;
    int gasto=0;
    for(int i = 0; i < 4; i++)
        cin>>calorias[i];
    cin>>pasos;
    int nP = pasos.size();
    for(int i = 0; i < nP; i++ ){
        gasto+=calorias[pasos[i]-49];
    }
    cout<<gasto<<endl;
    return 0;
}
