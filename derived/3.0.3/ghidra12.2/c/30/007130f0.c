
long FUN_007130f0(uint *param_1,uint param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *__s;
  uint *puVar6;
  ulong uVar7;
  int *piVar8;
  char cVar9;
  
  __s = PTR_DAT_04bb3250;
  puVar5 = PTR_DAT_04bb3248;
  if (*param_1 == 0) {
    return 0;
  }
  cVar9 = *PTR_DAT_04bb3248;
  uVar2 = 0;
  if (param_2 < 0xa2) {
    uVar2 = (ulong)param_2;
  }
  do {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      *puVar5 = 1;
      memset(__s,0xff,0x288);
    }
    uVar4 = *(uint *)(__s + uVar2 * 4);
    if (-1 < (int)uVar4) {
      return (ulong)uVar4 + (long)param_1;
    }
    if (uVar4 != 0xffffffff) {
      return 0;
    }
    puVar6 = (uint *)(ulong)*param_1;
    if (*param_1 == 0) {
      return 0;
    }
    if (param_1 == puVar6) {
      return 0;
    }
    lVar3 = 0xc;
    if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
      lVar3 = 0x1c;
    }
    lVar3 = (long)param_1 + (lVar3 - (long)puVar6);
    if (lVar3 == 0) {
      return 0;
    }
    uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
    *(undefined4 *)(__s + uVar2 * 4) = 0xfffffffe;
    if (uVar7 == 0) {
      return 0;
    }
    piVar8 = (int *)(lVar3 + 4);
    while (piVar8[-1] != param_3) {
      piVar8 = piVar8 + 2;
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) {
        return 0;
      }
    }
    iVar1 = 0;
    if (*piVar8 != -1) {
      iVar1 = *piVar8;
    }
    *(int *)(__s + uVar2 * 4) = iVar1;
  } while (*param_1 != 0);
  return 0;
}

