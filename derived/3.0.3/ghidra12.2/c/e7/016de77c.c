
void FUN_016de77c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
  undefined4 local_b8;
  undefined1 local_b4 [127];
  undefined1 local_35;
  undefined4 local_30;
  undefined2 local_2c;
  undefined8 local_28;
  
  local_35 = 0;
  local_e4 = 0x3f800000;
  local_b8 = 0x80;
  puStack_c0 = local_b4;
  local_30 = 7;
  local_b4[0] = 0;
  local_e8 = *(undefined4 *)(param_2 + 0x10);
  local_28 = 0;
  local_2c = 0;
  local_dc = 0;
  local_d4 = 0;
  local_c8 = &DAT_048fc708;
  uStack_f0 = *(undefined8 *)(param_2 + 8);
  local_f8 = 0x8700000000;
  uVar1 = FUN_007402e0(DAT_04c93e08,&local_f8,*(undefined4 *)(param_1 + 0x230),0);
  *(undefined4 *)(param_1 + 0x388) = uVar1;
  return;
}

