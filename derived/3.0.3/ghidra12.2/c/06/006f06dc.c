
float FUN_006f06dc(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 - param_2;
  if (param_1 <= param_2) {
    uVar2 = param_2 - param_1;
  }
  uVar1 = -uVar2;
  if (uVar2 < 0x80000001) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if (param_1 != param_2) {
    uVar2 = uVar1;
  }
  return *(float *)(PTR_DAT_04bb2d00 + (ulong)(uVar2 >> 0x18) * 0x10 + 8) +
         *(float *)(PTR_DAT_04bb2d00 + (ulong)(uVar2 >> 0x18) * 0x10 + 0xc) *
         (float)(uVar2 & 0xffffff) * 5.9604645e-08;
}

