# Fizz Buzz
Fizz buzz is a famous coding interview question designed to quickly filter out job candidates who know at least the basics of programming. It presents a simple challenge, with just enough nuance to require a careful solution.

The objective is to count from one to one hundred, and replace certain integers that satisfy given conditions with the words _Fizz_ and _Buzz_. The conditions are as follows:
1. If the number is divisible by `3`, replace it with the word `Fizz`.
2. If the number is divisible by `5`, replace it with the word `Buzz`.
3. If the number is divisible by both `3` and `5` (ex. `15`), then replace it with both words concatenated together - `FizzBuzz`.

## Project Requirements
1. Write a program that correctly solves the Fizz-buzz challenge.
   * You may _not_ just hard-code the entire output, you should use a loop to iterate over the numbers `1..100`.
2. Each number / word should be on exactly one line of output.
   * Note that when you have a multiple of both `3` and `5`, the combined `FizzBuzz` should also be on just one line.

__example output__
```
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
16
17
Fizz
19
Buzz
...
```