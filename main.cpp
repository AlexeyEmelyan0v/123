#include <bits/stdc++.h>
using namespace std;
void out(){
    string str;
    fstream outf;
    outf.open("res.txt",ios::in);
    while(getline(outf,str)){
        cout<<str<<endl;
    }
}
signed main(){
    string name,surname,movie;
    cout<<"Your name: ";
    getline(cin,name);
    cout<<"Your surname: ";
    getline(cin,surname);
    cout<<"What book do you recommend to read? ";
    getline(cin,movie);
    fstream outf;
    outf.open("res.txt",ios::app);
    outf<<name<<" "<<surname<<" "<<movie<<endl;
    out();
    return 0;
}
