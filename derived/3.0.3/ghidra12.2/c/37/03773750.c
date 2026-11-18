
undefined8 FUN_03773750(float *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  undefined *local_48;
  undefined *puStack_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 local_28;
  
  if (param_1 == (float *)0x0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  iVar1 = *param_3;
  if (iVar1 == 3) {
    local_38 = 0;
    local_48 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_40 = PTR_DAT_04bb2010 + 0x10;
    local_28 = 0;
    local_30 = puStack_40;
    FUN_01811430(&local_48);
    *param_1 = (float)(int)local_28 * 5.0 + 5.0;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 1) {
        return 0;
      }
      FUN_0375dec0(&local_48,0);
      param_1[1] = 0.0;
      param_1[2] = (float)local_38._4_4_ * 5.0 + 5.0;
      *param_1 = (float)(int)local_38 * 5.0 + 5.0 + 10.0;
      goto LAB_0377387c;
    }
    local_38 = 0;
    local_48 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_40 = PTR_DAT_04bb2010 + 0x10;
    local_28 = 0;
    local_30 = puStack_40;
    FUN_01811430(&local_48);
    *param_1 = (float)(int)local_28 * 5.0;
  }
  param_1[2] = (float)local_38._4_4_ * 5.0 + 5.0;
LAB_0377387c:
  *param_2 = 0xc0000000;
  return 1;
}

