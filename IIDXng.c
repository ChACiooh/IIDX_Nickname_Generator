#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int length = 27+10+8;
char alphanumerics[] = {'a','b','c','d','e','f','g','h','i','j','k','l',
                        'm','n','o','p','q','r','s','t','u','v','w','x','y',
                        'z','0','1','2','3','4','5','6','7','8','9','-',
                        ' ', '#', '!', '$', '?', '*', '.'};

int main()
{
    srand(time(NULL));

    char name[7];
    int i, j;
    FILE *ofp = fopen("output.txt", "w");
    for(j = 0; j < 20; ++j)
    {
        for(i = 0; i < 6; ++i)
        {
            name[i] = alphanumerics[rand() % length];
            if(name[i] >= 'a' && name[i] <= 'z')
                name[i] += ('A' - 'a');
        }
        fprintf(ofp, "%s\n", name);
    }

    fclose(ofp);
    return 0;
}
