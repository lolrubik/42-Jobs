const prompt = require('prompt-sync')({sigint: true});

a = Number(prompt('Introduzca el importe: '));
b = (prompt('Introduzca el mes que es: '));

if (b == 'octubre' || b == 'Octubre')
    a = (a - (a * 0.15));
console.log("El importe final es: " + a);