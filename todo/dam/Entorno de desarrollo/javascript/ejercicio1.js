const prompt = require('prompt-sync')({sigint: true});

a = prompt('Introduzca a: ');
b = prompt('Introduzca b: ');

c = a;
a = b;
b = c;
console.log('a = ' + a);
console.log('b = ' + b);