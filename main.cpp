#include <bits/stdc++.h>
using namespace std;

signed main(){
    string name,surname,movie;
    cout<<"Your name: ";
    getline(cin,name);
    cout<<"Your surname: ";
    getline(cin,surname);
    cout<<"Your favourite movie: ";
    getline(cin,movie);
    fstream outf;
    outf.open("Readme.txt");
    outf<<name<<" "<<surname<<" "<<movie<<endl;
    return 0;
}
