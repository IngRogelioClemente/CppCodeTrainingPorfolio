//PROGRAMA QUE EJECUTA EL EAGLE BOT
//By Ing. Rogelio Clemente Balderas

//EN ESTE APARTADO SE ASIGNAN LAS VARIABLES ASIGNADAS AL PIN DEL ARDUINO
int IN1 = 2;
int IN2 = 3;
int ENA = 5;
int IN3 = 7;
int IN4 = 8;
int ENB = 9;

//EN ESTE APARTADO ASGINAMOS EL VALOR QUE ARROJA
void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);
}

//EN ESTE APARTADO SE ESCRIBE LO QUE DESEA HACER TOMANDO EN CUENTA LAS VARIABLES ASIGNADAS
void loop() {
  digitalWrite(ENA, HIGH);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(ENB, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delay(1000);

  digitalWrite(ENA, LOW);
  digitalWrite(ENB, LOW);
  delay(1000);

  digitalWrite(ENA, HIGH);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  delay(500); 

  digitalWrite(ENA, LOW);
  digitalWrite(ENB, LOW);
  delay(1000);

}
