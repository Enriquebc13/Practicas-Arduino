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


<p>
- ledVerde 
- ledAmarillo, 
- ledRojo
Se conectan a los LEDs de colores en los pines digitales 8, 9 y 10, respectivamente.
</p>

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

## Diagrama de Conexion

![Multiple LEDs   Breadboards With Arduino in Tinkercad](https://github.com/user-attachments/assets/458c7e30-e4b6-4965-9938-1ab92e04f4dd)


![Picsart_24-11-23_17-23-53-658](https://github.com/user-attachments/assets/e490010a-1e7f-47ba-a1d0-1a9c977da1df)

<p>
 Este proyecto demuestra cómo utilizar un sensor táctil para controlar LEDs
 de manera secuencial, ilustrando conceptos fundamentales de electrónica y
 programación con Arduino. La implementación incluye la lectura de entradas
 digitales, el manejo de salidas para controlar los LEDs y la lógica condicional
 para gestionar el ciclo de encendido
</p>

## SONIDO
<p>
Sensor:
Un sensor de sonido detecta variaciones en las ondas acústicas (ruido) y convierte esa información en una señal eléctrica que puede ser procesada por un Arduino. Se utiliza para medir niveles de sonido en aplicaciones como detección de ruidos, alarmas o activación de dispositivos según el sonido.

Actuador:
Un foco LED es un dispositivo que emite luz cuando se le aplica una corriente eléctrica. En IoT, los LEDs se usan como actuadores para mostrar visualmente información o respuestas a eventos (como encenderse por el sonido detectado) en un sistema controlado por Arduino.
</p>

## Materiales
<p>
1. Arduino
2. protoboard, led´s
3. sensor de sonido
4. jumpers
</p>

## Conexion
<p>
- Pines 2-7 son para los led´s.
- Pin analógico A0 es para el sensor.
- 5V ira al positivo del protoboard.
- GND al negativo del protoboard.

Haremos un puente en cada patita larga de los leds asia el negativo de la protoboard.
En la pata corta una resistencia seguido de los cables de los pines 2-7
Al igual haremos un puente del negativo y positivo del sensor a los mismos de la protoboard
</p>

![Captura de pantalla 2024-12-10 193513](https://github.com/user-attachments/assets/98b0ec20-5fbd-4fe2-9037-c66ee5c091d2)

<p>
Este proyecto busca representar visualmente la intensidad del sonido mediante un sistema de LEDs: verdes para niveles bajos, amarillos para niveles moderados y rojos para niveles altos, ofreciendo una herramienta práctica para comprender la relación entre la programación, la electrónica y la percepción sonora.
</p>

## CHICHARRA (Buzzer)
<p>
Aqui se implementa un sistema de alerta utilizando un Arduino, un sensor (como un interruptor o sensor de proximidad), un LED, y una chicharra (buzzer). El objetivo es activar o desactivar estos elementos según el estado del sensor, ofreciendo una señal visual (LED) y una señal acústica (chicharra) dependiendo de lo que detecte el sensor.
</p>

## Conexion y materiales
- El sensor, conectado al pin digital 9, detecta cambios en su entorno (puede ser un botón, un sensor de proximidad, o un interruptor).
- Un LED conectado al pin digital 2 se enciende o apaga dependiendo del estado del sensor.
- Una chicharra (buzzer) conectada al pin analógico A1 emite un sonido a 600 Hz cuando el sensor está inactivo (HIGH), y se apaga cuando el sensor está activo (LOW).

![Captura de pantalla 2024-12-10 194820](https://github.com/user-attachments/assets/63033bf5-2cc5-4c74-ae8e-e81097cc1294)

### Este sistema puede utilizarse en:
- Alarmas de seguridad
- Indicadores de límite
- Sistemas de proximidad

## SENSOR DE HUMEDAD DEL SUELO
<p>
 Es ampliamente utilizado en aplicaciones como la agricultura, jardinería y sistemas de riego automatizados. Su principal función es monitorear los niveles de humedad para garantizar que las plantas reciban la cantidad adecuada de agua, evitando
 tanto el exceso como la falta de riego, lo cual puede ser perjudicial para el crecimiento de las plantas. Este sensor funciona midiendo la resistencia eléctrica en el suelo: cuando el suelo  está seco, la resistencia es alta, y cuando está húmedo, la resistencia es baja
</p>

## Materiales
-  Un Arduino UNO.
-  Un sensor de humedad de suelo (modelo FC-28 con su módulo adaptador).
-  Una protoboard.
-  Cables de conexión (jumpers).
-  Un LED (color rojo).
-  Una resistencia (220 ohmios).
-  Fuente de alimentación para el Arduino (cable)

## Conexion
 1.  El módulo tiene cuatro pines:
 
-  - VCC: conéctalo al pin de 5V del Arduino.
- -  GND: conéctalo al pin GND del Arduino.
- -  A0 (analógico): conéctalo al pin A0 del Arduino.
- -  D0: No es necesario conectar.

1.  Insertar el led y la resistencia de 220 ohmios a la protoboard
2.   Conecta las líneas de alimentación (positiva y negativa) de la protoboard a los pines de 5V y GND del Arduino, respectivamente.
3.   Cargar el programa en Arduino.

![Captura de pantalla 2024-12-10 200738](https://github.com/user-attachments/assets/60938c63-b8e6-47a1-b03e-105a06c53086)

## SERVO MOTOR
<p>
 El sistema estará compuesto por un sensor ultrasónico, encargado de detectar
 la presencia de un vehículo, y un servomotor, que controlará el movimiento de la pluma.
 El objetivo es crear un mecanismo eficiente que permita levantar o bajar la pluma de manera automática, basado en la  proximidad del vehículo. Durante esta presentación,
 explicaremos el funcionamiento de cada componente, eldiseño del sistema, y cómo se integran para lograr una solución funcional y práctica
</p>

## Conexion
-  SENSOR ULTRASÓNICO
 Envía pulsos periódicamente.
 Si la distancia detectada es menor a un umbral definido
 (por ejemplo, 10 cm), activa el servomotor.

-  ACTUADOR SERVOMOTOR
 Recibe una señal del Arduino para cambiar su ángulo:
 90° o más: Pluma levantada.
 0°: Pluma bajada

![Captura de pantalla 2024-12-10 204130](https://github.com/user-attachments/assets/ce191cdc-0df3-4ddb-bd58-785044ee9798)

<p>
El sistema de pluma de estacionamiento desarrollado con un
 sensor ultrasónico y un servomotor demuestra la capacidad
 de Arduino para integrar sensores y actuadores en
 aplicaciones prácticas. El sensor ultrasónico permite una
 detección precisa de objetos, lo que garantiza la activación
 del servomotor solo cuando es necesario, mejorando la
 eficiencia y seguridad del sistema. 
</p>
