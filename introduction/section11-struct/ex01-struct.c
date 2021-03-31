#include <stdio.h>

struct Framework {
    char* name; // Do not declare like this => char name[255]
    int first_year;
    char* language;
    // struct Framework* brother;
};

int main(int argc, char const *argv[])
{
    struct Framework f1, f2, f3;   

    f1.name = "Laravel";
    f1.first_year = 2011;
    f1.language = "PHP";

    f2.name = "React";
    f2.first_year = 2013;
    f2.language = "Javascript";

    f3.name = "Django";
    f3.first_year = 2005;
    f3.language = "Python";

    printf("\n");
    printf("%s \n", f1.name);
    printf("%d \n", f1.first_year);
    printf("%s \n", f1.language);
    printf("\n");
    printf("%s \n", f2.name);
    printf("%d \n", f2.first_year);
    printf("%s \n", f2.language);
    printf("\n");
    printf("%s \n", f3.name);
    printf("%d \n", f3.first_year);
    printf("%s \n", f3.language);

    return 0;
}
