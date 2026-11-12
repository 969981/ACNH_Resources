
undefined1  [16] FUN_0097a900(undefined8 param_1,undefined8 param_2)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) ||
     (*(char *)(DAT_04cfae30 + 0x11c8) != '\0')) {
    return ZEXT816(0xc3fa0000);
  }
  FUN_0093a950(DAT_04cfae30 + 0x28,param_1,param_2);
  auVar1._4_4_ = extraout_var;
  auVar1._0_4_ = extraout_s0;
  auVar1._8_8_ = extraout_var_00;
  return auVar1;
}

