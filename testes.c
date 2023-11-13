/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felipe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:56:06 by felipe            #+#    #+#             */
/*   Updated: 2023/11/13 19:18:29 by felipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int main()
{
	int	fd;
	char	buf[256];
	int	chars_read;

	fd = open("file.txt", O_RDONLY | O_CREAT);
	while((chars_read = read(fd, buf, 10)))
	{
		buf[chars_read] = '\0';
		printf("buf - %s\n", buf);
	}
}
