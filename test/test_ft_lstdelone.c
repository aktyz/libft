
#include "test_libft.h"

static void	free_lst_content(void *);

void	test_ft_lstdelone(void)
{
	t_list			*list;
	t_list			*ptr;
	t_lst_content	*content;

	list = NULL;
	content = malloc(sizeof(t_lst_content));
	content->name = ft_strdup("SHELL");
	content->value = ft_strdup("/bin/bash");
	content->export = true;
	list = ft_lstnew(content);
	content = malloc(sizeof(t_lst_content));
	content->name = ft_strdup("_");
	content->value = ft_strdup("usr/bin/env");
	content->export = true;
	ft_lstadd_back(&list, ft_lstnew(content));
	content = malloc(sizeof(t_lst_content));
	content->name = ft_strdup("PWD");
	content->value = ft_strdup("/home/zslowian/42/libft");
	content->export = true;
	ft_lstadd_back(&list, ft_lstnew(content));
	content = malloc(sizeof(t_lst_content));
	content->name = ft_strdup("SHLVL");
	content->value = ft_strdup("0");
	content->export = true;
	ft_lstadd_back(&list, ft_lstnew(content));
	ptr = ft_lstlast(list);
	content = (t_lst_content*) ptr->content;
	ft_lstdelone(ptr, free_lst_content);
	ft_lstclear(&list, free_lst_content);
}

static void	free_lst_content(void *lst_content)
{
	t_lst_content	*content;

	content = (t_lst_content*) lst_content;
	if(!content)
		return ;
	if(content->name)
		free(content->name);
	if(content->value)
		free(content->value);
	if(content)
		free(content);
	lst_content = NULL;
}
