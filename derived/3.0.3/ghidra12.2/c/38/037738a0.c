
undefined8 FUN_037738a0(float *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *local_48;
  undefined *puStack_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 uStack_28;
  
  uVar2 = 0;
  if ((param_1 != (float *)0x0) && (param_2 != (undefined4 *)0x0)) {
    iVar1 = *param_3;
    if (iVar1 == 3) {
      local_38 = 0;
      local_48 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_40 = PTR_DAT_04bb2010 + 0x10;
      uStack_28 = 0;
      local_30 = puStack_40;
      FUN_01811430(&local_48);
      *param_1 = (float)(int)local_38 * 5.0;
    }
    else {
      if (iVar1 == 2) {
        local_38 = 0;
        local_48 = PTR_DAT_04bbc1a0 + 0x10;
        puStack_40 = PTR_DAT_04bb2010 + 0x10;
        uStack_28 = 0;
        local_30 = puStack_40;
        FUN_01811430(&local_48);
      }
      else {
        if (iVar1 != 1) {
          return 0;
        }
        FUN_0375dec0(&local_48,0);
        param_1[1] = 0.0;
      }
      *param_1 = (float)(int)local_38 * 5.0 + 5.0;
    }
    uVar2 = 1;
    param_1[2] = (float)local_38._4_4_ * 5.0 + 5.0;
    *param_2 = 0x40000000;
  }
  return uVar2;
}

