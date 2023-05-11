#ifndef LEXER_H
#define LEXER_H


#include "token.h"


typedef struct LEXER_STRUC {
   char c;           // current character in content
   unsigned int i;   // index of c
   char* content;    // the code itself
} lexer_t;

extern lexer_t* lexer_init(char* content);

extern void lexer_next(lexer_t* lexer);
extern void lexer_pass(lexer_t* lexer);

extern token_t* lexer_get_next_token(lexer_t* lexer);

extern token_t* lexer_get_string(lexer_t* lexer);

extern token_t* lexer_get_def_const(lexer_t* lexer);

extern token_t* lexer_get_def_mut(lexer_t* lexer);

extern token_t* lexer_get_comment(lexer_t* lexer);

extern token_t* lexer_get_directive(lexer_t* lexer);

extern token_t* lexer_get_keyword(lexer_t* lexer);

extern token_t* lexer_next_token(lexer_t* lexer, token_t* token);

extern char* lexer_get_c_as_string(lexer_t* lexer);


#endif
