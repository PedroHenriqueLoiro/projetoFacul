#include <stdio.h>
#include "assinaturaFuncoes.h"
#include <stdlib.h>
//
/// Essa função mostrar uma tela introdutoria sobre o projeto
//
void menuSobre(void) {
	printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                          ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                  ///\n");
    printf("///             Centro de Ensino Superior do Serido                          ///\n");
    printf("///             Departamento de Computacao e Tecnologia                      ///\n");
    printf("///             Disciplina DCT1106 -- Programacao                            ///\n");
    printf("///             Projeto Sitema de controle de contas Bancarias               ///\n");
    printf("///             Developed by  @pedro_.guedes - Jan, 2021                     ///\n");
    printf("///                                                                          ///\n");
    printf("////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                          ///\n");
    printf("///          = = =  Um Sistema de Controle de Contas Bancárias = = =         ///\n");
    printf("///                                                                          ///\n");
    printf("///        Bom dia! Me chamo Pedro Henrique Guedes Brito, sou estudante      ///\n");
    printf("///        Da disciplina de progamacao ministrada pelo professor Flavius     ///\n");
    printf("///        DCT1106 - T01. Meu projeto a priori foi pensado a fim de criar    ///\n");
    printf("///        um algoritmo que imita a realidade bancaria no que diz respeito   ///\n");
    printf("///        a criacao de conta em um banco.                                   ///\n");
    printf("///                                                                          ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

//
/// Essa função mostrar as opções introdutorias
//

char menuPrincipal(void){
  char op;
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
	printf("///           = = = = = = = =  Menu Principal = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Deposito                                                 ///\n");
	printf("///           2. Tranferencia                                             ///\n");
	printf("///           3. Saques                                                   ///\n");
	printf("///           4. Pagamentos                                               ///\n");
	printf("///           0. Encerra o programa                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opcao desejada:                                   ///\n");
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