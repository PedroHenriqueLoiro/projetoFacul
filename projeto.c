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

void menuPrincipal(void);
void menuSobre(void);
void deposito(void);
void tranferencia(void);

//função principal//

int main(void) {
    menuSobre();
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
    printf("///             Developed by  @pedro_.guedes - Jan, 2021                        ///\n");
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

void menuPrincipal(void); {
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
	printf("///           5. Informações sobre o sistema                              ///\n");
	printf("///           0. Encerra o programa                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada:                                   ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void deposito(void); {

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
	printf("///           2. Pesquisar Depósito                                       ///\n");
	printf("///           3. Alterar Dados do Depósito                                ///\n");
	printf("///           4. Excluir Depósito                                         ///\n");
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

void transferencia(void); {

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
	printf("///           2. Pesquisar Transferencia                                  ///\n");
	printf("///           3. Alterar Dados da Transferencia                           ///\n");
	printf("///           4. Excluir Transferencia                                    ///\n");
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
