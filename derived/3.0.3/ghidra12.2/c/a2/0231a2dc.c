
uint FUN_0231a2dc(long param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint local_24 [3];
  byte local_18;
  undefined2 local_17;
  undefined4 local_15;
  undefined1 local_11;
  
  if ((*(int *)(param_1 + 0x1810) != 1) && (*(int *)(param_1 + 0x1810) != 9)) {
    return 0;
  }
  uVar2 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    uVar2 = 0;
    if (uVar1 < 0x149) {
      uVar2 = uVar1;
    }
  }
  if (uVar2 == 0xd) {
    uVar2 = 0;
  }
  else {
    local_11 = 0;
    local_15 = 0;
    bVar3 = *(byte *)(param_1 + 0x1ee8);
    local_17 = 0;
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    local_18 = param_2 & 1;
    local_24[0] = (uint)bVar3;
    local_24[2] = *(undefined4 *)(param_1 + 0x230);
    local_24[1] = 1;
    uVar2 = FUN_02530cec(local_24);
  }
  return uVar2 & 1;
}

