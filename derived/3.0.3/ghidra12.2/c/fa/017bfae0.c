
undefined2 FUN_017bfae0(long param_1,uint param_2)

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
  
  puVar4 = PTR_DAT_04bb5c60;
  puVar3 = PTR_DAT_04bb5c58;
  if ((int)*(uint *)(param_1 + 0x1c8) < 1) {
    if (*(long *)(param_1 + 0xb8) == 0) {
      return 0xffff;
    }
    puVar5 = *(uint **)(*(long *)(param_1 + 0xb8) + 8);
    if (puVar5 == (uint *)0x0) {
      return 0xffff;
    }
    if ((param_2 < *(uint *)(param_1 + 0xd0)) &&
       (*(char *)(*(long *)(param_1 + 0xd8) + (long)(int)param_2) == '\0')) {
      return 0xffff;
    }
    if (*puVar5 <= param_2) {
      return 0xffff;
    }
    if (puVar5[1] == 0) {
      return 0xffff;
    }
    if ((ushort)puVar5[2] == 0) {
      return 0xffff;
    }
    iVar6 = 0xc;
    if (*(char *)((long)puVar5 + 10) != '\0') {
      iVar6 = 0x1c;
    }
    puVar5 = (uint *)((ulong)(puVar5[1] * param_2 + (uint)(ushort)puVar5[2] * 8 + iVar6) +
                     (long)puVar5);
  }
  else {
    if (*(uint *)(param_1 + 0x1c8) <= param_2) {
      return 0xffff;
    }
    if (*(uint *)(param_1 + 0x1b8) <= param_2) {
      param_2 = 0;
    }
    puVar5 = *(uint **)(*(long *)(param_1 + 0x1c0) + (ulong)param_2 * 8);
  }
  if (puVar5 == (uint *)0x0) {
    return 0xffff;
  }
  if (*puVar5 == 0) {
    return 0;
  }
  cVar7 = *PTR_DAT_04bb5c58;
  while( true ) {
    if (cVar7 == '\0') {
      cVar7 = '\x01';
      *(undefined8 *)puVar4 = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
      *puVar3 = 1;
      *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
    }
    else {
      uVar2 = *(uint *)(puVar4 + 0x1c);
      if (-1 < (int)uVar2) {
        if ((undefined2 *)((ulong)uVar2 + (long)puVar5) == (undefined2 *)0x0) {
          return 0;
        }
        return *(undefined2 *)((ulong)uVar2 + (long)puVar5);
      }
      if (uVar2 != 0xffffffff) {
        return 0;
      }
    }
    puVar8 = (uint *)(ulong)*puVar5;
    if (*puVar5 == 0) {
      return 0;
    }
    if (puVar5 == puVar8) break;
    lVar1 = 0xc;
    if (*(char *)((long)puVar5 + (10 - (long)puVar8)) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar5 + (lVar1 - (long)puVar8);
    if (lVar1 == 0) {
      return 0;
    }
    uVar9 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar8));
    *(undefined4 *)(puVar4 + 0x1c) = 0xfffffffe;
    if (uVar9 == 0) {
      return 0;
    }
    piVar10 = (int *)(lVar1 + 4);
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
    *(int *)(puVar4 + 0x1c) = iVar6;
    if (*puVar5 == 0) {
      return 0;
    }
  }
  return 0;
}

