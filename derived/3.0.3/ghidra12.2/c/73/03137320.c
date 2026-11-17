
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03137320(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  char *__src;
  long *plVar11;
  int local_b8;
  undefined *local_b0;
  char *local_a8;
  int local_a0;
  char local_9c [63];
  undefined1 local_5d;
  undefined1 local_58;
  
  if ((*(byte *)(param_1 + 0x38) >> 2 & 1) == 0) {
    if (*(uint *)(param_1 + 0x34) == param_2) {
      return;
    }
    if ((int)param_2 < 0) {
      return;
    }
    uVar5 = *(uint *)(param_1 + 0x18);
    if ((int)uVar5 <= (int)param_2) {
      return;
    }
    uVar8 = *(uint *)(param_1 + 0x30);
    if ((-1 < (int)uVar8) && ((int)uVar8 < (int)uVar5)) {
      if (uVar8 < uVar5) {
        lVar6 = param_1 + 8;
        uVar1 = uVar8 + 1 & 3;
        if (2 < uVar8) {
          uVar8 = uVar8 + 1 & 0xfffffffc;
          do {
            uVar8 = uVar8 - 4;
            lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar6 + 8) + 8) + 8) + 8);
          } while (uVar8 != 0);
        }
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          lVar6 = *(long *)(lVar6 + 8);
        }
      }
      else {
        lVar6 = 0;
      }
      if ((lVar6 != 0) && (lVar6 = lVar6 - *(int *)(param_1 + 0x1c), lVar6 != 0)) {
        FUN_03134ff0(lVar6,param_3 & 1);
        uVar5 = *(uint *)(param_1 + 0x18);
      }
    }
    if ((int)param_2 < (int)uVar5) {
      if (param_2 < uVar5) {
        uVar1 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
        lVar6 = param_1 + 8;
        uVar5 = uVar1 + 1;
        uVar8 = uVar5 & 3;
        if (2 < uVar1) {
          uVar5 = uVar5 & 0xfffffffc;
          do {
            uVar5 = uVar5 - 4;
            lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar6 + 8) + 8) + 8) + 8);
          } while (uVar5 != 0);
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          lVar6 = *(long *)(lVar6 + 8);
        }
      }
      else {
        lVar6 = 0;
      }
      if ((lVar6 != 0) && (lVar6 = lVar6 - *(int *)(param_1 + 0x1c), lVar6 != 0)) {
        FUN_03134ef0(lVar6,param_3 & 1);
      }
    }
    *(uint *)(param_1 + 0x30) = param_2;
    goto LAB_03137690;
  }
  local_b8 = -1;
  local_a0 = 0x40;
  local_5d = 0;
  local_9c[0] = '\0';
  local_b0 = PTR_DAT_04bb2bc0 + 0x10;
  local_58 = 1;
  local_a8 = local_9c;
  if ((int)param_2 < (int)*(uint *)(param_1 + 0x90)) {
    if (param_2 < *(uint *)(param_1 + 0x90)) {
      uVar7 = -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3;
      local_b8 = *(int *)(*(long *)(*(long *)(param_1 + 0x98) + uVar7) + 8);
      lVar6 = *(long *)(*(long *)(param_1 + 0x98) + uVar7);
    }
    else {
      lVar6 = 0;
      local_b8 = _DAT_00000008;
    }
    plVar11 = (long *)(lVar6 + 0x10);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    __src = *(char **)(lVar6 + 0x18);
    if (local_9c != __src) {
      (**(code **)(*(long *)(lVar6 + 0x10) + 0x18))(plVar11);
      lVar4 = 0;
      do {
        if (*(char *)(*(long *)(lVar6 + 0x18) + lVar4) == '\0') goto LAB_031374d0;
        lVar9 = *(long *)(lVar6 + 0x18) + lVar4;
        if (*(char *)(lVar9 + 1) == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_031374d0;
        }
        if (*(char *)(lVar9 + 2) == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_031374d0;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_031374d0:
      iVar3 = (int)lVar4;
      if (local_a0 <= (int)lVar4) {
        iVar3 = local_a0 + -1;
      }
      memcpy(local_9c,__src,(long)iVar3);
      local_9c[iVar3] = '\0';
    }
  }
  if (local_b8 == -1) {
    return;
  }
  uVar5 = *(uint *)(param_1 + 0x30);
  if (((int)uVar5 < 0) || (uVar8 = *(uint *)(param_1 + 0x18), (int)uVar8 <= (int)uVar5))
  goto LAB_03137690;
  lVar6 = param_1 + 8;
  if (uVar5 < uVar8) {
    uVar1 = uVar5 + 1 & 3;
    lVar4 = lVar6;
    if (2 < uVar5) {
      uVar10 = uVar5 + 1 & 0xfffffffc;
      do {
        uVar10 = uVar10 - 4;
        lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 8) + 8);
      } while (uVar10 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      lVar4 = *(long *)(lVar4 + 8);
    }
  }
  else {
    lVar4 = 0;
  }
  if ((lVar4 == 0) || (lVar4 = lVar4 - *(int *)(param_1 + 0x1c), lVar4 == 0)) goto LAB_03137690;
  lVar9 = *(long *)(lVar4 + 0x250);
  if (lVar9 == 0) {
LAB_031375b8:
    FUN_03134ef0(lVar4,param_3 & 1);
    uVar5 = *(uint *)(param_1 + 0x30);
    uVar8 = *(uint *)(param_1 + 0x18);
  }
  else {
    if (*(char *)(lVar9 + 0x20) == '\0') {
      iVar3 = *(int *)(lVar9 + 0x28);
    }
    else {
      piVar2 = (int *)(lVar9 + 0x24);
      if (*(char *)(lVar9 + 0x21) != '\0') {
        piVar2 = (int *)(lVar9 + 0x28);
      }
      iVar3 = *piVar2;
    }
    if (iVar3 != 0) goto LAB_031375b8;
  }
  if ((-1 < (int)uVar5) && ((int)uVar5 < (int)uVar8)) {
    if (uVar5 < uVar8) {
      uVar8 = uVar5 + 1 & 3;
      lVar4 = lVar6;
      if (2 < uVar5) {
        uVar5 = uVar5 + 1 & 0xfffffffc;
        do {
          uVar5 = uVar5 - 4;
          lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 8) + 8);
        } while (uVar5 != 0);
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        lVar4 = *(long *)(lVar4 + 8);
      }
    }
    else {
      lVar4 = 0;
    }
    if ((lVar4 != 0) && (lVar4 = lVar4 - *(int *)(param_1 + 0x1c), lVar4 != 0)) {
      FUN_03133694(lVar4,local_b8);
    }
  }
  if (((*local_a8 != '\0') && (uVar5 = *(uint *)(param_1 + 0x30), -1 < (int)uVar5)) &&
     ((int)uVar5 < (int)*(uint *)(param_1 + 0x18))) {
    if (uVar5 < *(uint *)(param_1 + 0x18)) {
      uVar8 = uVar5 + 1 & 3;
      if (2 < uVar5) {
        uVar5 = uVar5 + 1 & 0xfffffffc;
        do {
          uVar5 = uVar5 - 4;
          lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar6 + 8) + 8) + 8) + 8);
        } while (uVar5 != 0);
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        lVar6 = *(long *)(lVar6 + 8);
      }
    }
    else {
      lVar6 = 0;
    }
    if ((lVar6 != 0) && (lVar6 = lVar6 - *(int *)(param_1 + 0x1c), lVar6 != 0)) {
      FUN_03134d14(lVar6,&local_b0);
    }
  }
LAB_03137690:
  *(uint *)(param_1 + 0x34) = param_2;
  return;
}

