// Define los pines conectados al driver L298N
const int motor_in1 = 7;
const int motor_in2 = 8; // La corrección está aquí: eliminamos el 'int' repetido

void setup() {
  // Configura los pines de control del motor como salidas
  pinMode(motor_in1, OUTPUT);
  pinMode(motor_in2, OUTPUT);
  
  // Inicia la comunicación serial para mostrar información
  Serial.begin(9600);
}

void loop() {
  Serial.println("El motor gira en sentido horario a maxima velocidad...");
  // Gira el motor en un sentido
  digitalWrite(motor_in1, HIGH);
  digitalWrite(motor_in2, LOW);
  
  delay(3000); // Gira por 3 segundos

  Serial.println("El motor se detiene...");
  // Detiene el motor
  digitalWrite(motor_in1, LOW);
  digitalWrite(motor_in2, LOW);
  
  delay(1000); // Espera 1 segundo

  Serial.println("El motor gira en sentido antihorario a maxima velocidad...");
  // Gira el motor en el sentido opuesto
  digitalWrite(motor_in1, LOW);
  digitalWrite(motor_in2, HIGH);

  delay(3000); // Gira por 3 segundos

  Serial.println("El motor se detiene...");
  // Detiene el motor
  digitalWrite(motor_in1, LOW);
  digitalWrite(motor_in2, LOW);
  
  delay(1000); // Espera 1 segundo antes de que el bucle se repita
}