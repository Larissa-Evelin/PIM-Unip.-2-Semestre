#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// inicio do codigo
typedef struct{

  char login [30];
  char senha [10];

}pessoa; pessoa p[1];

struct agendamentos // tipo de dado
{
  char nome [50], endereco [40], e_mail[20], sexo[10];
  int idade, numero;
};
struct agendamentos paciente; // definiçao da struct

struct cadastro_medico // tipo de dado
{
 char nome [50], endereco [40], sexo[10], e_mail[20];
  int idade, numero;
};
struct cadastro_medico medico; // definiçao da struct

struct ficha_funcionario // tipo de dado
{

  char nome [50], endereco [40], sexo[10], e_mail[20];
  int idade, numero;


};

struct ficha_funcionario funci; //definiçao da struct

struct reclama_elogios // tipo de dado
{
  char nome [50], relato[100];

};
struct reclama_elogios insat_satis; // definiçao da struct

struct cancelamento_cons // tipo de dado
{

  char nome [50], sexo[10], e_mail[20];
  int idade, numero;

};

struct cancelamento_cons consulta; // definiçao da struct

int main(void){
// ======== INICIO DO CÓDIGO PRINCIPAL / TELA DE LOGIN DO USUARIO =====
    /* AQUI O USUARIO SERÁ AUTENTICADO E VALIDADO, CASO SEJA UM ADMIN, ESTE SERA
    DIRECIONADO PARA TELA INICIAL DA APLICACAO QUE É O MENU PRINCIPAL*/
    char login[6] = "", senha[5] = "";
    int numero;


    strcpy (p[0].login, "admin");
    strcpy (p[0].senha, "1234");
    autenticar: // Ponto de salto para autenticar o usuario
        system("cls");
        printf("\n\tInforme o usuario: ");
        scanf("%s" , &login);
        printf("\n\tInforma a senha: ");
        scanf("%s", &senha);
        if((strcmp(login,p[0].login)==0) || (strcmp(senha,p[0].senha)==0)){
            printf("\n\n\tUSUARIO LOGADO \n\n");
            printf("\n\tBEM VINDO! \n");

            system("pause"); // Pausa a tela para o usuario verificar as informações
            goto inicio; // Pula para a tela inicial(se o usuario for valido)
        }else{
            printf("Nome ou senha incorreto. Tente novamente.\n");
            system("pause"); // Pausa a tela para o usuario verificar as informações
            goto autenticar; // Salta para o ponto de autenticação caso o usuario seja invalido(funciona como um looping infinito);
        }
// ====== INICIO DO CÓDIGO DE VERIFICAÇÕES, ATUALIZAÇÕES E TELAS ======
    inicio: // ponto de salto do iniciar
        system("cls && mode 70, 70"); // Limpa a tela e define um taminho para o terminal.
        printf("\nTelas para cadastros de pacientes. \n\n");
        printf(" 1- Agendamentos\n");
        printf(" 2- Cadastro de medicos\n");
        printf(" 3- Cadastros de funcionarios\n");
        printf(" 4- Reclamações e elogios dos clientes\n");
        printf(" 5- Cancelamento de consultas \n\n");
        printf("\nEcolha a opcao desejada: \n");
        scanf("%d", &numero);
        switch(numero){
        case 1:
            system("cls");
            printf("Iniciando cadrastro de agendamentos ... \n");
            goto agendamentos;
            break;
        case 2:
            system("cls");
            printf("Iniciando cadrastro do medico ... \n");
            goto cadastromedico;
            break;
        case 3:
            system("cls");
            printf("Iniciando cadrastro de funcionarios ... \n");
            goto cadastrofuncionario; // Vai direcionar o usuario para a tela de funcionarios
            break;
        case 4:
            system("cls");
            printf("ELEGIOS E RECLAMAÇOES ... \n");
            goto reclamacoes_elogios;
            break;
        case 5:
            system("cls");
            printf("cancelamento de consultas ... \n");
            goto cancelamentoconsulta;
            break;
        default:
            printf("opcao invalida\n");
            goto inicio; // Salta para a tela inicial
        }
    system("pause");



    // ============================ AGENDAMENTOS ===================================

    agendamentos: // Ponto de salto direto para a tela agendamentos

        printf("\n------------------------ AGENDAMENTOS ---------------------------------\n\n\n");

        printf("\n----------------PREENCHA DE ACORDO COM AS INFORMAÇOES ABAIXO ---------------------------------\n\n\n");

        printf("INFORME O NOME..................................................");
        fflush(stdin);
        fgets(paciente.nome, 50, stdin);

        printf("INSIRA A IDADE..................................................");
        scanf("%d" , &paciente.idade);

        printf("INSIRA O NUMERO..................................................");
        scanf("%d" , &paciente.numero);

        printf("INFORME O ENDERECO..................................................");
        fflush(stdin);
        fgets(paciente.endereco, 40, stdin);

        printf("INFORME O E-MAIL..................................................");
        fflush(stdin);
        fgets(paciente.e_mail, 20, stdin);

        printf("\nINFORME O SEXO..................................................");
        fflush(stdin);
        fgets(paciente.sexo, 10, stdin);


        printf("\n\n----------------------------CADASTRO REALIZADO------------------------------------------\n\n\n");

        printf("NOME DO PACIENTE........................... %s " , paciente.nome);
        printf("\nIDADE ........................... %d " , paciente.idade);
        printf("\nNUMERO ........................... %d" , paciente.numero);
        printf("\nENDERECO........................... %s" , paciente.endereco);
        printf("\nE-MAIL........................... %s " , paciente.e_mail);
        printf("SEXO........................... %s " , paciente.sexo);

        system("pause"); // Pausa a tela
        goto inicio; // Direciona o usuario para a tela de inicio;



        // =========================== CADASTRO MÉDICO ==================================

    cadastromedico:

        printf("\n------------------------ CADASTRO MEDICO ---------------------------------\n\n\n");

        printf("\n------------------------ PREENCHA DE ACORDO COM AS INFORMAÇOES ABAIXO ---------------------------------\n\n\n");

        printf("NOME  DO MEDICO..................................................");
        fflush(stdin);
        fgets(medico.nome, 50, stdin);

        printf("\nINSIRA A IDADE..................................................");
        fflush(stdin);
        scanf("%d" , &medico.idade);

        printf("\nINSIRA O NUMERO..................................................");
        fflush(stdin);
        scanf("%d" , &medico.numero);

        printf("\nINFORME O ENDERECO..................................................");
        fflush(stdin);
        fgets(medico.endereco, 40, stdin);

        printf("\nINFORME O E-MAIL..................................................");
        fflush(stdin);
        fgets(medico.e_mail, 20, stdin);

        printf("\nINFORME O SEXO..................................................");
        fflush(stdin);
        fgets(medico.sexo, 10, stdin);


         printf("\n\n----------------------------CADASTRO REALIZADO------------------------------------------\n\n\n");

        printf("NOME DO MEDICO........................... %s " , medico.nome);
        printf("\nIDADE ........................... %d " , medico.idade);
        printf("\nNUMERO ........................... %d " , medico.numero);
        printf("\nENDERECO........................... %s " , medico.endereco);
        printf("\nE-MAIL........................... %s " , medico.e_mail);
        printf("\nSEXO........................... %s " , medico.sexo);

          system("pause");
        goto inicio; // Direciona o usuario para a tela de inicio;

        //===================== CADASTRO DE FUNCIONARIOS ========================

    cadastrofuncionario: // Ponto de salto direto para a tela de funcionarios

        printf("\n------------------------ CADASTRO DE FUNCIONARIOS ---------------------------------\n\n\n");

        printf("\n------------------------ PREENCHA DE ACORDO COM AS INFORMAÇOES ABAIXO ---------------------------------\n\n\n");

        printf("INFORME O NOME..................................................");
        fflush(stdin);
        fgets(funci.nome, 50, stdin);

        printf("INSIRA A IDADE..................................................");
        scanf("%d" , &funci.idade);

        printf("INSIRA O NUMERO..................................................");
        scanf("%d" , &funci.numero);

        printf("INFORME O ENDERECO..................................................");
        fflush(stdin);
        fgets(funci.endereco, 40, stdin);

        printf("INFORME O E-MAIL..................................................");
        fflush(stdin);
        fgets(funci.e_mail, 20, stdin);

        printf("INFORME O SEXO..................................................");
        fflush(stdin);
        fgets(funci.sexo, 10, stdin);


         printf("\n\n----------------------------CADASTRO REALIZADO------------------------------------------\n\n\n");

        printf("NOME DO FUNCIONARIO........................... %s " , funci.nome);
        printf("\nIDADE ........................... %d " , funci.idade);
        printf("\nNUMERO ........................... %d " , funci.numero);
        printf("\nENDERECO........................... %s " , funci.endereco);
        printf("\nE-MAIL........................... %s" , funci.e_mail);
        printf("\nSEXO........................... %s \n" , funci.sexo);

        system("pause");
        goto inicio; // Direciona o usuario para o inicio após o encerramento do processo

// =========================== RECLAMAÇOES E ELEGIOS ==================================

    reclamacoes_elogios: //LEMBRA DE TROCAR

        printf("\n***************\tRECLAMACOES E ELEGIOS ***************\t\n\n\n");

        printf("\n***************\tPREENCHA DE ACORDO COM AS INFORMAÇOES ABAIXO ***************\t\n\n\n");

        printf("INFORME O NOME..................................................");
        fflush(stdin);
        fgets(insat_satis.nome, 50, stdin);

        printf("\nINFORME O SEU RELATO..............................................");
        fflush(stdin);
        fgets(insat_satis.relato, 100, stdin);

         printf("\n\n***************\tCADASTRO REALIZADO***************\t\n\n\n");

        printf("NOME DO FUNCIONARIO........................... %s " , insat_satis.nome);
        printf("\nRELATO........................... %s \n" , insat_satis.relato);

        system("pause");
        goto inicio; // Direciona o usuario para a tela de inicio; */
// ========================== CANCELAMENTO DE CONSULTA ===========================

    cancelamentoconsulta:

        printf("\n------------------------ CANCELAMENTOS DE CONSULTAS ---------------------------------\n\n\n");

        printf("\n------------------------ PREENCHA DE ACORDO COM AS INFORMAÇOES ABAIXO ---------------------------------\n\n\n");

        printf("INFORME O NOME..................................................");
        fflush(stdin);
        fgets(consulta.nome, 50, stdin);

        printf("INSIRA A IDADE..................................................");
        fflush(stdin);
        scanf("%d" , &consulta.idade);

        printf("INSIRA O NUMERO..................................................");
        fflush(stdin);
        scanf("%d" , &consulta.numero);

        printf("INFORME O E-MAIL..................................................");
        fflush(stdin);
        fgets(consulta.e_mail, 20, stdin);

        printf("INFORME O SEXO..................................................");
        fflush(stdin);
        fgets(consulta.sexo, 10, stdin);


         printf("\n\n----------------------------CADASTRO REALIZADO------------------------------------------\n\n\n");

        printf("NOME DO FUNCIONARIO........................... %s " , consulta.nome);
        printf("\nIDADE ........................... %d " , consulta.idade);
        printf("\nNUMERO ........................... %d " , consulta.numero);
        printf("\nE-MAIL........................... %s" , consulta.e_mail);
        printf("\nSEXO........................... %s" , consulta.sexo);


        system("pause");
        goto inicio; // Direciona o usuario para a tela de inicio;

    return 0;
}
