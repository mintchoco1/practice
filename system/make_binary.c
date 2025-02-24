#include <stdio.h>

int main(void)
{
    FILE*file=fopen("a.bin", "wb");
    if(file==NULL)
    {
        printf("cannot open file!\n");
        return 1;
    }
    unsigned char value1 = 'a';
    unsigned char value2 = 0xa;
    unsigned char value3 = (unsigned char)10;
    unsigned char value4 = (unsigned char)97;

    fwrite(&value1,sizeof(value1),1,file);
    fwrite(&value2,sizeof(value2),1,file);
    fwrite(&value3,sizeof(value3),1,file);
    fwrite(&value4,sizeof(value4),1,file);

    fclose(file);
    return 0;

}