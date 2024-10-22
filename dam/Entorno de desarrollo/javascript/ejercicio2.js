const prompt = require('prompt-sync')({sigint: true});

a = Number(prompt('Introduzca a: '));
b = Number(prompt('Introduzca b: '));

suma = a + b;
resta = a - b;
mult = a * b;
div = a / b;

console.log("La suma de los dos numeros es: " + suma);
console.log("La resta de los dos numeros es: " + resta);
console.log("La multiplicacion de los dos numeros es: " + mult);
console.log("La division de los dos numeros es: " + div);
