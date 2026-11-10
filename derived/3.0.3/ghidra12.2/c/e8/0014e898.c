
char * FUN_0014e898(char *param_1,char param_2,long param_3)

{
  char *pcVar1;
  
  if ((param_3 != 0) && (-1 < param_3 + -1)) {
    pcVar1 = param_1 + param_3 + -1;
    do {
      if (*pcVar1 == param_2) {
        return pcVar1;
      }
      pcVar1 = pcVar1 + -1;
    } while (param_1 <= pcVar1);
  }
  return (char *)0x0;
}

