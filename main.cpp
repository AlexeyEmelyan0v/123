#include <bits/stdc++.h>
using namespace std;
void out(int q){
    string str,name,surname,book;
    fstream outf;
    set<vector<string>> s;
    outf.open("res.txt",ios::in);
    if(q==1){
        while(outf>>name>>surname>>book){
            vector<string> a(3);
            a[0]=name;
            a[1]=surname;
            a[2]=book;
            s.insert(a);
        }
        for(auto elem: s){
            cout<<elem[0]<<" "<<elem[1]<<" "<<elem[2]<<endl;
        }
    }else if(q==2){
        while(outf>>name>>surname>>book){
            vector<string> a(3);
            a[0]=surname;
            a[1]=name;
            a[2]=book;
            s.insert(a);
        }
        for(auto elem: s){
            cout<<elem[1]<<" "<<elem[0]<<" "<<elem[2]<<endl;
        }
    }else if(q==3){
        while(outf>>name>>surname>>book){
            vector<string> a(3);
            a[0]=book;
            a[1]=name;
            a[2]=surname;
            s.insert(a);
        }
        for(auto elem: s){
            cout<<elem[1]<<" "<<elem[2]<<" "<<elem[0]<<endl;
        }
    }
}

signed main(){
    string cmd;
    cout<<"Enter 1 if you want to answer the questions of the survey or enter 2 if you want to see the results of the survey"<<endl;
    getline(cin,cmd);
    cout<<endl;
    if(cmd=="1"){
    string name,surname;
    cout<<"Your name: ";
    getline(cin,name);
    cout<<"Your surname: ";
    getline(cin,surname);
    fstream outf;
    outf.open("res.txt",ios::app);
    string str;
    cout<<"What book do you recommend to read?"<<endl;
    getline(cin,str);
    outf<<name<<" "<<surname<<" "<<str<<endl;
    }else if(cmd=="2"){
        int q;
        cin>>q;
        out(q);
    }
    return 0;
}
