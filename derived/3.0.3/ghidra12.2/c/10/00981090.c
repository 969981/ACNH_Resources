
undefined8 FUN_00981090(long param_1,uint param_2)

{
  char *pcVar1;
  long lVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  char cVar6;
  uint *puVar7;
  ulong uVar8;
  
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
  if (puVar4 == (uint *)0x0) {
    return 0;
  }
  if (*puVar4 == 0) {
    return 1;
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
      DAT_04cfaba4 = 0xffffffffffffffff;
      DAT_04cfabac = 0xffffffffffffffff;
    }
    else {
      if (-1 < (int)DAT_04cfab9c) {
        pcVar1 = (char *)((DAT_04cfab9c & 0xffffffff) + (long)puVar4);
        if (pcVar1 == (char *)0x0) {
          return 1;
        }
        if (*pcVar1 == '\0') {
          return 0;
        }
        return 1;
      }
      if ((int)DAT_04cfab9c != -1) {
        return 1;
      }
    }
    puVar7 = (uint *)(ulong)*puVar4;
    if (*puVar4 == 0) {
      return 1;
    }
    if (puVar4 == puVar7) break;
    lVar2 = 0xc;
    if (*(char *)((long)puVar4 + (10 - (long)puVar7)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar4 + (lVar2 - (long)puVar7);
    if (lVar2 == 0) {
      return 1;
    }
    uVar8 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar7));
    DAT_04cfab9c = CONCAT44(DAT_04cfab9c._4_4_,0xfffffffe);
    if (uVar8 == 0) {
      return 1;
    }
    piVar3 = (int *)(lVar2 + 4);
    while (piVar3[-1] != 0x3e78dc38) {
      piVar3 = piVar3 + 2;
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) {
        return 1;
      }
    }
    iVar5 = 0;
    if (*piVar3 != -1) {
      iVar5 = *piVar3;
    }
    DAT_04cfab9c = CONCAT44(DAT_04cfab9c._4_4_,iVar5);
    if (*puVar4 == 0) {
      return 1;
    }
  }
  return 1;
}

