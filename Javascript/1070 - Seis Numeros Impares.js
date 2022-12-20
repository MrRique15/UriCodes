var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let number = lines.map(Number);

number = number[0];

var printed = 0;

while(printed < 6){
    if(number % 2 != 0){
        console.log(number);
        printed++;
    }
    number++;
}