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
	printf("///           2. Pesquisar sobre Pagamentos                               ///\n");
	printf("///           3. Alterar Dados Sobre o Pagamento                          ///\n");
	printf("///           4. Excluir Pagamentos                                       ///\n");
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
    case '1': cadastrarDeposito();
      break;
    case '2': histDeposito();
      break;
    // case '3': excluirDeposito();  
    //   break;
    }
}while (opcao != '0');
}
