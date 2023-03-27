/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

 

Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.
Example 2:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
Example 3:

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
 

Constraints:

1 <= s.length <= 15
s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
It is guaranteed that s is a valid roman numeral in the range [1, 3999].


*/
/*solution 1
int getValue(const char * s){
    switch(*s) {
        case 'I': return (s[1] == 'V' || s[1] == 'X') ? -1 : 1;
        case 'X': return (s[1] == 'L' || s[1] == 'C') ? -10 : 10;
        case 'C': return (s[1] == 'D' || s[1] == 'M') ? -100 : 100;
        case 'V': return 5;
        case 'L': return 50;
        case 'D': return 500;
        case 'M': return 1000;
    }
    return 0;
}

int romanToInt(char * s){
    int result = 0; 
    
    for(;*s != '\0'; ++s) {
        result += getValue(s);
    }
    return result;
}
*/
//Solution 2
#include <stdio.h>
#include <stdlib.h>
static int roman_to_integer(char c)
{
    switch(c) {
    case 'I':  
        return 1;  
    case 'V':  
        return 5;  
    case 'X':  
        return 10;  
    case 'L':  
        return 50;  
    case 'C':  
        return 100;  
    case 'D':  
        return 500;  
    case 'M':  
        return 1000;  
    default:
        return 0;
    }
}

int roman_to_int (char *s)
{
    int i;
    int  int_num = roman_to_integer(s[0]);

     for (i = 1; s[i] != '\0'; i++) {
        int prev_num = roman_to_integer(s[i - 1]);
        int cur_num = roman_to_integer(s[i]);
        if (prev_num < cur_num) {
            int_num = int_num - prev_num + (cur_num - prev_num);
        } else {
            int_num += cur_num;
        }
    }
    return int_num;
}
int main(){
  char *str1;
  scanf("%s",str1);
  printf("%d", roman_to_int(str1));
return 0;
}

