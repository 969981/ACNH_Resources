
undefined1  [16] FUN_004372f0(float param_1)

{
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (NAN(SQRT(param_1))) {
    auVar1._0_4_ = sqrtf(param_1);
    auVar1._4_4_ = extraout_var;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT416((uint)SQRT(param_1));
}

