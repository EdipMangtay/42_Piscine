#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
    char *dest;
    int len = 0;
    int i = 0;

    // src dizisinin uzunluğunu hesaplayın
    while (src[len])
        len++;

    // src dizisi boşsa NULL döndürün
    if (src == NULL)
        return NULL;

    // Bellek tahsis edin
    dest = (char *)malloc(sizeof(char) * (len + 1));
    if (dest == NULL)
        return NULL;

    // src dizisini dest dizisine kopyalayın
    while (i < len)
    {
        dest[i] = src[i];
        i++;
    }
    // Null karakter ekleyin
    dest[i] = '\0';

    return dest;
}

int main()
{
    char x[] = "edip";
    char *duplicated_str = ft_strdup(x);

    if (duplicated_str != NULL)
    {
        printf("%s\n", duplicated_str);
        free(duplicated_str); // Dinamik olarak tahsis edilen belleği serbest bırakın
    }

    return 0;
}
