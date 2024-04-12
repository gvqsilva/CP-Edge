**Sistema de Controle de Luminosidade do Ambiente**


  Este é um projeto de sistema de controle de luminosidade do ambiente utilizando um sensor LDR (Light Dependent Resistor), uma placa Arduino Uno R3 e LEDs indicadores de status. O sistema é projetado para indicar visualmente o nível de luminosidade do ambiente, utilizando LEDs verde, amarelo e vermelho para representar diferentes estados de luminosidade. Além disso, um buzzer é acionado por 3 segundos em caso de nível crítico de luminosidade.


**Funcionalidades:**

- Medição contínua da luminosidade ambiente utilizando um sensor LDR;
- Indicação visual do estado de luminosidade utilizando LEDs verde, amarelo e vermelho;
- Alerta sonoro em caso de nível crítico de luminosidade.


**Componentes Utilizados:**
- Placa Arduino Uno R3;
-	Sensor LDR (Light Dependent Resistor);
-	Resistores (para limitar a corrente dos LEDs);
-	LEDs verde, amarelo e vermelho;
-	Buzzer (para alerta sonoro).

![image](https://github.com/gvqsilva/CP-Edge/assets/110639916/15981cd6-d096-4c9c-9b18-a7ff0df345fd)

*Figura 1 - Lista de componentes utilizados*


**Instalação:**

**1º-** Monte o circuito conforme a imagem contida mais abaixo;

**2º-** Conecte o sensor LDR e os outros componentes ao Arduino de acordo com o esquema elétrico;

**3º-** Carregue o código fonte (controle_luminosidade.ino) para o seu Arduino utilizando a IDE do Arduino;

**4º-** Conecte os LEDs e o buzzer ao circuito, garantindo a polaridade correta.



![image](https://github.com/gvqsilva/CP-Edge/assets/110639916/93644266-4023-4767-8567-f42b565d79bc)

*Figura 2 - Esquema para montagem de circuito*

![image](https://github.com/gvqsilva/CP-Edge/assets/110639916/d4dfbe5e-cfb0-4b9d-95de-33e38eb2f9de)

*Figura 3 - Visão do esquema*

**Uso:**



**1º-** O sensor LDR irá detectar a luminosidade ambiente.

**2º-** Com base na leitura do sensor, o Arduino acionará os LEDs verde, amarelo ou vermelho conforme o estado de luminosidade.

*Figura 4 - Mostrando o valor e porcentagem da luminosidade *





**3º-** Se o nível de luminosidade atingir um estado crítico, o buzzer será acionado por 3 segundos para alertar sobre a condição.

**4º-** Observe as indicações visuais e sonoras para avaliar o nível de luminosidade do ambiente.

**Código do Programa:**

https://github.com/gvqsilva/CP-Edge/blob/main/sketch_apr12a.ino


**Explicação do projeto:**

https://youtu.be/0N-_dDu8mqs?si=dZSneTUiGylJYa82
