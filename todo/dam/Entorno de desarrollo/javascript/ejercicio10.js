const prompt = require('prompt-sync')({sigint: true});

a = Number(prompt('Introduzca el dia: '));
b = Number(prompt('Introduzca el numero del mes: '));
c = Number(prompt('Introduzca el año: '));

if ((a <= 31 && a > 0) && (b <= 12 && b >= 1) && (c >= 0 && c <= 2024))
{
    str = "Es " + a;
    if (b == 1)
        str1 = " de Enero de ";
    if (b == 2)
        str1 = " de Febrero de ";
    if (b == 3)
        str1 = " de Marzo de ";
    if (b == 4)
        str1 = " de Abril de ";
    if (b == 5)
        str1 = " de Mayo de ";
    if (b == 6)
        str1 = " de Junio de ";
    if (b == 7)
        str1 = " de Julio de ";
    if (b == 8)
        str1 = " de Agosto de ";
    if (b == 9)
        str1 = " de Septiembre de ";
    if (b == 10)
        str1 = " de Octubre de ";
    if (b == 11)
        str1 = " de Noviembre de ";
    if (b == 12)
        str1 = " de Diciembre de ";
    str2 = c;
    console.log(str + str1 + c);
}
else
{
    console.log("Error");
    return (0);
}
