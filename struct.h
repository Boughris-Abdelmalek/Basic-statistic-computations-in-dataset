#ifndef STRUCT_H
#define STRUCT_H

typedef struct Data{ //AGE,GA_CTG,GA_b,SEX,weight,A1_min,A5_min
    int AGE;
    int GA_CTG;
    float GA_b;
    char Sex[30];
    int weight;
    int A1_min;
    int A5_min;
}Data;

#endif