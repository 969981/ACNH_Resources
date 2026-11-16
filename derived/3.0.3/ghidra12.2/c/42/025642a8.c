
void FUN_025642a8(long param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  
  if (param_2 < 0x37) {
    if ((param_3 & 1) == 0) {
      if (0x36 < param_2) {
        return;
      }
      uVar1 = (ulong)(param_2 >> 3) & 0x1ffffffc;
      uVar2 = *(uint *)(param_1 + uVar1) & (1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU);
    }
    else {
      if (0x36 < param_2) {
        return;
      }
      uVar1 = (ulong)(param_2 >> 3) & 0x1ffffffc;
      uVar2 = *(uint *)(param_1 + uVar1) | 1 << (ulong)(param_2 & 0x1f);
    }
    *(uint *)(param_1 + uVar1) = uVar2;
  }
  return;
}

