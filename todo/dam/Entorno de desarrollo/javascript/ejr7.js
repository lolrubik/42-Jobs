const prompt = require('prompt-sync')({sigint: true});

m = 0;
i = 0;
a = Number(prompt('Introduzca un número: '));
max = a;
min = a;
while (a != 0)
{
    m += a;
    i++;
    if (a < min)
        min = a;
    if (a > max)
        max = a;
    a = Number(prompt('Introduzca un número: '));
}
m /= i;
console.log("La media aritmética de todos los números es " + m);
console.log("El número máximo es " + max);
console.log("El número mínimo es " + min);