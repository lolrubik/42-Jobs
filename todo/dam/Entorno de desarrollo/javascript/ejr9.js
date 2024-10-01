const prompt = require('prompt-sync')({sigint: true});

a = Number(prompt('Introduzca un número: '));
t = a;
str = '\0';
str1 = '*';
if (a == 1)
{
    console.log('*');
    return (0);
}
if (a == 0)
    return (0);
while (a != 0)
{
    str = str + '*';
    a--
    if (a == 0)
    {
        str1 += '*';
        console.log(str);
        while (t != 2)
        {
            console.log(str1);
            t--;
        }
        console.log(str);
        return (0);
    }
    if (a != 1)
        str1 += ' ';
}