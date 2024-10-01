const prompt = require('prompt-sync')({sigint: true});

t = 0;
i = 0;
a = Number(prompt('Introduzca un número: '));
while (a != -1)
{
    t += a;
    i++;
    a = Number(prompt('Introduzca un número: '));
}
t /= i;
console.log("La media aritmetica de todos los números es " + t);