
char * FUN_0014df28(int param_1,char *param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  size_t __n;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  __n = param_3 - 1;
  *param_2 = '\0';
  pcVar3 = strerror(param_1);
  if (pcVar3 == (char *)0x0) {
    FUN_001460b8(param_2,__n,"Unknown error %d",param_1);
  }
  else {
    strncpy(param_2,pcVar3,__n);
  }
  param_2[__n] = '\0';
  pcVar3 = strrchr(param_2,10);
  if ((pcVar3 != (char *)0x0) && (1 < (long)pcVar3 - (long)param_2)) {
    *pcVar3 = '\0';
  }
  pcVar3 = strrchr(param_2,0xd);
  if ((pcVar3 != (char *)0x0) && (0 < (long)pcVar3 - (long)param_2)) {
    *pcVar3 = '\0';
  }
  if (*piVar2 != iVar1) {
    *piVar2 = iVar1;
  }
  return param_2;
}

