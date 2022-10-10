
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int isKeyword(char buffer[ ]) {
char Keyword[32][10] =
{‘auto’, ‘break’, ‘case’, ‘char’, ‘const’, ‘continue’, ‘default’, ‘do’, ‘double’, ‘else’, ‘enum’, ‘extern’, 
‘float’, ‘for’, ‘goto’,’if’, ‘int’, ‘long’, ‘register’, ‘return’, ‘short’, ‘signed’, ‘sizeof’, ‘static’, ‘struct’, 
‘switch’, ‘typdef’, ‘union’, ‘unsigned’, ‘void’, ‘volitile’, ‘while’};
int I, flag =0;
for i=0, i<32;i++){
if(strcmp[Keyword[i],buffer)==0){
flag=1;
break;
}}

return flag;
}



Void main(){
Char ch,ch1, buffer[50], operator[]=’+ - * / %’;
FILE *fp;
int i, j=0, l=1;
fp=fopen(‘program.txt’, ‘r’);
if(fp==NULL)
{
Printf(“\n error while opening file’);
Exit(0);
}
Else{
Printf(‘LEXEME \t LINE NUMBER\t TOKEN’);
While((ch=fgetc(fp))!=EOF)

{
for(i=0;i<5;++i){
if(ch==operator[i])
{
Printf(‘\n %c \t\t %d\t arithmetic operator ‘, ch,l);
Break;
}
}
If(i==5){
If(isalnum(ch)){
If(isdigit(ch) && j==0){ }
Else {
Buffer[j++] = ch;
Ch1= fgetc(fp);
If(isalnum(ch1))
Fseek(fp, -1, SEEK_CUR);
Else {
Fseek (fp,-1,SEEK_CUR);
Buffer[j]=’\)’;
If(isKeyword(buffer)==1){
Printf(‘\n%s \t\t %d \t keyword ‘, buffer, l);
J=0;
}
Else{
If(strcmp(buffer, ‘main’)!=0)
Printf(‘\n%s \t\t %d\t identifier’, buffer, l);
J=0;}
}
}
}
if(ch==’<’ || ch==’>’){
ch1= fgetc(fp);



if(ch1== ‘=’)
printf(‘\n%c%c \t\t %d \t relational operator’,ch,ch1,l);
else{
fseek(fp,-1,SEEK_CUR);
printf(‘\n%c \t\t %d \t relational operator’, ch,l);
}
}
Else if(ch==’=’){
Ch1=fgetc(fp);
if(ch1== ‘=’) {
Printf(‘\n%c%c \t\t %d \t relational operator’, ch, ch1, l);
}
Else{
fseek(fp, -1, SEEK_CUR);
Printf(‘\n%c \t\t %d \t Assignment operator’,ch,l);
}
}
if(ch==’\n’)
L++;
}
}
}}


--------
Program.txt


