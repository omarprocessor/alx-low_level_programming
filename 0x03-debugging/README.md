Debugging Project
This project focuses on debugging C programs. The objective is to understand common errors and fix them to ensure the programs run correctly. Below are the descriptions of the tasks involved in this project.

Task 0: Multiple mains
In most projects, we often provide only one main file to test with. For this task, you'll be creating a test file 0-main.c that tests the positive_or_negative function to check its behavior when given an input of 0.

Files:
0-main.c
main.h
Steps:
Create a file named 0-main.c that includes the main function and tests the positive_or_negative function.
Ensure the main function passes 0 to the positive_or_negative function and checks the output.
Only the 0-main.c and main.h files need to be uploaded for this task.
Example Usage:
sh
Copy code
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main
./0-main
# Expected output: "0 is zero"
Task 1: Like, comment, subscribe
Copy the provided main file 1-main.c and comment out the part of the code that causes an infinite loop. Do not delete the lines; just comment them out.

Files:
1-main.c
Steps:
Identify the code causing the infinite loop in 1-main.c.
Comment out the problematic code to prevent the infinite loop.
Ensure the line count remains the same.
Example Usage:
sh
Copy code
gcc -std=gnu89 1-main.c -o 1-main
./1-main
# Expected output:
# Infinite loop incoming :(
# Infinite loop avoided! \o/
Task 2: 0 > 972?
Fix the code in 2-largest_number.c to correctly print the largest of three numbers.

Files:
2-largest_number.c
main.h
Steps:
Review the largest_number function in 2-largest_number.c.
Correct the logic to ensure it identifies the largest of the three integers.
Ensure the function works for all test cases.
Example Usage:
sh
Copy code
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c 2-main.c -o 2-main
./2-main
# Expected output: "972 is the largest number"
Task 3: Leap year
Fix the print_remaining_days function so that it correctly calculates the number of days remaining in the year, taking leap years into account.

Files:
3-print_remaining_days.c
main.h
Steps:
Review the print_remaining_days function in 3-print_remaining_days.c.
Ensure the function correctly handles leap years and non-leap years.
Validate the function with various dates, including leap year dates like 02/29/2000.
Example Usage:
sh
Copy code
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_a.c -o 3-main_a
./3-main_a
# Expected output:
# Date: 04/01/1997
# Day of the year: 91
# Remaining days: 274

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_b.c -o 3-main_b
./3-main_b
# Expected output:
# Date: 02/29/2000
# Day of the year: 60
# Remaining days: 306
Repository
GitHub repository: alx-low_level_programming
Directory: 0x03-debugging
This README file provides a clear and detailed description of each task, the steps to complete them, and the expected usage and output for each.
