
void FUN_03579820(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  if (0 < (int)param_1[0x45]) {
    lVar1 = 0;
    plVar2 = (long *)param_1[0x47];
    do {
      plVar3 = *(long **)(param_1[0x46] + lVar1 * 8);
      lVar1 = lVar1 + 1;
      *plVar3 = (long)plVar2;
      param_1[0x47] = (long)plVar3;
      plVar2 = plVar3;
    } while (lVar1 < (int)param_1[0x45]);
  }
  *(undefined4 *)(param_1 + 0x45) = 0;
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

