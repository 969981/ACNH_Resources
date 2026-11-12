
undefined2 FUN_00981240(long param_1,uint param_2)

{
  undefined2 *puVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  char cVar8;
  ulong uVar9;
  
  if ((int)*(uint *)(param_1 + 0x1c8) < 1) {
    if (*(long *)(param_1 + 0xb8) == 0) {
      return 0;
    }
    puVar6 = *(uint **)(*(long *)(param_1 + 0xb8) + 8);
    if (puVar6 == (uint *)0x0) {
      return 0;
    }
    if ((param_2 < *(uint *)(param_1 + 0xd0)) &&
       (*(char *)(*(long *)(param_1 + 0xd8) + (long)(int)param_2) == '\0')) {
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
    if (*(uint *)(param_1 + 0x1c8) <= param_2) {
      return 0;
    }
    if (*(uint *)(param_1 + 0x1b8) <= param_2) {
      param_2 = 0;
    }
    puVar6 = *(uint **)(*(long *)(param_1 + 0x1c0) + (ulong)param_2 * 8);
  }
  if ((puVar6 == (uint *)0x0) || (uVar3 = *puVar6, uVar3 == 0)) {
    return 0;
  }
  cVar8 = DAT_04cfab80;
  while( true ) {
    if (cVar8 == '\0') {
      DAT_04cfab84 = 0xffffffffffffffff;
      DAT_04cfab8c = 0xffffffffffffffff;
      cVar8 = '\x01';
      DAT_04cfabb4 = 0xffffffffffffffff;
      DAT_04cfab80 = '\x01';
      DAT_04cfab94 = 0xffffffffffffffff;
      DAT_04cfab9c = 0xffffffffffffffff;
      DAT_04cfaba4 = 0xffffffffffffffff;
      DAT_04cfabac = 0xffffffffffffffff;
      uVar3 = *puVar6;
    }
    else {
      if (-1 < (int)DAT_04cfab84) {
        puVar1 = (undefined2 *)((DAT_04cfab84 & 0xffffffff) + (long)puVar6);
        if (puVar1 == (undefined2 *)0x0) {
          return 0;
        }
        return *puVar1;
      }
      if ((int)DAT_04cfab84 != -1) {
        return 0;
      }
    }
    puVar4 = (uint *)(ulong)uVar3;
    if (puVar4 == (uint *)0x0) {
      return 0;
    }
    if (puVar6 == puVar4) break;
    lVar2 = 0xc;
    if (*(char *)((long)puVar6 + (10 - (long)puVar4)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar6 + (lVar2 - (long)puVar4);
    if (lVar2 == 0) {
      return 0;
    }
    uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar4));
    DAT_04cfab84._4_4_ = (undefined4)(DAT_04cfab84 >> 0x20);
    DAT_04cfab84 = CONCAT44(DAT_04cfab84._4_4_,0xfffffffe);
    if (uVar9 == 0) {
      return 0;
    }
    piVar5 = (int *)(lVar2 + 4);
    while (piVar5[-1] != 0x6ab4b6fb) {
      piVar5 = piVar5 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) {
        return 0;
      }
    }
    iVar7 = 0;
    if (*piVar5 != -1) {
      iVar7 = *piVar5;
    }
    DAT_04cfab84 = CONCAT44(DAT_04cfab84._4_4_,iVar7);
    uVar3 = *puVar6;
    if (uVar3 == 0) {
      return 0;
    }
  }
  return 0;
}

