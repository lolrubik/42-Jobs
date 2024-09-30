const prompt = require('prompt-sync')({sigint: true});

a = Number(prompt('Introduzca a: '));
b = Number(prompt('Introduzca b: '));

if (a == b)
    console.log("Los dos numeros son iguales");
if (a > b)
    console.log("El primer numero es mas grande que el segundo");
if (a < b)
    console.log("El segungo numero es mas grande que el primero");