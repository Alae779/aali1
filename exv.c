#include<stdio.h>
#define note 100
float t[100];
int n=0,i;
void saisir(){
		printf("entrer le nombre des notes: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\tla note %d: ",i+1);
        scanf("%f",&t[i]);
    }
}
void afficher()	{
	for(i=0;i<n;i++){
        printf("\tla note %d est: %.2f\n",i+1,t[i]);
    }
}
float moyenne(int e, float l[e]){
	float sum=0;
	for(i=0;i<e;i++){
		sum=sum+l[i];
	}
	return sum/e;
}
int indice_max(int c, float t[c]){
	float max=t[0];
	int i_max=0;
	for(i=0;i<c;i++){
		if(t[i]>max){
			max=t[i];
			i_max=i;
		}
	}
	return i_max;
}
int indice_min(int v, float d[v]){
	float min=d[0];
	int i_min=0;
	for(i=0;i<v;i++){
		if(min>d[i]){
			min=d[i];
			i_min=i;
		}
	}
	return i_min;
}
int admis(int x, float t[x]){
	int ad=0;
	for(i=0;i<x;i++){
		if(t[i]>=10){
		ad=ad+1;	
		}
	}
	return ad;
}
int nonadmis(int x, float t[x]){
	int nad;
	for(i=0;i<x;i++){
		if(t[i]<10){
			nad=nad+1;
		}
	}
	return nad;
}
int modifier(int x, float t[x], int in, float nouvnote){
	t[in]=nouvnote;
}
int supprimer(int x, float t[x],int ind){
	for(i=ind;i<x;i++){
		t[i]=t[i+1];
   }
}
int ajouter(int a,float tabl[a],float valeur){
	tabl[a-1]=valeur;
}
int main(){
	while(1==1){
		int indice;//modifier
	float nouvelle_note;//modifier
	float add_note;
	printf("---------------------------------------------------------\n");
	printf("1) Saisir N notes \n");
	printf("2) Afficher les notes\n");
	printf("3) Statistiques (moyenne, max, min, admis/non admis)\n");
	printf("4) Ajouter une note\n");
	printf("5) Modifier une note (par index)\n");
	printf("6) Supprimer une note (par index)\n");
	printf("0) Quitter\n");
	printf("---------------------------------------------------------\n");
	int choix;
	int in;//supprimer
	printf("\n\n Entrer votre choix depuis le menu: ");scanf("%d",&choix);
	printf("\n\n");
	//--------------saisir-------------------
	switch(choix){
		case 1:
			saisir();
			printf("\n\n");
			break;
		case 2:
			if(n==0){
				printf("\t\t******Le tableau est vide*******\n\n");
				break;
			}
			afficher();
			printf("\n\n");
			break;
		case 3:
			if(n==0){
				printf("\t\t******Le tableau est vide*******\n\n");
				break;
			}
			printf("La moyenne : %.2f \n",moyenne(n,t));
    		printf("--------------------\n");
    		//----------------max et min----------------------------------
    		printf("\t l indice de la note max: %d\n",indice_max(n,t));
   			printf("la note max: %.2f\n",t[indice_max(n,t)]);
    		printf("\tl indice de la note min: %d\n",indice_min(n,t));
    		printf("la note min: %.2f\n",t[indice_min(n,t)]);
			printf("--------------------\n");
			//-----------------admis non admis----------------------------
			printf("le nombres des notes admis: %d\n",admis(n,t));
    		printf("le nombres des notes non admis: %d\n",nonadmis(n,t));
   			printf("--------------------\n");
   			printf("\n\n");
   			break;
   		case 4:
   			if(n==0){
				printf("\t\t******Le tableau est vide*******\n\n");
				break;
			}
   			n=n+1;
			printf("Entrer la note a ajouter: ");scanf("%f",&add_note);
			ajouter(n,t,add_note);
    		printf("\n\n");
    		break;
    	case 5:
    		if(n==0){
				printf("\t\t******Le tableau est vide*******\n\n");
				break;
			}
    		printf("entrer l indice de la note a modifier: ");
    		scanf("%d",&indice);
    		printf("entrer la nouvelle note: ");
    		scanf("%f",&nouvelle_note);
    		modifier(n,t,indice,nouvelle_note);
    		printf("\n\n");
    		break;
    	case 6:
    		if(n==0){
				printf("\t\t******Le tableau est vide*******\n\n");
				break;
			}
			printf("Donner l indice de la note a supprimer: ");
			scanf("%d",&in);
			supprimer(n,t,in);
			n=n-1;
    		printf("\n\n");
    		break;
    	case 0:
    		return 0;
    	default :
    		printf("Invalid choix.\n\n");
    		printf("\n\n");
    		break;
	}
	}
  return 0;
}