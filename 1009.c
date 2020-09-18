// 1009 - Salário com Bônus
#include <stdio.h>

int main() {

char primeironomedovendedor;
double A,B;

scanf("%s",&primeironomedovendedor);
scanf("%lf %lf",&A,&B);
printf("TOTAL = R$ %.2f\n",(A+B*0.15));

return 0;
}
