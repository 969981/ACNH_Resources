
undefined8 FUN_021e2dd0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  char cVar9;
  ulong uVar10;
  int *piVar11;
  
  puVar4 = PTR_DAT_04bc2860;
  puVar3 = PTR_DAT_04bc2858;
  lVar5 = *(long *)PTR_DAT_04bb3968;
  uVar1 = *(uint *)(lVar5 + 0x16e78);
  if ((int)uVar1 < 1) {
    lVar8 = *(long *)(lVar5 + 0x16d68);
    if (lVar8 == 0) {
      return 0;
    }
    puVar6 = *(uint **)(lVar8 + 8);
    if (puVar6 == (uint *)0x0) {
      return 0;
    }
    if (*puVar6 <= *param_1) {
      return 0;
    }
    uVar1 = *param_1;
    lVar8 = *(long *)(lVar5 + 0x16d68);
    if (lVar8 == 0) {
      return 0;
    }
    puVar6 = *(uint **)(lVar8 + 8);
    if (puVar6 == (uint *)0x0) {
      return 0;
    }
    if ((uVar1 < *(uint *)(lVar5 + 0x16d80)) &&
       (*(char *)(*(long *)(lVar5 + 0x16d88) + (long)(int)uVar1) == '\0')) {
      return 0;
    }
    if (*puVar6 <= uVar1) {
      return 0;
    }
    if (puVar6[1] == 0) {
      return 0;
    }
    if ((ushort)puVar6[2] == 0) {
      return 0;
    }
    iVar7 = 0xc;
    if (*(char *)((long)puVar6 + 10) != '\0') {
      iVar7 = 0x1c;
    }
    puVar6 = (uint *)((ulong)(puVar6[1] * uVar1 + (uint)(ushort)puVar6[2] * 8 + iVar7) +
                     (long)puVar6);
  }
  else {
    if (uVar1 <= *param_1) {
      return 0;
    }
    uVar2 = *param_1;
    if (uVar1 <= uVar2) {
      return 0;
    }
    if (*(uint *)(lVar5 + 0x16e68) <= uVar2) {
      uVar2 = 0;
    }
    puVar6 = *(uint **)(*(long *)(lVar5 + 0x16e70) + (ulong)uVar2 * 8);
  }
  if ((puVar6 == (uint *)0x0) || (*puVar6 == 0)) {
    return 0;
  }
  cVar9 = *PTR_DAT_04bc2858;
  while( true ) {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      *(undefined8 *)puVar4 = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
      *puVar3 = 1;
      *(undefined4 *)(puVar4 + 0x50) = 0xffffffff;
      *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
    }
    else {
      uVar1 = *(uint *)(puVar4 + 0x3c);
      if (-1 < (int)uVar1) {
        if ((char *)((ulong)uVar1 + (long)puVar6) == (char *)0x0) {
          return 0;
        }
        if (*(char *)((ulong)uVar1 + (long)puVar6) == '\0') {
          return 0;
        }
        return 1;
      }
      if (uVar1 != 0xffffffff) {
        return 0;
      }
    }
    lVar5 = (long)puVar6 - (ulong)*puVar6;
    if (*puVar6 == 0) {
      return 0;
    }
    if (lVar5 == 0) break;
    lVar8 = 0xc;
    if (*(char *)(lVar5 + 10) != '\0') {
      lVar8 = 0x1c;
    }
    if (lVar8 + lVar5 == 0) {
      return 0;
    }
    uVar10 = (ulong)*(ushort *)(lVar5 + 8);
    *(undefined4 *)(puVar4 + 0x3c) = 0xfffffffe;
    if (uVar10 == 0) {
      return 0;
    }
    piVar11 = (int *)(lVar8 + lVar5 + 4);
    while (piVar11[-1] != 0x6510a4fe) {
      piVar11 = piVar11 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        return 0;
      }
    }
    iVar7 = 0;
    if (*piVar11 != -1) {
      iVar7 = *piVar11;
    }
    *(int *)(puVar4 + 0x3c) = iVar7;
    if (*puVar6 == 0) {
      return 0;
    }
  }
  return 0;
}

