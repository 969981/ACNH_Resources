
int FUN_002ba614(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xc4);
  uVar3 = -uVar1;
  uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0x80) + 0x18) + 0x30);
  *(uint *)(param_1 + 0xc4) = uVar2;
  if (uVar2 < uVar1) {
    uVar3 = ~uVar1;
  }
  return uVar3 + uVar2;
}

