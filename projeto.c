///////////////////////////////////////////////////////////////////////////////
///  Projeto de Pedro Henrique Guedes Brito.                                ///
///  aluno de progamação DCT1106 - T01                                      ///
///  Projeto focado na simulação de uma gestão Bancária onde criarei um     ///
///  algoritmo cujo seu objetivo será o cadastramento de contas, tanto de   ///
///  pessoas fisicas como pessoas juridicas.                                ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include "assinaturaFuncoes.h"

//função principal//
int main(void) {
  char opcao;
  do{
        opcao = menuPrincipal();
    switch(opcao){
    case '1': deposito();
      break;
    case '2': transferencia();
      break;
    case '3': telaSaque();
      break;
	  case '4': pagamentos();
      break;
    }
  }while (opcao != '0');

  return 0;
}
