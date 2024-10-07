function reloj()
{
    ahora = getTime();
    hora = ahora.getHours();
    minuto = ahora.getMinutes();
    segundo = ahora.getSeconds();

    time = hora + " : " + minuto + " : " + segundo;
    console.log(time);
    setTimeout(reloj(), 1000);
}