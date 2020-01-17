void delete_string(char str[], char ch){
	int i,j;
	for (i=j=0;str[i]!='\0';i++){
		if (str[i]!=ch){
			str[j]=str[i];
			j=j+1;
		}
	}
	str[j]='\0';
}
