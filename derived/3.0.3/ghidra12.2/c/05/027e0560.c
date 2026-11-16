
long FUN_027e0560(long param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  uint *puVar6;
  int iVar7;
  char cVar8;
  uint *puVar9;
  int *piVar10;
  
  puVar3 = PTR_DAT_04bb40b8;
  puVar2 = PTR_DAT_04bb40b0;
  lVar5 = *(long *)PTR_DAT_04bb4138;
  if ((int)*(uint *)(lVar5 + 0x1c0) < 1) {
    if (*(long *)(lVar5 + 0xb0) == 0) {
      return 0;
    }
    puVar6 = *(uint **)(*(long *)(lVar5 + 0xb0) + 8);
    if (puVar6 == (uint *)0x0) {
      return 0;
    }
    if ((param_2 < *(uint *)(lVar5 + 200)) &&
       (*(char *)(*(long *)(lVar5 + 0xd0) + (long)(int)param_2) == '\0')) {
      return 0;
    }
    if (*puVar6 <= param_2) {
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
    puVar6 = (uint *)((ulong)(puVar6[1] * param_2 + (uint)(ushort)puVar6[2] * 8 + iVar7) +
                     (long)puVar6);
  }
  else {
    if (*(uint *)(lVar5 + 0x1c0) <= param_2) {
      return 0;
    }
    if (*(uint *)(lVar5 + 0x1b0) <= param_2) {
      param_2 = 0;
    }
    puVar6 = *(uint **)(*(long *)(lVar5 + 0x1b8) + (ulong)param_2 * 8);
  }
  if ((puVar6 == (uint *)0x0) || (*puVar6 == 0)) {
    return 0;
  }
  cVar8 = *PTR_DAT_04bb40b0;
  while( true ) {
    if (cVar8 == '\0') {
      cVar8 = '\x01';
      *(undefined8 *)puVar3 = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
      *puVar2 = 1;
      *(undefined4 *)(puVar3 + 0xa0) = 0xffffffff;
      *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x78) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x80) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x88) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x90) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x98) = 0xffffffffffffffff;
    }
    else {
      uVar1 = *(uint *)(puVar3 + 0x30);
      if (-1 < (int)uVar1) {
        if ((ushort *)((ulong)uVar1 + (long)puVar6) == (ushort *)0x0) {
          return 0;
        }
        uVar1 = *(ushort *)((ulong)uVar1 + (long)puVar6) - 1;
        if (uVar1 < 0x1a4) {
          return param_1 + (ulong)uVar1 * 0xe8 + 0x1cb6bc;
        }
        return 0;
      }
      if (uVar1 != 0xffffffff) {
        return 0;
      }
    }
    puVar9 = (uint *)(ulong)*puVar6;
    if (*puVar6 == 0) {
      return 0;
    }
    if (puVar6 == puVar9) break;
    lVar5 = 0xc;
    if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar6 + (lVar5 - (long)puVar9);
    if (lVar5 == 0) {
      return 0;
    }
    uVar4 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
    *(undefined4 *)(puVar3 + 0x30) = 0xfffffffe;
    if (uVar4 == 0) {
      return 0;
    }
    piVar10 = (int *)(lVar5 + 4);
    while (piVar10[-1] != 0x504428b5) {
      piVar10 = piVar10 + 2;
      uVar4 = uVar4 - 1;
      if (uVar4 == 0) {
        return 0;
      }
    }
    iVar7 = 0;
    if (*piVar10 != -1) {
      iVar7 = *piVar10;
    }
    *(int *)(puVar3 + 0x30) = iVar7;
    if (*puVar6 == 0) {
      return 0;
    }
  }
  return 0;
}

