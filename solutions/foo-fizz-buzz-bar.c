#define P printf(
main(i){for(i=0;++i<1001;){i%2?0:P"Foo");i%3?0:P"Fizz");i%5?0:P"Buzz");i%7?0:P"Bar");i%2&&i%3&&i%5&&i%7?P"%d",i):0;P"\n");}}