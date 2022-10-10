var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

lines.map((line)=>{
  if(line == "0 0"){
    return;
  }else{
    var singleLine = line.split(" ");
    var newString = singleLine[1].replaceAll(singleLine[0],"");
    newString == ""? console.log(parseInt(0)) : console.log(parseInt(newString));
  }
});