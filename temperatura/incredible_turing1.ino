// Projeto conversor Temperstura
//Declaração de variáveis
byte leds[] = {2, 3, 4, 5, 6, 7, 8, 9};
int sensor = A0;
float temp = 0;
float temp2 = 0;

// Inicialização das variáveis (vetor ou array)
void setup() {
    for (int i = 0; i <= sizeof(leds); i++) {
        pinMode(leds[i], OUTPUT);
    }
        pinMode(sensor, INPUT);
        //analogReference(INTERNAL);
     Serial.begin(9600); 
}

// Lógica ou execução das instruções
void loop() {
  	temp2 = analogRead(sensor);
  float tensao = 5 * temp2;
  tensao = tensao / 1024;
  temp = (tensao - 0.5) * 100;
  
  Serial.print("TEMPERATURA: "); 
  Serial.print(temp);
  Serial.println(" C");

  if (temp >= -40 && temp <= 20) {
    digitalWrite (leds[0], 1);
    digitalWrite (leds[1], 1);
    digitalWrite (leds[2], 1);
    digitalWrite (leds[3], 0);
    digitalWrite (leds[4], 0);
    digitalWrite (leds[5], 0);
    digitalWrite (leds[6], 0);
    digitalWrite (leds[7], 0);
   }
  
  
  if (temp >= 21 && temp <=60) {
    digitalWrite (leds[0], 0);
    digitalWrite (leds[1], 0);
    digitalWrite (leds[2], 0);
    digitalWrite (leds[3], 1);
    digitalWrite (leds[4], 1);
    digitalWrite (leds[5], 0);
    digitalWrite (leds[6], 0);
    digitalWrite (leds[7], 0);
  }
  
    else if (temp > 61 && temp <125) {
    digitalWrite (leds[0], 0);  
    digitalWrite (leds[1], 0);
    digitalWrite (leds[2], 0);
    digitalWrite (leds[3], 0);    
    digitalWrite (leds[4], 0);
    digitalWrite (leds[5], 1);
    digitalWrite (leds[6], 1);
    digitalWrite (leds[7], 1); }
  
 
  
  }
  
  
  
  
  
  
  
  
      
      
      