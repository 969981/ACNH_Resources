
undefined1  [16] FUN_003ce1d0(long param_1,int param_2)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (param_2 == 0) {
    return ZEXT416(*(uint *)(param_1 + 100));
  }
  if (param_2 < 4) {
    return ZEXT416(*(uint *)(param_1 + (ulong)(param_2 - 1) * 4 + 0x68));
  }
  FUN_003c0374(*(undefined8 *)(param_1 + 0x78));
  auVar1._4_4_ = extraout_var;
  auVar1._0_4_ = extraout_s0;
  auVar1._8_8_ = extraout_var_00;
  return auVar1;
}

