
void FUN_025f4fc8(long param_1,int *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined *local_68;
  char *pcStack_60;
  
  if (*(int *)(param_1 + 0x28) != 1) {
    return;
  }
  FUN_025f4e3c(param_1,0x78);
  local_68 = PTR_DAT_04bb2020 + 0x10;
  pcStack_60 = "FacilityID";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_68,(long)*param_2);
  }
  uVar1 = param_2[1];
  if (uVar1 == 0xffffffff) {
    FUN_006d8678(&local_68,"IsExistPhoto%d",0);
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_68,0);
    }
  }
  else {
    uVar1 = uVar1 & 0xf0;
    if (uVar1 == 0x10) {
      FUN_006d8678(&local_68,"IsExistPhoto%d",0);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),&local_68,1);
      }
    }
    else {
      FUN_006d8678(&local_68,"IsExistPhoto%d",0);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),&local_68,uVar1 == 0x20);
      }
      if (uVar1 != 0x20) goto LAB_025f50f8;
    }
    uVar2 = FUN_02603b90(*(undefined8 *)(param_1 + 0x40),param_2 + 1);
    if ((uVar2 & 1) != 0) {
      FUN_006d8678(&local_68,"PhotoInfo%d",0);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_02605cc0(*(long *)(param_1 + 8),&local_68,*(undefined8 *)(param_1 + 0x40));
      }
    }
  }
LAB_025f50f8:
  uVar1 = param_2[2];
  if (uVar1 == 0xffffffff) {
    FUN_006d8678(&local_68,"IsExistPhoto%d",1);
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_68,0);
    }
  }
  else {
    uVar1 = uVar1 & 0xf0;
    if (uVar1 == 0x10) {
      FUN_006d8678(&local_68,"IsExistPhoto%d",1);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),&local_68,1);
      }
    }
    else {
      FUN_006d8678(&local_68,"IsExistPhoto%d",1);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),&local_68,uVar1 == 0x20);
      }
      if (uVar1 != 0x20) {
        return;
      }
    }
    uVar2 = FUN_02603b90(*(undefined8 *)(param_1 + 0x48),param_2 + 2);
    if ((uVar2 & 1) != 0) {
      FUN_006d8678(&local_68,"PhotoInfo%d",1);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_02605cc0(*(long *)(param_1 + 8),&local_68,*(undefined8 *)(param_1 + 0x48));
      }
    }
  }
  return;
}

