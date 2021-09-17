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
    string cmd;
    cout<<"Enter 1 if you want to answer the questions of the survey or enter 2 if you want to see the results of the survey"<<endl;
    getline(cin,cmd);
    cout<<endl;
    if(cmd=="1"){
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
    }else if(cmd=="2"){
        out();
    }
    return 0;
}
