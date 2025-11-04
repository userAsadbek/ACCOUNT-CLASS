#ifndef CHARRANGE_H
#define CHARRANGE_H
class CharRange { 
    private:
     char input;
     char lower;
     char upper;
    public:
     CharRange(char,char);
     char getChar();
};
#endif 
