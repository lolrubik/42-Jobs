const prompt = require('prompt-sync')({sigint: true});

function piramide(i)
{
    let aux = 0;
    let k = 0;
    if (i > 0)
    {
        while (i > 0)
        {
            for (let j = i + (i - 1); j > 0; j--)
            {
                while (aux > 0)
                {
                    process.stdout.write(' ');
                    aux--;
                }
                process.stdout.write('*');
            }
            i--;
            k++;
            aux = k;
            console.log();
        }
    }
    else
        console.log("Error");
}

let i = Number(prompt("Introduce la altura de la piramide: "));
piramide(i);