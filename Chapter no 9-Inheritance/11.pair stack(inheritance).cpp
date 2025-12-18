#include <iostream>
using namespace std;

struct Pair {
    int x,y;
};

class Stack {
    int st[20], top;
public:
    Stack(){ top=0; }
    void push(int v){ st[top++]=v; }
    int pop(){ return st[--top]; }
};

class PairStack {
    Stack s;
public:
    void push(Pair p){
        s.push(p.x);
        s.push(p.y);
    }
    Pair pop(){
        Pair p;
        p.y=s.pop();
        p.x=s.pop();
        return p;
    }
};

int main() {
    PairStack ps;
    Pair p={1,2};
    ps.push(p);
    Pair q=ps.pop();
    cout<<q.x<<" "<<q.y;
}

