
int FUN_0043a660(char *param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = strrchr(param_1,param_2 & 0xff);
  iVar1 = (int)pcVar2 - (int)param_1;
  if (pcVar2 == (char *)0x0) {
    iVar1 = -1;
  }
  return iVar1;
}

