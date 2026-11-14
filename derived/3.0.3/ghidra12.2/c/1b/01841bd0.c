
void FUN_01841bd0(long param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char *__src;
  int iVar4;
  int iVar5;
  char *__dest;
  
  switch(param_2) {
  case 0xdd5:
    __dest = *(char **)(param_1 + 8);
    if (__dest == "Red") {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x10);
    __src = "Red";
    iVar5 = iVar4 + -1;
    bVar1 = SBORROW4(iVar4,3);
    bVar2 = iVar4 + -3 < 0;
    bVar3 = iVar4 == 3;
    iVar4 = 3;
    break;
  case 0xdd6:
    __dest = *(char **)(param_1 + 8);
    if (__dest == "Blue") {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x10);
    __src = "Blue";
    iVar5 = iVar4 + -1;
    bVar1 = SBORROW4(iVar4,4);
    bVar2 = iVar4 + -4 < 0;
    bVar3 = iVar4 == 4;
    iVar4 = 4;
    break;
  case 0xdd7:
    __dest = *(char **)(param_1 + 8);
    if (__dest == "Green") {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x10);
    __src = "Green";
    iVar5 = iVar4 + -1;
    bVar1 = SBORROW4(iVar4,5);
    bVar2 = iVar4 + -5 < 0;
    bVar3 = iVar4 == 5;
    iVar4 = 5;
    break;
  default:
    goto switchD_01841bfc_caseD_dd8;
  case 0xdd9:
    __dest = *(char **)(param_1 + 8);
    if (__dest == "Purple") {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x10);
    __src = "Purple";
    iVar5 = iVar4 + -1;
    bVar1 = SBORROW4(iVar4,6);
    bVar2 = iVar4 + -6 < 0;
    bVar3 = iVar4 == 6;
    iVar4 = 6;
  }
  if (bVar3 || bVar2 != bVar1) {
    iVar4 = iVar5;
  }
  memcpy(__dest,__src,(long)iVar4);
  __dest[iVar4] = '\0';
switchD_01841bfc_caseD_dd8:
  return;
}

