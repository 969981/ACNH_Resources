
void FUN_004c4de0(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (0 < (int)uVar1) {
    lVar2 = 0;
    do {
      if (*(long *)(*param_2 + lVar2 * 8) == param_1) {
        if (-1 < (int)lVar2) {
          return;
        }
        break;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)uVar1);
  }
  if (uVar1 == (*(uint *)((long)param_2 + 0xc) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607c0,param_2,8);
    uVar1 = *(uint *)(param_2 + 1);
  }
  *(long *)(*param_2 + (long)(int)uVar1 * 8) = param_1;
  *(uint *)(param_2 + 1) = uVar1 + 1;
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar2 = 0;
    do {
      FUN_004c4de0(*(undefined8 *)(*(long *)(param_1 + 0x40) + lVar2 * 8),param_2);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x48));
  }
  return;
}

