int EX7() {
int x, y, z, MAX;
printf(" SAISIR LES TROIS ENTIERS : \n ");
scanf("%d%d%d", &x,&y,&z);
if (x>y) {
    MAX=x;
    if (x>z) {  MAX= x;}
    else  { MAX=z;}
}
else  {
    MAX=y;
    if(y>z) { MAX=y;}
    else { MAX = z;}
}
printf(" la valeur maximal est :%d \n",MAX);
}
