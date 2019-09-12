#include <stdio.h>
#include <stdlib.h>
int n=5;
int maiormedia(float medias[], int n){
    int posi =0;
    int i=0;
    float maior = medias[0];
    for(i=1;i<n;i++){
        if(maior<medias[i]){
            maior=medias[i];
            posi=i;
        }
    }
    return posi;
}

typedef struct{
    char nome[21];
    char mat[12];
    float n1,n2,n3;
}Aluno;
int main(void){
    Aluno al[n];
    int j=0;
    int i=0;
    float medias[n];
    for(i=0;i<n;i++){
        printf("ALUNO NUMERO %i:\n ",i+1);
        printf("Matricula do aluno: ");
        fflush(stdin);
        gets(al[i].mat);
        printf("\nNome do aluno: ");
        fflush(stdin);
        gets(al[i].nome);
        printf("\nPrimeira nota: ");
        fflush(stdin);
        scanf("%f",&al[i].n1);
        printf("\nSegunda nota: ");
        fflush(stdin);
        scanf("%f",&al[i].n2);
        printf("\nTerceira nota: ");
        fflush(stdin);
        scanf("%f",&al[i].n3);
        system("cls");
        medias[i]=(al[i].n1+al[i].n2+al[i].n3)/3;
    }
    j=maiormedia(medias,n);
    printf("\nA maior media foi: %.2f\n",medias[j]);
    printf("Aluno: %s\nMatricula: %s\nNota 1: %.2f\nNota 2: %.2f\nNota 3: %.2f\n",al[j].nome,al[j].mat,al[j].n1,al[j].n2,al[j].n3);
}
