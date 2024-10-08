function clock()
{
    time = new Date();
    hour = time.getHours();
    minutes = time.getMinutes();
    seconds = time.getSeconds();

    result = hour + " : " + minutes + " : " + seconds;
    console.log(result);   
    
}

function timer() {
    
}
while(true) setTimeout(clock, 1000);;