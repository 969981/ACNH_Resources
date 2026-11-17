
undefined4 FUN_02accb90(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  char cVar8;
  uint *puVar9;
  ulong uVar10;
  int *piVar11;
  
  puVar5 = PTR_DAT_04bc4618;
  puVar4 = PTR_DAT_04bc4610;
  puVar7 = *(uint **)(param_1 + 8);
  if (puVar7 == (uint *)0x0) {
    uVar6 = 0x244db4da;
  }
  else {
    if (*puVar7 == 0) {
      return 0;
    }
    cVar8 = *PTR_DAT_04bc4610;
    do {
      if (cVar8 == '\0') {
        cVar8 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
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
        *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
      }
      else {
        uVar3 = *(uint *)(puVar5 + 0x1c);
        if (-1 < (int)uVar3) {
          if ((undefined4 *)((ulong)uVar3 + (long)puVar7) == (undefined4 *)0x0) {
            return 0;
          }
          return *(undefined4 *)((ulong)uVar3 + (long)puVar7);
        }
        if (uVar3 != 0xffffffff) {
          return 0;
        }
      }
      puVar9 = (uint *)(ulong)*puVar7;
      if (*puVar7 == 0) {
        return 0;
      }
      if (puVar7 == puVar9) {
        return 0;
      }
      lVar2 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar9)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar7 + (lVar2 - (long)puVar9);
      if (lVar2 == 0) {
        return 0;
      }
      uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar9));
      *(undefined4 *)(puVar5 + 0x1c) = 0xfffffffe;
      if (uVar10 == 0) {
        return 0;
      }
      piVar11 = (int *)(lVar2 + 4);
      while (piVar11[-1] != -0x3bf83205) {
        piVar11 = piVar11 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          return 0;
        }
      }
      uVar6 = 0;
      iVar1 = 0;
      if (*piVar11 != -1) {
        iVar1 = *piVar11;
      }
      *(int *)(puVar5 + 0x1c) = iVar1;
    } while (*puVar7 != 0);
  }
  return uVar6;
}

