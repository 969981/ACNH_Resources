
byte FUN_01b84d30(long param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  uint *puVar7;
  char cVar8;
  uint *puVar9;
  ulong uVar10;
  int *piVar11;
  
  puVar5 = PTR_DAT_04bc06e8;
  puVar4 = PTR_DAT_04bc06e0;
  lVar6 = *(long *)PTR_DAT_04bb4788;
  uVar3 = (uint)*(ushort *)(param_1 + 8) - (uint)*(ushort *)(lVar6 + 0x1f8);
  if (((*(uint *)(lVar6 + 0x1d8) <= uVar3) ||
      (puVar7 = *(uint **)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8), puVar7 == (uint *)0x0))
     || (*puVar7 == 0)) {
    return 0;
  }
  cVar8 = *PTR_DAT_04bc06e0;
  while( true ) {
    if (cVar8 == '\0') {
      cVar8 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
    }
    else {
      uVar3 = *(uint *)(puVar5 + 0x50);
      if (-1 < (int)uVar3) {
        if ((byte *)((ulong)uVar3 + (long)puVar7) == (byte *)0x0) {
          return 0;
        }
        bVar2 = *(byte *)((ulong)uVar3 + (long)puVar7);
        if (bVar2 < 4) {
          return bVar2;
        }
        return 0;
      }
      if (uVar3 != 0xffffffff) {
        return 0;
      }
    }
    puVar9 = (uint *)(ulong)*puVar7;
    if (*puVar7 == 0) {
      return 0;
    }
    if (puVar7 == puVar9) break;
    lVar6 = 0xc;
    if (*(char *)((long)puVar7 + (10 - (long)puVar9)) != '\0') {
      lVar6 = 0x1c;
    }
    lVar6 = (long)puVar7 + (lVar6 - (long)puVar9);
    if (lVar6 == 0) {
      return 0;
    }
    uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar9));
    *(undefined4 *)(puVar5 + 0x50) = 0xfffffffe;
    if (uVar10 == 0) {
      return 0;
    }
    piVar11 = (int *)(lVar6 + 4);
    while (piVar11[-1] != 0x7a6965c5) {
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
    *(int *)(puVar5 + 0x50) = iVar1;
    if (*puVar7 == 0) {
      return 0;
    }
  }
  return 0;
}

