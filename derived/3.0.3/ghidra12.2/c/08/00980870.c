
undefined8 FUN_00980870(long param_1,uint param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  char cVar7;
  ulong uVar8;
  
  if ((int)*(uint *)(param_1 + 0x1c8) < 1) {
    if (*(long *)(param_1 + 0xb8) == 0) {
      return 0;
    }
    puVar5 = *(uint **)(*(long *)(param_1 + 0xb8) + 8);
    if (puVar5 == (uint *)0x0) {
      return 0;
    }
    if ((param_2 < *(uint *)(param_1 + 0xd0)) &&
       (*(char *)(*(long *)(param_1 + 0xd8) + (long)(int)param_2) == '\0')) {
      return 0;
    }
    if (*puVar5 <= param_2) {
      return 0;
    }
    if (puVar5[1] == 0) {
      return 0;
    }
    if ((ushort)puVar5[2] == 0) {
      return 0;
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
      return 0;
    }
    if (*(uint *)(param_1 + 0x1b8) <= param_2) {
      param_2 = 0;
    }
    puVar5 = *(uint **)(*(long *)(param_1 + 0x1c0) + (ulong)param_2 * 8);
  }
  if ((puVar5 == (uint *)0x0) || (*puVar5 == 0)) {
    return 0;
  }
  cVar7 = DAT_04cfab80;
  while( true ) {
    if (cVar7 == '\0') {
      cVar7 = '\x01';
      DAT_04cfab84 = 0xffffffffffffffff;
      DAT_04cfab8c = 0xffffffffffffffff;
      DAT_04cfab80 = '\x01';
      DAT_04cfabb4 = 0xffffffffffffffff;
      DAT_04cfab94 = 0xffffffffffffffff;
      DAT_04cfab9c = 0xffffffffffffffff;
      DAT_04cfaba4 = 0xffffffffffffffff;
      DAT_04cfabac = 0xffffffffffffffff;
    }
    else {
      if (-1 < (int)DAT_04cfab94) {
        pcVar1 = (char *)((DAT_04cfab94 & 0xffffffff) + (long)puVar5);
        if (pcVar1 == (char *)0x0) {
          return 0;
        }
        if (*pcVar1 == '\0') {
          return 0;
        }
        return 1;
      }
      if ((int)DAT_04cfab94 != -1) {
        return 0;
      }
    }
    lVar3 = (long)puVar5 - (ulong)*puVar5;
    if (*puVar5 == 0) {
      return 0;
    }
    if (lVar3 == 0) break;
    lVar2 = 0xc;
    if (*(char *)(lVar3 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar3 == 0) {
      return 0;
    }
    uVar8 = (ulong)*(ushort *)(lVar3 + 8);
    DAT_04cfab94 = CONCAT44(DAT_04cfab94._4_4_,0xfffffffe);
    if (uVar8 == 0) {
      return 0;
    }
    piVar4 = (int *)(lVar2 + lVar3 + 4);
    while (piVar4[-1] != 0x472724ed) {
      piVar4 = piVar4 + 2;
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) {
        return 0;
      }
    }
    iVar6 = 0;
    if (*piVar4 != -1) {
      iVar6 = *piVar4;
    }
    DAT_04cfab94 = CONCAT44(DAT_04cfab94._4_4_,iVar6);
    if (*puVar5 == 0) {
      return 0;
    }
  }
  return 0;
}

