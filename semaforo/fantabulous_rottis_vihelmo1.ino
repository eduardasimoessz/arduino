//Semáforo legal
//Declaração de variáveis
byte led1 =8;
byte led2 =5;
byte led3 =2;
byte led4 =4;
byte led5 =3;
int botao =6;
int estado =0;
int tempo =500;
//inicialização das variáveis
void setup (){
  pinMode (led1, OUTPUT);   //Saída
  pinMode (led2, OUTPUT);
  pinMode (led3, OUTPUT);
  pinMode (led4, OUTPUT);
  pinMode (led5, OUTPUT);
  pinMode (botao, INPUT);
}

//eXECUÇÃO  
void loop ()  {
  
  
  estado = digitalRead(botao);
  
  if (estado ==HIGH){
    digitalWrite (led4,1); 
    delay (500);
    digitalWrite (led4,0);
    delay (500);
    
    digitalWrite (led5,1); 
    delay (500);
    digitalWrite (led5,0);
    delay (500);
  }
  
  else {
  
 digitalWrite (led1,1); 
  delay (500);
 digitalWrite (led1,0);
  delay (500);
 
 digitalWrite (led2, 1);
  delay (500);
 digitalWrite (led2 ,0);
  delay (500);
 
 digitalWrite (led3,1);
  delay (500);
 digitalWrite (led3,0);
  delay (500);  
  }
}