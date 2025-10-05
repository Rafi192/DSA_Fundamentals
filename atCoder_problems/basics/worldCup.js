const readline = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout
});

const whatYear = (y) => {
  let remainder = y % 4;
  let eventYear;

  if (remainder === 2) {
    eventYear = y;
  } else {
    let diff = (2 - remainder + 4) % 4;
    eventYear = y + diff;
  }

  console.log(eventYear);
};

readline.question("", (input) => {
  whatYear(Number(input));
  readline.close();
});
