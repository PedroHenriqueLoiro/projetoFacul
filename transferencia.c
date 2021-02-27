#include <stdio.h>
#include "assinaturaFuncoes.h"
#include <stdlib.h>
//
/// Essa função é responsavel por mostrar a tela referente às tranferencias bancarias
//

void transferencia(void){
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
	printf("///           = = = = = = = = Menu Tranferencia = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Cadastrar Transferencia                                  ///\n");
	printf("///           2. Historico de  Transferencias                             ///\n");
	printf("///           3. Excluir Historico de Transferencias                      ///\n");
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
    case '1': cadastrarTranferencia();
      break;
    // case '2': histTranferencia();
    //  break;

    }
}while (opcao != '0');
}

//
/// Função responsavel cadastrar a tranferencia
//
char cadastrarTranferencia(void){
  char nome[51];
  char cpf[16];
  char cnpj[13];
  char numeroBanco[4];
  char agencia[5];
  char contaBancaria[7];
  char confirmacao[4];
  char decisao[4];
  int resposta;
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
	printf("///           = = = = = = =  Cadastrar Tranferencia = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Nome completo do Beneficiario: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
  	getchar();
	printf("Se vc for pessoa pessoa fisica Dgite (1) Caso seja pessoa Jurica Digite (2):");
 	scanf("%d", &resposta);
  	switch (resposta){
  	case 1:
    printf("Digite seu cpf:");
    scanf("%[0-9]", decisao);
    break;
    case 2:
    printf("Digite seu CNPJ:");
    scanf("%[0-9]", decisao);
    break;
    }
  	getchar();
	printf("///          Informe o Numero do banco(apenas números): ");
	scanf("%[0-9]", numeroBanco);
	getchar();
  	printf("///          Agência Bancaria (apenas números): ");
	scanf("%[0-9]", agencia);
	getchar();
 	printf("///          Conta Bancaria (apenas números): ");
	scanf("%[0-9]", contaBancaria);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
 	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}
