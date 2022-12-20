var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let [startDay, startTime, endDay, endTime] = lines.map(String);

function getDateInSeconds(converter, date){
    let secondsCalculated = 0;
    for (let key in converter) {
        secondsCalculated += date[key] * converter[key];
    }
    return secondsCalculated;
}

let converter = {
    "day": 24 * 60 * 60,
    "hour": 60 * 60,
    "minute": 60,
    "second": 1
}

var start = {
    day: parseInt(startDay.split(" ")[1]),
    hour: parseInt(startTime.split(":")[0]),
    minute: parseInt(startTime.split(":")[1]),
    second: parseInt(startTime.split(":")[2])
}
var end = {
    day: parseInt(endDay.split(" ")[1]),
    hour: parseInt(endTime.split(":")[0]),
    minute: parseInt(endTime.split(":")[1]),
    second: parseInt(endTime.split(":")[2])
}
var result = {
    days: 0,
    hours: 0,
    minutes: 0,
    seconds: 0
}

let secondStarted = getDateInSeconds(converter, start);
let secondEnded = getDateInSeconds(converter, end);

result.seconds = secondEnded - secondStarted;
result.days = Math.floor(result.seconds / converter.day);
result.seconds -= result.days * converter.day;
result.hours = Math.floor(result.seconds / converter.hour);
result.seconds -= result.hours * converter.hour;
result.minutes = Math.floor(result.seconds / converter.minute);
result.seconds -= result.minutes * converter.minute;

console.log(result.days + " dia(s)");
console.log(result.hours + " hora(s)");
console.log(result.minutes + " minuto(s)");
console.log(result.seconds + " segundo(s)");