///////////////////////////////////////////////////////////////////////////////
///  Projeto de Pedro Henrique Guedes Brito.                                ///
///  aluno de progamação DCT1106 - T01                                      ///
///  Projeto focado na simulação de uma gestão Bancária onde criarei um     ///
///  algoritmo cujo seu objetivo será o cadastramento de contas, tanto de   ///
///  pessoas fisicas como pessoas juridicas.                                ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

// assinatura das funções //
//menus 
char menuPrincipal(void);
void menuSobre(void);

//deposito
void deposito(void);
char cadastrarDeposito(void);
void historicoDeposito(void);

//tranferencia
void transferencia(void);
char cadastrarTranferencia(void);


void pagamentos(void);



//função principal//

int main(void) {
  char opcao;

    menuSobre();
    deposito();
	  transferencia();
	  pagamentos();
    opcao = menuPrincipal();

  return 0;

}


void menuSobre(void) {


    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                          ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                  ///\n");
    printf("///             Centro de Ensino Superior do Seridó                          ///\n");
    printf("///             Departamento de Computação e Tecnologia                      ///\n");
    printf("///             Disciplina DCT1106 -- Programação                            ///\n");
    printf("///             Projeto Sitema de controle de contas Bancárias               ///\n");
    printf("///             Developed by  @pedro_.guedes - Jan, 2021                     ///\n");
    printf("///                                                                          ///\n");
    printf("////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                          ///\n");
    printf("///          = = =  Um Sistema de Controle de Contas Bancárias = = =         ///\n");
    printf("///                                                                          ///\n");
    printf("///        Bom dia! Me chamo Pedro Henrique Guedes Brito, sou estudante      ///\n");
    printf("///        Da disciplina de progamação ministrada pelo professor Flavius     ///\n");
    printf("///        DCT1106 - T01. Meu projeto a priori foi pensado a fim de criar    ///\n");
    printf("///        um algoritmo que imita a realidade bancária no que diz respeito   ///\n");
    printf("///        a criação de conta em um banco.                                   ///\n");
    printf("///                                                                          ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

char menuPrincipal(void){
  char op;
system("clear");
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
	printf("///           = = = = = = = =  Menu Principal = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Depósito                                                 ///\n");
	printf("///           2. Tranferência                                             ///\n");
	printf("///           3. Saques                                                   ///\n");
	printf("///           4. Pagamentos                                               ///\n");
	printf("///           0. Encerra o programa                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada:                                   ///\n");
  scanf("%c", &op);
  getchar();                                                         
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
  return op;
}

void deposito(void){
  char op;
    system("clear");
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
	printf("///           = = = = = = = = Menu Depósito = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Cadastrar Depósito                                       ///\n");
	printf("///           2. Historico de Depósitos                                   ///\n");
	printf("///           3. Excluir Depósito                                         ///\n");
	printf("///           0. Voltar ao menu anterior                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada:                                   ///\n");
  scanf("%c", &op);
  getchar();                                                         
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


void transferencia(void){

    system("clear");
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
	printf("///           3. Alterar Dados da Transferencia                           ///\n");
	printf("///           4. Excluir Historico de Transferencias                      ///\n");
	printf("///           0. Voltar ao menu anterior                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada:                                   ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void pagamentos(void){
system("clear");
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

}

char cadastrarDeposito(void){
  char nome[51];
  char cpf[16];
  char numeroBanco[4];
  char agencia[5];
  char confirmacao[4];
  system("clear");
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
  printf("///           Nome completo: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
  getchar();
  printf("///           Informe o CPF(apenas números): ");
	scanf("%[0-9]", cpf);
	getchar(); 
  printf("///          Informe o Número do banco(apenas números): ");
	scanf("%[0-9]", numeroBanco);
	getchar();
  printf("///          Agência Bancária (apenas números): ");
	scanf("%[0-9]", agencia);
	getchar();
  printf("As informações informadas estão correstas?");
  scanf("%[SIMNAOÃsimnaoã]", confirmacao);
  getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void historicoDepoisto(void){
system("clear");
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
	printf("///          = = = = = = = = Histori de Depositos = = = = = = =           ///\n");
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

char cadastrarTranferencia(void){
  char nome[51];
  char cpf[16];
  char cnpj[13];
  char numeroBanco[4];
  char agencia[5];
  char contaBancaria[7];
  char confirmacao[4];
  char decisao[4];
  char resposta[4];
  system("clear");
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
  switch (resposta){
  case "sim";
   prinf("Digite seu cpf");
   scanf("%[0-9]", decisao);
   break;
  case "não"
   prinf("Digite seu CNPJ");
   scanf("%[0-9]", decisao);
   break;
  }

	getchar();
    printf("///          Informe o Número do banco(apenas números): ");
	scanf("%[0-9]", numeroBanco);
	getchar();
    printf("///          Agência Bancária (apenas números): ");
	scanf("%[0-9]", agencia);
	getchar();
    printf("///          Cotan Bancária (apenas números): ");
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

