#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char **argv)
{
    (void)argc;
    char    dst[20] = "Start-and-stop";
    char    src[20] = "Start-and-stop";
    char    tst[20] = "Start-and-stop";
    void    **ptr;

    ptr = ft_memalloc(8);
    *ptr = ft_memalloc(20);
    *ptr = ft_memcpy(tst, tst + 4, 6);  
    
    printf("%s\n", *ptr);
    printf("\n");

    ft_memdel(ptr);
    printf("mmove : %s\n", memmove(tst, tst + 2, 5));
 
    return (0);
}

/*
int main()
{
    return (0);
}
*/