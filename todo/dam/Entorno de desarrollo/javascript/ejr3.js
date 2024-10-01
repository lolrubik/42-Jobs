const prompt = require('prompt-sync')({sigint: true});

a = Number(prompt('Introduzca a: '));
i = 1;
total = 0;
while (a > 0)
{
    total += i;
    i++;
    a--;
}
console.log(total);