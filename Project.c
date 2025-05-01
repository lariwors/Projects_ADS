/*
-- Doctor link -- 
- Esse programa será utilizado para agendamento de consultas médicas especializadas;
- O usuário terá 4 opções diferentes para escolher as especialidades, os médicos, as datas e os horarios;
- Será utilizado operadores relacionais (==) e estruturas condicionais (if/else/switch) para validar as escolhas;
- Mostrará um resumo do agendamento e solicitação de confirmação antes de finalizar.
*/

#include <stdio.h>

int main(){
    char nome[50], sobrenome[50], telefone[20]; // armazenamento dos dados do usuário.
    int especialidade, medico, data, horario; //armazenamento das variáveis médicas.
    int consulta, confirma; //armazenamento das variáveis para a confirmação inicial e final.

// Apresentação e primeiro atendimento.
    printf("****Olá, bem vindo a Doctor Link - Especialidades Médicas****\n\n");
    printf("Gostaria de marcar uma consulta com um de nossos especialistas?\n");
    printf("Digite 1 para SIM ou 2 para NÃO.\n");
        scanf("%d", &consulta);

    //confirmação se o usuário aceita realizar o agendamento ou não.
        if (consulta == 1) {
            printf("\nÓtimo, vamos prosseguir com o seu agendamento!\n\n");
        } else {    
            printf("Tudo bem! Estaremos sempre disponíveis caso queira agendar em um outro momento!"); 
            printf("\nA Doctor Link agradece.\n");
        
        return 1;
        }

    // Introdução dos dados do usuário.
    printf("Primeiro, precisamos de alguns dados pessoais para continuar.\n"); 
    
    printf("Digite seu primeiro nome:\n");
        scanf("%s", &nome);
    printf("Digite seu sobrenome:\n");
        scanf("%s", &sobrenome);
    printf("Digite seu número de telefone (com DDD):\n\n");
        scanf("%s", &telefone);

// Escolha da especialidade.
    printf("Agora, digite o número da especialidade desejada:\n");

    printf("1 - Cardiologia\n");
    printf("2 - Endócrinologia\n");
    printf("3 - Neurologia\n");
    printf("4 - Ginecologia\n");
        scanf("%d", &especialidade);

// Escolha do médico.
    printf("\nDigite o número do médico especialista desejado:\n");

    printf("1 - Dr. Vinicius Meneghel\n");
    printf("2 - Dra. Amanda Rodrigues\n");
    printf("3 - Dra. Angelica Muniz\n");
    printf("4 - Dra. Larissa Lima\n");
        scanf("%d", &medico);

// Escolha do dia.
    printf("\nEscolha o melhor dia para a consulta:\n");

    printf("1 - 05/05/2025: Segunda-feira\n");
    printf("2 - 10/05/2025: Quinta-feira\n");
    printf("3 - 13/05/2025: Terça-feira\n");
    printf("4 - 17/05/2025: Sábado\n");
        scanf("%d", &data);

//Escolha do horário.
    printf("\nAgora, escolha o melhor horário para a sua consulta:\n");

    printf("1 - 09:00\n");
    printf("2 - 10:30\n");
    printf("3 - 12:00\n");
    printf("4 - 14:30\n");
        scanf("%d", &horario);

// Resumo do seu agendamento:
    printf("\n====================================");
    printf("\nResumo do seu agendamento:\n\n");   

// Mostrar a especialidade escolhida.
    if (especialidade == 1) {
        printf("Especialidade: Cardiologia\n");   
    } else if (especialidade == 2) {
        printf("Especialidade: Endócrinologia\n");
    } else if (especialidade == 3) {
        printf("Especialidade: Neurologia\n");
    } else if (especialidade == 4) {
        printf("Especialidade: Ginecologia\n");
    } else {
        printf("Especialidade inválida!\n"); // Encerra o programa caso a opção for incorreta.
        
    return 1;
    }

// Mostrar o médico escolhido:
    if (medico == 1) {
        printf("Médico: Dr. Vinicius Meneghel\n");
    } else if (medico == 2) {
        printf("Médico: Dra. Amanda Rodrigues\n");
    } else if (medico == 3) {
        printf("Médico: Dra. Angelica Muniz\n");
    } else if (medico == 4) {
        printf("Médico: Dra. Larissa Lima\n");
    } else {
        printf("Médico inválido!\n");

    return 1;
    }

// Mostrar o dia escolhido:
    if (data == 1) {
        printf("Dia: 05/05/2025 - Segunda-feira\n");
    } else if (data == 2) {
        printf("Data: 10/05/2025 - Quinta-feira\n");
    } else if (data == 3) {
        printf("Data: 13/05/2025 - Terça-feira\n");
    } else if (data == 4) {
        printf("Data: 17/05/2025 - Sábado\n");
    } else {
        printf("Dia inválido!\n");

    return 1;
    }
    
// Mostrar o horário escolhido:
    if (horario == 1) {
        printf("Horário: 09:00\n");
    } else if (horario == 2) {
        printf("Horário: 10:30\n");
    } else if (horario == 3) {
        printf("Horário: 12:00\n");
    } else if (horario == 4) {
        printf("Horário: 14:30\n");
    } else {
        printf("Horário inválido!\n");

    return 1;
    }

// Mostrar os dados do paciente:
    printf("Dados do paciente:\n", nome, sobrenome, telefone);

//Confirmação da consulta:
    printf ("\nVocê confirma este agendamento?\n");
    printf("Digite 1 para SIM ou 2 para NÃO\n");
        scanf("%d", &confirma);
    
    if (confirma == 1) {
        printf("\nConsulta agendada com sucesso!\n");
        printf("A Doctor Link agradece a preferência!\n");
    } else {
        printf("\nAgendamento não confirmado.\n");
    printf("Caso queira agendar em outro momento, estaremos à disposição!\n");
    }

    return 0;
    }
