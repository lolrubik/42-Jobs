const prompt = require('prompt-sync')({sigint: true});

niños = Number(prompt('Introduzca el numero de niños: '));
niñas = Number(prompt('Introduzca el numero de niñas: '));

total = niños + niñas;
console.log("El porcentaje de niños es: " + ((niños * 100) / total));
console.log("El porcentaje de niñas es: " + ((niñas * 100) / total));