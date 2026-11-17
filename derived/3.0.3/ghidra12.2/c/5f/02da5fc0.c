
void FUN_02da5fc0(short param_1,int param_2,long *param_3)

{
  undefined8 uVar1;
  undefined **local_40;
  undefined *puStack_38;
  
  if (param_3 == (long *)0x0) {
    return;
  }
  if (param_1 == 0x10) {
    if (param_2 == 6) {
      puStack_38 = PTR_LAB_04bc6328;
    }
    else {
      if (param_2 == 8) {
        local_40 = &PTR_LAB_04ac3968;
        goto LAB_02da60a0;
      }
      if (param_2 == 9) {
        local_40 = &PTR_LAB_04ac3940;
        goto LAB_02da60a0;
      }
      puStack_38 = PTR_LAB_04bc6330;
    }
  }
  else {
    if (param_1 != 0x100) {
      return;
    }
    if (param_2 == 8) {
      local_40 = &PTR_LAB_04ac3918;
      goto LAB_02da60a0;
    }
    if (param_2 == 9) {
      local_40 = &PTR_LAB_04ac38f0;
      goto LAB_02da60a0;
    }
    puStack_38 = PTR_LAB_04bc6320;
  }
  local_40 = (undefined **)(PTR_DAT_04bc5a40 + 0x10);
LAB_02da60a0:
  (**(code **)(*param_3 + 0x20))(param_3);
  uVar1 = (**(code **)(*param_3 + 0x10))(param_3);
  FUN_02c5ef70(uVar1,&local_40);
  return;
}

