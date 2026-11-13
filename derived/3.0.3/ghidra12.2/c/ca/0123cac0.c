
short FUN_0123cac0(void)

{
  int iVar1;
  long lVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint *puVar7;
  char cVar8;
  uint *puVar9;
  ulong uVar10;
  int *piVar11;
  
  lVar2 = DAT_05150358;
  uVar6 = FUN_0277d6c4();
  puVar5 = PTR_DAT_04bbbc78;
  puVar4 = PTR_DAT_04bbbc70;
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar2 + 0x1f8);
  if (((*(uint *)(lVar2 + 0x1d8) <= uVar6) ||
      (puVar7 = *(uint **)(*(long *)(lVar2 + 0x1e0) + (long)(int)uVar6 * 8), puVar7 == (uint *)0x0))
     || (*puVar7 == 0)) {
    return -2;
  }
  cVar8 = *PTR_DAT_04bbbc70;
  while( true ) {
    if (cVar8 == '\0') {
      cVar8 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined4 *)(puVar5 + 0x60) = 0xffffffff;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
      uVar6 = *puVar7;
    }
    else {
      uVar6 = *(uint *)(puVar5 + 0x34);
      if (-1 < (int)uVar6) {
        if ((short *)((ulong)uVar6 + (long)puVar7) == (short *)0x0) {
          return -2;
        }
        sVar3 = *(short *)((ulong)uVar6 + (long)puVar7);
        if (sVar3 == -2) {
          return -2;
        }
        return sVar3;
      }
      if (uVar6 != 0xffffffff) {
        return -2;
      }
      uVar6 = *puVar7;
    }
    if (uVar6 == 0) {
      return -2;
    }
    puVar9 = (uint *)(ulong)uVar6;
    if (puVar7 == puVar9) break;
    lVar2 = 0xc;
    if (*(char *)((long)puVar7 + (10 - (long)puVar9)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar7 + (lVar2 - (long)puVar9);
    if (lVar2 == 0) {
      return -2;
    }
    uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar9));
    *(undefined4 *)(puVar5 + 0x34) = 0xfffffffe;
    if (uVar10 == 0) {
      return -2;
    }
    piVar11 = (int *)(lVar2 + 4);
    while (piVar11[-1] != -0x485b96aa) {
      piVar11 = piVar11 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        return -2;
      }
    }
    iVar1 = 0;
    if (*piVar11 != -1) {
      iVar1 = *piVar11;
    }
    *(int *)(puVar5 + 0x34) = iVar1;
    if (*puVar7 == 0) {
      return -2;
    }
  }
  return -2;
}

