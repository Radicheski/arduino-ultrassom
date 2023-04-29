# Ultrassom - Arduino

As funções contidas neste repositório foram testadas com Arduino UNO R3 e o sensor de ultrassom HC-SR04. O arquivo [`main/main.ino`](main/main.ino) contém um exemplo de como utilizar essa biblioteca.

Para criar um objeto do tipo `Ultrassom` é necessário passar dois `int` representando os pinos utilizados como `trigger` e `echo` do sensor, precisamente nessa ordem.

Após criar o objeto, é necessário chamar a função `setupSensor(Ultrassom *s)`, passando um ponteiro para o objeto criado.

A função `getDistance(Ultrassom *s)` retorna um `long` com a distância medida pelo sensor em milímetros.

> __ATENÇÃO:__ chamar a função `getDistance(Ultrassom *s)` antes de `setupSensor(Ultrassom *s)` resulta em um comportamento indefinido.
