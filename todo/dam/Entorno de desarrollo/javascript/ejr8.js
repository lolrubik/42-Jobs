const prompt = require('prompt-sync')({sigint: true});

a = Number(prompt('Introduzca un número: '));
t = a;
str = '\0'
while (a != 0)
{
    str = str + '*';
    a--
    if (a == 0)
    {
        while (t != 0)
        {
            console.log(str);
            t--;
        }
    }
}