//tenmousha@gmail.com
//Tianmeng Xia

#include<stdio.h>
#include<string.h>

int compression(char arr[], int n, char res[]){
    int res_index = 0;
    for(int i = 0; i < n; i++) {
        int count = 1;
        while(i < n - 1 && arr[i] == arr[i + 1]) {
            count++;
            i++;
        }
        res[res_index++] = arr[i];
        if(count > 1) {
            int len = sprintf(&res[res_index], "%d", count);
            res_index += len;
        }
    }
    res[res_index] = '\0';
    return res_index;
}
 
int main()
{
    char a[]="aaaaaaaaaaaaaabbbbcccd";
    char res[50];
    int r,n=strlen(a);//n is the size of input array
    r=compression(a,n,res);
    printf("length of the compressed string:%d\n",r);
    return 0;
}
