
void FUN_003bba34(undefined8 param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  
  fVar1 = (float)NEON_ucvtf((uint)*(byte *)(param_3 + 10));
  FUN_003cfaf4(fVar1 / 127.0,param_2);
  FUN_003cfc28(param_2,*(undefined4 *)(param_3 + 0xc));
  FUN_003cfc90(param_2,*(undefined4 *)(param_3 + 0x10));
  return;
}

