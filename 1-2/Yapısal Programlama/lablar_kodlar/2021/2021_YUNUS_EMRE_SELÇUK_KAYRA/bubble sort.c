#include <stdio.h>
#include <locale.h>
#define SIZE 8
int main(){
	setlocale(LC_ALL,"turkish");
	int i,j,tmp;
	int *k=(int*)malloc(100*sizeof(int));;
	char* y=(char*)malloc(100*sizeof(char));
	strcpy(y,"selamun aleyk�m pappa");
	if(k!=NULL){
	for(i=0;i<SIZE;i++){
		printf("Tam say� %d'i gir\n",i+1);
		scanf("%d",(k+i));
	}
	printf("S�ralanmam�� dizi:\n");
	for(i=0;i<SIZE;i++){
		printf("%5d",*(k+i));}
		for(i=0;i<SIZE-1;i++){
		for(j=i+1;j<SIZE;j++){
			if(*(k+i)>*(k+j)){
				tmp=*(k+i);
				*(k+i)=*(k+j);
				*(k+j)=tmp;
				printf("\nDizi �u hale geldi :");
				for(tmp=0;tmp<SIZE;tmp++){
					printf("%5d",*(k+tmp));
				}
			}
		}
	}
	printf("\nS�ralanm�� Dizi : ");
	for(i=0;i<SIZE;i++)
	printf("%5d",*(k+i));
	printf("\n");}
	printf("%c\n",y[3]);
	return 0;
}
