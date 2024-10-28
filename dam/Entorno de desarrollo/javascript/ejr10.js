function clock()
{
    console.clear();
    var time = new Date();
    var hour = time.getHours();
    var minutes = time.getMinutes();
    var seconds = time.getSeconds();

    var result = hour + " : " + minutes + " : " + seconds;
    console.log(result);
    setTimeout(clock, 1000);  
}
clock();