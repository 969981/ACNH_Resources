
void FUN_02e446ac(long param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  ulong uVar3;
  byte local_18 [4];
  uint local_14;
  
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0xffffffff;
  if (*(int *)(param_1 + 0x310) != 0) {
    return;
  }
  local_18[0] = *(byte *)(param_1 + 0x70);
  if (local_18[0] < 8) {
    uVar3 = FUN_02658470(local_18);
    if (((uVar3 & 1) != 0) && ((int)param_2 < 6)) {
      puVar1 = (uint *)(param_1 + 0xd0);
      puVar2 = puVar1 + (ulong)param_2 * 4;
      if (5 < param_2) {
        puVar2 = puVar1;
      }
      if ((int)param_3 < (int)*puVar2) {
        puVar2 = puVar1 + (ulong)param_2 * 4;
        if (5 < param_2) {
          puVar2 = puVar1;
        }
        if (param_3 < *puVar2) {
          if (*(long *)(*(long *)(puVar2 + 2) + (long)(int)param_3 * 8) != 0) {
            local_14 = param_2;
            FUN_02e46b3c(param_1 + 0x138);
            FUN_03ebb160(param_1 + 8,9);
          }
        }
      }
    }
  }
  return;
}

