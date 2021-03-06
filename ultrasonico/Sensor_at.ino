#include <Ultrasonic.h>

#define trigger 4
#define echo 3
#define G 6
#define Y 7
#define R 8

 float distancia = 0;

 Ultrasonic sensor(trigger,echo);


void setup ()  {

 pinMode (trigger, OUTPUT );
 pinMode (echo,INPUT);
 Serial.begin(9600);
pinMode (G, OUTPUT );
pinMode (Y, OUTPUT );
pinMode (R, OUTPUT );
 
}


void loop () {
 digitalWrite(trigger, 0);
 delay(60);
 digitalWrite(trigger, 1);
 delay(60);
 digitalWrite(trigger, 0);

  distancia = pulseIn(echo, 1);
  distancia = distancia /60;
  Serial.print("Distancia: ");
  Serial.println(distancia);
  delay(200);

if ((distancia >=0) && (distancia <30)) {
   digitalWrite (R, 1);
   digitalWrite (G, 0);
   digitalWrite (Y, 0);
}
else if((distancia >=20) && (distancia <110)) {
   digitalWrite (R, 0);
   digitalWrite (G, 0);
   digitalWrite (Y, 1);   }

else if((distancia >=100) && (distancia <2300)) {
   digitalWrite (R, 0);
   digitalWrite (G, 1);
   digitalWrite (Y, 0);   }

}
