
undefined4 FUN_01afa110(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  char cVar8;
  uint *puVar9;
  ulong uVar10;
  
  uVar4 = FUN_01af93e8();
  puVar3 = PTR_DAT_04bbfee8;
  puVar2 = PTR_DAT_04bbfee0;
  if ((int)*(uint *)(DAT_0532a790 + 0x1c0) < 1) {
    if (*(long *)(DAT_0532a790 + 0xb0) == 0) {
      return 0x3f4ccccd;
    }
    puVar6 = *(uint **)(*(long *)(DAT_0532a790 + 0xb0) + 8);
    if (puVar6 == (uint *)0x0) {
      return 0x3f4ccccd;
    }
    if ((uVar4 < *(uint *)(DAT_0532a790 + 200)) &&
       (*(char *)(*(long *)(DAT_0532a790 + 0xd0) + (long)(int)uVar4) == '\0')) {
      return 0x3f4ccccd;
    }
    if (*puVar6 <= uVar4) {
      return 0x3f4ccccd;
    }
    if (puVar6[1] == 0) {
      return 0x3f4ccccd;
    }
    if ((ushort)puVar6[2] == 0) {
      return 0x3f4ccccd;
    }
    iVar7 = 0xc;
    if (*(char *)((long)puVar6 + 10) != '\0') {
      iVar7 = 0x1c;
    }
    puVar6 = (uint *)((ulong)(puVar6[1] * uVar4 + (uint)(ushort)puVar6[2] * 8 + iVar7) +
                     (long)puVar6);
  }
  else {
    if (*(uint *)(DAT_0532a790 + 0x1c0) <= uVar4) {
      return 0x3f4ccccd;
    }
    if (*(uint *)(DAT_0532a790 + 0x1b0) <= uVar4) {
      uVar4 = 0;
    }
    puVar6 = *(uint **)(*(long *)(DAT_0532a790 + 0x1b8) + (ulong)uVar4 * 8);
  }
  if ((puVar6 == (uint *)0x0) || (uVar4 = *puVar6, uVar4 == 0)) {
    return 0x3f4ccccd;
  }
  cVar8 = *PTR_DAT_04bbfee0;
  while( true ) {
    puVar9 = (uint *)(ulong)uVar4;
    if (cVar8 == '\0') {
      cVar8 = '\x01';
      *(undefined8 *)puVar3 = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
      *puVar2 = 1;
      *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
      puVar9 = (uint *)(ulong)*puVar6;
      if (puVar9 == (uint *)0x0) {
        return 0x3f4ccccd;
      }
    }
    else {
      uVar4 = *(uint *)puVar3;
      if (-1 < (int)uVar4) {
        if ((undefined4 *)((ulong)uVar4 + (long)puVar6) == (undefined4 *)0x0) {
          return 0x3f4ccccd;
        }
        return *(undefined4 *)((ulong)uVar4 + (long)puVar6);
      }
      if (uVar4 != 0xffffffff) {
        return 0x3f4ccccd;
      }
      if (puVar9 == (uint *)0x0) {
        return 0x3f4ccccd;
      }
    }
    if (puVar6 == puVar9) {
      return 0x3f4ccccd;
    }
    lVar1 = 0xc;
    if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar6 + (lVar1 - (long)puVar9);
    if (lVar1 == 0) break;
    uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
    *(undefined4 *)puVar3 = 0xfffffffe;
    if (uVar10 == 0) {
      return 0x3f4ccccd;
    }
    piVar5 = (int *)(lVar1 + 4);
    while (piVar5[-1] != 0x68460c05) {
      piVar5 = piVar5 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        return 0x3f4ccccd;
      }
    }
    iVar7 = 0;
    if (*piVar5 != -1) {
      iVar7 = *piVar5;
    }
    *(int *)puVar3 = iVar7;
    uVar4 = *puVar6;
    if (uVar4 == 0) {
      return 0x3f4ccccd;
    }
  }
  return 0x3f4ccccd;
}

