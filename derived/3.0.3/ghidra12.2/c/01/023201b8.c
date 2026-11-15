
undefined8 FUN_023201b8(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    uVar4 = 0;
    if (uVar1 < 0x149) {
      uVar4 = uVar1;
    }
  }
  if ((uVar4 == 0x19) && (uVar2 = FUN_0244bc64(), (uVar2 & 1) != 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

