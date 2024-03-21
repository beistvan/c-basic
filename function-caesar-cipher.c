void char_cesar(char * ch, int shift){
    *ch = (*ch % 97 + shift + 26) % 26 + 'a';
}
