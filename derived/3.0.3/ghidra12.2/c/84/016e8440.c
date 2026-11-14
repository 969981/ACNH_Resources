
undefined1  [16] FUN_016e8440(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  float fVar2;
  float extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 uVar5;
  undefined4 extraout_var;
  undefined8 uVar6;
  undefined8 extraout_var_01;
  undefined1 auVar3 [16];
  undefined4 extraout_var_00;
  undefined8 extraout_var_02;
  undefined1 auVar4 [16];
  int local_18;
  int local_14;
  
  pcVar1 = param_2 + 0xe;
  if (*param_2 == '\0') {
    FUN_016e06d0(param_1,0,0,pcVar1,param_2[0xc]);
    auVar4._4_4_ = extraout_var_00;
    auVar4._0_4_ = extraout_s0_00;
    auVar4._8_8_ = extraout_var_02;
    return auVar4;
  }
  local_14 = 0;
  FUN_016e7ea0(param_1,&local_14,pcVar1);
  if (local_14 == 5) {
    local_18 = 0;
    FUN_016e80f0(param_1,&local_18,pcVar1);
    if (local_18 == 8) {
      fVar2 = (float)FUN_016e06d0(param_1,0,0,pcVar1,param_2[0xc]);
      if (fVar2 - *(float *)(param_2 + 4) <= 10.0) {
        fVar2 = *(float *)(param_2 + 4);
      }
      uVar6 = 0;
      uVar5 = 0;
      goto LAB_016e84ec;
    }
  }
  FUN_016e06d0(param_1,0,0,pcVar1,param_2[0xc]);
  fVar2 = extraout_s0;
  uVar5 = extraout_var;
  uVar6 = extraout_var_01;
LAB_016e84ec:
  auVar3._4_4_ = uVar5;
  auVar3._0_4_ = fVar2;
  auVar3._8_8_ = uVar6;
  return auVar3;
}

