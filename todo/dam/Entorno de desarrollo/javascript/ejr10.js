function clock()
{
    time = new Date();
    hour = time.getHours();
    minutes = time.getMinutes();
    seconds = time.getSeconds();

    result = hour + " : " + minutes + " : " + seconds;
    console.log(result);
    delete (result);
    setTimeout(clock, 1000);  
}
clock();