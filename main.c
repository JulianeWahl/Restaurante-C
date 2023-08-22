#include <stdio.h>
int main()
{
    char op, opDois, opTres, opQuatro;
    float soma, Desc, Desconto;
    printf(" 1 - Dogão - R$ 5,00\n");
    printf(" 2 - Bauru Giga - R$ 8,00\n");
    printf(" 3 - Sub de 30cm - R$ 15,00\n");
    printf(" 4 - Cookie Bom - R$ 3,50\n");
    printf(" 5 - Ki-Suco de Groselha - R$ 2,00\n");
    printf(" 6 - Refresco de Tamarindo - R$ 4,80\n");
    printf(" 7 - Verificar pedido\n");
    printf(" 8 - Finalizar pedido\n");
    printf(" 9 - Adicionar Cupom\n");
   
    do{
        
 printf("\n===Digite o número correspondene ao que deseja pedir!===\n");
    scanf("%s", &op);
   
      switch(op){
          case('1'):
          soma+=5.00;
          printf("Adicionou Dogão. Subtotal de R$%.2f\n", soma);
          break;
         
          case('2'):
          soma+=8.00;
          printf("Adicionou Bauru Giga. Subtotal de R$%.2f\n", soma);
          break;
         
          case('3'):
          soma+=15.00;
          printf("Adicionou Sub de 30cm. Subtotal de R$%.2f\n", soma);
          break;
         
          case('4'):
          soma+=3.50;
          printf("Adicionou Cookie Bom. Subtotal de R$%.2f\n", soma);
          break;
         
          case('5'):
          soma+=2.00;
          printf("Adicionou Ki-Suco de Groselha. Subtotal de R$%.2f\n", soma);
          break;
         
          case('6'):
          soma+=4.80;
          printf("Adicionou Refresco de Tamarindo. Subtotal de R$%.2f\n", soma);
          break;
      }
    } while (op != '7');
   
    printf("Seu pedido foi finalizado. Total: R$%.2f\n", soma);
   
    do{
        printf("===Gostaria de Remover algum produto?===\n");
        scanf("%s", &opDois);
    switch(opDois){
          case('1'):
          soma-=5.00;
          printf("Adicionou Dogão. Subtotal de R$%.2f\n", soma);
          break;
         
          case('2'):
          soma-=8.00;
          printf("Adicionou Bauru Giga. Subtotal de R$%.2f\n", soma);
          break;
         
          case('3'):
          soma-=15.00;
          printf("Adicionou Sub de 30cm. Subtotal de R$%.2f\n", soma);
          break;
         
          case('4'):
          soma-=3.50;
          printf("Adicionou Cookie Bom. Subtotal de R$%.2f\n", soma);
          break;
         
          case('5'):
          soma-=2.00;
          printf("Adicionou Ki-Suco de Groselha. Subtotal de R$%.2f\n", soma);
          break;
         
          case('6'):
          soma-=4.80;
          printf("Adicionou Refresco de Tamarindo. Subtotal de R$%.2f\n", soma);
          break;
         
          case('7'):
          printf("Seu pedido está quase completo. Subtotal de R$%.2f\n", soma);
          break;
            
      }
    } while (opDois != '8');{
   
    printf("Seu pedido foi finalizado. Total: R$%.2f\n", soma);}
     

        printf(" 1 - Funcionario 10%%\n 2 - Vip 5%%\n 3 - Sem desconto\n ");
        scanf("%s", &opTres);
       
        switch(opTres){
          case('1'):
          Desc = soma*0.9 ;
          printf(" Recebeu de R$%.2f\n desconto por ser um funcionario", Desc);
          break;
           case('2'):
          Desc = soma*0.95 ;
          printf(" Recebeu de R$%.2f\n desconto por ser vip", Desc);
          break;
          case('3'):
          printf(" Você nao recebeu acesso a desconto  R$%.2f\n ", Desc);
          break;
           default:
            printf("Cupom inexistente utilize outro!!\n");
            break;
        }
        printf(" Qual a forma de pagamento\n 1 - Pagamento A Vista\n 2 - Pagamento A Prazo\n");
        scanf("%s", &opQuatro);
       
        switch(opQuatro){
          case('1'):
          Desc = Desc*0.9 ;
          printf(" Recebeu de R$%.2f\n desconto pelo pagamento a vista ", Desc);
          break;
           case('2'): 
          printf(" Não recebe desconto R$%.2f\n ", Desc);
          break;
           default:
            printf("Pagamento inexistente, tente novamente!!\n");
            break;
        }
    return 0;
}




