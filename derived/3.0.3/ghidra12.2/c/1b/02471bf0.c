
bool FUN_02471bf0(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(long *)(param_1 + 0x70) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    uVar2 = 0;
    if (uVar1 < 0x149) {
      uVar2 = uVar1;
    }
    if (uVar2 == 0x2b) {
      return true;
    }
  }
  return uVar2 == 0x2a;
}

