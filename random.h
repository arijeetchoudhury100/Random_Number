#ifndef RANDOM_H
#define RANDOM_H
#include<ctime>
#define MAX 2147483647
#define A 16807
class Random{
    int seed;
    public:
        Random(){
            seed = time(0);
        }
        int generateRandom(int range){
            return ((seed*A + MAX)%MAX)%range;
        }
};
#endif