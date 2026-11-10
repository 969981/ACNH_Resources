
undefined4 FUN_00357d10(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_38 = param_1[10];
  uStack_30 = param_1[0xb];
  local_28 = param_1[0xc];
  local_58 = param_1[6];
  uStack_50 = param_1[7];
  local_48 = param_1[8];
  uStack_40 = param_1[9];
  local_78 = param_1[2];
  uStack_70 = param_1[3];
  local_68 = param_1[4];
  uStack_60 = param_1[5];
  local_88 = *param_1;
  uStack_80 = param_1[1];
  uVar1 = FUN_00357da0(&local_88);
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_70;
  *(undefined4 *)((long)param_1 + 0x14) = local_78._4_4_;
  thunk_FUN_0035008c(&local_88);
  return uVar1;
}

