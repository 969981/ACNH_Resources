
undefined8 FUN_0124de70(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  char cVar7;
  uint *puVar8;
  ulong uVar9;
  int *piVar10;
  
  puVar5 = PTR_DAT_04bbbc78;
  puVar4 = PTR_DAT_04bbbc70;
  puVar6 = *(uint **)(param_1 + 0x10);
  if (puVar6 == (uint *)0x0) {
    return 0;
  }
  if (*puVar6 == 0) {
    return 0;
  }
  cVar7 = *PTR_DAT_04bbbc70;
  do {
    if (cVar7 == '\0') {
      cVar7 = '\x01';
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
    }
    else {
      uVar3 = *(uint *)(puVar5 + 0x4c);
      if (-1 < (int)uVar3) {
        if ((byte *)((ulong)uVar3 + (long)puVar6) == (byte *)0x0) {
          return 0;
        }
        if (*(byte *)((ulong)uVar3 + (long)puVar6) < 4) {
          return 0;
        }
        uVar9 = FUN_0123d890(*(undefined8 *)(param_1 + 0x10),4);
        if ((uVar9 & 1) == 0) {
          return 0;
        }
        uVar9 = FUN_0123d890(*(undefined8 *)(param_1 + 0x10),0);
        if ((uVar9 & 1) != 0) {
          return 0;
        }
        uVar3 = *(uint *)(param_1 + 0xc);
        if (((uVar3 ^ 0xffffffff) & 0x60000) == 0) {
          return 0;
        }
        *(uint *)(param_1 + 0xc) =
             uVar3 & 0xfff80000 | uVar3 & 0x1ffff | (uVar3 + 0x20000 >> 0x11 & 3) << 0x11;
        return 1;
      }
      if (uVar3 != 0xffffffff) {
        return 0;
      }
    }
    puVar8 = (uint *)(ulong)*puVar6;
    if (*puVar6 == 0) {
      return 0;
    }
    if (puVar6 == puVar8) {
      return 0;
    }
    lVar2 = 0xc;
    if (*(char *)((long)puVar6 + (10 - (long)puVar8)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar6 + (lVar2 - (long)puVar8);
    if (lVar2 == 0) {
      return 0;
    }
    uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar8));
    *(undefined4 *)(puVar5 + 0x4c) = 0xfffffffe;
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
    *(int *)(puVar5 + 0x4c) = iVar1;
  } while (*puVar6 != 0);
  return 0;
}

