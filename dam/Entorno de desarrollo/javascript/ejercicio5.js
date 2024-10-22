const prompt = require('prompt-sync')({sigint: true});

a = Number(prompt('Introduzca a: '));

if (a <= 0)
    console.log("Error");
else
{
    console.log("El cuadrado del numero es: " + (a * a));
    console.log("La raiz cuadrada del numero es: " + Math.sqrt(a));
}