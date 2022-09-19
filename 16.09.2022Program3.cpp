#include <iostream>
using namespace std;
int main(){
    float x,y,z;
    cout<<"Ievadiet malu garumus identiskas mervienibas"<<endl;
    cout<<"Ievadiet isako malu vertibas/gadijuma, ja visas malas ir vienadas ievadiet 2 malu garumu:";
    cin>>x>>y;
    cout<<"Ievadiet garako malu/gadijuma, ja malas ir vienadas ievadiet tresas malas garumu:";
    cin>>z;
    if(x+y>z){
        cout<<"Eksiste";
    }
    else{
        cout<<"Neeksiste";
    }
    
}

    