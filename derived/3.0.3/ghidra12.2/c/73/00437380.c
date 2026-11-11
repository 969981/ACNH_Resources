
undefined1  [16] FUN_00437380(float param_1)

{
  uint uVar1;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  if (ABS(param_1) < 1.0) {
    auVar2._0_4_ = acosf(param_1);
    auVar2._4_4_ = extraout_var;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
  uVar1 = 0;
  if (param_1 <= 0.0) {
    uVar1 = DAT_04102efc;
  }
  return ZEXT416(uVar1);
}

