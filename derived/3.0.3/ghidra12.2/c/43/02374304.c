
void FUN_02374304(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    uVar2 = 0;
    if (uVar1 < 0x149) {
      uVar2 = uVar1;
    }
  }
  FUN_0251d928(uVar2);
  return;
}

