
void FUN_00361378(long param_1)

{
  ushort uVar1;
  
  *(undefined4 *)(param_1 + 0x3c) = 0;
  uVar1 = FUN_0035d97c();
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xfffffff0;
  *(float *)(param_1 + 0x20) = (float)uVar1;
  return;
}

