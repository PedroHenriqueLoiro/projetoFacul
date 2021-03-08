#include <stdio.h>
#include <stdlib.h>
#include "pagamentos.h"
#include "validacoes.h"
//
/// Função que mostra a tela em respeito aos pagamentos
//

void pagamentos(void){
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
	printf("///           = = = = = = = =   Menu Pagamento  = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Cadastrar Pagamentos                                     ///\n");
	printf("///           2. Pesquisar sobre Pagamentos                               ///\n");
	printf("///           3. Excluir Historico de Pagamentos                          ///\n");
	printf("///           0. Voltar ao menu anterior                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada:                                   ///\n");
	scanf("%c", &opcao);
	getchar();                                                         
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
 do{
    switch(opcao){
    case '1': cadastrarPagamento();
      break;
    case '2': histPagamento();
      break;
    }
}while (opcao != '0');
}

//
/// essa tela é responsavel por cadastrar o pagamento
//
char cadastrarPagamento(void){
  	char codigoDeBarra[48];
	int dia, mes, ano;
  	char confirmacao[4];
  	int dataConfirmacao;
	float valorPagamento;
	float precoConfirmacao;
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
	printf("///           = = = = = = = = Cadastro do Deposito  = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("Digite o Codigo de Barras: ");
	scanf("%[0-9]", codigoDeBarra);
	getchar();
	printf("Informe a data da transação:");
	printf("Dia:");
	scanf("%[0-9]", dia);
	getchar();
	printf("Mes::");
	scanf("%[0-9]", mes);
	getchar();
	printf("Ano:");
	scanf("%[0-9]", ano);
	getchar();
	dataConfirmacao = testaData(dia, mes, ano);
	while (!dataConfirmacao) {
    	printf("Esta data %02d/%02d/%d está errada.\n", dia, mes, ano);;
		printf("Dia: ");
		scanf("%d", &dia);
		getchar();
		printf("Mês: ");
		scanf("%d", &mes);
		getchar();
		printf("Ano: ");
		scanf("%d", &ano);
		getchar();
	}dataConfirmacao = testaData(dia, mes, ano);

	printf("Qual o valor a ser pago?: ");
	scanf("%[0-9]", valorPagamento);
	getchar();
	precoConfirmacao = testePreco( valorPagamento);
	while(!precoConfirmacao){
		printf("Esse valor esta incorrento:");
		printf("Por favor, informe outro valor:");
		scanf("%f", &valorPagamento);
		getchar();
	}precoConfirmacao = testePreco( valorPagamento);

	printf("As informacoes informadas estao correstas?(resposta sim ou nao)");
	scanf("%[SIMNAOÃsimnaoã]", confirmacao);
	getchar();
	
	while(confirmacao != "sim"){
	printf("Digite o Codigo de Barras: ");
	scanf("%[0-9]", codigoDeBarra);
	getchar();
	printf("Informe a data da transação:");
	printf("Dia:");
	scanf("%[0-9]", dia);
	getchar();
	printf("Mes::");
	scanf("%[0-9]", mes);
	getchar();
	printf("Ano:");
	scanf("%[0-9]", ano);
	getchar(); 
	printf("Qual o valor a ser pago?: ");
	scanf("%[0-9]", valorPagamento);
	getchar();
	printf("As informacoes informadas estao correstas?");
	scanf("%[SIMNAOÃsimnaoã]", confirmacao);
	getchar();
	return 0;
	}
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

//
/// Essa tela mostra o historico de pagamentos
//
void histPagamento(void){
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
	printf("///          = = = = = = = Historico de Pagamentos  = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();

}
