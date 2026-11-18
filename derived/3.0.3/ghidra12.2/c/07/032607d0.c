
void FUN_032607d0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x238);
  if (0 < (int)uVar2) {
    uVar3 = 0;
    do {
      uVar1 = uVar3;
      if (uVar2 <= uVar3) {
        uVar1 = 0;
      }
      FUN_03869260(param_1,*(undefined8 *)(*(long *)(param_1 + 0x240) + (ulong)uVar1 * 8));
      uVar2 = *(uint *)(param_1 + 0x238);
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < (int)uVar2);
  }
  FUN_03d5c660(*(undefined8 *)(param_1 + 0x218),0);
  return;
}

