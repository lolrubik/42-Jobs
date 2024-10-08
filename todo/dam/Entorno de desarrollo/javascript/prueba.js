var start = Date.now();

// expecting something close to 500
setTimeout(function(){ console.log(Date.now() - start); }, 500);

// fiddle with the number of iterations depending on how quick your machine is
for(var i=0; i<5000000; ++i){}