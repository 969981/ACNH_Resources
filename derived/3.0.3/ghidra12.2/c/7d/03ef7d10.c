
uint FUN_03ef7d10(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      return 4;
    }
    if (*(int *)(param_1 + 0x18) == 2) {
      return 3;
    }
    uVar2 = *(uint *)(param_1 + 0x14);
    uVar3 = (uint)(uVar2 == 0);
    uVar1 = uVar2;
  }
  else {
    if (*(int *)(param_1 + 0x14) == 0) {
      return 1;
    }
    if (*(int *)(param_1 + 0x14) == 2) {
      return 2;
    }
    uVar2 = 3;
    uVar3 = (uint)(*(uint *)(param_1 + 0x18) == 0) << 2;
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  if (uVar1 != 2) {
    uVar2 = uVar3;
  }
  return uVar2;
}

