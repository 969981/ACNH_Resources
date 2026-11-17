
void FUN_02d47440(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  param_1[0x5c] = (long)(PTR_DAT_04bc7440 + 0x10);
  if (0 < (int)param_1[99]) {
    lVar2 = 0;
    do {
      plVar1 = *(long **)(param_1[100] + lVar2 * 8);
      (**(code **)*plVar1)(plVar1);
      lVar2 = lVar2 + 1;
      *plVar1 = param_1[0x65];
      param_1[0x65] = (long)plVar1;
    } while (lVar2 < (int)param_1[99]);
  }
  *(undefined4 *)(param_1 + 99) = 0;
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

