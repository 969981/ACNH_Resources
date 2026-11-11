
char * FUN_004299c0(long *param_1,char param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)param_1[1];
  do {
    if ((char *)*param_1 == pcVar1) {
      return (char *)0x0;
    }
    pcVar1 = pcVar1 + -1;
  } while (*pcVar1 != param_2);
  return pcVar1;
}

