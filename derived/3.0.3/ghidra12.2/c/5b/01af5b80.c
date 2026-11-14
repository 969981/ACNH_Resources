
bool FUN_01af5b80(uint param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  int iVar6;
  char cVar7;
  uint *puVar8;
  ulong uVar9;
  int *piVar10;
  
  puVar4 = PTR_DAT_04bbff80;
  puVar3 = PTR_DAT_04bbff78;
  if ((int)*(uint *)(DAT_0532a7e0 + 0x1c0) < 1) {
    if (*(long *)(DAT_0532a7e0 + 0xb0) == 0) {
      return false;
    }
    puVar5 = *(uint **)(*(long *)(DAT_0532a7e0 + 0xb0) + 8);
    if (puVar5 == (uint *)0x0) {
      return false;
    }
    if ((param_1 < *(uint *)(DAT_0532a7e0 + 200)) &&
       (*(char *)(*(long *)(DAT_0532a7e0 + 0xd0) + (long)(int)param_1) == '\0')) {
      return false;
    }
    if (*puVar5 <= param_1) {
      return false;
    }
    if (puVar5[1] == 0) {
      return false;
    }
    if ((ushort)puVar5[2] == 0) {
      return false;
    }
    iVar6 = 0xc;
    if (*(char *)((long)puVar5 + 10) != '\0') {
      iVar6 = 0x1c;
    }
    puVar5 = (uint *)((ulong)(puVar5[1] * param_1 + (uint)(ushort)puVar5[2] * 8 + iVar6) +
                     (long)puVar5);
  }
  else {
    if (*(uint *)(DAT_0532a7e0 + 0x1c0) <= param_1) {
      return false;
    }
    if (*(uint *)(DAT_0532a7e0 + 0x1b0) <= param_1) {
      param_1 = 0;
    }
    puVar5 = *(uint **)(*(long *)(DAT_0532a7e0 + 0x1b8) + (ulong)param_1 * 8);
  }
  if ((puVar5 == (uint *)0x0) || (*puVar5 == 0)) {
    return false;
  }
  cVar7 = *PTR_DAT_04bbff78;
  while( true ) {
    if (cVar7 == '\0') {
      cVar7 = '\x01';
      *(undefined8 *)puVar4 = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
      *puVar3 = 1;
      *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
    }
    else {
      uVar2 = *(uint *)(puVar4 + 8);
      if (-1 < (int)uVar2) {
        if ((char *)((ulong)uVar2 + (long)puVar5) == (char *)0x0) {
          return false;
        }
        return *(char *)((ulong)uVar2 + (long)puVar5) != '\0';
      }
      if (uVar2 != 0xffffffff) {
        return false;
      }
    }
    puVar8 = (uint *)(ulong)*puVar5;
    if (*puVar5 == 0) {
      return false;
    }
    if (puVar5 == puVar8) break;
    lVar1 = 0xc;
    if (*(char *)((long)puVar5 + (10 - (long)puVar8)) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar5 + (lVar1 - (long)puVar8);
    if (lVar1 == 0) {
      return false;
    }
    uVar9 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar8));
    *(undefined4 *)(puVar4 + 8) = 0xfffffffe;
    if (uVar9 == 0) {
      return false;
    }
    piVar10 = (int *)(lVar1 + 4);
    while (piVar10[-1] != -0xd3191e9) {
      piVar10 = piVar10 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) {
        return false;
      }
    }
    iVar6 = 0;
    if (*piVar10 != -1) {
      iVar6 = *piVar10;
    }
    *(int *)(puVar4 + 8) = iVar6;
    if (*puVar5 == 0) {
      return false;
    }
  }
  return false;
}

