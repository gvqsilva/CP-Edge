<p align='center'>
  <img loading="lazy" src = "https://github.com/gvqsilva/CP-Edge/assets/110639916/e44b584a-f189-41b0-9876-63ff29b3bed5"/>
</p>
<h1 align="center">Sistema de Controle de Luminosidade do Ambiente</h1>

# Índice
* [Descrição do Projeto](#descrição-do-projeto)
* [Funcionalidades do projeto](#funcionalidades-do-projeto)
* [Componentes Utilizados](#componentes-utilizados)
* [Instalação](#instalação)
* [Como usar](#como-usar)
* [Código do programa](#código-do-programa)
* [Vídeo do projeto](#vídeo-do-projeto)
  
<h2 id="Descrição do Projeto">📖Descrição do projeto:</h2>
  Este é um projeto de sistema de controle de luminosidade do ambiente utilizando um sensor LDR (Light Dependent Resistor), uma placa Arduino Uno R3 e LEDs indicadores de status. O sistema é projetado para indicar visualmente o nível de luminosidade do ambiente, utilizando LEDs verde, amarelo e vermelho para representar diferentes estados de luminosidade. Além disso, um buzzer é acionado por 3 segundos em caso de nível crítico de luminosidade.


<h2 id="Funcionalidades">🔨Funcionalidades do projeto:</h2>

- `Funcionalidade 1`: Medição contínua da luminosidade ambiente utilizando um sensor LDR;
- `Funcionalidade 2`: Indicação visual do estado de luminosidade utilizando LEDs verde, amarelo e vermelho;
- `Funcionalidade 3`: Alerta sonoro em caso de nível crítico de luminosidade.


<h2 id="Componentes Utilizados">Componentes Utilizados:</h2>
<ul>
  <li>Placa Arduino Uno R3;</li>
  <li>Sensor LDR (Light Dependent Resistor);</li>
  <li>Resistores (para limitar a corrente dos LEDs);</li>
  <li>LEDs verde, amarelo e vermelho;</li>
  <li>Buzzer (para alerta sonoro).</li>

</ul>

![image](https://github.com/gvqsilva/CP-Edge/assets/110639916/289a19da-33aa-43b7-aab6-ebdd110d5710)

*Figura 1 - Lista de componentes utilizados*


<h2 id="Instalação">Instalação</h2>
<ol>
  <li>Monte o circuito conforme a imagem contida mais abaixo;</li>
  <li>Conecte o sensor LDR e os outros componentes ao Arduino de acordo com o esquema elétrico;</li>
  <li>Carregue o código fonte (controle_luminosidade.ino) para o seu Arduino utilizando a IDE do Arduino;</li>
  <li>Conecte os LEDs e o buzzer ao circuito, garantindo a polaridade correta.</li>
</ol>

![image](https://github.com/gvqsilva/CP-Edge/assets/110639916/93644266-4023-4767-8567-f42b565d79bc)

*Figura 2 - Esquema para montagem de circuito*

<h2 id="Como usar">Como usar:</h2>
<ol>
  <li>O sensor LDR irá detectar a luminosidade ambiente;</li>
  <li>Com base na leitura do sensor, o Arduino acionará os LEDs verde, amarelo ou vermelho conforme o estado de luminosidade;</li>
  <li>Se o nível de luminosidade atingir um estado crítico, o buzzer será acionado por 3 segundos para alertar sobre a condição;</li>
  <li>Observe as indicações visuais e sonoras para avaliar o nível de luminosidade do ambiente.</li>
</ol>

<h2 id="Código do programa">Código do programa</h2>

https://github.com/gvqsilva/CP-Edge/blob/main/sketch_apr12a.ino


<h2 id="Vídeo do projeto">📹Vídeo do projeto:</h2>

https://youtu.be/0N-_dDu8mqs?si=dZSneTUiGylJYa82
