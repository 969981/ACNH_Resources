
void FUN_03410428(long param_1,ulong param_2)

{
  uint uVar1;
  
  if ((param_2 & 1) == 0) {
    *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) & 0xfffb;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x8c) | 4;
    *(short *)(param_1 + 0x8c) = (short)uVar1;
    if ((*(int *)(param_1 + 0x38) != 1) &&
       (uVar1 = 0xffffffffU >> (ulong)(~*(uint *)(param_1 + 0x88) & 0x1f) & uVar1,
       uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555),
       uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333),
       uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f, uVar1 = uVar1 + (uVar1 >> 8),
       (uVar1 + (uVar1 >> 0x10) & 0x3f) != 0)) {
      FUN_03ebb160(param_1 + 0x30,1);
      return;
    }
  }
  return;
}

