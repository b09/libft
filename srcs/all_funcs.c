#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int     main(void)
{
	char a[] = "This is a test string ";
	char b[] = "that has another part to it.";
	char c[] = "+24.5235";

//	atoi();
	printf("system atoi: %d\n", atoi(c));
//	int atoi(const char *str);
//	     The atoi() function converts the initial portion of the string pointed to
//	          by str to int representation.
   
//	isalnum();
//	printf("%s\n", a);
//	int isalnum(int c);
   
//	isalpha();
//	printf("%s\n", a);
//	int isalpha(int c);
   
//	isascii();
//	printf("%s\n", a);
//	int isascii(int c);
   
//	isdigit();
//	printf("%s\n", a);
//	int isdigit(int c);
  
//	isprint();
//	printf("%s\n", a);
//	int isprint(int c);
   
//	itoa();
//	printf("%s\n", a);
//	char * ft_itoa(int n);
   
//	memalloc();
//	printf("%s\n", a);
//	void * ft_memalloc(size_t size);
   
//	memdel();
//	printf("%s\n", a);
//	void ft_memdel(void **ap);
   
//	putchar();
//	printf("%s\n", a);
//	void ft_putchar(char c);
   
//	putchar_fd();
//	printf("%s\n", a);
//	void ft_putchar_fd(char c, int fd);
   
//	putendl();
//	printf("%s\n", a);
//	void ft_putendl(char const *s);
   
//	putendl_fd();
//	printf("%s\n", a);
//	void ft_putendl_fd(char const *s, int fd);
   
//	putnbr();
//	printf("%s\n", a);
//	void ft_putnbr(int n);
   
//	putnbr_fd();
//	printf("%s\n", a);
//	void ft_putnbr_fd(int n, int fd);
   
//	putstr();
//	printf("%s\n", a);
//	void ft_putstr(char const *s);
   
//	putstr_fd();
//	printf("%s\n", a);
//	void ft_putstr_fd(char const *s, int fd);
   
//	strchr();
//	printf("%s\n", a);
//	char * strchr(const char *s, int c);
   
//	strcmp();
//	printf("%s\n", a);
//	int strcmp(const char *s1, const char *s2);
   
//	strdel();
//	printf("%s\n", a);
//	void ft_strdel(char **as);
   
//	striter();
//	printf("%s\n", a);
//	void ft_striter(char *s, void (*f)(char *));
   
//	striteri();
//	printf("%s\n", a);
//	void ft_striteri(char *s, void (*f)(unsigned int, char *));
   
//	strjoin();
//	printf("%s\n", a);
//	char * ft_strjoin(char const *s1, char const *s2);
   
//	strlcat();
//	printf("%s\n", a);
//	size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t size);
   
//	strcrl();
//	printf("%s\n", a);
//	void ft_strclr(char *s);
   
//	strmap();
//	printf("%s\n", a);
//	char * ft_strmap(char const *s, char (*f)(char));
   
//	strmapi();
//	printf("%s\n", a);
//	char * ft_strmapi(char const *s, char (*f)(unsigned int, char));
   
//	strncmp();
//	printf("%s\n", a);
//	int strncmp(const char *s1, const char *s2, size_t n);
   
//	strncpy();
//	printf("%s\n", a);
//	char * strncpy(char * dst, const char * src, size_t len);
   
//	strnequ();
//	printf("%s\n", a);
//	int ft_strnequ(char const *s1, char const *s2, size_t n);
   
//	strnew();
//	printf("%s\n", a);
//	char * ft_strnew(size_t size);
   
//	strnstr();
//	printf("%s\n", a);
//	char * ft_strnstr(const char * haystack, const char * needle, size_t len);
   
//	strequ();
//	printf("%s\n", a);
//	int ft_strequ(char const *s1, char const *s2);
   
//	strenqu();
//	printf("%s\n", a);
//	int ft_strnequ(char const *s1, char const *s2, size_t n);
   
//	strrchr();
//	printf("%s\n", a);
//	char * strrchr(const char *s, int c);
   
//	strsplit();
//	printf("%s\n", a);
//	char ** ft_strsplit(char const *s, char c);
   
//	strstr();
//	printf("%s\n", a);
//	char * ft_strstr(const char * haystack, const char *needle);
   
//	strsub();
//	printf("%s\n", a);
//	char * ft_strsub(char const *s, unsigned int start, size_t len);
   
//	strtrim();
//	printf("%s\n", a);
//	char * ft_strtrim(char const *s);
   
//	tolower();
//	printf("%s\n", a);
//	int ft_tolower(int c);
   
//	toupper();
//	printf("%s\n", a);
//	int ft_toupper(int c);
   
//	bzero();
//	printf("%s\n", a);
//	void    ft_bzero(void *s, size_t n);
   
//	memccpy();
//	printf("%s\n", a);
//	void * ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
   
//	memcpy();
//	printf("%s\n", a);
//	void * ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
   
//	memmove();
//	printf("%s\n", a);
//	void * ft_memmove(void *dst, const void *src, size_t len);
   
//	memset();
//	printf("%s\n", a);
//	void * ft_memset(void *b, int c, size_t len);
   
//	strcat();
//	printf("%s\n", a);
//	char * ft_strcat(char *restrict s1, const char *restrict s2);
   
//	strcpy();
//	printf("%s\n", a);
//	char * ft_strcpy(char * dest, const char * src);
   
//	strdup();
//	printf("%s\n", a);
//	char * ft_strdup(const char *s1);
   
//	strlen();
//	printf("%s\n", a);
//	size_t ft_strlen(const char *s, size_t maxlen);
   
//	strncat();
//	printf("%s\n", a);
//	char * ft_strncat(char *restrict s1, const char *restrict s2, size_t n);
   
//	strncpy();
//	printf("%s\n", a);
//	char * ft_strcpy(char * dst, const char * src);

return (0);
}