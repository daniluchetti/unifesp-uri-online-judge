// 1253 - Cifra de César
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
int n,s,x,y,tam;
char p[51];
scanf("%d",&n);
for(x=0;x<n;x++){
scanf("%s",p);
scanf(" %d",&s);
for(y=0,tam=strlen(p);y<tam;y++){
toupper(p[y]);
if(p[y]-s<65){
p[y]=p[y]+26;
}
p[y]=p[y]-s;
printf("%c",p[y]);
}
printf("\n");
}

return 0;
}
