#include "random.h"
#include "uniform.h"
#include<iostream>
using namespace std;
int main(){
    Random r;
    Uniform u;
    cout<<r.generateRandom(20)<<endl;
    cout<<u.generateRandom(20)<<endl;
    return 0;
}