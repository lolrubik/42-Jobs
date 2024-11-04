const prompt = require('prompt-sync')({sigint: true});

function comprobarValor(numeroUsuario, numeroCorrecto)
{
    if (numeroUsuario < numeroCorrecto)
    {
        console.log("-1");
        leerNumero(numeroCorrecto);
    }
    else if (numeroUsuario > numeroCorrecto)
    {
        console.log("1");
        leerNumero(numeroCorrecto);
    }
    else 
        console.log("0");
    return (0);
}

function leerNumero(numero)
{
    let num = Number(prompt("Adivina el numero entre el 1 y el 100: "));
    if (num >= 1 && num <= 100)
        comprobarValor(num, numero);
    else
        leerNumero();
    return;
}

let numero = Number(Math.floor(Math.random() * 100) + 1);
leerNumero(numero);