#include <stdio.h>

    // Armazenamento das variáveis utilizadas.
    int main(){
        char nome[50], sobrenome[50], telefone[12];
        int especialidade, medico, data, horario; 
        int consulta, confirmaDados, confirmaConsulta, tentarNovamente = 1; //Variáveis de controle para a lógica de repetição.


    // Apresentação inicial do programa:
        printf("****Olá, bem vindo a Doctor Link - Especialidades Médicas****\n\n");

    // Loop para garantir que o usuário digitou uma entrada válida (1 ou 2)
    do{
        printf("Gostaria de marcar uma consulta com um de nossos especialistas?\n");
        printf("Digite 1 para SIM ou 2 para NÃO.\n");
        scanf("%d", &consulta);

        // Se a resposta for diferente de 1 e 2:
        if (consulta != 1 && consulta != 2) {
            printf("Entrada inválida. Por favor, digite 1 ou 2.\n\n");
        }
    } while (consulta != 1 && consulta != 2);

    // Se o usuário escolher "SIM" para continuar, começa a coleta de dados, senão, encerra o programa.
        if (consulta == 1) {
            printf("\nÓtimo! Vamos precisar de alguns dados pessoais para continuar.\n");
    } else {
        printf("Tudo bem! Estaremos sempre disponíveis caso queira agendar em um outro momento!"); 
        printf("\nA Doctor Link agradece.\n");
        return 0; // Encerra o programa.
        }

    // Coleta dos dados do usuário: nome, sobrenome e telefone. 
    do {
        printf("\nDigite seu primeiro nome:\n");
        scanf("%s", nome);

        printf("Digite seu sobrenome:\n");
        scanf("%s", sobrenome);

        printf("Digite seu telefone com DDD (somente números e sem espaços):\n");
        scanf("%s", telefone);

    // Confirmação se os dados estão corretos.
    do {
        printf("\nOs seus dados estão corretos?\n");
        printf("Nome completo: %s %s\n", nome, sobrenome);
        printf("Telefone: %s\n", telefone);
    
        printf("\nDigite 1 para SIM ou 2 para NÃO.\n");
        scanf("%d", &confirmaDados);
        
        // Verifica se a entrada é válida.
        if (confirmaDados != 1 && confirmaDados != 2) {
            printf("Entrada inválida. Digite apenas 1 ou 2.\n");
        }
    } while (confirmaDados != 1 && confirmaDados != 2); // Caso o usuário digite um número diferente de 1 e 2, repete até obter uma resposta válida.

    // Se o usuário disser que os dados estão errados, retorna a página para inresir os dados novamente.
        if (confirmaDados == 2) {
            printf("\nInsira seus dados novamente.");
        }
    } while (confirmaDados != 1); // Repete até o usuário confirmar que os dados estão corretos
            
// -----------------------------------------------------------------------------------------------------------------
    // Laço principal de agendamento
    while (tentarNovamente == 1) {
// -----------------------------------------------------------------------------------------------------------------

    // ESCOLHA DA ESPECIALIDADE.
    do {
        printf("\n%s, vamos começar!\n", nome);
        printf("Digite uma opção para ESPECIALIDADE desejada:\n");
        printf("1 - Cardiologia\n");
        printf("2 - Endócrinologia\n");
        printf("3 - Neurologia\n");
        printf("4 - Ginecologia\n");
            scanf("%d", &especialidade);
        
        // Verifica se a opção é válida (1 a 4)
        if (especialidade < 1 || especialidade > 4) {
            printf("\nOpção inválida. Tente novamente digitando um número de 1 a 4.\n");
        }    
    } while (especialidade < 1 || especialidade > 4); // Repete até a escolha ser válida.
            
    // ESCOLHA DO MÉDICO.
    do {
        printf("\nDigite a opção do MÉDICO especialista desejado:\n");
        printf("1 - Dr. Vinicius Meneghel\n");
        printf("2 - Dra. Amanda Rodrigues\n");
        printf("3 - Dra. Angelica Muniz\n");
        printf("4 - Dra. Maria Souza\n");
            scanf("%d", &medico);

        // Verifica se a opção é válida (1 a 4)
        if (medico < 1 || medico > 4) {
            printf("\nOpção inválida. Tente novamente digitando um número de 1 a 4.\n"); 
        }
        } while (medico < 1 || medico > 4); // Repete até a escolha ser válida.

    // ESCOLHA DA DATA.
    do {
        printf("\nEscolha o melhor DATA para a consulta:\n");
        printf("1 - 10/05/2025 - Quinta-feira\n");
        printf("2 - 13/05/2025 - Terça-feira\n");
        printf("3 - 17/05/2025 - Sábado\n");
        printf("4 - 19/05/2025 - Segunda-feira\n");
            scanf("%d", &data);
            
        // Verifica se a opção é válida (1 a 4)
        if (data < 1 || data > 4) {
            printf("\nOpção inválida. Tente novamente digitando um número de 1 a 4.\n");
        }
    } while (data < 1 || data > 4); // Repete até a escolha ser válida.
            
    //ESCOLHA DO HORÁRIO.
    do {
        printf("\nAgora, escolha o melhor HORÁRIO para a sua consulta:\n");
        printf("1 - 09:00\n");
        printf("2 - 10:30\n");
        printf("3 - 12:00\n");
        printf("4 - 14:30\n");
            scanf("%d", &horario);
        
        // Verifica se a opção é válida (1 a 4)
        if (horario < 1 || horario > 4) {
            printf("\nOpção inválida. Tente novamente digitando um número de 1 a 4.\n");
        }
    } while (horario < 1 || horario > 4); // Repete até a escolha ser válida.

    // RESUMO DO AGENDAMENTO:
    printf("\n====================================");
    printf("\nResumo do seu agendamento:\n\n");   

    // Mostrar a especialidade escolhida.
    switch (especialidade) {
        case 1: printf("Especialidade: Cardiologia\n"); break;
        case 2: printf("Especialidade: Endócrinologia\n"); break;
        case 3: printf("Especialidade: Neurologia\n"); break;
        case 4: printf("Especialidade: Ginecologia\n"); break;
    } 

    // Mostrar o médico escolhido:
    switch (medico) {
        case 1: printf("Médico: Dr. Vinicius Meneghel\n"); break;
        case 2: printf("Médico: Dra. Amanda Rodrigues\n"); break;
        case 3: printf("Médico: Dra. Angelica Muniz\n"); break;
        case 4: printf("Médico: Dra. Larissa Lima\n"); break;
    }

    // Mostrar o dia escolhido:
    switch (data) {
        case 1: printf("Data: 10/05/2025 - Quinta-feira\n"); break;
        case 2: printf("Data: 13/05/2025 - Terça-feira\n"); break;
        case 3: printf("Data: 17/05/2025 - Sábado\n"); break;
        case 4: printf("Data: 19/05/2025 - Segunda-feira\n"); break;
    }
            
    // Mostrar o horário escolhido:
    switch (horario) {
        case 1: printf("Horário: 09:00\n"); break;
        case 2: printf("Horário: 10:30\n"); break;
        case 3: printf("Horário: 12:00\n"); break;
        case 4: printf("Horário: 14:30\n"); break;
    }

    // Mostrar os dados do paciente:
    printf("\nDados do paciente:\n");
    printf("Nome completo: %s %s\n", nome, sobrenome);
    printf("Telefone: %s\n", telefone);


    //CONFIRMAÇÃO DA CONSULTA:
    do {
        printf ("\n%s, Você confirma este agendamento?\n", nome);
        printf("Digite 1 para SIM ou 2 para NÃO\n");
            scanf("%d", &confirmaConsulta);
        
        // Verifica se a entrada é válida
        if (confirmaConsulta != 1 && confirmaConsulta != 2) {
            printf("Entrada inválida. Digite 1 ou 2.\n");
        }
    } while (confirmaConsulta != 1 && confirmaConsulta != 2); // Repete até o usuário digitar uma opção válida

     // Se o usuário confirmar, o agendamento é finalizado.
        if (confirmaConsulta == 1) {
        printf("\nConsulta agendada com sucesso!\n");
        printf("A Doctor Link agradece a preferência!\n");
        tentarNovamente = 0; // Encerra o laço.
    } else {
    
    // Se o agendamento não for confirmado, pergunta se o usuário deseja tentar novamente
    do {
        printf("\nAGENDAMENTO NÃO CONFIRMADO.\n");
        printf("Gostaria de voltar ao menu?\nDigite 1 para SIM ou 2 para NÃO:\n");
            scanf("%d", &tentarNovamente); // Pergunta se o usuário deseja voltar ao MENU e realizar um novo atendimento.

         // Verifica se a entrada é válida.
        if (tentarNovamente != 1 && tentarNovamente != 2) {
            printf("Entrada inválida. Digite 1 ou 2.\n");
            }
        } while (tentarNovamente != 1 && tentarNovamente != 2); // Repete até o usuário digitar uma opção válida (1 ou 2).

        // Se o usuário não quiser realizar o atendimento novamente, o programa é encerrado.
        if (tentarNovamente != 1) {
            printf("\nTudo bem! Caso queira agendar em outro momento, estaremos à disposição!\n\n");
            }
        }
    }
        return 0; // Fim do programa
    }