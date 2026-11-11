
void FUN_0043a430(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = 0;
  do {
    if ((long)param_2 <= (long)uVar3) {
      pcVar1 = (char *)FUN_00438a70(PTR_DAT_048607b8,(int)uVar3 + 1);
      if ((int)uVar3 != 0) {
        uVar3 = uVar3 & 0xffffffff;
        goto LAB_0043a48c;
      }
      iVar2 = 0;
      goto LAB_0043a4a0;
    }
    pcVar1 = param_1 + uVar3;
    uVar3 = uVar3 + 1;
  } while (*pcVar1 != '\0');
  pcVar1 = (char *)FUN_00438a70(PTR_DAT_048607b8,(int)uVar3 + 1);
LAB_0043a48c:
  iVar2 = (int)uVar3;
  pcVar1 = strncpy(pcVar1,param_1,uVar3 & 0xffffffff);
LAB_0043a4a0:
  pcVar1[iVar2] = '\0';
  return;
}

