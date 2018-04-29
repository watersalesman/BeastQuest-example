# BeastQuest Example

[![Travis CI](https://travis-ci.org/watersalesman/BeastQuest-example.svg?branch=master)](https://travis-ci.org/watersalesman/BeastQuest-example)

An example project that builds and links against [BeastQuest](https://github.com/watersalesman/BeastQuest).
This example will simply perform a GET request on the provided URL and print out the response body, like so:

```
./http_client https://httpbin.org/get
```

This should be a good start for testing out the library and its build process.
Feel free to fork this repository!

## Building

This project uses CMake and Git submodules. First initialize the BeastQuest
submodule:

```
git submodule update --init
```

Next, build using CMake:

```
mkdir build
cd build
cmake ..
make
```

## Documentation

Documentation for BeastQuest is located [here](https://watersalesman.github.io/BeastQuest)
and includes in-depth information on building and usage. It will continue to be
updated and improved.
