#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 500 
#define NMAX 1200

/*********************les structures utilise dans ce prog****************************/
//-------------->prog ecrit par AICHA AIT HAMMOUCH
typedef struct voiture{
	int idVoiture;
	char marque[15];
	char nomVoiture[15];
	char Couleur[7];
	int nbplaces;
	int prixJour;
	char EnLocation[4];
}voiture;

typedef struct date{
	int day;
	int month;
	int year;
}date;

typedef struct constratLocation{
	float numContrat;
	int idVoiture;
	int idClient;
	date debut;
	date fin;
	int cout;
}contrat;
typedef struct CIN{
	char xy[2];
	int nb[6];
}cin;
typedef struct Client{
	int idClient;
	char nom[20];
	char prenom[20];
	cin cin;
	char adresse[15];
	int telephone;
}client;

/******************Menu Principal**********************/

int menuprincipale(){
	int choix;
	printf("\n                            \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	printf("\n                            \xb3 MENU PRICIPALE  \xb3");
	printf("\n                            \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
	printf("\n");
	
	printf("             \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n             \xba                                              \xba");
	printf("\n             \xba  Location................................1   \xba");
	printf("\n             \xba  Gestion Voitures........................2   \xba");
	printf("\n             \xba  Gestionn Clients........................3   \xba");
	printf("\n             \xba  Quitter.................................4   \xba");
	printf("\n             \xba                                              \xba");
	printf("\n             \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    do{
		 printf("\n\n                              Votre Choix  :  ");
    	scanf("%d",&choix);
	   }while(choix<=0||choix>4);
    return choix;
}

/**********Menu gestion voitures***********/
int menugestionvoitures(){
	int choic1;
	printf("\n                            \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	printf("\n                            \xb3 GESTION DES VOITURES \xb3");
	printf("\n                            \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
	printf("\n");
	
	printf("              \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n              \xba                                                  \xba");
	printf("\n              \xba   Liste des voitures.........................1   \xba");
	printf("\n              \xba   Ajouter voiture............................2   \xba");
	printf("\n              \xba   Modifier voiture...........................3   \xba");
	printf("\n              \xba   Supprimer voiture..........................4   \xba");
	printf("\n              \xba   Retour.....................................5   \xba");
	printf("\n              \xba                                                  \xba");
	printf("\n              \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    do{
    	printf("\n\n                                 Votre choix :  ");
    	scanf("%d",&choic1);
	}while(choic1<=0||choic1>5);
	return choic1;
}

/*******************Menu location d'une voiture***********************/
int menulocationvoiture(){
	int choic2;
	printf("\n                            \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	printf("\n                            \xb3 LOCATION D'UNE VOITURE \xb3");
	printf("\n                            \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
	printf("\n");
	
	printf("              \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n              \xba                                                  \xba");
	printf("\n              \xba   Visualiser contrat.........................1   \xba");
	printf("\n              \xba   Louer voiture..............................2   \xba");
	printf("\n              \xba   Retourner voiture..........................3   \xba");
	printf("\n              \xba   Modifier contrat...........................4   \xba");
	printf("\n              \xba   Supprimer contrat..........................5   \xba");
	printf("\n              \xba   Retour.....................................6   \xba");
	printf("\n              \xba                                                  \xba");
	printf("\n              \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    do{
    	printf("\n\n                                 Votre choix :  ");
    	scanf("%d",&choic2);
	}while(choic2<=0||choic2>6);
    return choic2;
}

/*********************Menu Gestion des clients*************************/
int menugestionclients(){
	int choic3;
	printf("\n                            \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	printf("\n                            \xb3 GESTION DES CLIENTS \xb3");
	printf("\n                            \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
	printf("\n");
	
	printf("              \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n              \xba                                                  \xba");
	printf("\n              \xba   Liste des Clients..........................1   \xba");
	printf("\n              \xba   Ajouter Client.............................2   \xba");
	printf("\n              \xba   Modifier Client............................3   \xba");
	printf("\n              \xba   Supprimer Client...........................4   \xba");
	printf("\n              \xba   Retour.....................................5   \xba");
	printf("\n              \xba                                                  \xba");
	printf("\n              \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    do{
    	printf("\n\n                                 Votre choix :  ");
    	scanf("%d",&choic3);
	}while(choic3<=0||choic3>5);
	return choic3;
}
/***********************************************************GESTION DES VOITURES**********************************************************************************/
      /*----------liste des voitures---------*/
void  listev(FILE *F){
 	char ch;
 	F=fopen("voitures.txt","r");
 	if(F!=NULL){ 
 		if(fgetc(F)==EOF){
 			printf("Pas de voiture pour alouer!");
	    } else{
 			ch=fgetc(F);
 			printf("\n==========les infos des voitures sous forme suivant======================");
 			printf("\nID Voiture | Marque voiture | Nom Voiture | Colour voiture | Nomber de place | Prix par jour | Enlocation\n\n");
  	  		while(ch!=EOF){
	   		printf("%c",ch);
  			ch=fgetc(F); } 
		}
    } else printf("Ce fichier n'existe pas !!");
}

     /*-------------Ajouter voitures-------------*/
int rechid(int idv){//cette fonction pour verifier si l id du voiture ajouter est deja existe
voiture newcar ;
FILE *f=NULL;
f=fopen("voitures.txt","r");
while(!feof(f)){
	fscanf(f,"%d | %s | %s | %s | %d | %d | %s",&newcar.idVoiture,newcar.marque,newcar.nomVoiture,newcar.Couleur,&newcar.nbplaces,&newcar.prixJour,newcar.EnLocation);
	if(newcar.idVoiture==idv){
	return 1;
	fclose(f);	
	}else{
		 return 0;
	    fclose(f);
	}
}	fclose(f);
}
 
void ajouterv(){
	int x,id;
  	voiture car;
  	FILE *f=NULL;
	printf("***voulliez vous donnes les infos du nouvelle voiture ***\n");
  	
  	printf("\nId voiture.......: ");
  	scanf("%d",&id);
	x=rechid(id);
	do{
		printf("ce nombre est deja existe !");
		printf("\nId voiture.......: ");
  		scanf("%d",&car.idVoiture);
		x=rechid(car.idVoiture);
	}while(x==1);
  	printf("\nMarque...........: ");
  	scanf("%s",car.marque);
  	printf("\nNom du voiture...: ");
  	scanf("%s",car.nomVoiture);
  	printf("\nLa couleur.......: ");
  	scanf("%s",car.Couleur);
  	printf("\nNombre du places.: ");
  	scanf("%d",&car.nbplaces);
  	printf("\nPrix par jour....: ");
  	scanf("%d",&car.prixJour);
  	printf("\nEnlocation OUI/NON:");
  	scanf("%s",car.EnLocation);
  	
  	//ouvrir le fichier voitures en mode d'ajout
  	f=fopen("voitures.txt","a");
  	if(f){	
	    fprintf(f,"\n%d | %s | %s | %s | %d | %d | %s",car.idVoiture,car.marque,car.nomVoiture,car.Couleur,car.nbplaces,car.prixJour,car.EnLocation);
	    fclose(f);
	  }
	  fclose(f);	
  }  
   /*-------------Supprimer voiture-------------*/

void supprimer(){
	FILE* fichier;
	FILE * file;
	voiture car;
	int idcar,nbp,prx;
	char marqv[15],nomv[15],clr[7],enloc[7];
    int idanc,idnew;
	
	fichier = fopen("voitures.txt","r");
	listev(fichier);
	printf("\n\ndonner l'id de la voiture que vous voullez supprimer : ");
	scanf("%d",&idnew);
	file = fopen("ftmp.txt","w");


		while(!feof(fichier)){
		fscanf(fichier,"%d | %s | %s | %s | %d | %d | %s",&idcar,marqv,nomv,clr,&nbp,&prx,enloc);
		if(idnew!=idcar){
			fprintf(file,"\n%d | %s | %s | %s | %d | %d | %s",idcar,marqv,nomv,clr,nbp,prx,enloc);
		}
	}
	
	fclose(file);
	fclose(fichier); 
	//j un probleme ici remove et rename mach pas !!
	remove("voiture.txt");
   	rename("ftmp.txt","voitures.txt");
	
	printf("\n la suppression est effectue avec succes\n\n");	
}


    /*--------------Modifier voiture---------------*/
int nblign(FILE *F,const char *name){
	F=fopen(name,"r");
	char c; 
	int i=0;
	c=fgetc(F);
	while(c!=EOF){
		if(c=='\n') i++;             
	 	c=fgetc(F);
	}
	return i;
}
void Modifier(FILE *f){

	int idvoiture,nbl,k,i;
	char reponse;
	voiture *tab,*pt;
	nbl=nblign(f,"voitures.txt");
	f = fopen("voitures.txt","r");

	tab=(voiture*)malloc(nbl*sizeof(voiture));
	printf("\n\nvous veuillez vraiment faire c'est operation O/N:");
	scanf("%s",&reponse);
	if(reponse=='o'||reponse=='O'){
	listev(f);	
	printf("\n\n************************Avant Modifier*********************************\n");
	for(pt=tab;pt<tab+nbl;pt++){
	fscanf(f,"\n%d | %s | %s | %s | %d | %d | %s",&pt->idVoiture,pt->marque,pt->nomVoiture,pt->Couleur,&pt->nbplaces,&pt->prixJour,pt->EnLocation);
	}
	fclose(f);
	printf("  \n \nveuillez entrer le id a modifier : ");
	scanf("%d",&idvoiture);
	
	
  
    for(pt=tab;pt<tab+nbl;pt++){ 
	f=fopen("file.txt","a");
    	if(pt->idVoiture==idvoiture){
	printf("                  ->id de voiture....................:");
    scanf("%d",&pt->idVoiture);
    fflush(stdin);
	printf("                  ->la marque  de voiture............:");
    scanf("%s",pt->marque);
	fflush(stdin);
    printf("                  ->le nom de voiture................:");
    scanf("%s",pt->nomVoiture);
    fflush(stdin);
    printf("                  ->colour de voiture................:");
    scanf("%s",pt->Couleur);
    fflush(stdin);
    printf("                  ->Nomber de place..................:");
    scanf("%d",&pt->nbplaces);
    fflush(stdin);
    printf("                  ->prix par jour de voiture.........:");
    scanf("%d",&pt->prixJour);
    fflush(stdin);
    printf("                  ->Enlocation Oui/No................:");
    scanf("%s",pt->EnLocation);
    fflush(stdin);
  	fprintf(f,"\n%d | %s | %s | %s | %d | %d | %s",pt->idVoiture,pt->marque,pt->nomVoiture,pt->Couleur,pt->nbplaces,pt->prixJour,pt->EnLocation);
    printf("       ==============DONE============");	
    fclose(f);
		}	else { 
	fprintf(f,"\n%d | %s | %s | %s | %d | %d | %s",pt->idVoiture,pt->marque,pt->nomVoiture,pt->Couleur,pt->nbplaces,pt->prixJour,pt->EnLocation);
	 
		}  
	}//listev(f);
	 fclose(f);
	 //meme prob avec rename et remove ici
	remove("voitures.txt");
	rename("file.txt","voitures.txt");
  }             
	 
	}

 /*------------------Retour--------------------*/
 void retour(){
 	printf("Retour au Menu Principale:",menuprincipale());
 }

/******************************************************GESTION DES CLIENTS*****************************************************************/
/*--------------------------liste des client--------------------------------*/
void  listec(FILE *F){
 	char ch;
 	F=fopen("clients.txt","r");
 	if(F!=NULL){ 
 		if(fgetc(F)==EOF){
 			printf("Pas de clients !");
	    } else{
 			ch=fgetc(F);
 			printf("\n\n==========les infos sous forme de=============\n\n");
 			printf("\n\nID id client | Nom Client | Nom Voiture | Prenom | CIN | Adresse | Num tel\n\n");
  	  		while(ch!=EOF){
	   		printf("%c",ch);
  			ch=fgetc(F); } 
		}
    } else printf("Ce fichier n'existe pas !!");
}

/*------------------------------Ajouter client---------------------------------*/

void ajouterc(){
	FILE * f;
	client c;
	printf("veuillez vous donnez les infos du nouveau client :---------> ");
	printf("\nId client................: ");
	scanf("%d",&c.idClient);
	printf("\nNom......................: ");
	scanf("%s",c.nom);
	printf("\nPrenom....................: ");
	scanf("%s",c.prenom);
	printf("\nCIN (ex:XY 000000).......: ");
	scanf("%s %d",c.cin.xy,&c.cin.nb);
	printf("\nAdresse..................: ");
	scanf("%s",c.adresse);
	printf("\nNum telephone............: ");
	scanf("%d",&c.telephone);
	
	f=fopen("clients.txt","a");
	if(f){
	fprintf(f,"\n%d | %s | %s | %s %d | %s | %d",c.idClient,c.nom,c.prenom,c.cin.xy,c.cin.nb,c.adresse,c.telephone);
	fclose(f);}
	fclose(f);
	
}
 
  /*-----------------------suupprimer voiture----------------------*/ 
void suppct(){
	FILE *fic;
	FILE *f;
	int idcl,idnew,cinnb[7],addresse[15],tel;
	char nom[20],prenom[20],cinxy[2];
	
	fic=fopen("clients.txt","r");
	listec(fic);
	printf("\n---supprimer client---");
	printf("\n\ndonner l id du client : ");
	scanf("%d",&idnew);
	
	f=fopen("c.txt","w");
	while(!feof(fic)){
		fscanf(fic,"%d | %s | %s | %s %d | %s | %d",&idcl,nom,prenom,cinxy,&cinnb,&addresse,&tel);
		if(idnew!=idcl){
			fprintf(f,"\n%d | %s | %s | %s %d | %s | %d",idcl,nom,prenom,cinxy,cinnb,addresse,tel);
		}
	}
	fclose(fic);
	fclose(f);
	
	remove("clients.txt");
	rename("c.txt","clients.txt");
	
	printf("\nSuppression effectuue avec succes\n\n");
	
}
/*---------------------------Modifier client-----------------------------------*/
int rechidc(int idc){ //pour verifir que id donnez par l utilisateur est deja existe
  	FILE *F;
  	F=fopen("clients.txt","r");
  client info;	
	while(!feof(F)){
    fscanf(F,"%d %s %s %s %d %s %d",&info.idClient,info.nom,info.prenom,info.cin.xy,&info.cin.nb,info.adresse,&info.telephone);
  	if(info.idClient==idc){
  	fclose(F);
  	return 1;
  //	break;
		}		
	}
    return 0;
	fclose(F);
  }  
  
  void modifcl(){
    FILE *f;
	int idcl,idc,nbl,k,i,tel,cinnb[7];
	char reponse,nom[20],prenom[20],adresse[15],cinxy[2];
	client *tab,*pt;
	nbl=nblign(f,"clients.txt");
	f = fopen("clients.txt","r");

	tab=(client*)malloc(nbl*sizeof(client));
	printf("\n\nvous veuillez vraiment faire cette operation O/N:");
	scanf("%s",&reponse);
	if(reponse=='o'||reponse=='O'){
	listec(f);	
	printf("\n\n************************Avant Modifier*********************************\n");
	for(pt=tab;pt<tab+nbl;pt++){
	fscanf(f,"\n%d | %s | %s | %s %d | %s | %d",&pt->idClient,pt->nom,pt->prenom,pt->cin.xy,&pt->cin.nb,pt->adresse,&pt->telephone);
	}
	fclose(f);
	printf("  \n \nveuillez entrer le id a modifier : ");
	scanf("%d",&idc);
	
	
  
    for(pt=tab;pt<tab+nbl;pt++){ 
	f=fopen("filetmp.txt","a");
    	if(pt->idClient==idc){
	printf("                  ->id de client....................:");
    scanf("%d",&pt->idClient);
    fflush(stdin);
	printf("                  ->Nom.............................:");
    scanf("%s",pt->nom);
	fflush(stdin);
    printf("                  ->Prenom..........................:");
    scanf("%s",pt->prenom);
    fflush(stdin);
    printf("                  ->CIN.............................:");
    scanf("%s %d",pt->cin.xy,&pt->cin.nb);
    fflush(stdin);
    printf("                  ->Adresse.........................:");
    scanf("%s",pt->adresse);
    fflush(stdin);
    printf("                  ->Num telephon....................:");
    scanf("%d",&pt->telephone);
    fflush(stdin);
   
  	fprintf(f,"\n%d | %s | %s | %s %d | %s | %d",pt->idClient,pt->nom,pt->prenom,pt->cin.xy,pt->cin.nb,pt->adresse,pt->telephone);
    printf("       ==============DONE============");	
    fclose(f);
		}	else { 
	fprintf(f,"\n%d | %s | %s | %s %d | %s | %d",pt->idClient,pt->nom,pt->prenom,pt->cin.xy,pt->cin.nb,pt->adresse,pt->telephone);
	 
		}  
	}
	remove("clientss.txt");
	 fclose(f);
	 //meme prob avec rename et remove ici
	rename("filetmp.txt","voitures.txt");
  }             
	 
	}

/*****************************************Location du voiture**********************************************/

 int rechidclient(int idrech){//fonction pour verifier que  idclient est deja existe 
  	FILE *F;
  	F=fopen("client.txt","r");
   client info;	
	while(!feof(F)){
    fscanf(F,"%d %s %s %s %d %s %d",&info.idClient,info.nom,info.prenom,info.cin.xy,&info.cin.nb,&info.adresse,&info.telephone);
  	if(info.idClient==idrech){
  	fclose(F);
  	return 1;
  	break;
		}		
	}
    return 0;
	fclose(F);
  }   
 int prix(int id){ //cette fonction retourner le prix par jour pour calculer le cout 
	FILE *F;
	F=fopen("voitures.txt","r");
	voiture info;
	while(!feof(F)){
		fscanf(F,"%d %s %s %s %d %d %s",&info.idVoiture,info.marque,info.nomVoiture,info.Couleur,&info.nbplaces,&info.prixJour,info.EnLocation);
		if(id==info.idVoiture){
			return info.prixJour;
		}
	}
}
 int rech(int id){//fontion recherch sur id voiture 
  	FILE *F;
  	F=fopen("voitureS.txt","r");
  	voiture info;	
	while(!feof(F)){
	  	fscanf(F,"\n%d | %s |  %s | %s | %d | %d | %s",&info.idVoiture,info.marque,info.nomVoiture,info.Couleur,&info.nbplaces,&info.prixJour,info.EnLocation);
        if(info.idVoiture==id){
	
  		if(info.EnLocation=="NON"|| info.EnLocation=="non"){
  				return 0;
  				break;
		  }
	   }
	}
	  return 0;
      fclose(F);
  }


/*------------------------visualiser contract---------------------------*/
void  visualisercntr(FILE *F){
	printf("\n\n");
	char ch;
 	F=fopen("contrat.txt","r");
 	ch=fgetc(F);
 	printf("Numcontra| idVoiture | idClient | date debut | date fin | cout\n");
    while(ch!=EOF)	{
		printf("%c",ch);
	 	ch=fgetc(F);
	 }
}
/*------------------------Louer voiture------------------------------*/
contrat lireContrat(){
    contrat c;
    printf("\n   Remplire information de votre contrat ");

    printf("\n\tNumero :");
    scanf("%f",&c.numContrat);
    printf("\tID_V :");
    scanf("%d",&c.idVoiture);
    printf("\tID Client :");
    scanf("%d",&c.idClient);
    printf("\tDate debut :\n");
   scanf("%d%d%d",&c.debut.day,&c.debut.month,&c.debut.year);
    printf("\tDate fin :\n");
    scanf("%d%d%d",&c.fin.day,&c.fin.month,&c.fin.year);
    printf("\tCOUT :");
    scanf("%d",&c.cout);


    return c;

}
int ajouterContrat(){
    contrat c;
    FILE* out;
    char buffer_out[256];

    out=fopen("Contrat.txt","a");
    if( out==NULL ) return -1;

    int bytes_wrote=fprintf(out,"\n%d |  %d |  %d  |  %d %d %d  |  %d %d %d  |  %d",c.numContrat,c.idVoiture,c.idClient,c.debut.day,c.debut.month,c.debut.year,c.fin.day,c.fin.month,c.fin.year,c.cout);
    fclose(out);
    if(bytes_wrote<=0) return -2;


    return 0;
}
int listeDesContrat(){ 
    FILE* in;
    contrat c;
    char buffer_in[256];

    in=fopen("Contrat.txt","r");
    if( in==NULL ) return -1;

    while(! feof(in)){
        int bytes_read=fscanf(in,"\n%d |  %d |  %d  |  %d %d %d  |  %d %d %d  |  %d",&c.numContrat,&c.idVoiture,&c.idClient,&c.debut.day,&c.debut.month,&c.debut.year,&c.fin.day,&c.fin.month,&c.fin.year,&c.cout);
        if(bytes_read<=0) return -2;
        fprintf(in,"\n%d |  %d |  %d  |  %d %d %d  |  %d %d %d  |  %d",c.numContrat,c.idVoiture,c.idClient,c.debut.day,c.debut.month,c.debut.year,c.fin.day,c.fin.month,c.fin.year,c.cout);
    }
    fclose(in);
    getchar();

}
void louervoiture(){
	FILE *f=fopen("contrat.txt","r");
lireContrat();
ajouterContrat();
listeDesContrat();

}

	/*----------------------------Retourner contrat------------------------------*/
void retourner(){
 	FILE *fich;
 	FILE *f;
 	voiture v;
 	char chaine[max]="";
 	int nb,id,numco;

 	printf("=========Retourner voiture==========");
   // printf("\n donner l'id de la voiture a Retourner : ");
 //	scanf("%d",&id);

 	printf("\nla liste des voitures\n");

	fich = fopen("voitures.txt","r");
	while(fgets(chaine,max,fich) != NULL)
 	{	printf("%s \n",chaine);	}
	fclose(fich);
	if(&id)
	{
		printf("\n donner le numero de ligne de voiture a Retourner : ");
   		scanf("%d",&nb);

			fich = fopen("voitures.txt","r");
			fgets(chaine,max,fich);
			printf("\n %s",chaine);
			fclose(fich);

 				printf("\n Resaisir les informations du voiture en changeons la location de oui a non : \n");
 				printf("\t l'id du voiture : ");
 				scanf("%d",&v.idVoiture);
			 	printf("\t la marque  : ");
 				scanf("%s",v.marque);
 				printf("\t le nom de la voiture  : ");
 				scanf("%s",v.nomVoiture);
 				printf("\t couleur  : ");
 				scanf("%s",v.Couleur);
 			    printf("\t nombre de place : ");
 				scanf("%d",&v.nbplaces);
				printf("\t le prix d'un jour : ");
 				scanf("%d",&v.prixJour);
				printf("\t est-il en location (veuillez ecrivez non) : ");
 			    scanf("%s",v.EnLocation);
 				fich = fopen("voiture.txt","a+");
 				{
 					fprintf(fich,"\n%d | %s | %s | %s | %d | %d | %s",v.idVoiture,v.marque,v.nomVoiture,v.Couleur,v.nbplaces,v.prixJour,v.EnLocation);
					fclose(fich);
				}

				printf("\n lorsque tu retourner cette voiture tu peut maintenant supprimer le contrat \n");

				printf("\n suppression de contrat\n");
                visualisercntr(f);
                
				printf("\n entrer le numero de contrat que vous avez deja dans votre fichier : ");
				scanf("%d",&numco);
					f = fopen("contrat.txt","r");
					fgets(chaine,max,f);
					printf("%s",chaine);
					fclose(f);
                }
						f = fopen("cont.txt","a+");
						{
							fprintf(f,"%s",chaine);
							fclose(f);
						}

				remove("contrat.txt");
				rename("cont.txt","contrat.txt");
				fich = fopen("voiture.txt","a+");
				{
					fprintf(fich,"%s",chaine);
					fclose(fich);
				}

		remove("voitures.txt");
		rename("voiture.txt","voitures.txt");

	printf("\nvous avez retourner cette voiture avec sucsee\n");
}


/*----------------------Modifier contrat---------------------------*/


int ModifierContrat(){
			int x,c,numc;
			contrat C;
		    voiture v;
		    FILE *fich;
		    FILE *f;
		    char chaine[max]="";
		    
			fich = fopen("contrat.txt","r");
			visualisercntr(fich);
			fclose(fich);

			do
			{
				printf("\n tu peux modifier votre choix (0/1) : ");
				scanf("%d",&x);
			}while(x != 1 && x != 0);
			if(x == 1)
			{
			    printf("donner le num de contrat ");
			    scanf("%d",&numc);
			
			printf("donner le id du client...:");
			scanf("%d",&C.idClient);
			printf("donner le id du voiture..:");
			scanf("%d",&C.idVoiture);
			printf("donner le cout............");
			scanf("%d",&C.cout);
			printf("\n========Date debut=======\n");
			printf("le Jour.................: ");
			scanf("%d",&C.debut.day);
			printf("le Mois.................: ");
			scanf("%d",&C.debut.month);
			printf("annee ..................: ");
			scanf("%d",&C.debut.year);
			printf("\n========Date fin=========\n");
			printf("la fin de jour..........: ");
			scanf("%d",&C.fin.day);
			printf("le mois ................: ");
			scanf("%d",&C.fin.month);
			printf(" annee..................: ");
			scanf("%d",&C.fin.year);
			fich = fopen("contrat.txt","a+");
				{
				    fprintf(fich,"\n%d | %d | %d | %d %d %d | %d %d %d | %d",numc,C.idVoiture,C.idClient,C.debut.day,C.debut.month,C.debut.year,C.fin.day,C.fin.month,C.fin.year,C.cout);
				fclose(fich);
				}
			}
				else
		    {
			f = fopen("c.txt","w");
			{
				fprintf(fich,"%s",chaine);
				fclose(f);
			}
        }

    remove("contrat.txt");
	rename("c.txt","contrat.txt");
	}
	/*------------------------Supprimer contrat---------------------*/
int lignecontrat(FILE *F){//pour calculer nbr des ligne du contrat utuliser cette fct dans malloc pour alloue espac memoir 
      	char c;
	    int lign=0;
	    F=fopen("contrat.txt","r");
	    c= getc(F);
	    while(c!=EOF){
		if(c=='\n'){
			  lign++;
		}
		   c=getc(F);
	    }
	    fclose(F);
	     return lign;
}
void modifierafterreturn(int id){//fct pour modifier voiture apres retourner Enlocation(OUI/NON)
	FILE *F;
	int nbl=nblign(F,"voitures.txt");
	voiture *tab,*pt;
	tab=(voiture*)malloc(nbl*sizeof(voiture));
	F=fopen("voiture.txt","r");
		for(pt=tab;pt<tab+nbl;pt++){
		fscanf(F,"\n%d | %s |  %s | %s | %d | %d | %s",&pt->idVoiture,pt->marque,pt->nomVoiture,pt->Couleur,&pt->nbplaces,&pt->prixJour,pt->EnLocation);
	}
	fclose(F);
	F=fopen("voitures.txt","w");
		for(pt=tab;pt<tab+nbl;pt++){
			if(id==pt->idVoiture){
				strcpy(pt->EnLocation,"NON");
				fprintf(F,"\n%d | %s |  %s | %s | %d | %d | %s",pt->idVoiture,pt->marque,pt->nomVoiture,pt->Couleur,pt->nbplaces,pt->prixJour,pt->EnLocation);
			}
		else fprintf(F,"\n%d | %s |  %s | %s | %d | %d | %s",pt->idVoiture,pt->marque,pt->nomVoiture,pt->Couleur,pt->nbplaces,pt->prixJour,pt->EnLocation);
	}
	fclose(F);
}

 void suppcntr(FILE *F){
	int numcont,idv;
	int nbl=lignecontrat(F);
	char reponse;
	visualisercntr(F);
	printf("\n********************** avant supprimer***************************\n");
	printf("Veuillez entrer le num de contrat a supprimer :  ");
	scanf("%d",&numcont);
	contrat *tab,*pt;
	tab=(contrat*)malloc(nbl*sizeof(contrat));
		F=fopen("contrat.txt","r");
			for(pt=tab;pt<tab+nbl;pt++){
	fscanf(F,"\n%d  | %d | %d | %d %d %d | %d %d %d | %d",&pt->numContrat,&pt->idVoiture,&pt->idClient,&pt->debut.day,&pt->debut.month,&pt->debut.year,&pt->fin.day,&pt->fin.month,&pt->fin.year,&pt->cout);
			}
			fclose(F);
		F=fopen("contrat.txt","w");
		for(pt=tab;pt<tab+nbl;pt++){
			if(numcont==pt->numContrat){
				
			}
		else fprintf(F,"\n%d  | %d | %d | %d %d %d | %d %d %d | %d",pt->numContrat,pt->idClient,pt->idVoiture,pt->debut.day,pt->debut.month,pt->debut.year,pt->fin.day,pt->fin.month,pt->fin.year,pt->cout);
			}
			modifierafterreturn(idv);
			printf("\n********contract a ete supprimer *******");
			fclose(F);
		
}

int main() {
	FILE *f ;
	system("color F3");
	system("cls");
 		switch(menuprincipale()){
 			case 1:  system("cls");
	 					switch(menulocationvoiture()){
							 	case 1 :system("cls");
								 		 visualisercntr(f);
							 		break;
							 	case 2 :system("cls");
								 		 louervoiture();
							 		break;
							 	case 3 :system("cls");
								        retourner();
							 		break;
							 	case 4 :system("cls");
								 		ModifierContrat(f);
							 		break;
							 	case 5 : suppcntr(f);
							 				//remove("contrat.txt");
											//rename("c.txt","contrat.txt");
					 				break;
					 			case 6 : retour();
					 				break;
						 }
								break;
					
		   case 2 : system("cls");
		   				switch(menugestionvoitures()){
		   					case 1 :system("cls");
							   		 listev(f);
							 		break;
							 	case 2 :system("cls");
								 		 ajouterv();
							 		break;
							 	case 3 :system("cls");
								 		 Modifier(f);
								 		 	remove("voitures.txt");
                               				rename("file.txt","voitures.txt");
							 		break;
							 	case 4 : system("cls");
								 		supprimer();
								 		remove("voiture.txt");
   	  									rename("ftmp.txt","voitures.txt");
							 		break;
					 			case 5 :system("cls");
								 		 retour();
					 				break;
						   }
						break;
		  			
		   case 3 : system("cls");
		   				switch(menugestionclients()){
		   					case 1 : system("cls");
							   		listec(f);
							 		break;
							 	case 2 :system("cls");
								 	 ajouterc();
							 		break;
							 	case 3 :system("cls");
								 		 modifcl();
							 			remove("clients.txt");
							 			rename("c.txt","clients.txt");
							 		break;
							 	case 4 :system("cls"); 
								 		suppct();
							 			remove("clients.txt");
							 			rename("c.txt","clients.txt");
							 		break;
					 			case 5 :system("cls");
								 		 retour();
					 				break;
		   					
					}
		            	break;
		    case 4: exit(1);
		       break;

}

		
	return 0;
	
	}
