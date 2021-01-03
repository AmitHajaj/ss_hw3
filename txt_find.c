#include <stdio.h>
#include <string.h>
#define LINE 256
#define WORD 30


int similar (char *s, char *t, int n){
    int i, j=0, cnt;
    cnt=0;
    
    //if there is a size difference bigger than n, no need to check what so ever.
    if(strlen(s)>n+strlen(t)){
        return -1;
    }
    else if(strlen(s)<strlen(t)){
        return -1;
    }
    
    for(i=0; i<strlen(s) && j<strlen(t)+n; i++){
        //if there is a difference between those char's, move to check the next one from s with the same one in t.
        if(s[i] == t[j]){
            j++;
        }
        else{
            cnt++;
        }
        //if the difference is bigger than n cahrs.
        if(cnt==n+1){
            return -1;
        }
    }
    return 1;
}

//option 1
void print_lines(char *str){
    char tempLine[256]; //save a line for current check.
    int i=0;
    
    
    while(scanf("%[^\n]%*c", tempLine) != EOF){
        if(strstr(tempLine, str)!=NULL){
            printf("%s\n", tempLine);
        }
    }
}

//option 2
void print_similar_words(char *str){
    char tempWord[30]; //maximum initialization for a possible given txt.
    char c;
    int i=0;
    

    while((c = getchar()) != EOF) 
	{ 
		if(c == ' ' || c == '\n') 
		{ 
            i=0;
            if(similar(tempWord, str, 1) != -1){
                printf("%s\n", tempWord);
            }
            memset(tempWord, 0, sizeof(tempWord));
		} 
		else 
		{ 
			tempWord[i]=c;
            i++;
            // printf("%s", tempWord);
            
		}
	} 
}

//Here we will define which action the user want to do and perform it.
void main(){
    
    char str[30];
    //we get the input word from the user.
    
    scanf("%s", str);

    //here we get the user selection.

    char select;
    scanf(" %c\n", &select);
    //call the right function based on the user selction.
    switch(select){

         case 'a':
         {
             print_lines(str);
             break;
         }
         case 'b':
         {
             print_similar_words(str);
             break;
         }

    }
}
