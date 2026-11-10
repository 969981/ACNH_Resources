
int FUN_002ba5e8(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xc0);
  uVar3 = -uVar1;
  uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0x80) + 0x20) + 0x30);
  *(uint *)(param_1 + 0xc0) = uVar2;
  if (uVar2 < uVar1) {
    uVar3 = ~uVar1;
  }
  return uVar3 + uVar2;
}

