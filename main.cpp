#include <bits/stdc++.h>
using namespace std;

signed main(){
    string name,surname,movie;
    cout<<"Your name: ";
    getline(cin,name);
    cout<<"Your surname: ";
    getline(cin,surname);
    fstream inf;
    fstream outf;
    outf.open("res.txt",ios::app);
    inf.open("inputfile.txt",ios::in);
    outf<<name<<" "<<surname<<" ";
    string str;
    while(getline(inf,str)){
        cout<<str<<endl;
        getline(cin,str);
        outf<<str<<" ";
    }
    outf<<endl;
    return 0;
}
