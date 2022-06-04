// var input = require('fs').readFileSync('/dev/stdin', 'utf8');
// var lines = input.split('\n');

// var content = lines.map(String);
// content.pop();

//Still working, runtime error.//
var content = ["5 5000000", "3 123456", "9 23454324543423", "9 99999999991999999", "7 777", "0 0"];

var vect = [];
var str = [];

for(let i in content){
    if(i < content.length - 1){
        str = content[i].split(" ");
        vect.push(str);
        vect[i][1] = vect[i][1].replaceAll(vect[i][0], "");
        vect[i] = parseInt(vect[i][1]) || 0;
        console.log(vect[i]);
    }
}
