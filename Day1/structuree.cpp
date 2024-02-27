#include<bits/stdc++.h>

using namespace std;

struct card {
    int face;
    int shape;
    int color;
};

struct Rectangle {
    int length;
    int breadth;
    char x;
};  

struct Rectangle r1 = {10, 5};

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    struct card c1;
    c1.face = 1;
    c1.shape = 2;
    c1.color = 3;

    cout<<c1.face<<endl;

    c1.face = 4;
    cout<<sizeof(r1)<<endl;

    cout<<c1.face<<endl;
    struct card deck[52];

    cout<<"Above is a structure of a card"<<endl;

    return 0;
}