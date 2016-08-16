var math = require('./');

console.log("2.2 + 2.1 =");
console.log(math.mpf_add(2.2, 2.1));
console.log(2.2 + 2.1);
console.log("2.2 - 2.1 =");
console.log(math.mpf_sub(2.2, 2.1));
console.log(2.2 - 2.1);
console.log("2.2 * 2.1 =");
console.log(math.mpf_mul(2.2, 2.1));
console.log(2.2 * 2.1);
console.log("2.2 / 2.1 =");
console.log(math.mpf_div(2.2, 2.1));
console.log(2.2 / 2.1);
console.log("平方根函数");
console.log(math.mpf_sqrt(9.1));
console.log(Math.sqrt(9.1));
console.log("次方");
console.log(math.mpf_pow_ui(2, 3));
console.log(Math.pow(2, 3));

console.log(math.mpf_neg(4.5));
console.log(math.mpf_abs(-4.5));
