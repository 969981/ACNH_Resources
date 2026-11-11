
void FUN_003d8ad0(long param_1,uint param_2,undefined1 param_3)

{
  bool bVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x46c);
  if (0 < (int)uVar2 && param_2 != 0) {
    uVar4 = 1;
    puVar3 = (undefined1 *)(param_1 + 0x10c99);
    do {
      if ((param_2 & 1) != 0) {
        *puVar3 = param_3;
      }
      if (uVar2 <= uVar4) {
        return;
      }
      puVar3 = puVar3 + 0x80;
      uVar4 = uVar4 + 1;
      bVar1 = 1 < param_2;
      param_2 = param_2 >> 1;
    } while (bVar1);
  }
  return;
}

