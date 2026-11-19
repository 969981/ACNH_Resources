
uint FUN_03857320(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar1 = *param_2 ^ *param_2 << 0xb;
  uVar3 = param_2[3];
  uVar2 = *(uint *)(param_1 + 0x18);
  *param_2 = param_2[1];
  param_2[1] = param_2[2];
  uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
  param_2[2] = uVar3;
  param_2[3] = uVar1;
  if ((int)*(uint *)(param_1 + 8) < 1) {
    return 0xffffffff;
  }
  uVar3 = 0;
  uVar4 = (ulong)uVar2 * (ulong)uVar1 >> 0x20;
  do {
    if ((*(uint *)(*(long *)(param_1 + 0x10) + (ulong)(uVar3 >> 5) * 4) >> (ulong)(uVar3 & 0x1f) & 1
        ) != 0) {
      if ((int)uVar4 == 0) {
        return uVar3;
      }
      uVar4 = (ulong)((int)uVar4 - 1);
    }
    uVar3 = uVar3 + 1;
  } while (*(uint *)(param_1 + 8) != uVar3);
  return 0xffffffff;
}

