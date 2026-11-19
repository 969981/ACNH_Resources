
void FUN_038aacd0(int *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  
  if (((-1 < (int)param_2) && (iVar1 = *param_1, (int)param_2 <= iVar1)) && (iVar1 < param_1[1])) {
    if (iVar1 - param_2 != 0 && (int)param_2 <= iVar1) {
      memmove((void *)(*(long *)(param_1 + 2) + (ulong)(param_2 + 1) * 8),
              (void *)(*(long *)(param_1 + 2) + (ulong)param_2 * 8),
              (long)(int)((iVar1 - param_2) * 8));
    }
    *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)param_2 * 8) = param_3;
    *param_1 = *param_1 + 1;
  }
  return;
}

