#include <stdio.h>

int get_positive_int(){

int szam=0;
while(szam<1){
    printf("Adjon meg egy pozitiv egesz szamot! ");
    scanf("%d",&szam);
    if(szam>0){
        break;
    }
}
return szam;
}

int main(){
int szam=get_positive_int();
printf("\n");
printf("A megadott pozitiv szam: %d\n",szam);
return 0;
}