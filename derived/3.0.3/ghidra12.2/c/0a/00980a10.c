
undefined8 FUN_00980a10(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  char cVar6;
  ulong uVar7;
  
  if ((int)*(uint *)(param_1 + 0x1c8) < 1) {
    if (*(long *)(param_1 + 0xb8) == 0) {
      return 0;
    }
    puVar4 = *(uint **)(*(long *)(param_1 + 0xb8) + 8);
    if (puVar4 == (uint *)0x0) {
      return 0;
    }
    if ((param_2 < *(uint *)(param_1 + 0xd0)) &&
       (*(char *)(*(long *)(param_1 + 0xd8) + (long)(int)param_2) == '\0')) {
      return 0;
    }
    if (*puVar4 <= param_2) {
      return 0;
    }
    if (puVar4[1] == 0) {
      return 0;
    }
    if ((ushort)puVar4[2] == 0) {
      return 0;
    }
    iVar5 = 0xc;
    if (*(char *)((long)puVar4 + 10) != '\0') {
      iVar5 = 0x1c;
    }
    puVar4 = (uint *)((ulong)(puVar4[1] * param_2 + (uint)(ushort)puVar4[2] * 8 + iVar5) +
                     (long)puVar4);
  }
  else {
    if (*(uint *)(param_1 + 0x1c8) <= param_2) {
      return 0;
    }
    if (*(uint *)(param_1 + 0x1b8) <= param_2) {
      param_2 = 0;
    }
    puVar4 = *(uint **)(*(long *)(param_1 + 0x1c0) + (ulong)param_2 * 8);
  }
  if ((puVar4 == (uint *)0x0) || (*puVar4 == 0)) {
    return 0;
  }
  cVar6 = DAT_04cfab80;
  while( true ) {
    if (cVar6 == '\0') {
      cVar6 = '\x01';
      DAT_04cfab84 = 0xffffffffffffffff;
      DAT_04cfab8c = 0xffffffffffffffff;
      DAT_04cfab80 = '\x01';
      DAT_04cfabb4 = 0xffffffffffffffff;
      DAT_04cfab94 = 0xffffffffffffffff;
      DAT_04cfab9c = 0xffffffffffffffff;
      DAT_04cfaba4 = -1;
      DAT_04cfabac = 0xffffffffffffffff;
    }
    else {
      if (-1 < DAT_04cfaba4) {
        if ((char *)((ulong)DAT_04cfaba4._4_4_ + (long)puVar4) == (char *)0x0) {
          return 0;
        }
        if (*(char *)((ulong)DAT_04cfaba4._4_4_ + (long)puVar4) == '\0') {
          return 0;
        }
        return 1;
      }
      if (DAT_04cfaba4._4_4_ != 0xffffffff) {
        return 0;
      }
    }
    lVar2 = (long)puVar4 - (ulong)*puVar4;
    if (*puVar4 == 0) {
      return 0;
    }
    if (lVar2 == 0) break;
    lVar1 = 0xc;
    if (*(char *)(lVar2 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    if (lVar1 + lVar2 == 0) {
      return 0;
    }
    uVar7 = (ulong)*(ushort *)(lVar2 + 8);
    DAT_04cfaba4 = CONCAT44(0xfffffffe,(undefined4)DAT_04cfaba4);
    if (uVar7 == 0) {
      return 0;
    }
    piVar3 = (int *)(lVar1 + lVar2 + 4);
    while (piVar3[-1] != 0x254bd05) {
      piVar3 = piVar3 + 2;
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) {
        return 0;
      }
    }
    iVar5 = 0;
    if (*piVar3 != -1) {
      iVar5 = *piVar3;
    }
    DAT_04cfaba4 = CONCAT44(iVar5,(undefined4)DAT_04cfaba4);
    if (*puVar4 == 0) {
      return 0;
    }
  }
  return 0;
}

