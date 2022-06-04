var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var number = lines.map(Number)[0];

for(var i = 2; i < 10000; i++){
    if(i%number == 2){
        console.log(i);
    }
}
