# Practicas Arduino Tercer Parical 
## Enrique Baez Cruz

![Arduino](https://github.com/user-attachments/assets/e608293e-ca84-42e4-b661-17fa3e6fddf5)

- Sensor de Agua
<p>
 Un sensor de agua es un dispositivo que detecta la presencia o ausencia de agua o mide sus propiedades,
 como el nivel, calidad o flujo. Su diseño varía dependiendo de la aplicación, pero los sensores de agua se
 usan comúnmente en aplicaciones industriales, domésticas y agrícolas
</p>

###Materiales
1.- Sensor de agua 
2.- Arduino 
3.- Cables de conexión 
4.- Protobard 
5.- Leds
 6.- Resistencias

### Conexion
![Captura de pantalla 2024-12-10 181211](https://github.com/user-attachments/assets/a3d5d487-5c9d-4a5b-b35e-1060414a2878)
<p>
un sensor de agua es una
 herramienta esencial para detectar la
 presencia o el nivel del agua en diversos
 entornos. Su uso es fundamental en
 aplicaciones como sistemas de riego,
 control de inundaciones
</p>


'''
int activador = A5;                 
int ledVerde = 8;         
int ledAmarillo = 9;    
int ledRojo = 10;         

void setup() {
  pinMode(ledVerde, OUTPUT); //salida
  pinMode(ledAmarillo, OUTPUT); //salida
  pinMode(ledRojo, OUTPUT); //salida
  pinMode(activador, INPUT);  //entrada
  Serial.begin(9600);         
}

void loop() {
  int sensorValue = analogRead(activador);  

  
  Serial.println(sensorValue); 
  delay(500); 
  
  if (sensorValue > 450 && sensorValue < 550) {
    digitalWrite(ledVerde, HIGH); 
    delay(1000);  
    digitalWrite(ledVerde, LOW);  
  }
  
  
  if (sensorValue > 551 && sensorValue < 650) {
    digitalWrite(ledAmarillo, HIGH);  
    delay(1000);  
    digitalWrite(ledAmarillo, LOW); 
  }

   
  if (sensorValue > 651 && sensorValue < 700) {
    digitalWrite(ledRojo, HIGH);   
    delay(1000);  
    digitalWrite(ledRojo, LOW); 
  }
  
  
  else {
    digitalWrite(ledRojo, LOW);
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarillo, LOW);
  }
}'''
