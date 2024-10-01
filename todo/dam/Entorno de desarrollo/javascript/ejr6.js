const prompt = require('prompt-sync')({sigint: true});

i = 0;
while (i < 3)
{
    clave = (prompt('Introduce la clave: '));
    if (i > 0 && clave == 'eureka')
        return (0);
    else
        console.log("Error");
    i++;
}
console.log("Ya no te quedan intentos");