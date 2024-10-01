const prompt = require('prompt-sync')({sigint: true});

a = Number(prompt('Introduzca a: '));
i = 1;
total = 0;
while (a > 0)
{
    if (i % 2 == 0)
    {
        total += i;
        a--;
    }
    i++;
}
console.log(total);