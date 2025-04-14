char *mergeAlternately(char *word1, char *word2)
{
    int i = 0;
    int j = 0;
    int la = strlen(word1);
    int lb = strlen(word2);

    char *k = malloc(sizeof(char) * (la + lb + 1));

    while (i < la || i < lb)
    {
        if (i < la)
        {
            k[j] = word1[i];
            j++;
        }
        if (i < lb)
        {
            k[j] = word2[i];
            j++;
        }
        i++;
    }
    k[j] = '\0';

    return k;
}

/*
Concept used:
Two pointers: two inputs, exhaust both

Time Complexity:
O(n + m)

Space Complexity:
O(n + m)
*/
