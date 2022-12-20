var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let [ddd] = lines.map(Number);

let listDDD = {
    71: "Salvador",
    61: "Brasilia",
    32: "Juiz de Fora",
    31: "Belo Horizonte",
    27: "Vitoria",
    21: "Rio de Janeiro",
    19: "Campinas",
    11: "Sao Paulo",
}

if(ddd in listDDD){
    console.log(listDDD[ddd]);
}else{
    console.log("DDD nao cadastrado");
}
