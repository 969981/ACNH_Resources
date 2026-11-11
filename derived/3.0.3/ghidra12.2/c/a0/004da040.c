
void FUN_004da040(long *param_1,long *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 local_78 [2];
  long local_70;
  long lStack_68;
  ulong local_60;
  long local_58;
  long lStack_50;
  ulong local_48;
  undefined4 local_38 [2];
  
  if (*param_2 == *param_1) {
    return;
  }
  lVar4 = param_1[1];
  uVar2 = FUN_00428440(lVar4);
  if ((lVar4 != 0) && ((uVar2 & 0x1f) == 6)) {
    if (*param_2 == 0) {
      uVar1 = 0;
    }
    else {
      local_58 = *param_2;
      lStack_50 = param_2[1];
      lVar4 = param_1[3];
      local_48 = param_2[2];
      if ((local_48 & 1) != 0) {
        FUN_0043dd30(local_48 & 0xfffffffffffffffe);
      }
      uVar1 = FUN_004da210(lVar4,&local_58);
      if ((local_48 & 1) != 0) {
        FUN_0043dd50(local_48 & 0xfffffffffffffffe);
      }
    }
    *(undefined4 *)*param_1 = uVar1;
    return;
  }
  lVar4 = param_1[1];
  uVar2 = FUN_00428440(lVar4);
  if (lVar4 == 0) {
    return;
  }
  if ((uVar2 & 0x1f) != 7) {
    return;
  }
  lVar4 = param_2[1];
  uVar2 = FUN_00428440(lVar4);
  if ((lVar4 == 0) || ((uVar2 & 0x1f) != 6)) {
    uVar2 = FUN_00428440(lVar4);
    lVar6 = 0;
    if ((lVar4 != 0) && ((uVar2 & 0x1f) == 7)) {
      lVar6 = *param_2;
    }
  }
  else {
    plVar3 = (long *)(*(long *)(param_1[3] + 0x228) + (long)*(int *)*param_2 * 0x18);
    lVar6 = *plVar3;
    if ((plVar3[1] != 0) && (uVar2 = FUN_00428370(), (uVar2 & 1) != 0)) {
      FUN_0043dd30(uVar2 & 0xfffffffffffffffe);
      FUN_0043dd50(uVar2 & 0xfffffffffffffffe);
      lVar5 = param_1[3];
      local_70 = lVar6;
      goto joined_r0x004da1a8;
    }
  }
  lVar5 = param_1[3];
  local_70 = lVar6;
joined_r0x004da1a8:
  lStack_68 = lVar4;
  if (lVar4 == 0) {
    local_60 = 0;
  }
  else {
    local_60 = FUN_00428370(lVar4);
    if ((local_60 & 1) != 0) {
      FUN_0043dd30(local_60 & 0xfffffffffffffffe);
    }
  }
  local_38[0] = (undefined4)param_1[4];
  local_78[0] = (undefined4)param_2[4];
  FUN_004da4c0(lVar5,param_1,&local_70,local_38,local_78);
  if ((local_60 & 1) != 0) {
    FUN_0043dd50(local_60 & 0xfffffffffffffffe);
  }
  return;
}

