#include <stdio.h>

#define IN  1      /* inside  a word */
#define OUT 0      /* outside a word */

/* count lines, words, character in input */
int main()
{
  int c, nl, nw, nc, state;

  state = OUT;
  nl = 1;
  nw = nc = 0;
  while ((c = getchar()) != EOF){
    ++nc;
    if (c == '\n')
      ++nw;
    if (c == ' ' || c == '\t' || c == '\n')
      state = OUT;
    else if (state == OUT){
      state = IN;
      ++nw;
    }
  }
  printf("Lines:%d\tWords:%d\tCharacters:%d\n",nl,nw-1,nc-1);
}
