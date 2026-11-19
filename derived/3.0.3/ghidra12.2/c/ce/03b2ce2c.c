
void FUN_03b2ce2c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  FUN_0037bc10();
  *param_1 = &PTR_FUN_04b75228;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)((long)param_1 + 0xd2) = 0x100;
  puVar1 = PTR_DAT_04bc8e10 + 0x10;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1d] = puVar1;
  param_1[0x1e] = 0xffffffffffffffff;
  param_1[0x3a] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = &PTR_FUN_04b65d70;
  param_1[0x22] = &DAT_3f8000003f800000;
  param_1[0x23] = 0;
  param_1[0x24] = &DAT_3f8000003f800000;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0xffffffff;
  param_1[0x41] = "agl::TextureData";
  *(undefined4 *)(param_1 + 0x42) = 0x10000;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0xff;
  *(undefined4 *)((long)param_1 + 0x22c) = 0;
  param_1[0x2e] = PTR_DAT_04bd1198 + 0x10;
  param_1[0x46] = 0x80000000000;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  FUN_03b2cf30(param_1,*(undefined8 *)(param_3 + 0x20));
  return;
}

