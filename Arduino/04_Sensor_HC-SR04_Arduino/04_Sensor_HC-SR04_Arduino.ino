//PROGRAMA DE ARDUINO QUE EJECTURA UN SENSOR HC-SR04.
//ESTE PROGRAMA DETECTA E IMPRIME LA DISTANCIA OBTENIDA MEDIANTE EL SENSOR

int TRIG = 10;
int ECHO = 9;
int LED = 3;
int DURACION;
int DISTANCIA;

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600); // VALOR DE DATOS RECIBIDOS.

}

void loop() {
  //VALGUNOS VALORES SE DEBEN BASAR EN EL FABRICANTE DEL SENSOR.
  digitalWrite(TRIG, HIGH);
  delay(1);
  digitalWrite(TRIG, LOW);
  DURACION = pulseIn(ECHO, HIGH);
  DISTANCIA = DURACION / 58.2; //VALOR CONSTANTE PROPORCIONADO POR EL FABRICANTE.
  Serial.println(DISTANCIA);
  delay(200);

}
