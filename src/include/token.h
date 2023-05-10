#ifndef TOKEN_H
#define TOKEN_H


typedef struct TOKEN_STRUC {
   enum {
      TOKEN_ID,       // keyword
      TOKEN_EQ,       // '='
      TOKEN_STR,      // "string"
      TOKEN_SEMI,     // ';'
      TOKEN_LORD,     // '/'
      TOKEN_RORD,     // '\'
      TOKEN_AMP,      // '&'
      TOKEN_LBRAK,    // '['
      TOKEN_RBRAK,    // ']'
      TOKEN_POUND,    // '#''
      TOKEN_TILDE,    // '~'
      TOKEN_QUOTE,    // '''
      TOKEN_COMM,     // '[comment]'
      TOKEN_EOF       // '\0'
    } type;

    char* value;
} token_t;

extern token_t* token_init(int type, char* value);


#endif
