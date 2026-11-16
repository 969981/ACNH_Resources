
ulong FUN_02752040(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  long lVar5;
  int iVar6;
  char cVar7;
  uint *puVar8;
  ulong uVar9;
  int *piVar10;
  
  puVar3 = PTR_DAT_04bb6408;
  puVar2 = PTR_DAT_04bb6400;
  lVar5 = *(long *)PTR_DAT_04bb2208;
  if ((int)*(uint *)(lVar5 + 0x1900) < 1) {
    if (*(long *)(lVar5 + 0x17f0) == 0) {
      return 0xffffffff;
    }
    puVar4 = *(uint **)(*(long *)(lVar5 + 0x17f0) + 8);
    if (puVar4 == (uint *)0x0) {
      return 0xffffffff;
    }
    if ((param_1 < *(uint *)(lVar5 + 0x1808)) &&
       (*(char *)(*(long *)(lVar5 + 0x1810) + (long)(int)param_1) == '\0')) {
      return 0xffffffff;
    }
    if (*puVar4 <= param_1) {
      return 0xffffffff;
    }
    if (puVar4[1] == 0) {
      return 0xffffffff;
    }
    if ((ushort)puVar4[2] == 0) {
      return 0xffffffff;
    }
    iVar6 = 0xc;
    if (*(char *)((long)puVar4 + 10) != '\0') {
      iVar6 = 0x1c;
    }
    puVar4 = (uint *)((ulong)(puVar4[1] * param_1 + (uint)(ushort)puVar4[2] * 8 + iVar6) +
                     (long)puVar4);
  }
  else {
    if (*(uint *)(lVar5 + 0x1900) <= param_1) {
      return 0xffffffff;
    }
    if (*(uint *)(lVar5 + 0x18f0) <= param_1) {
      param_1 = 0;
    }
    puVar4 = *(uint **)(*(long *)(lVar5 + 0x18f8) + (ulong)param_1 * 8);
  }
  if (puVar4 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (*puVar4 == 0) {
    return 0;
  }
  cVar7 = *PTR_DAT_04bb6400;
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
      uVar1 = *(uint *)(puVar3 + 0x10);
      if (-1 < (int)uVar1) {
        if ((ushort *)((ulong)uVar1 + (long)puVar4) == (ushort *)0x0) {
          return 0;
        }
        return (ulong)*(ushort *)((ulong)uVar1 + (long)puVar4);
      }
      if (uVar1 != 0xffffffff) {
        return 0;
      }
    }
    puVar8 = (uint *)(ulong)*puVar4;
    if (*puVar4 == 0) {
      return 0;
    }
    if (puVar4 == puVar8) break;
    lVar5 = 0xc;
    if (*(char *)((long)puVar4 + (10 - (long)puVar8)) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar4 + (lVar5 - (long)puVar8);
    if (lVar5 == 0) {
      return 0;
    }
    uVar9 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar8));
    *(undefined4 *)(puVar3 + 0x10) = 0xfffffffe;
    if (uVar9 == 0) {
      return 0;
    }
    piVar10 = (int *)(lVar5 + 4);
    while (piVar10[-1] != 0x54706054) {
      piVar10 = piVar10 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) {
        return 0;
      }
    }
    iVar6 = 0;
    if (*piVar10 != -1) {
      iVar6 = *piVar10;
    }
    *(int *)(puVar3 + 0x10) = iVar6;
    if (*puVar4 == 0) {
      return 0;
    }
  }
  return 0;
}

