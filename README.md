![ft_printfn](https://user-images.githubusercontent.com/98755737/179123312-13a1e33b-1187-4f83-b696-bda863872012.png)
# 42-Printf
succeeded with 100%
</p> Implementation of a custom version of the ´printf´ function in C only using the ´write´ function, handling flags (for character, string, integer, unsigned integer, hexadecimal integer and pointer type variables) from the ground up and using a variable number of parameters.

# Handling a variable number of parameters and returning an int:

To handle a variable number of parameters, the macros ``va_list``, ``va_start``, ``va_arg`` and ``va_end`` have been used. A function was implemented to check the next character in the string after the % sign is found. There is a different function for each variable type, called depending on the corresponding flag read.

# Printable variables, flags and formatting functions:


* Hexadecimal integers. Works for upper ``%X`` (``ft_putupperhex()``) and lowercase``%x`` (``ft_putlowerhex()``) characters
* Integers ``%d`` (``ft_putnbr()``), signed or unsigned ``%u`` (``ft_putnbr_un()``), handling the maximum int value and casting the integer to characters.
* Pointers in hexadecimal format ``%p``, preceded by the string "0x" (``ft_putexptr()``).
* char ``%c`` and char * ``%s`` type variable (``ft_putchar_fd()`` and``ft_putstr()``)
