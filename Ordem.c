#include <stdio.h>
#include <string.h>

int main(){

    int n,comportado=0,Ncomportado=0;
    scanf("%d",&n);
    char temp[100],simbolo;
    char nome[n][21];
    
    for(int i = 0;i<n;i++){
    scanf(" %c %s",&simbolo,&nome[i]);
    
    if(simbolo == '+'){
        comportado+=1;
    }
    else{
        Ncomportado+=1;
    }
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(nome[i],nome[j])>0){
                strcpy(temp,nome[j]);
                strcpy(nome[j],nome[i]);
                strcpy(nome[i],temp);
            }
        }
    }
    
    for(int i= 0;i<n;i++){

    printf("%s\n",nome[i]);

  }

  printf("Se comportaram: %d | Nao se comportaram: %d\n",comportado,Ncomportado);


    return 0;
}