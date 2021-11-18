int EX6() {

float PRIX;
int Q;
printf(" donnez le prix unitaire \n puis combient d'inites acheteriez vous svp\n");
scanf("%f%d",&PRIX,&Q);
float  SOMME = PRIX*Q;
if(  SOMME > 200) {
    printf(" LA VALEUR FINAL EST :\n %.2f \n",  SOMME+ 25);
}
else  { printf(" LA VALEUR FINAL EST :\n %.2f \n",  SOMME);}

}
