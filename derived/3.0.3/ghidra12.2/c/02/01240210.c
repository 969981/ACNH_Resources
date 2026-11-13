
undefined1 FUN_01240210(void)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint *puVar6;
  char cVar7;
  uint *puVar8;
  ulong uVar9;
  int *piVar10;
  
  lVar2 = DAT_05150358;
  uVar5 = FUN_0277d6c4();
  puVar4 = PTR_DAT_04bbbc78;
  puVar3 = PTR_DAT_04bbbc70;
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar2 + 0x1f8);
  if (((*(uint *)(lVar2 + 0x1d8) <= uVar5) ||
      (puVar6 = *(uint **)(*(long *)(lVar2 + 0x1e0) + (long)(int)uVar5 * 8), puVar6 == (uint *)0x0))
     || (*puVar6 == 0)) {
    return 0;
  }
  cVar7 = *PTR_DAT_04bbbc70;
  while( true ) {
    if (cVar7 == '\0') {
      cVar7 = '\x01';
      *(undefined8 *)puVar4 = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
      *puVar3 = 1;
      *(undefined4 *)(puVar4 + 0x60) = 0xffffffff;
      *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
    }
    else {
      uVar5 = *(uint *)(puVar4 + 0x4c);
      if (-1 < (int)uVar5) {
        if ((undefined1 *)((ulong)uVar5 + (long)puVar6) == (undefined1 *)0x0) {
          return 0;
        }
        return *(undefined1 *)((ulong)uVar5 + (long)puVar6);
      }
      if (uVar5 != 0xffffffff) {
        return 0;
      }
    }
    puVar8 = (uint *)(ulong)*puVar6;
    if (*puVar6 == 0) {
      return 0;
    }
    if (puVar6 == puVar8) break;
    lVar2 = 0xc;
    if (*(char *)((long)puVar6 + (10 - (long)puVar8)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar6 + (lVar2 - (long)puVar8);
    if (lVar2 == 0) {
      return 0;
    }
    uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar8));
    *(undefined4 *)(puVar4 + 0x4c) = 0xfffffffe;
    if (uVar9 == 0) {
      return 0;
    }
    piVar10 = (int *)(lVar2 + 4);
    while (piVar10[-1] != -0xa58ccc9) {
      piVar10 = piVar10 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) {
        return 0;
      }
    }
    iVar1 = 0;
    if (*piVar10 != -1) {
      iVar1 = *piVar10;
    }
    *(int *)(puVar4 + 0x4c) = iVar1;
    if (*puVar6 == 0) {
      return 0;
    }
  }
  return 0;
}

