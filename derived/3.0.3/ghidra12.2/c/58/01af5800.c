
undefined2 FUN_01af5800(uint param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  int iVar8;
  char cVar9;
  ulong uVar10;
  int *piVar11;
  
  puVar6 = PTR_DAT_04bbff80;
  puVar5 = PTR_DAT_04bbff78;
  if ((int)*(uint *)(DAT_0532a7e0 + 0x1c0) < 1) {
    if (*(long *)(DAT_0532a7e0 + 0xb0) == 0) {
      return 0;
    }
    puVar7 = *(uint **)(*(long *)(DAT_0532a7e0 + 0xb0) + 8);
    if (puVar7 == (uint *)0x0) {
      return 0;
    }
    if ((param_1 < *(uint *)(DAT_0532a7e0 + 200)) &&
       (*(char *)(*(long *)(DAT_0532a7e0 + 0xd0) + (long)(int)param_1) == '\0')) {
      return 0;
    }
    if (*puVar7 <= param_1) {
      return 0;
    }
    if (puVar7[1] == 0) {
      return 0;
    }
    if ((ushort)puVar7[2] == 0) {
      return 0;
    }
    iVar8 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      iVar8 = 0x1c;
    }
    puVar7 = (uint *)((ulong)(puVar7[1] * param_1 + (uint)(ushort)puVar7[2] * 8 + iVar8) +
                     (long)puVar7);
  }
  else {
    if (*(uint *)(DAT_0532a7e0 + 0x1c0) <= param_1) {
      return 0;
    }
    if (*(uint *)(DAT_0532a7e0 + 0x1b0) <= param_1) {
      param_1 = 0;
    }
    puVar7 = *(uint **)(*(long *)(DAT_0532a7e0 + 0x1b8) + (ulong)param_1 * 8);
  }
  if ((puVar7 == (uint *)0x0) || (uVar2 = *puVar7, uVar2 == 0)) {
    return 0;
  }
  cVar9 = *PTR_DAT_04bbff78;
  while( true ) {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      uVar2 = *puVar7;
    }
    else {
      uVar3 = *(uint *)puVar6;
      if (-1 < (int)uVar3) {
        if ((undefined2 *)((ulong)uVar3 + (long)puVar7) == (undefined2 *)0x0) {
          return 0;
        }
        return *(undefined2 *)((ulong)uVar3 + (long)puVar7);
      }
      if (uVar3 != 0xffffffff) {
        return 0;
      }
    }
    puVar4 = (uint *)(ulong)uVar2;
    if (puVar4 == (uint *)0x0) {
      return 0;
    }
    if (puVar7 == puVar4) break;
    lVar1 = 0xc;
    if (*(char *)((long)puVar7 + (10 - (long)puVar4)) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar7 + (lVar1 - (long)puVar4);
    if (lVar1 == 0) {
      return 0;
    }
    uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar4));
    *(undefined4 *)puVar6 = 0xfffffffe;
    if (uVar10 == 0) {
      return 0;
    }
    piVar11 = (int *)(lVar1 + 4);
    while (piVar11[-1] != 0x200dd382) {
      piVar11 = piVar11 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        return 0;
      }
    }
    iVar8 = 0;
    if (*piVar11 != -1) {
      iVar8 = *piVar11;
    }
    *(int *)puVar6 = iVar8;
    uVar2 = *puVar7;
    if (uVar2 == 0) {
      return 0;
    }
  }
  return 0;
}

