
ushort FUN_009088e0(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int *piVar9;
  uint *puVar10;
  char cVar11;
  ulong uVar12;
  
  puVar8 = PTR_DAT_04bb5a30;
  puVar7 = PTR_DAT_04bb5a28;
  puVar10 = *(uint **)(param_1 + 0x10);
  if ((puVar10 == (uint *)0x0) || (uVar3 = *puVar10, uVar3 == 0)) {
    return 0;
  }
  cVar11 = *PTR_DAT_04bb5a28;
  while( true ) {
    if (cVar11 == '\0') {
      *(undefined8 *)puVar8 = 0xffffffffffffffff;
      cVar11 = '\x01';
      *(undefined4 *)(puVar8 + 8) = 0xffffffff;
      uVar3 = *puVar10;
      *puVar7 = 1;
    }
    else {
      uVar4 = *(uint *)puVar8;
      if (-1 < (int)uVar4) {
        if ((ushort *)((ulong)uVar4 + (long)puVar10) == (ushort *)0x0) {
          return 0;
        }
        uVar5 = *(ushort *)((ulong)uVar4 + (long)puVar10);
        if (uVar5 < 4) {
          return uVar5;
        }
        return 0;
      }
      if (uVar4 != 0xffffffff) {
        return 0;
      }
    }
    puVar6 = (uint *)(ulong)uVar3;
    if (puVar6 == (uint *)0x0) {
      return 0;
    }
    if (puVar10 == puVar6) break;
    lVar2 = 0xc;
    if (*(char *)((long)puVar10 + (10 - (long)puVar6)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar10 + (lVar2 - (long)puVar6);
    if (lVar2 == 0) {
      return 0;
    }
    uVar12 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar6));
    *(undefined4 *)puVar8 = 0xfffffffe;
    if (uVar12 == 0) {
      return 0;
    }
    piVar9 = (int *)(lVar2 + 4);
    while (piVar9[-1] != -0x1592bf90) {
      piVar9 = piVar9 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) {
        return 0;
      }
    }
    iVar1 = 0;
    if (*piVar9 != -1) {
      iVar1 = *piVar9;
    }
    *(int *)puVar8 = iVar1;
    uVar3 = *puVar10;
    if (uVar3 == 0) {
      return 0;
    }
  }
  return 0;
}

