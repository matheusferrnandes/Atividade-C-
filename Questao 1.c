#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Q1 //

	struct aluno{
	char nome[40];
	int  idade;
	char sexo[30];
	
	};
	


const int tam=10;

int main (){



	printf("\t===== CADASTRO DE NOVOS ALUNOS ====\n");
	
	
	
		
		struct aluno m[tam];
		
	
	int i,comp;

	for(i=0;i<tam;i++){
		printf("Informe o nome do %dº aluno :\n",i+1);
		fflush(stdin);
		gets(m[i].nome);
		
		
		printf("Informe a idade do %dº aluno :\n",i+1);
		scanf("%d",&m[i].idade);
		
		printf("Informe o nome do %dº sexo :\n",i+1);
		fflush(stdin);
		gets(m[i].sexo);
		
			
			}
	printf("\n");	
			printf("====Alunos maiores de 10 anos====\n\n");
	
	char idadeA(struct aluno m[]);
	idadeA(m);
	
			printf("\n====Aluno mais novo====\n\n");
	printf("\n");
	
	char idadeMenor(struct aluno m[]);
	idadeMenor(m);
	printf("\n");
			printf("====Idades pares e impares====\n\n");
	
	void idadePar(struct aluno m[]);
	idadePar(m);
		printf("\n====Comparaçao de idade com valor====\n");
	printf("\n");
	printf("Informe um valor pra comparar com a idade:");
	scanf("%d",&comp);
	printf("\n");
	
	char idadeV(struct aluno m[],int comp);
   idadeV(m,comp);
	}
	
 // Q:A //
 
 char idadeA(struct aluno m[]){
 int i,maior=0;
 for(i=0;i<tam;i++){
 if(m[i].idade>10){
 	maior++;
 	
 }
 
 
 }
 
 return printf("Alunos com mais de 10 anos:%d\n",maior);
 }

//Q:B//	
		
 char idadeMenor(struct aluno m[]){
 int i,menor=m[0].idade,posMenor=0;
 for(i=0;i<tam;i++){
 if(m[i].idade<menor){
 		
	menor=m[i].idade;
	posMenor=i;	
	
		}	
		
		}
		
		 return printf("O aluno mais novo :%s,%d anos,%s\n",m[posMenor].nome,m[posMenor].idade,m[posMenor].sexo);
		};
		
	//Q:C//
 
 void idadePar(struct aluno m[]){
 int i;
 printf("\n");
 printf("Alunos com idades pares:\n");
 for(i=0;i<tam;i++){
 if(m[i].idade%2==0){
 printf("%s,%d anos,%s",m[i].nome,m[i].idade,m[i].sexo);
		 }
		 
	}
		printf("\n");
		printf("Alunos com idades imapares:\n");
 for(i=0;i<tam;i++){
 if(m[i].idade%2!=0){
 printf("%s,%d anos,%s",m[i].nome,m[i].idade,m[i].sexo);
		 }
		 
	}	
			}		
		
//Q:D//		

char idadeV(struct aluno m[],int comp){
 int i,maior=0;
 for(i=0;i<tam;i++){
 if(m[i].idade>comp){
 	maior++;
 	
 }
 
 
 }
 
 return printf("Quantidades de alunos com idade maior %d:%d\n",comp,maior);
 }
