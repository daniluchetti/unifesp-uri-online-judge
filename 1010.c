// 1010 - Cálculo Simples
#include <stdio.h>
int main() {

int cod_pc1, num_pc1, cod_pc2, num_pc2;
double val_pc1, val_pc2;

scanf("%d %d %lf",&cod_pc1,&num_pc1,&val_pc1);
scanf("%d %d %lf",&cod_pc2,&num_pc2,&val_pc2);
printf("VALOR A PAGAR: R$ %.2f\n",(num_pc1*val_pc1)+(num_pc2*val_pc2));

return 0;
}
