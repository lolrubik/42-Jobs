const prompt = require('prompt-sync')({sigint: true});

a = Number(prompt('Introduzca a: '));
b = Number(prompt('Introduzca b: '));
c = Number(prompt('Introduzca c: '));

if (a < 0)
    console.log(a * b * c);
else 
    console.log(a + b + c);