struct Framework {
    char* name; // Do not declare like this => char name[255]
    int first_year;
    char* language;
    // truct Framework* brother;
} typedef Framework;

void printFramework(Framework f){ // Passing by value => creates a copy of the variable
	printf("\n");
    printf("%s \n", f.name);
    printf("%d \n", f.first_year);
    printf("%s \n", f.language);
}

int main(int argc, char const *argv[])
{
    Framework f1, f2, f3;   

    f1.name = "Laravel";
    f1.first_year = 2011;
    f1.language = "PHP";

    f2.name = "React";
    f2.first_year = 2013;
    f2.language = "Javascript";

    f3.name = "Django";
    f3.first_year = 2005;
    f3.language = "Python";

    printFramework(f1);
    printFramework(f2);
    printFramework(f3);

    return 0;
}

/*
	Struct => Represents a data structure. There are no Classes or objects in C.
	Typedef => Defines the name that we can call that type (in this example, instead of calling
	structure Freamework every time we mention that type, we can call simply Framework)
*/


