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

void change_q() {
    ofstream res;
    res.open("res.txt");
    ofstream in;
    in.open("q.txt");
    cout << "Number of questions: ";
    int k; cin >> k;
    string q; getline(cin, q);
    for (int i = 0; i < k; ++i) {
        getline(cin, q);
        in << q << "\n";
    }
}

signed main(){
    string cmd;
    cout<<"Enter 1 if you want to answer the questions of the survey or enter 2 if you want to see the results of the survey or enter 3 if you want to change questions"<<endl;
    getline(cin,cmd);
    cout<<endl;
    if(cmd=="1"){
        ifstream q;
        ofstream res;
        q.open("q.txt");
        res.open("res.txt", ios::app);
        string qt;
        while (getline(q, qt)) {
            cout << qt << ' ';
            string ans; cin >> ans;
            res << ans << "\n";
        }
        cout << "\n";
    }else if(cmd=="2"){
        int q;
        cin>>q;
        out(q);
    } else {
        change_q();
    }
    return 0;
}
