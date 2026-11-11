
void FUN_003b76d0(ulong *param_1,int param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_3 + (long)param_2 * 8;
  *(int *)(param_1 + 4) = param_2;
  param_1[3] = uVar1;
  uVar1 = uVar1 + (long)param_2 * 4 + 0x3f & 0xffffffffffffffc0;
  *param_1 = uVar1;
  param_1[1] = param_3;
  if (0 < param_2) {
    lVar2 = 0;
    do {
      FUN_003b6c80(uVar1);
      *(ulong *)(param_1[1] + lVar2 * 8) = uVar1;
      lVar2 = lVar2 + 1;
      uVar1 = uVar1 + 0x100;
    } while (lVar2 < (int)param_1[4]);
    if (0 < (int)param_1[4]) {
      lVar2 = 0;
      do {
        *(undefined4 *)(param_1[3] + lVar2 * 4) = 0xffffffff;
        lVar2 = lVar2 + 1;
      } while (lVar2 < (int)param_1[4]);
    }
  }
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}

