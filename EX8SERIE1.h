int EX8(){
int NUM_ART, RTMISE=0;
float PRIX_UNITAIRE, SOMME, NV_PRIX;
printf(" ENTRER LE NUMERO D'ARTICLE PUIS SAISIR LE PRIX UNITAIRE : \n");
scanf("%d%f",&NUM_ART,&PRIX_UNITAIRE);
SOMME=NUM_ART*PRIX_UNITAIRE;
SOMME+= SOMME*0.2;
if( SOMME> 1000){
    RTMISE =5;
}
NV_PRIX = SOMME-((SOMME * RTMISE /100));
printf(" TTC est:%.2DH\n  la reduction est :%d %%\n le prix final :%.2fDH\n",SOMME,RTMISE, NV_PRIX);
}
