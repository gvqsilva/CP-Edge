/*
  Frequência das notas:
  Dó - 262 Hz
  Ré - 294 Hz
  Mi - 330 Hz
  Fá - 349 Hz
  Sol - 392 Hz
  Lá - 440 Hz
  Si - 494 Hz
  #Dó - 528 Hz
  */

int ledverde = 11;    //Declaração do led verde na porta 11
int ledamarelo = 10;  //Declaração do led amarelo na porta 10
int ledvermelho = 9;  //Declaração do led verde na porta 09
float LDR = A0;     //Declaração do LDR na porta 0
int valorLDR = 0;     //Valor inicial do LDR
int buzzer = 5;     //Declaração do buzzer
int tempo = 528;    //Nota que irá tocar no buzzer
int intluz;

void setup (){

Serial.begin(9600);       //Velocidade porta serial
pinMode(ledverde , OUTPUT);   //Fixando variavel/port de saída
pinMode(ledamarelo , OUTPUT); //Fixando variavel/port de saída
pinMode(ledvermelho , OUTPUT);  //Fixando variavel/port de saída
pinMode(LDR , INPUT);     //Fixando variavel/port de entrada
pinMode(buzzer, OUTPUT);    //Fixando variavel/port de saída
  
}

void loop(){
  
  valorLDR = analogRead(LDR); 		//Especificando a leitura analogica para LDR
  intluz = map(valorLDR, 259, 969, 0, 100);		//Numerando a intensidade de luz
  Serial.print("Intensidade de Luz 0 - 1023 = ");	//Valores no Monitor Serial
  Serial.println(valorLDR);			//valorLDR no Monitor Serial
  Serial.print("Intensidade de Luz 0 - 100% = ");	//Porcentagem no Monitor Serial
  Serial.println(intluz);			//intluz no Monitor Serial
  delay(1000);				//tempo de 1 segundo
 
//Luminosidade Baixa
  
  if (intluz < 30){      //Verifica valor LDR se menor que 100
  apagaLeds();          //Apagamento de leds
  digitalWrite(ledverde, HIGH); //Acende apenas o led verde
  noTone(buzzer);       //Não liga/toca o buzzer
  }
  
//Luminosidade Media
  
  if (intluz >= 31 && intluz <= 90){  //Verifica valor LDR se maior/igual que 100 e menor que 150
  apagaLeds();                //Apagamento de leds
  digitalWrite(ledamarelo, HIGH);     //Acende apenas o led amarelo
  noTone(buzzer);               //Não liga/toca o buzzer
    
  }
  
//Luminosidade Alta
  
  if (intluz > 91){        //Verifica valor LDR se maior que 150
  apagaLeds();            //Apagamento de leds
  digitalWrite(ledvermelho, HIGH);  //Acende apenas o led vermelho
  delay(5000);            //Buzzer é ativado de 5 em 5 segundo
  tone(buzzer,tempo);     //Liga/toca o buzzer
  delay(3000);            //Toca durante 3 segundos
  noTone(buzzer);         //Desativa o buzzer
  
  }  
  
  Serial.print(valorLDR);   //Impressão do valor LDR
  
}

void apagaLeds(){         //Apagamento de leds
  digitalWrite(ledverde, LOW);    //Porta digital ledverde(11) em nível baixo
  digitalWrite(ledamarelo, LOW);  //Porta digital ledamarelo(10) em nível baixo
  digitalWrite(ledvermelho, LOW); //Porta digital ledvermelho(9) em nível baixo
  noTone(buzzer);         //Não liga/toca o buzzer
}
 
  