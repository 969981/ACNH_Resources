
undefined4 FUN_01ae8db0(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *__s;
  uint *puVar5;
  ulong uVar6;
  int *piVar7;
  uint *puVar8;
  char cVar9;
  
  __s = PTR_DAT_04bbfe90;
  puVar4 = PTR_DAT_04bbfe88;
  puVar8 = *(uint **)(param_1 + 0x10);
  if ((puVar8 == (uint *)0x0) || (*puVar8 == 0)) {
    return 0;
  }
  cVar9 = *PTR_DAT_04bbfe88;
  while( true ) {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      *puVar4 = 1;
      memset(__s,0xff,0x1ac);
      uVar3 = *puVar8;
    }
    else {
      uVar3 = *(uint *)(__s + 0xf0);
      if (-1 < (int)uVar3) {
        if ((undefined4 *)((ulong)uVar3 + (long)puVar8) == (undefined4 *)0x0) {
          return 0;
        }
        return *(undefined4 *)((ulong)uVar3 + (long)puVar8);
      }
      if (uVar3 != 0xffffffff) {
        return 0;
      }
      uVar3 = *puVar8;
    }
    if (uVar3 == 0) {
      return 0;
    }
    puVar5 = (uint *)(ulong)uVar3;
    if (puVar8 == puVar5) break;
    lVar2 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar5)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar8 + (lVar2 - (long)puVar5);
    if (lVar2 == 0) {
      return 0;
    }
    uVar6 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar5));
    *(undefined4 *)(__s + 0xf0) = 0xfffffffe;
    if (uVar6 == 0) {
      return 0;
    }
    piVar7 = (int *)(lVar2 + 4);
    while (piVar7[-1] != -0x499d99d4) {
      piVar7 = piVar7 + 2;
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) {
        return 0;
      }
    }
    iVar1 = 0;
    if (*piVar7 != -1) {
      iVar1 = *piVar7;
    }
    *(int *)(__s + 0xf0) = iVar1;
    if (*puVar8 == 0) {
      return 0;
    }
  }
  return 0;
}

