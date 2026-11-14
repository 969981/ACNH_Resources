
byte FUN_01ae6420(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *__s;
  uint *puVar6;
  ulong uVar7;
  int *piVar8;
  uint *puVar9;
  char cVar10;
  
  __s = PTR_DAT_04bbfe90;
  puVar5 = PTR_DAT_04bbfe88;
  puVar9 = *(uint **)(param_1 + 0x10);
  if ((puVar9 == (uint *)0x0) || (*puVar9 == 0)) {
    return 0;
  }
  cVar10 = *PTR_DAT_04bbfe88;
  while( true ) {
    if (cVar10 == '\0') {
      cVar10 = '\x01';
      *puVar5 = 1;
      memset(__s,0xff,0x1ac);
    }
    else {
      uVar3 = *(uint *)(__s + 0x10c);
      if (-1 < (int)uVar3) {
        if ((ushort *)((ulong)uVar3 + (long)puVar9) == (ushort *)0x0) {
          return 0;
        }
        uVar4 = *(ushort *)((ulong)uVar3 + (long)puVar9);
        if (uVar4 < 0x800) {
          return *(byte *)(*(long *)PTR_DAT_04bb46f0 + (ulong)(uVar4 >> 3) + 0xe98e0) >>
                 (ulong)(uVar4 & 7) & 1;
        }
        return 0;
      }
      if (uVar3 != 0xffffffff) {
        return 0;
      }
    }
    puVar6 = (uint *)(ulong)*puVar9;
    if (*puVar9 == 0) {
      return 0;
    }
    if (puVar9 == puVar6) break;
    lVar2 = 0xc;
    if (*(char *)((long)puVar9 + (10 - (long)puVar6)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar9 + (lVar2 - (long)puVar6);
    if (lVar2 == 0) {
      return 0;
    }
    uVar7 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar6));
    *(undefined4 *)(__s + 0x10c) = 0xfffffffe;
    if (uVar7 == 0) {
      return 0;
    }
    piVar8 = (int *)(lVar2 + 4);
    while (piVar8[-1] != -0x430a2e86) {
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
    *(int *)(__s + 0x10c) = iVar1;
    if (*puVar9 == 0) {
      return 0;
    }
  }
  return 0;
}

