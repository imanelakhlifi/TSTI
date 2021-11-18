// NOM ET PRENOM:IMANE LAKHLIFI TAGHZOUTI

int EX1() {
float PRIX_UNITAIRE;
int Q;
printf("SVP entrer le prix unitaire : \n ");
scanf("%f",&PRIX_UNITAIRE );
printf(" saisir la quantité commandée \n");
scanf("%d",&Q);
float PRIX_FINAL = (Q * PRIX_UNITAIRE)+ (Q * PRIX_UNITAIRE)*0.2;
printf(" LE PRIX FINAL EST : \n %.2f \n",PRIX_FINAL );
}
