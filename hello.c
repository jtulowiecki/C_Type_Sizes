#include <stdio.h>

int main()
{
    printf("\n");
    printf(" Bytes\t Type\n");
    printf("---------------------\n");

    printf("%4lu\t %s\n", 
        sizeof(char), 
        "char"
    );
    printf("%4lu\t %s\n",
        sizeof(unsigned char),
        "unsigned char"
    );
    
    printf("%4lu\t %s\n",
        sizeof(short),
        "short"
    );
    printf("%4lu\t %s\n", 
        sizeof(unsigned short), 
        "unsigned short"
    );
    printf("%4lu\t %s\n",
        sizeof(int),
        "int"
    );
    printf("%4lu\t %s\n", 
        sizeof(unsigned int), 
        "unsigned int"
    );
    printf("%4lu\t %s\n", 
        sizeof(long),
        "long"
    );
    printf("%4lu\t %s\n", 
        sizeof(unsigned long), 
        "unsigned long"
    );
    printf("%4lu\t %s\n", 
        sizeof(float), 
        "float"
    );
    printf("%4lu\t %s\n",
        sizeof(double),
        "double"
    );
    printf("%4lu\t %s\n",
        sizeof(long double),
        "long double"
    );
    printf("%4lu\t %s\n",
        sizeof(size_t),
        "size_t"
    );
    printf("%4lu\t %s\n",
        sizeof(void *),
        "void *"
    );
    printf("%4lu\t %s\n",
        sizeof(char *), 
        "char *"
    );
    printf("%4lu\t %s\n",
        sizeof(short *), 
        "short *"
    );
    printf("%4lu\t %s\n",
        sizeof(int *),
        "int *"
    );
    printf("%4lu\t %s\n",
        sizeof(long *), 
        "long *"
    );
    printf("%4lu\t %s\n",
        sizeof(float *),
        "float *"
    );
    printf("%4lu\t %s\n",
        sizeof(double *),
        "double *"
    );
    printf("%4lu\t %s\n",
        sizeof(int (*)(void)),
        "int (*)(void)"
    );
    printf("%4lu\t %s\n",
        sizeof(double (*)(void)),
        "double (*)(void)"
    );
    printf("%4lu\t %s\n",
        sizeof(char *(*)(void)),
        "char *(*)(void)"
    );

    printf("\n");
    
}