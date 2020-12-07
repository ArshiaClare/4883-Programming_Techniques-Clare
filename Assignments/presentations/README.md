### Problem Statement
How can a manhole be a hole if it is covered? Perhaps, to prove a manhole a hole, most of the manholes
of Dhaka are uncovered. So now manhole means a hole to catch a man. Anyway, the new Mayor of
Dhaka does not like this definition and he has recently been highly acclaimed by general people for
ordering corresponding department to cover all the manholes of the city within a month.
Manhole Cover Manufacturing Corporation (MCMC) somehow managed to get the order. (Yes,
this is a big deal, since a lot of manhole covers are to be made). MCMC makes the cover using steel,
and they import polygonal steel sheets of different shapes and thickness from abroad. Then they melt
the sheets to make the circular manhole covers, which also differ in size and thickness.
MCMC needs a program which, given dimensions of a number of steel sheets, will calculate how
many manhole cover can be made from these sheets. You are to help them by writing the program.

## Rephrasing
There are several steel sheets. These sheets have different shapes and thickness. We need to calculate a way to fit these sheets to fill a manhole. Each manhole has thickness and radius.

## Pitfalls
Don't forget to calculate the volume after getting the area of each sheets with its own thickness.

## Input
First input, n, is how many sheets, then n number of lines with the first number being the thickness. Pair of numbers are the coordinates. The first pair is the same as the second pair. 

You need to compare the first pair to the last pair to determine if that was the end of the line. 

## Output
Just print the integer of the calculation.
