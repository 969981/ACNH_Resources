
void FUN_02cc56a0(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  uint local_3c;
  int local_38;
  int local_34;
  int local_18 [2];
  
  uVar3 = FUN_033fad40();
  if ((uVar3 & 1) == 0) goto LAB_02cc5794;
  local_18[0] = -1;
  uVar3 = FUN_033fad40();
  if (((uVar3 & 1) == 0) || (lVar4 = *(long *)(DAT_05231900 + 0x140), lVar4 == 0)) {
LAB_02cc5724:
    local_18[0] = -1;
  }
  else if (((DAT_05ab5ea8 == 0) || (*(int *)(DAT_05ab5ea8 + 0x14) == 0)) ||
          (((DAT_05ab8198 != (ushort *)0x0 && ((*DAT_05ab8198 & 1) != 0)) ||
           ((*(uint *)(lVar4 + 0x174) >> 1 & 1) == 0)))) {
    if ((*(uint *)(lVar4 + 0x174) & 1) == 0) goto LAB_02cc5724;
    FUN_0082f294(local_18);
  }
  else {
    FUN_00830084(local_18,0);
  }
  local_18[1] = 0;
  lVar4 = *(long *)(param_1 + 0x1ceb0);
  while (local_34 = local_18[0], lVar4 != 0) {
    if (*(int *)(lVar4 + 0x20) < 1) {
      if (-1 < *(int *)(lVar4 + 0x20)) {
        if (local_18[0] != -1) {
          FUN_034660f0(lVar4 + 0x28,param_1 + 0x1c280,&local_34);
        }
        break;
      }
      plVar5 = (long *)(lVar4 + 0x10);
    }
    else {
      plVar5 = (long *)(lVar4 + 8);
    }
    lVar4 = *plVar5;
  }
LAB_02cc5794:
  if ((*(long *)(DAT_05231900 + 0x140) != 0) &&
     (*(char *)(*(long *)(DAT_05231900 + 0x140) + 0x528) != '\0')) {
    iVar1 = FUN_015d8d80(0);
    local_38 = 0;
    if (iVar1 != -1) {
      local_38 = iVar1;
    }
    uVar2 = FUN_015d8c68(&local_38);
    local_3c = (uVar2 & 0x3ff) << 3 | 0x6000;
    local_18[1] = 1;
    lVar4 = *(long *)(param_1 + 0x1ceb0);
    while (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x20) < 2) {
        if (0 < *(int *)(lVar4 + 0x20)) {
          FUN_034660f0(lVar4 + 0x28,param_1 + 0x1c280,&local_3c);
          return;
        }
        plVar5 = (long *)(lVar4 + 0x10);
      }
      else {
        plVar5 = (long *)(lVar4 + 8);
      }
      lVar4 = *plVar5;
    }
  }
  return;
}

