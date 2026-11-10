
char * FUN_00154d1c(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00144b34(*param_1);
  if ((iVar1 == 0) || (pcVar2 = (char *)(*param_1 + param_3), *pcVar2 != ':')) {
    pcVar2 = (char *)0x0;
  }
  else {
    do {
      pcVar2 = pcVar2 + 1;
    } while (*pcVar2 == ' ');
  }
  return pcVar2;
}

