
undefined2 FUN_009813f0(long param_1,uint param_2)

{
  long lVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  char cVar5;
  ulong uVar6;
  uint *puVar7;
  
  if ((int)*(uint *)(param_1 + 0x1c8) < 1) {
    if (*(long *)(param_1 + 0xb8) == 0) {
      return 0;
    }
    puVar3 = *(uint **)(*(long *)(param_1 + 0xb8) + 8);
    if (puVar3 == (uint *)0x0) {
      return 0;
    }
    if ((param_2 < *(uint *)(param_1 + 0xd0)) &&
       (*(char *)(*(long *)(param_1 + 0xd8) + (long)(int)param_2) == '\0')) {
      return 0;
    }
    if (*puVar3 <= param_2) {
      return 0;
    }
    if (puVar3[1] == 0) {
      return 0;
    }
    if ((ushort)puVar3[2] == 0) {
      return 0;
    }
    iVar4 = 0xc;
    if (*(char *)((long)puVar3 + 10) != '\0') {
      iVar4 = 0x1c;
    }
    puVar3 = (uint *)((ulong)(puVar3[1] * param_2 + (uint)(ushort)puVar3[2] * 8 + iVar4) +
                     (long)puVar3);
  }
  else {
    if (*(uint *)(param_1 + 0x1c8) <= param_2) {
      return 0;
    }
    if (*(uint *)(param_1 + 0x1b8) <= param_2) {
      param_2 = 0;
    }
    puVar3 = *(uint **)(*(long *)(param_1 + 0x1c0) + (ulong)param_2 * 8);
  }
  if ((puVar3 == (uint *)0x0) || (*puVar3 == 0)) {
    return 0;
  }
  cVar5 = DAT_04cfab80;
  while( true ) {
    if (cVar5 == '\0') {
      cVar5 = '\x01';
      DAT_04cfab84 = -1;
      DAT_04cfab8c = 0xffffffffffffffff;
      DAT_04cfab80 = '\x01';
      DAT_04cfabb4 = 0xffffffffffffffff;
      DAT_04cfab94 = 0xffffffffffffffff;
      DAT_04cfab9c = 0xffffffffffffffff;
      DAT_04cfaba4 = 0xffffffffffffffff;
      DAT_04cfabac = 0xffffffffffffffff;
    }
    else {
      uVar6 = (ulong)DAT_04cfab84._4_4_;
      if (-1 < DAT_04cfab84) {
        if ((undefined2 *)(uVar6 + (long)puVar3) == (undefined2 *)0x0) {
          return 0;
        }
        return *(undefined2 *)(uVar6 + (long)puVar3);
      }
      if (DAT_04cfab84._4_4_ != 0xffffffff) {
        return 0;
      }
    }
    puVar7 = (uint *)(ulong)*puVar3;
    if (*puVar3 == 0) {
      return 0;
    }
    if (puVar3 == puVar7) break;
    lVar1 = 0xc;
    if (*(char *)((long)puVar3 + (10 - (long)puVar7)) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar3 + (lVar1 - (long)puVar7);
    if (lVar1 == 0) {
      return 0;
    }
    uVar6 = (ulong)*(ushort *)((long)puVar3 + (8 - (long)puVar7));
    DAT_04cfab84 = CONCAT44(0xfffffffe,(undefined4)DAT_04cfab84);
    if (uVar6 == 0) {
      return 0;
    }
    piVar2 = (int *)(lVar1 + 4);
    while (piVar2[-1] != 0x2e17a0a7) {
      piVar2 = piVar2 + 2;
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) {
        return 0;
      }
    }
    iVar4 = 0;
    if (*piVar2 != -1) {
      iVar4 = *piVar2;
    }
    DAT_04cfab84 = CONCAT44(iVar4,(undefined4)DAT_04cfab84);
    if (*puVar3 == 0) {
      return 0;
    }
  }
  return 0;
}

