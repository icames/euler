function execute( function problemOne () {
  console.log('Problem 1');
  for(var i = 0; i < 1000; i++) {
    var sum = 0;

    if(i % 3 == 0 || i % 5 == 0) {
      sum += i;
    };
  };
  console.log('sum: ', sum);
}) );