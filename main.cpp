#include <iostream>

extern "C"
{
	void	ft_bzero(void *s, size_t n);
	char	*ft_strdup(const char *s1);
	void *ft_memset(void *mem, int c, size_t len);
	void *ft_memcpy(void *dest, const void *src, size_t len);
	int ft_isalnum(int c);
	char *ft_strcat(char *dest, const char *src);
	int	ft_strlen(const char *s);
	int	ft_toupper(int c);
	int	ft_tolower(int c);
	int ft_isalpha(int c);
	int ft_isascii(int c);
	int	ft_isprint(int c);
	int	ft_isalnum(int c);
	int	ft_isdigit(int c);

}

int main()
{
	char *a = ft_strdup("hello");

	ft_memset(a, 'z', 2);
	std::cout << "after strdup and memset => " << a << " toupper " << (char)ft_toupper(*a) << " len = " << ft_strlen(a) << std::endl;

	std::cout << *a << " is:" << std::endl;
	if (ft_isalnum(*a))
		std::cout << "isalnum " << std::endl;
	else
		std::cout << "is not alnum " << std::endl;
	if (ft_isalpha(*a))
		std::cout << "isalpha " << std::endl;
	else
		std::cout << "is not alpha " << std::endl;
	if (ft_isascii(*a))
		std::cout << "isascii " << std::endl;
	else
		std::cout << "is not ascii " << std::endl;
	if (ft_isprint(*a))
		std::cout << "isprint " << std::endl;
	else
		std::cout << "is not print " << std::endl;
	if (ft_isdigit(*a))
		std::cout << "isdigit " << std::endl;
	else
		std::cout << "is not digit " << std::endl;

	void *b = ft_strdup("abcde");
	std::cout << "avant memcpy b = " << (char *)b << std::endl;
	b = ft_memcpy(ft_strdup("abcde"), a, ft_strlen(a));
	std::cout << "memcpy b = [" << (char*)b << "] and a = " << a << std::endl;

	ft_bzero(a, ft_strlen(a));
	std::cout << "bzero de a" << a << '|'<< std::endl;

	return 0;
}