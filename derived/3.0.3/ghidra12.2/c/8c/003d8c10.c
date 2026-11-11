
void FUN_003d8c10(long param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x46c);
  if (0 < (int)uVar2 && param_2 != 0) {
    uVar4 = 1;
    puVar3 = (undefined4 *)(param_1 + (ulong)param_3 * 0x18 + 0x10cc0);
    do {
      if ((param_2 & 1) != 0) {
        puVar3[-3] = *param_4;
        puVar3[-2] = param_4[1];
        puVar3[-1] = param_4[2];
        *puVar3 = param_4[3];
        puVar3[1] = param_4[4];
        puVar3[2] = param_4[5];
      }
      if (uVar2 <= uVar4) {
        return;
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 0x20;
      bVar1 = 1 < param_2;
      param_2 = param_2 >> 1;
    } while (bVar1);
  }
  return;
}

