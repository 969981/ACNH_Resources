
undefined2 FUN_03789370(long param_1)

{
  undefined2 *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint *puVar5;
  ulong uVar6;
  int *piVar7;
  uint *puVar8;
  char cVar9;
  
  puVar8 = *(uint **)(param_1 + 8);
  if ((puVar8 == (uint *)0x0) || (uVar4 = *puVar8, uVar4 == 0)) {
    return 0xfffe;
  }
  cVar9 = DAT_05ac19b8;
  while( true ) {
    if (cVar9 == '\0') {
      DAT_05ac19bc = 0xffffffffffffffff;
      cVar9 = '\x01';
      DAT_05ac19c4 = 0xffffffff;
      uVar4 = *puVar8;
      DAT_05ac19b8 = '\x01';
    }
    else {
      if (-1 < (int)DAT_05ac19bc) {
        puVar1 = (undefined2 *)((DAT_05ac19bc & 0xffffffff) + (long)puVar8);
        if (puVar1 == (undefined2 *)0x0) {
          return 0xfffe;
        }
        return *puVar1;
      }
      if ((int)DAT_05ac19bc != -1) {
        return 0xfffe;
      }
    }
    puVar5 = (uint *)(ulong)uVar4;
    if (puVar5 == (uint *)0x0) {
      return 0xfffe;
    }
    if (puVar8 == puVar5) break;
    lVar3 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar5)) != '\0') {
      lVar3 = 0x1c;
    }
    lVar3 = (long)puVar8 + (lVar3 - (long)puVar5);
    if (lVar3 == 0) {
      return 0xfffe;
    }
    uVar6 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar5));
    DAT_05ac19bc._4_4_ = (undefined4)(DAT_05ac19bc >> 0x20);
    DAT_05ac19bc = CONCAT44(DAT_05ac19bc._4_4_,0xfffffffe);
    if (uVar6 == 0) {
      return 0xfffe;
    }
    piVar7 = (int *)(lVar3 + 4);
    while (piVar7[-1] != -0x214b7dbe) {
      piVar7 = piVar7 + 2;
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) {
        return 0xfffe;
      }
    }
    iVar2 = 0;
    if (*piVar7 != -1) {
      iVar2 = *piVar7;
    }
    DAT_05ac19bc = CONCAT44(DAT_05ac19bc._4_4_,iVar2);
    uVar4 = *puVar8;
    if (uVar4 == 0) {
      return 0xfffe;
    }
  }
  return 0xfffe;
}

