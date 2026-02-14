**istream** Extraction Helper Operator Overload
Overload the extraction operator (operator>>) to read a Mark object from an istreamin a foolproof manner.

The function must ensure the user enters only an integer between 0 and 100, with no trailing non-digit characters.

Use the following exact error messages for invalid input:

"Invalid integer, try again.\n> "
"Invalid trailing characters. Please enter only an integer.\n> "
"Invalid mark. Enter a value between 0 and 100.\n> "
Example:
Mark M;
cout << "Please enter the mark:\n> ";
cin >> M;
M = MARK;
cout << "You entered: " << M << endl;
Output:
Please enter the mark:
> abc
Invalid integer, try again.
> -1
Invalid mark. Enter a value between 0 and 100.
> 101
Invalid mark. Enter a value between 0 and 100.
> 77.0
Invalid trailing characters. Please enter only an integer.
> 77abc
Invalid trailing characters. Please enter only an integer.
> 77
You entered: _77
Hint:
1. Read one integer.
   - If reading fails, it's not a valid integer → flush and retry.
2. If reading succeeds:
   - Read the next character.
     - If it's not a newline, there are trailing characters → flush and retry.
     - If it's a newline, validate that the integer is between 0 and 100.
       - If it's out of range, prompt for a valid mark and retry.
       - If it's valid, assign it to the Mark object and exit.