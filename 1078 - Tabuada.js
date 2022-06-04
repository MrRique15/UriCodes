var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var number = lines.map(Number)[0];

for(let i = 1; i <= 10; i++){
    console.log(i +" x "+ number +" = "+ i*number);
}
