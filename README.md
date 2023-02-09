# Introduction

This is just a collection of functions to test some ideas and thoughts I've had regarding the fizzBuzz test.

# fizzBuzzSimple
is well...simple. Scales well without too much changes to code as you only need to add a single if statement to increase fizzBuzz to fizzBuzzKluzz etc.

# fizzBuzzMap
FizzBuzzMap uses a map/dictionary to store fizzBuzz key value pairs. The **number** is our **key** and the **string**, like "fizz", is our **value**.
We then just have a double loop to cross reference "i", which is incrementing from 1 to maxNum, with keys, 3 5 7 4 etc.
Problem is that two values currently cannot have a the same key so:
```
if  fizz = 3 &
buzz = 3
then our code fails as we cannot have 2 identical keys.
```