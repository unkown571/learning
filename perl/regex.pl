#!/usr/bin/env perl
# regexp in perl

$string = "This is a string contains the number 25.11.";
$string =~ /-?(\d+)\.?(\d+)/;
$integer_part = $1;	# 25
$decimal_part = $2;	# 11
$total_part = $&;	# 25.11
print("\$integer_part = $integer_part ",
	"\$decimal_part = $decimal_part ",
	"\$total_part = $total_part\n");

@matches = "balata" =~ /.a/g;
print("\@matches = @matches\n");
while ("balata" =~ /.a/g) {
	$match = $&;
	print("$match\n");
}
$offset = pos($string);
print("$offset\n");
#pos($string) = 
