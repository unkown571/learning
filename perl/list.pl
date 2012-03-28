#!/usr/bin/env perl

# list in perl
# such as: (1, 5.3, "hello", 2)
# empty list: ()
# (43.2) is different from 43.2, one is list and the other is scalar

# array
@array = (1, 2, 3, 4);
print("The array is : @array\n");
$scalar = $array[0];
print("The first elemtn is : $scalar\n");
$array[3] = 45;		# (1, 2, 3, 45)
print("The array is : @array\n");
$array[6] = 17;		# (1, 2, 3, 45, "", "", 17)
print("The array is : @array\n");
@result = @array;
print("The result array is the same as array: @result\n");

# the same name can be used at the same time
# for different types
$var  = 1;
print("\$var is $var\n");
@var = (11, 27.1, "a string");
print("\@var is (@var)\n");
