var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var number = lines.map(Number);
number = number[0];

for(let i = 2; i <= number; i+=2){
    if(i%2 === 0){
        console.log(i + "^2 = " + i*i);
    }
}
