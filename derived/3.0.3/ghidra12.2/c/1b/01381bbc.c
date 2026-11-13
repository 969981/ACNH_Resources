
undefined8 * FUN_01381bbc(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(int *)(param_2 + 8) - *(int *)(param_1 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar2 = *(int *)(param_2 + 0xc) - *(int *)(param_1 + 0x2c);
  if ((uVar3 < uVar1 && uVar2 <= *(uint *)(param_1 + 0x1c)) &&
      (uVar1 <= uVar3 || *(uint *)(param_1 + 0x1c) != uVar2)) {
    uVar3 = uVar3 + uVar1 * uVar2;
  }
  else {
    if (*(char *)(param_1 + 0x88) == '\0') {
      return &DAT_051a50f0;
    }
    uVar3 = *(int *)(param_2 + 8) - *(int *)(param_1 + 0x98);
    if (*(uint *)(param_1 + 0xa0) <= uVar3) {
      return &DAT_051a50f0;
    }
    uVar1 = *(int *)(param_2 + 0xc) - *(int *)(param_1 + 0x9c);
    if (*(uint *)(param_1 + 0xa4) <= uVar1) {
      return &DAT_051a50f0;
    }
    uVar3 = uVar3 + *(uint *)(param_1 + 0xa0) * uVar1 + *(int *)(param_1 + 0x8c);
  }
  if (*(uint *)(param_1 + 0x30) <= uVar3) {
    uVar3 = 0;
  }
  return (undefined8 *)(*(long *)(param_1 + 0x38) + (long)(int)uVar3 * 0x68);
}

