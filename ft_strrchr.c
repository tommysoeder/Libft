/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:27:14 by tomamart          #+#    #+#             */
/*   Updated: 2025/05/05 19:38:06 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*last = NULL;

	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last);
}
/*
int main(void)
{
    const char *s = "Hasta luego!";
    int c = 'a';
    char *resultado = ft_strrchr(s, c);

    if (resultado != NULL)
        printf("Última aparición: %c\n", *resultado);
    else
        printf("Carácter no encontrado.\n");

    return 0;
}
*/
