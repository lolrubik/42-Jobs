const prompt = require('prompt-sync')({sigint: true});

a = Number(prompt('Introduzca un número: '));

if (a != 0)
{
    if (a % 2 == 0)
        console.log("El número es par");
    else
        console.log("El numero es impar");
}
else
console.log("El número no es par ni impar porque es 0");