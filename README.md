# gmp_node_addon
GMP is a free library for arbitrary precision arithmetic, operating on signed integers, rational numbers, and floating-point numbers.


Installation
------------
``` bash
$ npm install gmplib
```

# API Reference

### Methods ###

* mpf_add(number, number)
* mpf_sub(number, number)
* mpf_mul(number, number)
* mpf_div(number, number)

Example:
-------
``` javascript

var gmplib = require('gmplib');

gmplib.mpf_add(2.2, 2.1);
gmplib.mpf_sub(2.2, 2.1);
gmplib.mpf_mul(2.2, 2.1);
gmplib.mpf_div(2.2, 2.1);

```