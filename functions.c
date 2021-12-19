#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"struct.h"

    Data data[500];
    char buffer[200];
    char *item;
    int i = 0;

void ReadData()
{
    FILE* fp = fopen("DATA.csv", "r");
    if(fp == NULL){
        printf("File not opened !\n");
    }

    while(fgets(buffer, 200, fp) != NULL){

        item = strtok(buffer, ";");
        data[i].AGE = atoi(item);

        item = strtok(NULL, ";");
        data[i].GA_CTG = atoi(item);

        item = strtok(NULL, ";");
        data[i].GA_b = atof(item);

        item = strtok(NULL, ";");
        strcpy(data[i].Sex, item);

        item = strtok(NULL, ";");
        data[i].weight = atoi(item);

        item = strtok(NULL, ";");
        data[i].A1_min = atoi(item);

        item = strtok(NULL, ";");
        data[i].A5_min = atoi(item);

        i++;
    }
        fclose(fp);
}

/*void ReadAll(){
    int k;

    ReadData();

    for (k = 0; k < i; i++){
        printf("Age : %d\t|", data[k].AGE);
        printf("GA_CTG : %d\t|", data[k].GA_CTG);
        printf("GA_b : %.1f\t|", data[k].GA_b);
        printf("Sex : %s\t|", data[k].Sex);
        printf("Weight : %d (g)\t|", data[k].weight);
        printf("A1-min : %d\t|", data[k].A1_min);
        printf("A5-min : %d", data[k].A5_min);
    }
}*/