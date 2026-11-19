
void FUN_03acb560(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((*(int *)(param_1 + 0xfc0) != 0) && (uVar1 = *(uint *)(param_1 + 0x238), 0 < (int)uVar1)) {
    uVar4 = 0;
    do {
      uVar2 = 1 << (ulong)(uVar4 & 0x1f);
      uVar3 = uVar4;
      if (*(uint *)(param_1 + 0x370) <= uVar4) {
        uVar3 = 0;
      }
      *(bool *)(*(long *)(param_1 + 0x378) + (ulong)uVar3 * 0x5d0 + 0x70) =
           (*(uint *)(param_1 + 0xfc0) & uVar2) != 0;
      uVar3 = *(uint *)(param_1 + 0xfc0);
      if ((uVar3 & uVar2) != 0) {
        uVar3 = uVar4;
        if (*(uint *)(param_1 + 0x370) <= uVar4) {
          uVar3 = 0;
        }
        FUN_03ace650(*(long *)(param_1 + 0x378) + (ulong)uVar3 * 0x5d0,param_2,param_1 + 0xf24,
                     param_3,param_4);
        uVar3 = *(uint *)(param_1 + 0xfc0);
      }
      if ((uVar3 >> (ulong)(uVar4 + *(uint *)(param_1 + 0x370) & 0x1f) & 1) != 0) {
        uVar3 = uVar4;
        if (*(uint *)(param_1 + 0x370) <= uVar4) {
          uVar3 = 0;
        }
        FUN_03945ad0(param_2,*(undefined8 *)(param_1 + 0x550),uVar4,
                     *(long *)(param_1 + 0x378) + (ulong)uVar3 * 0x5d0 + 0x2e0,param_3,param_4);
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  return;
}

