# ofxModernCpp

## motivation

C++17 is good but C++17 with oF is a little difficult.

## linb::any

* Github: [thelink2012/any](https://github.com/thelink2012/any)
* Version: [master(2019/12/05)](https://github.com/thelink2012/any/tree/78b4a8ae42e411e389710dea6ef76278bee99a29)
* License: [Boost Software License 1.0](https://github.com/thelink2012/any/blob/78b4a8ae42e411e389710dea6ef76278bee99a29/LICENSE_1_0.txt)

## tl::expected

* Github [TartanLlama](expected)
* Version: [1.0!](https://github.com/TartanLlama/expected/releases/tag/v1.0.0)
* License: Public Domain [CC0] (To the extent possible under law, [Simon Brand](https://twitter.com/TartanLlama) has waived all copyright and related or neighboring rights to the optional library. This work is published from: United Kingdom.)

## tl::optional

* Github: [TartanLlama/optional](https://github.com/TartanLlama/optional)

* Version: [1.0!](https://github.com/TartanLlama/optional/releases/tag/v1.0.0)

* License: Public Domain [CC0] (To the extent possible under law, [Simon Brand](https://twitter.com/TartanLlama) has waived all copyright and related or neighboring rights to the optional library. This work is published from: United Kingdom.)

## mpark::variant

* Github: [mpark/variant](https://github.com/mpark/variant)
* Version: [v1.4](https://github.com/mpark/variant/releases/tag/v1.4.0)
* License: [Boost Software License 1.0](https://github.com/mpark/variant/blob/master/LICENSE.md)

## How to use

every libraries are included in `ofx::modern_cpp`.

If you want to use simply then use below:

```cpp
#include "ofxModernCpp.h"
namespace ofx { using namespace modern_cpp; };
```

* [expected docs](https://tl.tartanllama.xyz/en/latest/api/expected.html)
* [optional docs](https://tl.tartanllama.xyz/en/latest/api/optional.html)
  * `tl::optional` has some extentions about functional-style ([monadic-optional](https://wg21.tartanllama.xyz/monadic-optional)).
* [variant docs](https://mpark.github.io/variant/)

## License

* Boost Software License 1.0