var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
let numbers = lines.map(Number);

function getMedia(e){
    let soma = 0;
    for (let i = 0; i < e.length; i++) {
        soma += e[i];
    }
    return soma/e.length;
}

let positiveNumbers = numbers.filter(number => number > 0);
console.log(positiveNumbers.length + " valores positivos");
console.log(getMedia(positiveNumbers).toFixed(1));