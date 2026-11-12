
undefined2 FUN_009089f0(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int *piVar8;
  uint *puVar9;
  char cVar10;
  ulong uVar11;
  
  puVar7 = PTR_DAT_04bb5a30;
  puVar6 = PTR_DAT_04bb5a28;
  puVar9 = *(uint **)(param_1 + 0x10);
  if ((puVar9 == (uint *)0x0) || (uVar3 = *puVar9, uVar3 == 0)) {
    return 0;
  }
  cVar10 = *PTR_DAT_04bb5a28;
  while( true ) {
    if (cVar10 == '\0') {
      *(undefined8 *)puVar7 = 0xffffffffffffffff;
      cVar10 = '\x01';
      *(undefined4 *)(puVar7 + 8) = 0xffffffff;
      uVar3 = *puVar9;
      *puVar6 = 1;
    }
    else {
      uVar4 = *(uint *)(puVar7 + 4);
      if (-1 < (int)uVar4) {
        if ((undefined2 *)((ulong)uVar4 + (long)puVar9) == (undefined2 *)0x0) {
          return 0;
        }
        return *(undefined2 *)((ulong)uVar4 + (long)puVar9);
      }
      if (uVar4 != 0xffffffff) {
        return 0;
      }
    }
    puVar5 = (uint *)(ulong)uVar3;
    if (puVar5 == (uint *)0x0) {
      return 0;
    }
    if (puVar9 == puVar5) break;
    lVar2 = 0xc;
    if (*(char *)((long)puVar9 + (10 - (long)puVar5)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar9 + (lVar2 - (long)puVar5);
    if (lVar2 == 0) {
      return 0;
    }
    uVar11 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar5));
    *(undefined4 *)(puVar7 + 4) = 0xfffffffe;
    if (uVar11 == 0) {
      return 0;
    }
    piVar8 = (int *)(lVar2 + 4);
    while (piVar8[-1] != 0x25de7b8f) {
      piVar8 = piVar8 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) {
        return 0;
      }
    }
    iVar1 = 0;
    if (*piVar8 != -1) {
      iVar1 = *piVar8;
    }
    *(int *)(puVar7 + 4) = iVar1;
    uVar3 = *puVar9;
    if (uVar3 == 0) {
      return 0;
    }
  }
  return 0;
}

