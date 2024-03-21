void char_register(char * ch, int fl) {
    *ch = *ch >= 'A' && *ch <= 'Z' && !fl || *ch >= 'a' && *ch <= 'z' && fl ? *ch ^ ' ' : *ch;
}
// fl: 0 -lower case, 1 - upper case
