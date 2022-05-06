rm -f libft.a 
find . -name "*.c" -type f -exec gcc -Wall -Wextra -Werror -c {} \; 
ar cr libft.a *.o
find . -name "*.o" -type f -delete 
