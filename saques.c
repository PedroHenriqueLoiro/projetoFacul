#include <stdio.h>
#include "assinaturaFuncoes.h"
#include <stdlib.h>
//
/// Tela que mostra as opções em respeito aos saques
//
void telaSaque(void){
  char opcao;
  system("CLS");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =           Banco Mundial             = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @pedro_.guedes - Jan, 2021               ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =    Menu Saques    = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Realizar Saque                                           ///\n");
	printf("///           2. Extrato                                                  ///\n");
	printf("///           0. Voltar ao menu anterior                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada:                                   ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
   do{
    switch(opcao){
    case '1': realizarSaque();
      break;
    case '2': histDeposito();
      break;
    }
}while (opcao != '0');
}
//
/// esss tela é responsavel por fazer o saque
//
char realizarSaque(void){
  char cpf, valor; 
  char confircao[4];
  system("CLS");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =           Banco Mundial             = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @pedro_.guedes - Jan, 2021               ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =    Menu Saques    = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("/// Informe o CPF(apenas numeros): ");
	scanf("%c[0-9]", &cpf);
	getchar(); 
	printf("/// Agencia Bancaria (apenas numeros): ");
	scanf("%c[0-9]", &valor);
	getchar();
	printf("As informacoes Concedidas estao corretas? (digite sim ou nao)");
	scanf("%c[SIMNAOÃsimnaoã]", &confircao);
	getchar();
	while(confircao != "sim"){
    printf("Informe o CPF(apenas numeros): ");
	scanf("%c[0-9]", &cpf);
	getchar(); 
	printf("Agencia Bancaria (apenas numeros): ");
	scanf("%c[0-9]", &valor);
    printf("As informacoes Concedidas estao corretas agora?");
	scanf("%c[SIMNAOÃsimnaoã]", &confircao);
	getchar();
	return 0;
    }
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}
