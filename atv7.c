#include <stdio.h>
#include <stdlib.h>
int n=2;
typedef struct{
    char nome[21];
    long mat;
    float medPOO;
    float medAOC;
    float medMATDISC;
}Aluno;
float mediaaluno(Aluno *vet[],int n){
    float media=0,total=0;
    int i=0;
    total=vet[i]->medPOO+vet[i]->medAOC+vet[i]->medMATDISC;
    media=total/3;
    return media;
}
int main(void){
    Aluno *all[n];
    int i=0;
    for(i=0;i<n;i++){
        all[i]=(Aluno*)malloc(sizeof(Aluno));
        system("cls");
        printf("\nAluno %i:",i+1);
        printf("\nNome: ");
        fflush(stdin);
        gets(all[i]->nome);
        printf("\nMatricula: ");
        fflush(stdin);
        scanf("%li",&all[i]->mat);
        printf("\nMedia em POO: ");
        fflush(stdin);
        scanf("%f",&all[i]->medPOO);
        printf("\nMedia em AOC: ");
        fflush(stdin);
        scanf("%f",&all[i]->medAOC);
        printf("\nMedia em MATDISC: ");
        fflush(stdin);
        scanf("%f",&all[i]->medMATDISC);
        printf("\nMedia desse aluno: %.2f\n",mediaaluno(all,n));
        system("pause");
    }
    free(all);
}
