var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let [first, second, thyrd] = lines.map(String);

if(first == "vertebrado"){
    if(second == "ave"){
        if(thyrd == "carnivoro"){
            console.log("aguia");
        }else if(thyrd == "onivoro"){
            console.log("pomba");
        }
    }else if(second == "mamifero"){
        if(thyrd == "onivoro"){
            console.log("homem");
        }else if(thyrd == "herbivoro"){
            console.log("vaca");
        }
    }
}else if(first == "invertebrado"){
    if(second == "inseto"){
        if(thyrd == "hematofago"){
            console.log("pulga");
        }else if(thyrd == "herbivoro"){
            console.log("lagarta");
        }
    }else if(second == "anelideo"){
        if(thyrd == "hematofago"){
            console.log("sanguessuga");
        }else if(thyrd == "onivoro"){
            console.log("minhoca");
        }
    }
}