
ulong FUN_02286bd4(long param_1,ulong param_2)

{
  ulong uVar1;
  float fVar2;
  undefined8 local_f8;
  undefined8 local_f0;
  float local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined *local_c8;
  undefined1 *puStack_c0;
  undefined4 local_b8;
  undefined1 local_b4 [127];
  undefined1 local_35;
  undefined4 local_30;
  undefined2 local_2c;
  undefined8 local_28;
  
  local_e8 = 0.0;
  local_e4 = 0x3f800000;
  local_f8 = 0x4f00000000;
  local_f0 = 0;
  puStack_c0 = local_b4;
  local_b8 = 0x80;
  local_35 = 0;
  local_b4[0] = 0;
  local_c8 = PTR_DAT_04bb2d88 + 0x10;
  local_28 = 0;
  local_2c = 0;
  param_1 = param_1 + (param_2 & 0xffffffff) * 0x38;
  local_30 = 7;
  local_dc = 0;
  uStack_d8 = 0;
  local_d4 = 0;
  uStack_d0 = 0;
  fVar2 = (float)FUN_0093a950(DAT_04cfae30 + 0x28,param_1 + 0x2d8,0);
  uStack_d8 = 0;
  local_d4 = 0;
  local_e8 = *(float *)(param_1 + 0x2e0);
  *(float *)(param_1 + 0x2dc) = fVar2;
  local_f0 = CONCAT44(fVar2,*(float *)(param_1 + 0x2d8));
  local_dc = *(undefined4 *)(param_1 + 0x2d4);
  local_e4 = CONCAT44(local_e4._4_4_,*(undefined4 *)(param_1 + 0x300));
  if (((fVar2 == 0.0) && (*(float *)(param_1 + 0x2d8) == 0.0)) && (local_e8 == 0.0)) {
    uVar1 = (ulong)DAT_04c9a0c8;
  }
  else {
    uVar1 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_f8,DAT_05472818,1);
  }
  return uVar1;
}

