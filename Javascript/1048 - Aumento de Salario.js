var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let [salAtual] = lines.map(Number);
let delimiter = [400.01, 800.01, 1200.01, 2000.01];
let percentAjust = 0;

if(salAtual < delimiter[0]){
    //0 - 400
    percentAjust = 15;
}else if(salAtual < delimiter[1]){
    //400.01 - 800
    percentAjust = 12;
}else if(salAtual < delimiter[2]){
    //800.01 - 1200
    percentAjust = 10;
}else if(salAtual < delimiter[3]){
    //1200.01 - 2000
    percentAjust = 7;
}else{
    //Acima de 2000
    percentAjust = 4;
}

let reajuste = (salAtual*(percentAjust/100))
let newSalary = salAtual + reajuste;

console.log(`Novo salario: ${newSalary.toFixed(2)}`);
console.log(`Reajuste ganho: ${reajuste.toFixed(2)}`);
console.log(`Em percentual: ${percentAjust} %`);

let result = 5+6;

console.log(result);
