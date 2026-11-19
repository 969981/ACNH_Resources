
void FUN_03b2c244(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  FUN_0037bc10();
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1b] = param_1 + 0x1b;
  param_1[0x1c] = param_1 + 0x1b;
  *param_1 = &PTR_FUN_04b75138;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  puVar1 = PTR_DAT_04bc8e10 + 0x10;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x20] = puVar1;
  param_1[0x21] = 0xffffffffffffffff;
  param_1[0x41] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = &PTR_FUN_04b65d70;
  param_1[0x25] = &DAT_3f8000003f800000;
  param_1[0x26] = 0;
  param_1[0x27] = &DAT_3f8000003f800000;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  param_1[0x44] = "agl::TextureData";
  *(undefined4 *)(param_1 + 0x45) = 0x10000;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xff;
  *(undefined4 *)((long)param_1 + 0x244) = 0;
  param_1[0x31] = PTR_DAT_04bd1198 + 0x10;
  param_1[0x49] = 0x80000000000;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  FUN_03b2c350(param_1,*(undefined8 *)(param_3 + 0x20));
  return;
}

