
undefined1 FUN_01af9f50(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  char cVar7;
  uint *puVar8;
  ulong uVar9;
  int *piVar10;
  
  uVar4 = FUN_01af93e8();
  puVar3 = PTR_DAT_04bbfee8;
  puVar2 = PTR_DAT_04bbfee0;
  if ((int)*(uint *)(DAT_0532a790 + 0x1c0) < 1) {
    if (*(long *)(DAT_0532a790 + 0xb0) == 0) {
      return 0;
    }
    puVar5 = *(uint **)(*(long *)(DAT_0532a790 + 0xb0) + 8);
    if (puVar5 == (uint *)0x0) {
      return 0;
    }
    if ((uVar4 < *(uint *)(DAT_0532a790 + 200)) &&
       (*(char *)(*(long *)(DAT_0532a790 + 0xd0) + (long)(int)uVar4) == '\0')) {
      return 0;
    }
    if (*puVar5 <= uVar4) {
      return 0;
    }
    if (puVar5[1] == 0) {
      return 0;
    }
    if ((ushort)puVar5[2] == 0) {
      return 0;
    }
    iVar6 = 0xc;
    if (*(char *)((long)puVar5 + 10) != '\0') {
      iVar6 = 0x1c;
    }
    puVar5 = (uint *)((ulong)(puVar5[1] * uVar4 + (uint)(ushort)puVar5[2] * 8 + iVar6) +
                     (long)puVar5);
  }
  else {
    if (*(uint *)(DAT_0532a790 + 0x1c0) <= uVar4) {
      return 0;
    }
    if (*(uint *)(DAT_0532a790 + 0x1b0) <= uVar4) {
      uVar4 = 0;
    }
    puVar5 = *(uint **)(*(long *)(DAT_0532a790 + 0x1b8) + (ulong)uVar4 * 8);
  }
  if (puVar5 == (uint *)0x0) {
    return 0;
  }
  if (*puVar5 == 0) {
    return 0xff;
  }
  cVar7 = *PTR_DAT_04bbfee0;
  while( true ) {
    if (cVar7 == '\0') {
      cVar7 = '\x01';
      *(undefined8 *)puVar3 = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
      *puVar2 = 1;
      *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
    }
    else {
      uVar4 = *(uint *)(puVar3 + 0xc);
      if (-1 < (int)uVar4) {
        if ((undefined1 *)((ulong)uVar4 + (long)puVar5) == (undefined1 *)0x0) {
          return 0xff;
        }
        return *(undefined1 *)((ulong)uVar4 + (long)puVar5);
      }
      if (uVar4 != 0xffffffff) {
        return 0xff;
      }
    }
    puVar8 = (uint *)(ulong)*puVar5;
    if (*puVar5 == 0) {
      return 0xff;
    }
    if (puVar5 == puVar8) break;
    lVar1 = 0xc;
    if (*(char *)((long)puVar5 + (10 - (long)puVar8)) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar5 + (lVar1 - (long)puVar8);
    if (lVar1 == 0) {
      return 0xff;
    }
    uVar9 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar8));
    *(undefined4 *)(puVar3 + 0xc) = 0xfffffffe;
    if (uVar9 == 0) {
      return 0xff;
    }
    piVar10 = (int *)(lVar1 + 4);
    while (piVar10[-1] != 0x64b8fff8) {
      piVar10 = piVar10 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) {
        return 0xff;
      }
    }
    iVar6 = 0;
    if (*piVar10 != -1) {
      iVar6 = *piVar10;
    }
    *(int *)(puVar3 + 0xc) = iVar6;
    if (*puVar5 == 0) {
      return 0xff;
    }
  }
  return 0xff;
}

