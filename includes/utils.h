#ifndef UTILS_H
# define UTILS_H

# include <stdlib.h>
# include <unistd.h>

int				get_line(char **line);
int				ft_isnumbers(const char *str);
long			ft_atoi(const char *str);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_putstr(char const *str);
void			ft_putendl(char const *str);
int				str_digit(char *line);
char			*ft_strchr(char *s, int c);
size_t			ft_strlen(char const *str);
char			*ft_strdup(char const *str);
char			*ft_strjoin(char const *s1, char const *s2);
int				ft_strcmp(char const *s1, char const *s2);
int				ft_strncmp(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			**ft_strsplit(char const *s, char c);

#endif