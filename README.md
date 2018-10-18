# Overview
GMP is a free library for arbitrary precision arithmetic, operating on signed integers, rational numbers, and floating-point numbers.

Installation
------------
[![NPM](https://nodei.co/npm/gmplib.png)](https://nodei.co/npm/gmplib/)

# API Reference

### Methods ###

* mpf_add(number, number)
* mpf_sub(number, number)
* mpf_mul(number, number)
* mpf_div(number, number)
* mpf_sqrt(number);
* mpf_pow_ui(number,number);
* mpf_neg(number);
* mpf_abs(number);

Example:
-------
``` javascript

var gmplib = require('gmplib');

gmplib.mpf_add(2.2, 2.1);
gmplib.mpf_sub(2.2, 2.1);
gmplib.mpf_mul(2.2, 2.1);
gmplib.mpf_div(2.2, 2.1);
gmplib.mpf_sqrt(9);
gmplib.mpf_pow_ui(2, 3);
gmplib.mpf_neg(4.5);
gmplib.mpf_abs(-4.5);

```

# See Also
- [https://gmplib.org](https://gmplib.org)
