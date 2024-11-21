#include <stdio.h>
#include <string.h>
#include <ctype.h>
void chuanHoa( char s[], FILE *fout ){
	while(s[0] == ' ') strcpy(&s[0], &s[1]);
	do{
		s[strlen(s)-1] = '\0';
	}while(s[strlen(s)-1] == ' ');
	for(int i = 0; i< strlen(s); i++ );
	    if( s[i] == ' ' && s[i+1] == ' ' )
	    {
	    	strcpy( &s[i], &s[i+1]);
	    	i--;
		}
	strlwr(s); 
	s[0] = toupper(s[0]);
	for(int i = 0; i< strlen(s); i++ )
		if(s[i] == ' ') s[i+1] = toupper(s[i+1]);
	fprintf(fout,"%s\n", s);	
}

void nhap(){
	FILE *fin = fopen("DATA.txt","r");
	FILE *fout = fopen("KETQUA.txt","r");
	int n;
	char s[80], f[6];
	fscanf(fin,"%d", &n);
	fgets(f,5,fin);
	while(n--){
		fgets(s,80,fin);
		chuanHoa(s, fout );
	}
}
int main(){
	
}
