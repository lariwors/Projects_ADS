# Projects_DOCTOR LINK

=== Doctor Link - Sistema de Agendamento Médico ==

Descrição geral:
- Este programa simula um sistema de agendamento de consultas médicas especializadas.
- O usuário pode fornecer dados pessoais, escolher uma especialidade médica, selecionar um profissional, data e horário.
- programa confirma todas as etapas do agendamento antes de finalizar.

Funcionalidades:
1. Apresentação inicial e convite para agendamento.
2. Coleta de dados pessoais do usuário: nome, sobrenome e telefone.
3. Validação e confirmação dos dados inseridos.
4. Escolha entre 4 especialidades médicas disponíveis.
5. Escolha entre 4 médicos.
6. Escolha entre 4 datas e 4 horários disponíveis.
7. Exibição de um resumo completo da consulta.
8. Confirmação final do agendamento ou opção de reinício.       

Variáveis:
- nome, sobrenome (char[50]): armazenam o nome do paciente.
- telefone (char[12]): armazena o telefone com DDD (apenas números).
- especialidade, medico, data, horario (int): armazenam as opções escolhidas em cada etapa.
- consulta (int): define se o usuário deseja iniciar o agendamento.
- confirmaDados (int): controla a confirmação dos dados pessoais.
- confirmaConsulta (int): controla a confirmação final da consulta.
- tentarNovamente (int): controla o loop principal de repetição para reiniciar o processo se necessário.

Estruturas utilizadas:
- Condicionais:
 - if, else if e else para validar decisões do usuário.
 
- Laços de repetição: 
  - do...while para validação de entrada e confirmação de dados.
  - while principal que permite reiniciar o agendamento se não for confirmado.
  - switch: usado para mostrar as opções escolhidas (especialidade, médico, data, horário).

Validações:
- O programa aceita apenas entradas numéricas específicas para cada opção.
- Mensagens de erro são exibidas para entradas inválidas.
- Todas as etapas exigem confirmação do usuário antes de prosseguir.

Objetivo:
- Fornecer uma experiência de agendamento simples e interativa.
- Garantir que todas as informações estejam corretas antes de concluir o processo.
