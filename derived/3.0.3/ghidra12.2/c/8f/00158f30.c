
void FUN_00158f30(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 1;
  if (param_2 != 1) {
    if (param_2 == 2) {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x440) + 0x84);
      if ((uVar1 >> 9 & 1) != 0) {
        return;
      }
      uVar1 = (uVar1 >> 9 ^ 0xffffffff) & 1;
    }
    else {
      uVar1 = 0;
    }
  }
  if (uVar1 != (*(uint *)(param_1 + 0x41c) & 1)) {
    *(uint *)(param_1 + 0x41c) = *(uint *)(param_1 + 0x41c) & 0xfffffffe | uVar1;
  }
  return;
}

