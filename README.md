# testlib

A simple and light unit testing library for C++ (C++11 and newer), that can be added either as header+cpp file or prebuilt and linked against, with only header include.

## Licensing information

This library is released under the LGPLv3 or later, and can thus be included as part of proprietary code, given that any changes to the library itself also be released under the same license, or a later version of it. License details can be found in the files COPYING and COPYING.LESSER.

## Usage

The tests are divided into stacks of boolean functions that can be run separately. One can either define the test-functions globally and add them to the stacks, or pass the tests directly into the stacks as lambda functions. If a test-function returns false, it is regarded as failed, if it returns true, is is regarded as passed.

See example-directory for further details on usage.