/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminasya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:30:44 by mminasya          #+#    #+#             */
/*   Updated: 2025/02/02 22:44:40 by mminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dst == NULL || src == NULL || dstsize == 0)
		return (src_len);
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	while (src[i] && (dst_len + i < dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	if (dst_len + i < dstsize)
		return (dst_len + src_len);
	return (dstsize + src_len);
}
/*
int main() {
    char dst[20] = "Hello";
    const char *src = " World";
    size_t dstsize = 20;

    size_t len = ft_strlcat(dst, src, dstsize);
    printf("Result: %s\n", dst);
    printf("Total length: %zu\n", len);

    // Test when dstsize is smaller than the result
    char dst2[6] = "Hello";
    const char *src2 = " World";
    size_t len2 = ft_strlcat(dst2, src2, 6);
    printf("Result: %s\n", dst2); // Should be truncated to "Hello"
    printf("Total length: %zu\n", len2); // Should print full length o
	f concatenated string

    // Edge case where dst is already full
    char dst3[6] = "Hello";
    const char *src3 = " World";
    size_t len3 = ft_strlcat(dst3, src3, 5); // Insufficient space
    printf("Result: %s\n", dst3); // Should still be "Hello"
    printf("Total length: %zu\n", len3); // Should print the total
   	length of "Hello World"

    return 0;
}
*/
