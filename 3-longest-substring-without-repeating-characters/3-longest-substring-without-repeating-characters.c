

int lengthOfLongestSubstring(char * s){
    
    int left, right;
    left = right = 0;
    char map_str[100];
    int map_int[100];
    
    int a = 0;
    int max = 0;
    
    int temp;
    int lenght = strlen(s);
    int flag = 0;
    int flag2 = 0;
    for (int i = 0; i < lenght; i++)
    {
        // printf("\n");
        // for (int l = 0; l < a; l++)
        // {
        //     printf("%c:%d ", map_str[l], map_int[l]);
        // }
        // printf("\n");

        flag = 0;
        flag2 = 0;

        //if s[right] is in map then update map and move left
        //shift the window
        for (int j = 0; j < a; j++)
        {
            if (s[right] == map_str[j])
            {
                for (int k = left; k < map_int[j] + 1; k++)
                {
                    for (int l = 0; l < a; l++)
                    {
                        if (map_str[l] == s[k] && map_str[l] != s[right])
                        {
                            map_str[l] = (*"");
                            map_int[l] = -1;
                        }
                    }
                }
                left = map_int[j] + 1;
                map_int[j] = right;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            // map_str[a] = s[right];
            // map_int[a] = right;
            // a++;
            for (int j = 0; j < a; j++)
            {
                if (map_str[j] == *"")
                {
                    map_str[j] = s[right];
                    map_int[j] = right;
                    flag2 = 1;
                }
            }
            if (flag2 == 0)
            {
                map_str[a] = s[right];
                map_int[a] = right;
                a++;
            }
        }
        // printf("left:%d right:%d\n", left, right);
        right++;
        temp = right - left;
        if (temp > max)
        {
            max = temp;
        }
    }
    // for (int l = 0; l < a; l++)
    // {
    //     printf("%c:%d ", map_str[l], map_int[l]);
    // }
    // printf("\n");
    // printf("%d", max);
    return max;
}