#include <locale.h>
#include <stdio.h>

typedef struct{
	int alimento,vacas,leite,nascimento, morta;
	int morte;
	int restantes;
	int media;
}vacasmortas;

int main(){
	
	vacasmortas vacas;
	
	setlocale(LC_ALL,"Portuguese");
	vacas.morta = 0;
	printf("quantas vacas sua fazenda possui? \n");
	scanf("%d", &vacas.vacas);
	
	for(int i = 1; i <= vacas.vacas; i++){
		printf("quantos anos a vaca %d tem?\n", i);	
		scanf("%d", &vacas.nascimento);
		
		if (vacas.nascimento > 5){
			printf("abate recomendado vaca veia\ndeseja abater a vaca %d?\n[1]Sim\n[2]Não\n", i);
			scanf("%d",&vacas.morte);
			if (vacas.morte==1){
				printf("vaca %d abatida\n", i);
				vacas.morta++;
				continue;
			}
			
		}
		
		printf("quantos litros de leite a vaca %d produz semanalmente?\n", i);
		scanf("%d", &vacas.leite);
		
		
		if (vacas.leite < 40){
			printf("abate recomendado\ndeseja abater a vaca %d?\n[1]Sim\n[2]Não\n", i);
			scanf("%d",&vacas.morte);
			if (vacas.morte==1){
				printf("vaca %d abatida\n", i);
				vacas.morta++;
				continue;
			}
			
		}
		
		printf("quanto, em kg, a vaca %d consome de alimento semanalmente?\n", i);
		scanf("%d",&vacas.alimento);
		
		if (vacas.alimento >50){
			printf("abate recomendado\ndeseja abater a vaca %d?\n[1]Sim\n[2]Não\n", i);
			scanf("%d",&vacas.morte);
			if (vacas.morte==1){
				printf("vaca %d abatida\n", i);
				vacas.morta++;
				continue;
			}if (vacas.alimento >= vacas.leite + 20){
				printf("a vaca %d nao produz lucros, o abate e recomendado\ndeseja abater a vaca %d? s/n\n", i, i);
				scanf("%d", &vacas.morte);
				if (vacas.morte==1){
				printf("vaca %d abatida\n", i);
				vacas.morta++;
				continue;
			}
			
			
		}
		

	}
	vacas.restantes = vacas.vacas - vacas.morta;
	if (vacas.restantes > 1){
		printf("restaram %d vacas", vacas.restantes);
	} else if (vacas.restantes == 0){
		printf("nao sobrou vacas... f total");
	}else{
		printf("restou uma vaca");
	}
	
	
}
}


