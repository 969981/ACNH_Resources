
undefined1 FUN_00693b10(long *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  
  if (0 < (int)*(uint *)(param_1 + 2)) {
    uVar4 = 0;
    do {
      pcVar5 = *(char **)(*param_1 + uVar4 * 0x30 + 8);
      pcVar7 = param_2;
      iVar6 = -0x7ffffffe;
      do {
        cVar1 = *pcVar5;
        cVar2 = *pcVar7;
        bVar3 = iVar6 != 0;
        iVar6 = iVar6 + 1;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      } while ((cVar1 != '\0' && cVar1 == cVar2) && bVar3);
      if (cVar1 == cVar2) {
        return *(undefined1 *)(*param_1 + uVar4 * 0x30 + 0x29);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != *(uint *)(param_1 + 2));
  }
  return 0;
}

