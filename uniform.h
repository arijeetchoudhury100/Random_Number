#ifndef UNIFORM_H
#define UNIFORM_H
#include<cstdlib>
#include<ctime>
class Uniform{
    public:
        int generateRandom(int range){
            srand(time(0));
            return rand()%range;
        }
};
#endif