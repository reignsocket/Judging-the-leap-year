Problem Description  
Determine whether a year is a leap year. In the Gregorian calendar method, most of the divisible by 4 is a leap year, but can be divisible by 100.
The year that cannot be divisible by 400 is not a leap year, such as 1900 is a normal year and 2000 is a leap year.
Enter a line of data with only one integer a(0 < a < 3000).
The output requires one line. If the year a is the year of the year, Y is output, otherwise N is output.
  
  
Input sample  
2006  
  
Output sample  
N  
  
Problem solving  
This topic mainly examines the definition of leap year, and it can be done using basic logic judgment statements. Considering that the input range is between 0 and 3000, it is not necessary to consider the judging condition that the year that can be divisible by 3200 is not a leap year. The procedure should consist of three basic steps: correctly reading the year to be determined a; determining whether a is a leap year; giving the correct output. Among them, judging whether the input year is a leap year may have different judgment orders according to individual thinking habits.
Segmentation exclusion:
If a % 4 ! = 0, then a is not a leap year;
Otherwise, if a % 100 == 0 && a % 400 != 0, then a is not a leap year;
Otherwise a is a leap year.
