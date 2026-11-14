
undefined4 FUN_01afec80(uint param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  char cVar10;
  ulong uVar11;
  
  puVar6 = PTR_DAT_04bbff70;
  puVar5 = PTR_DAT_04bbff68;
  if ((int)*(uint *)(DAT_0532a7d8 + 0x1c0) < 1) {
    if (*(long *)(DAT_0532a7d8 + 0xb0) == 0) {
      return 0xffff;
    }
    puVar8 = *(uint **)(*(long *)(DAT_0532a7d8 + 0xb0) + 8);
    if (puVar8 == (uint *)0x0) {
      return 0xffff;
    }
    if ((param_1 < *(uint *)(DAT_0532a7d8 + 200)) &&
       (*(char *)(*(long *)(DAT_0532a7d8 + 0xd0) + (long)(int)param_1) == '\0')) {
      return 0xffff;
    }
    if (*puVar8 <= param_1) {
      return 0xffff;
    }
    if (puVar8[1] == 0) {
      return 0xffff;
    }
    if ((ushort)puVar8[2] == 0) {
      return 0xffff;
    }
    iVar9 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      iVar9 = 0x1c;
    }
    puVar8 = (uint *)((ulong)(puVar8[1] * param_1 + (uint)(ushort)puVar8[2] * 8 + iVar9) +
                     (long)puVar8);
  }
  else {
    if (*(uint *)(DAT_0532a7d8 + 0x1c0) <= param_1) {
      return 0xffff;
    }
    if (*(uint *)(DAT_0532a7d8 + 0x1b0) <= param_1) {
      param_1 = 0;
    }
    puVar8 = *(uint **)(*(long *)(DAT_0532a7d8 + 0x1b8) + (ulong)param_1 * 8);
  }
  if (puVar8 == (uint *)0x0) {
    return 0xffff;
  }
  uVar2 = *puVar8;
  if (uVar2 == 0) {
    return 0xff;
  }
  cVar10 = *PTR_DAT_04bbff68;
  while( true ) {
    if (cVar10 == '\0') {
      cVar10 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined4 *)(puVar6 + 8) = 0xffffffff;
      *puVar5 = 1;
      uVar2 = *puVar8;
    }
    else {
      uVar3 = *(uint *)puVar6;
      if (-1 < (int)uVar3) {
        if ((undefined4 *)((ulong)uVar3 + (long)puVar8) == (undefined4 *)0x0) {
          return 0xff;
        }
        return *(undefined4 *)((ulong)uVar3 + (long)puVar8);
      }
      if (uVar3 != 0xffffffff) {
        return 0xff;
      }
    }
    puVar4 = (uint *)(ulong)uVar2;
    if (puVar4 == (uint *)0x0) {
      return 0xff;
    }
    if (puVar8 == puVar4) break;
    lVar1 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar4)) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar8 + (lVar1 - (long)puVar4);
    if (lVar1 == 0) {
      return 0xff;
    }
    uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar4));
    *(undefined4 *)puVar6 = 0xfffffffe;
    if (uVar11 == 0) {
      return 0xff;
    }
    piVar7 = (int *)(lVar1 + 4);
    while (piVar7[-1] != -0x704e127b) {
      piVar7 = piVar7 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) {
        return 0xff;
      }
    }
    iVar9 = 0;
    if (*piVar7 != -1) {
      iVar9 = *piVar7;
    }
    *(int *)puVar6 = iVar9;
    uVar2 = *puVar8;
    if (uVar2 == 0) {
      return 0xff;
    }
  }
  return 0xff;
}

