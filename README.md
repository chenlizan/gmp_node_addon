# math_node_addon
GMP is a free library for arbitrary precision arithmetic, operating on signed integers, rational numbers, and floating-point numbers.


Installation
------------
``` bash
$ npm install gmplib
```

Example
-------
``` javascript

var gmplib = require('gmplib');

gmplib.mpf_add(2.2, 2.1);
gmplib.mpf_sub(2.2, 2.1);
gmplib.mpf_mul(2.2, 2.1);
gmplib.mpf_div(2.2, 2.1);

```