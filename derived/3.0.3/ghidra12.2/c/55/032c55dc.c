
void FUN_032c55dc(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_038cefc4();
  if (uVar1 < 0x10) {
    uVar1 = *(uint *)(&DAT_04184788 + (long)(int)uVar1 * 4);
  }
  else {
    uVar1 = 1;
  }
  *(uint *)(param_1 + 8) = uVar1;
  if (uVar1 < 0xf) {
    uVar2 = *(undefined8 *)(&DAT_041847c8 + (long)(int)uVar1 * 8);
  }
  else {
    uVar2 = 0x53552d6e65;
  }
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  return;
}

