
undefined4 FUN_0374b070(long param_1,uint *param_2)

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
  
  uVar3 = *param_2;
  if ((int)*(uint *)(param_1 + 0x5c0) < 1) {
    if (*(long *)(param_1 + 0x4b0) == 0) {
      return 0;
    }
    puVar7 = *(uint **)(*(long *)(param_1 + 0x4b0) + 8);
    if (puVar7 == (uint *)0x0) {
      return 0;
    }
    if ((uVar3 < *(uint *)(param_1 + 0x4c8)) &&
       (*(char *)(*(long *)(param_1 + 0x4d0) + (long)(int)uVar3) == '\0')) {
      return 0;
    }
    if (*puVar7 <= uVar3) {
      return 0;
    }
    if (puVar7[1] == 0) {
      return 0;
    }
    if ((ushort)puVar7[2] == 0) {
      return 0;
    }
    iVar8 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      iVar8 = 0x1c;
    }
    puVar7 = (uint *)((ulong)(puVar7[1] * uVar3 + (uint)(ushort)puVar7[2] * 8 + iVar8) +
                     (long)puVar7);
  }
  else {
    if (*(uint *)(param_1 + 0x5c0) <= uVar3) {
      return 0;
    }
    if (*(uint *)(param_1 + 0x5b0) <= uVar3) {
      uVar3 = 0;
    }
    puVar7 = *(uint **)(*(long *)(param_1 + 0x5b8) + (ulong)uVar3 * 8);
  }
  if ((puVar7 == (uint *)0x0) || (uVar3 = *puVar7, uVar3 == 0)) {
    return 0;
  }
  cVar9 = DAT_05abdba0;
  while( true ) {
    if (cVar9 == '\0') {
      DAT_05abdba4 = 0xffffffffffffffff;
      cVar9 = '\x01';
      DAT_05abdbac = 0xffffffff;
      uVar3 = *puVar7;
      DAT_05abdba0 = '\x01';
    }
    else {
      if (-1 < (int)DAT_05abdba4) {
        puVar1 = (undefined4 *)((DAT_05abdba4 & 0xffffffff) + (long)puVar7);
        if (puVar1 == (undefined4 *)0x0) {
          return 0;
        }
        return *puVar1;
      }
      if ((int)DAT_05abdba4 != -1) {
        return 0;
      }
    }
    if ((ulong)uVar3 == 0) {
      return 0;
    }
    lVar5 = (long)puVar7 - (ulong)uVar3;
    if (lVar5 == 0) break;
    lVar2 = 0xc;
    if (*(char *)(lVar5 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar5 == 0) {
      return 0;
    }
    uVar4 = (ulong)*(ushort *)(lVar5 + 8);
    DAT_05abdba4._4_4_ = (undefined4)(DAT_05abdba4 >> 0x20);
    DAT_05abdba4 = CONCAT44(DAT_05abdba4._4_4_,0xfffffffe);
    if (uVar4 == 0) {
      return 0;
    }
    piVar6 = (int *)(lVar2 + lVar5 + 4);
    while (piVar6[-1] != 0x21511673) {
      piVar6 = piVar6 + 2;
      uVar4 = uVar4 - 1;
      if (uVar4 == 0) {
        return 0;
      }
    }
    iVar8 = 0;
    if (*piVar6 != -1) {
      iVar8 = *piVar6;
    }
    DAT_05abdba4 = CONCAT44(DAT_05abdba4._4_4_,iVar8);
    uVar3 = *puVar7;
    if (uVar3 == 0) {
      return 0;
    }
  }
  return 0;
}

