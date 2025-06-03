# Super-trunfo-cidades

Este projeto simula uma rodada do jogo Super Trunfo, onde duas cartas são comparadas com base em um único atributo numérico. Cada carta representa uma cidade brasileira e possui diversas informações, como estado, código, nome da cidade, população, área territorial, PIB, número de pontos turísticos, além de dois valores calculados: densidade populacional (população dividida pela área) e PIB per capita (PIB dividido pela população).

A lógica:

Cadastro - Comparação - Resultado

Começa com o cadastro de duas cartas, preenchidas direto do código com dados fictícios (ou reais). Em seguida, o programa calcula automaticamente os dois atributos — densidade e PIB per capita — usando uma função específica. Depois disso, os dados das duas cartas são mostrados de forma clara na tela (usando "printf"), permitindo que o jogador veja todos os atributos antes da comparação.

A comparação em si é feita de forma direta e fixa, usando estruturas condicionais if e else if. O atributo escolhido para a comparação (como população, área ou outro) é definido diretamente no código. Pra maioria dos atributos, a carta com o maior valor vence; mas no caso da densidade populacional, quem vence é a carta com o valor menor — pois esse é o critério do jogo. Por fim, o programa exibe o resultado da comparação, mostrando qual carta venceu, com os valores de ambas as cartas para o atributo escolhido.

Essa lógica simples bota em prática o uso de structs, funções, cálculos matemáticos e condicionais em C, servindo como uma base sólida para expandir o jogo no futuro com funções interativas, várias cartas e escolha de atributos.

Espero que gostem!
