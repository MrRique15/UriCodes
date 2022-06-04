var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var numbers = lines.map(Number);
var pares = 0;

for(let num = 0; num < 5; num++){
    if(numbers[num]%2 == 0){
        pares = pares + 1;
    }
}
console.log(pares + " valores pares");