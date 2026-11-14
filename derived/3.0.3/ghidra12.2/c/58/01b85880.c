
undefined2 FUN_01b85880(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  uint *puVar8;
  char cVar9;
  ulong uVar10;
  int *piVar11;
  
  puVar6 = PTR_DAT_04bc06e8;
  puVar5 = PTR_DAT_04bc06e0;
  lVar7 = *(long *)PTR_DAT_04bb4788;
  uVar3 = (uint)*(ushort *)(param_1 + 8) - (uint)*(ushort *)(lVar7 + 0x1f8);
  if (((*(uint *)(lVar7 + 0x1d8) <= uVar3) ||
      (puVar8 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), puVar8 == (uint *)0x0))
     || (uVar3 = *puVar8, uVar3 == 0)) {
    return 0xffff;
  }
  cVar9 = *PTR_DAT_04bc06e0;
  while( true ) {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined4 *)(puVar6 + 0x50) = 0xffffffff;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
      uVar3 = *puVar8;
    }
    else {
      uVar2 = *(uint *)puVar6;
      if (-1 < (int)uVar2) {
        if ((undefined2 *)((ulong)uVar2 + (long)puVar8) == (undefined2 *)0x0) {
          return 0xffff;
        }
        return *(undefined2 *)((ulong)uVar2 + (long)puVar8);
      }
      if (uVar2 != 0xffffffff) {
        return 0xffff;
      }
    }
    puVar4 = (uint *)(ulong)uVar3;
    if (puVar4 == (uint *)0x0) {
      return 0xffff;
    }
    if (puVar8 == puVar4) break;
    lVar7 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar4)) != '\0') {
      lVar7 = 0x1c;
    }
    lVar7 = (long)puVar8 + (lVar7 - (long)puVar4);
    if (lVar7 == 0) {
      return 0xffff;
    }
    uVar10 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar4));
    *(undefined4 *)puVar6 = 0xfffffffe;
    if (uVar10 == 0) {
      return 0xffff;
    }
    piVar11 = (int *)(lVar7 + 4);
    while (piVar11[-1] != -0x5d01808f) {
      piVar11 = piVar11 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        return 0xffff;
      }
    }
    iVar1 = 0;
    if (*piVar11 != -1) {
      iVar1 = *piVar11;
    }
    *(int *)puVar6 = iVar1;
    uVar3 = *puVar8;
    if (uVar3 == 0) {
      return 0xffff;
    }
  }
  return 0xffff;
}

