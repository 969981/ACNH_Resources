
undefined2 FUN_012a8840(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint *puVar8;
  char cVar9;
  ulong uVar10;
  int *piVar11;
  
  puVar7 = PTR_DAT_04bbbe10;
  puVar6 = PTR_DAT_04bbbe08;
  puVar8 = *(uint **)(param_1 + 8);
  if ((puVar8 == (uint *)0x0) || (uVar3 = *puVar8, uVar3 == 0)) {
    return 0;
  }
  cVar9 = *PTR_DAT_04bbbe08;
  while( true ) {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      *(undefined8 *)puVar7 = 0xffffffffffffffff;
      *puVar6 = 1;
      uVar3 = *puVar8;
    }
    else {
      uVar4 = *(uint *)puVar7;
      if (-1 < (int)uVar4) {
        if ((undefined2 *)((ulong)uVar4 + (long)puVar8) == (undefined2 *)0x0) {
          return 0;
        }
        return *(undefined2 *)((ulong)uVar4 + (long)puVar8);
      }
      if (uVar4 != 0xffffffff) {
        return 0;
      }
    }
    puVar5 = (uint *)(ulong)uVar3;
    if (puVar5 == (uint *)0x0) {
      return 0;
    }
    if (puVar8 == puVar5) break;
    lVar2 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar5)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar8 + (lVar2 - (long)puVar5);
    if (lVar2 == 0) {
      return 0;
    }
    uVar10 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar5));
    *(undefined4 *)puVar7 = 0xfffffffe;
    if (uVar10 == 0) {
      return 0;
    }
    piVar11 = (int *)(lVar2 + 4);
    while (piVar11[-1] != 0x54706054) {
      piVar11 = piVar11 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        return 0;
      }
    }
    iVar1 = 0;
    if (*piVar11 != -1) {
      iVar1 = *piVar11;
    }
    *(int *)puVar7 = iVar1;
    uVar3 = *puVar8;
    if (uVar3 == 0) {
      return 0;
    }
  }
  return 0;
}

