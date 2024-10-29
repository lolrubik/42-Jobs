const prompt = require('prompt-sync')({sigint: true});

var m = 0;
var i = 0;
var ite = Number(prompt("Introduce el numero de parejas que hay: "));
var a = Number(prompt('Introduzca el número de hijos: '));
var max = a;
var min = a;
while (ite > 0)
{
    m += a;
    i++;
    ite--;
    if (a < min)
        min = a;
    if (a > max)
        max = a;
    if (ite != 0)
        a = Number(prompt('Introduzca el número de hijos: '));
}
console.log("El numero total de hijos es " + m)
m /= i;
console.log("La media de hijos por persona es " + m);
console.log("El número máximo de hijos es " + max);
console.log("El número mínimo de hijos es " + min);