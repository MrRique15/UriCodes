var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var numbers = lines.map(Number);

var pares = 0;
var impares = 0;

for(let num = 0; num < 5; num++){
    if(numbers[num]%2 == 0){
        pares = pares + 1;
    }else{
        impares = impares + 1;
    }
}

var positivos = numbers.filter(num => num > 0);
var negativos = numbers.filter(num => num < 0);

console.log(pares + " valor(es) par(es)");
console.log(impares + " valor(es) impar(es)");
console.log(positivos.length + " valor(es) positivo(s)");
console.log(negativos.length + " valor(es) negativo(s)");
