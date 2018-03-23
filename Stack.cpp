#include<iostream>
#include"Stack.h"
using namespace std;

void Stack:: push(Item entry){

data[used]=entry;
used++;

}

Stack::Item Stack::pop(){

used--;
return data[used];

}

ostream &operator <<(ostream &out_put,Stack &s){

while(s.empty()==false){

    while(s.size() != 1){
    out_put<<s.pop()<<" x ";
    }
    if(s.size()==1){
        out_put<<s.pop();
    }
}
return out_put;
}

