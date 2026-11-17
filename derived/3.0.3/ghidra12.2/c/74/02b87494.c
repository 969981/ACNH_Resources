
undefined1  [16] FUN_02b87494(long param_1)

{
  uint *puVar1;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined8 extraout_var_01;
  undefined1 auVar2 [16];
  undefined4 extraout_var_00;
  undefined8 extraout_var_02;
  undefined1 auVar3 [16];
  undefined4 local_1c;
  undefined1 local_18 [4];
  undefined4 local_14;
  
  if (*(long **)(param_1 + 0x2b8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02b874a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x2b8) + 0xf8))();
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_8_ = extraout_var_01;
    return auVar2;
  }
  if (((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) ||
     (*(char *)(DAT_04cfae30 + 0x11c8) != '\0')) {
    return ZEXT816(0xc3fa0000);
  }
  local_18[0] = 0;
  if (DAT_04c487d4 == -1) {
    local_1c = 7;
  }
  else {
    local_14 = 1;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    local_1c = 7;
    if ((*puVar1 & 2) != 0) {
      local_1c = 5;
    }
  }
  FUN_00962700(*(long *)(DAT_04cfae30 + 0xa8),*(long *)(param_1 + 0x68) + 0x278,&local_1c,1,local_18
              );
  auVar3._4_4_ = extraout_var_00;
  auVar3._0_4_ = extraout_s0_00;
  auVar3._8_8_ = extraout_var_02;
  return auVar3;
}

