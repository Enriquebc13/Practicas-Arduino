# Practicas Arduino Tercer Parical 
## Enrique Baez Cruz

![Arduino](https://github.com/user-attachments/assets/e608293e-ca84-42e4-b661-17fa3e6fddf5)

## SENSOR DE AGUA
<p>
 Un sensor de agua es un dispositivo que detecta la presencia o ausencia de agua o mide sus propiedades,
 como el nivel, calidad o flujo. Su diseño varía dependiendo de la aplicación, pero los sensores de agua se
 usan comúnmente en aplicaciones industriales, domésticas y agrícolas
</p>

### Materiales
1. Sensor de agua 
2. Arduino 
3. Cables de conexión 
4. Protobard 
5. Leds
6. Resistencias

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

## JOYSTICK
<p>
 La lógica del joystick se basa en la detección de la posición angular o desplazamiento de sus
 palancas:
 Potenciómetros: Cada eje del joystick (X e Y) está conectado a un potenciómetro que genera una
 señal de voltaje proporcional al ángulo de inclinación. Este voltaje se envía a un microcontrolador o
 sistema analógico/digital para interpretar las coordenadas de movimiento.
 Sensores Hall: En modelos más avanzados, el sensor Hall mide los cambios en el campo magnético
 causado por el movimiento de la palanca, traduciéndolos en señales eléctricas.
 Botones adicionales: Algunos joysticks incorporan interruptores o pulsadores que funcionan como
 entradas binarias (encendido/apagado).
 La combinación de estas señales permite representar con precisión la dirección, intensidad y
 eventos de interacción del joystick.
</p>

## Materiales 
1. Arduino
4. Resistencias
6. Jumpers Macho-Macho
4. Leds
4. Jumpers Macho-Hembra
1. Joystick 

## Conexion

![Captura de pantalla 2024-12-10 182644](https://github.com/user-attachments/assets/46edb653-f347-4267-9b68-a6f100346064)

<p>
El joystick es un ejemplo versátil de sensor que combina mecánica y electrónica para ofrecer un control
 intuitivo y preciso. Su funcionamiento se basa en principios simples de conversión analógica o digital, lo que
 lo hace adaptable a diferentes tecnologías. Su uso en videojuegos, robótica y sistemas de control lo
 convierte en un elemento esencial para aplicaciones donde la interacción humana es crucial
</p>

## SENSOR TOUCH
<p>
En Arduino se refiere a dispositivos que detectan el toque o la proximidad de un objeto (generalmente un dedo humano) sin necesidad de presión mecánica significativa. Estos sensores convierten el toque
 en una señal eléctrica que puede ser
 interpretada por un microcontrolador.
</p>

## Materiales
### Conexion para los leds
 1. 3 leds
2.  3 resistencias 220 ohms
3.  3 cables jumper Macho-Macho
4.  5 cables jumper Macho-Hembra
-  led 1 al pin 13
-  led 2 al pin 12
-  led 3 al pin 1
- Conecta el pin de señal del sensor táctil al pin digital 7
-  del Arduino.
-  Conecta el pin VCC del sensor táctil al pin 5V 
- Conecta el pin GND del sensor táctil al pin GND

##Diagrama de Conexion

![Multiple LEDs   Breadboards With Arduino in Tinkercad](https://github.com/user-attachments/assets/458c7e30-e4b6-4965-9938-1ab92e04f4dd)


![Picsart_24-11-23_17-23-53-658](https://github.com/user-attachments/assets/e490010a-1e7f-47ba-a1d0-1a9c977da1df)

<p>
 Este proyecto demuestra cómo utilizar un sensor táctil para controlar LEDs
 de manera secuencial, ilustrando conceptos fundamentales de electrónica y
 programación con Arduino. La implementación incluye la lectura de entradas
 digitales, el manejo de salidas para controlar los LEDs y la lógica condicional
 para gestionar el ciclo de encendido
</p>



