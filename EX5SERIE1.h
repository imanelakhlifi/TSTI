int EX5(){
    int argent;
 int billetde100=0;
 int billetde50=0;
 int billetde10=0;
 int billetde5=0;
 int billetde1=0;
 printf(" DONNEZ LA VALEURE D'ARGENT : \n");
 scanf("%d",&argent );
 while( argent >=100) {
    if( argent>=100) {
        argent-=100;
        billetde100++;
    }
    else if(argent>=50) {
        argent -=50;
        billetde50++;

    }
    else if (argent >=10) {
        argent -=10;
        billetde10++;

    }
    else if (argent >=5) {
        argent -=5;
        billetde5++;

    }
    else if (argent >=1) {
        argent -=1;
        billetde1++;

    }
   else { break;}

 }
 printf(" pour la somme :\n %d du 100dh  \n %d du 50dh \n %d du 10dh \n %d du 5dh \n %d du 1dh \n", billetde100,billetde50,billetde10,billetde5,billetde1 );


}
