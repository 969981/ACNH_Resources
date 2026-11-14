
uint FUN_018a1f80(long param_1)

{
  uint uVar1;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined *local_d0;
  undefined1 *puStack_c8;
  undefined4 local_c0;
  undefined1 local_bc [127];
  undefined1 local_3d;
  undefined4 local_38;
  undefined2 local_34;
  undefined8 local_30;
  undefined4 local_24;
  
  local_3d = 0;
  local_100 = 0xffffffff00000000;
  local_ec = 0x3f800000;
  local_c0 = 0x80;
  local_24 = *(undefined4 *)(param_1 + 0x2cc);
  local_f8 = *(undefined4 *)(param_1 + 0x2a4);
  uStack_f4 = *(undefined4 *)(param_1 + 0x2a8);
  local_bc[0] = 0;
  local_30 = 0;
  local_34 = 0;
  local_d0 = PTR_DAT_04bb2d88 + 0x10;
  puStack_c8 = local_bc;
  local_e4 = 0;
  local_f0 = *(undefined4 *)(param_1 + 0x2ac);
  local_38 = 7;
  uStack_d8 = *(undefined4 *)(param_1 + 0x2d4);
  local_dc = 0;
  uVar1 = FUN_018b2a60(*(undefined8 *)PTR_DAT_04bb47e8,
                       *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x230),&local_24,&local_100);
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x2ac) = local_f0;
    *(ulong *)(param_1 + 0x2a4) = CONCAT44(uStack_f4,local_f8);
    *(uint *)(param_1 + 0x2b8) =
         (int)((float)(int)*(float *)(param_1 + 0x2a4) / 5.0) -
         (uint)(*(float *)(param_1 + 0x2a4) < 0.0);
    *(uint *)(param_1 + 700) =
         (int)((float)(int)*(float *)(param_1 + 0x2ac) / 5.0) -
         (uint)(*(float *)(param_1 + 0x2ac) < 0.0);
    *(undefined4 *)(param_1 + 0x2c4) = local_ec._4_4_;
  }
  return uVar1 & 1;
}

