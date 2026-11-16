
undefined4 FUN_02953990(long param_1,uint param_2)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  char cVar9;
  
  if ((int)*(uint *)(param_1 + 0xd18) < 1) {
    if (*(long *)(param_1 + 0xc08) == 0) {
      return 0x3f800000;
    }
    puVar7 = *(uint **)(*(long *)(param_1 + 0xc08) + 8);
    if (puVar7 == (uint *)0x0) {
      return 0x3f800000;
    }
    if ((param_2 < *(uint *)(param_1 + 0xc20)) &&
       (*(char *)(*(long *)(param_1 + 0xc28) + (long)(int)param_2) == '\0')) {
      return 0x3f800000;
    }
    if (*puVar7 <= param_2) {
      return 0x3f800000;
    }
    if (puVar7[1] == 0) {
      return 0x3f800000;
    }
    if ((ushort)puVar7[2] == 0) {
      return 0x3f800000;
    }
    iVar8 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      iVar8 = 0x1c;
    }
    puVar7 = (uint *)((ulong)(puVar7[1] * param_2 + (uint)(ushort)puVar7[2] * 8 + iVar8) +
                     (long)puVar7);
  }
  else {
    if (*(uint *)(param_1 + 0xd18) <= param_2) {
      return 0x3f800000;
    }
    if (*(uint *)(param_1 + 0xd08) <= param_2) {
      param_2 = 0;
    }
    puVar7 = *(uint **)(*(long *)(param_1 + 0xd10) + (ulong)param_2 * 8);
  }
  if ((puVar7 == (uint *)0x0) || (uVar3 = *puVar7, uVar3 == 0)) {
    return 0x3f800000;
  }
  cVar9 = DAT_055d6918;
  while( true ) {
    if (cVar9 == '\0') {
      DAT_055d691c = 0xffffffffffffffff;
      cVar9 = '\x01';
      DAT_055d6924 = 0xffffffff;
      uVar3 = *puVar7;
      DAT_055d6918 = '\x01';
    }
    else {
      if (-1 < (int)DAT_055d691c) {
        puVar1 = (undefined4 *)((DAT_055d691c & 0xffffffff) + (long)puVar7);
        if (puVar1 == (undefined4 *)0x0) {
          return 0x3f800000;
        }
        return *puVar1;
      }
      if ((int)DAT_055d691c != -1) {
        return 0x3f800000;
      }
    }
    if ((ulong)uVar3 == 0) {
      return 0x3f800000;
    }
    lVar5 = (long)puVar7 - (ulong)uVar3;
    if (lVar5 == 0) break;
    lVar2 = 0xc;
    if (*(char *)(lVar5 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar5 == 0) {
      return 0x3f800000;
    }
    uVar4 = (ulong)*(ushort *)(lVar5 + 8);
    DAT_055d691c._4_4_ = (undefined4)(DAT_055d691c >> 0x20);
    DAT_055d691c = CONCAT44(DAT_055d691c._4_4_,0xfffffffe);
    if (uVar4 == 0) {
      return 0x3f800000;
    }
    piVar6 = (int *)(lVar2 + lVar5 + 4);
    while (piVar6[-1] != 0x93dfe4f) {
      piVar6 = piVar6 + 2;
      uVar4 = uVar4 - 1;
      if (uVar4 == 0) {
        return 0x3f800000;
      }
    }
    iVar8 = 0;
    if (*piVar6 != -1) {
      iVar8 = *piVar6;
    }
    DAT_055d691c = CONCAT44(DAT_055d691c._4_4_,iVar8);
    uVar3 = *puVar7;
    if (uVar3 == 0) {
      return 0x3f800000;
    }
  }
  return 0x3f800000;
}

