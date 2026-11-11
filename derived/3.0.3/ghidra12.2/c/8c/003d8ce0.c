
void FUN_003d8ce0(undefined4 param_1,long param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_2 + 0x46c);
  if (0 < (int)uVar2 && param_3 != 0) {
    uVar4 = 1;
    puVar3 = (undefined4 *)(param_2 + 0x10ce8);
    do {
      if ((param_3 & 1) != 0) {
        *puVar3 = param_1;
      }
      if (uVar2 <= uVar4) {
        return;
      }
      puVar3 = puVar3 + 0x20;
      uVar4 = uVar4 + 1;
      bVar1 = 1 < param_3;
      param_3 = param_3 >> 1;
    } while (bVar1);
  }
  return;
}

