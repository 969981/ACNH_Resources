
bool FUN_02d58a30(undefined8 param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                 int *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_2d8a [2];
  uint local_2d88 [1448];
  uint local_16e8;
  undefined1 auStack_16e2 [2];
  undefined1 auStack_16e0 [5792];
  
  uVar4 = FUN_007ef180(param_2);
  if ((uVar4 & 1) == 0) goto switchD_02d58a8c_caseD_0;
  switch(*param_3) {
  case 0:
    goto switchD_02d58a8c_caseD_0;
  case 1:
    FUN_007ef010(&local_16e8,param_2);
    FUN_007e4920(auStack_16e0,&local_16e8);
    local_2d88[0] = FUN_007e68d0(auStack_16e0);
    if (0x17 < local_2d88[0]) {
      return false;
    }
    uVar2 = 1 << (ulong)(local_2d88[0] & 0x1f);
    uVar3 = 0xe001fc;
    break;
  case 2:
    FUN_007ef010(&local_16e8,param_2);
    FUN_007e4920(auStack_16e0,&local_16e8);
    local_2d88[0] = FUN_007e68d0(auStack_16e0);
    if (0x14 < local_2d88[0]) {
      return false;
    }
    uVar2 = 1 << (ulong)(local_2d88[0] & 0x1f);
    uVar3 = 0x1c7e00;
    break;
  case 3:
    FUN_007ef010(&local_16e8,param_2);
    FUN_007e4920(auStack_16e0,&local_16e8);
    uVar2 = FUN_007e68d0(auStack_16e0);
    local_2d88[0] = uVar2;
    goto joined_r0x02d58d70;
  case 4:
    FUN_007ef010(auStack_2d8a,param_2);
    FUN_007e4920(local_2d88,auStack_2d8a);
    uVar4 = FUN_007e4bb0(local_2d88);
    if (((uVar4 & 1) == 0) || (uVar4 = FUN_0344ca60(param_2), (uVar4 & 1) != 0))
    goto switchD_02d58a8c_caseD_0;
    FUN_007ef010(auStack_16e2,param_2);
    FUN_007e4920(auStack_16e0,auStack_16e2);
    uVar2 = FUN_007e68d0(auStack_16e0);
    local_16e8 = uVar2;
joined_r0x02d58d70:
    if (0x19 < uVar2) {
      return false;
    }
    uVar2 = 1 << (ulong)(uVar2 & 0x1f);
    uVar3 = 0x3038000;
    break;
  default:
    return false;
  }
  if ((uVar2 & uVar3) == 0) {
    return false;
  }
switchD_02d58a8c_caseD_0:
  iVar1 = *param_4;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      uVar4 = FUN_02d6f0e0(param_1,param_2);
      if ((uVar4 & 1) == 0) {
        return false;
      }
    }
    else {
      if (iVar1 != 2) {
        return false;
      }
      uVar4 = FUN_02d6f0e0(param_1,param_2);
      if ((uVar4 & 1) != 0) {
        return false;
      }
    }
  }
  iVar1 = *param_5;
  if (iVar1 == 0) {
    return true;
  }
  if (iVar1 == 2) {
    FUN_007ef010(local_2d88,param_2);
    FUN_007e4920(auStack_16e0,local_2d88);
    FUN_02582a24(param_1);
    uVar2 = FUN_02582d8c(param_1,1);
    if (((uVar2 < 8) &&
        (lVar5 = *(long *)PTR_DAT_04bb4fb8,
        *(char *)(lVar5 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(int *)(lVar5 + (ulong)uVar2 * 0x13f0 + 0x13d0) == 0)) {
      uVar2 = (uint)*(byte *)(lVar5 + (ulong)uVar2 * 0x13f0 + 0x13d5);
    }
    else {
      uVar2 = 0xffffffff;
    }
    uVar3 = FUN_007e4d10(auStack_16e0);
    return uVar2 != uVar3;
  }
  if (iVar1 != 1) {
    return false;
  }
  FUN_007ef010(local_2d88,param_2);
  FUN_007e4920(auStack_16e0,local_2d88);
  FUN_02582a24(param_1);
  uVar2 = FUN_02582d8c(param_1,1);
  if (((uVar2 < 8) &&
      (lVar5 = *(long *)PTR_DAT_04bb4fb8, *(char *)(lVar5 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')
      ) && (*(int *)(lVar5 + (ulong)uVar2 * 0x13f0 + 0x13d0) == 0)) {
    uVar2 = (uint)*(byte *)(lVar5 + (ulong)uVar2 * 0x13f0 + 0x13d5);
  }
  else {
    uVar2 = 0xffffffff;
  }
  uVar3 = FUN_007e4d10(auStack_16e0);
  return uVar2 == uVar3;
}

