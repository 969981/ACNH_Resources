
void FUN_02cbfe78(long *param_1)

{
  undefined **local_40;
  long *plStack_38;
  undefined1 *local_30;
  undefined8 uStack_28;
  
  local_30 = &LAB_02cc5b24;
  uStack_28 = 0;
  plStack_38 = param_1 + 0x39d6;
  local_40 = &PTR_LAB_04ab7080;
  if (*plStack_38 != 0) {
    FUN_02cc5b30(*plStack_38,&local_40);
  }
  FUN_03465b80(param_1 + 0x3850);
  FUN_034129e0(param_1 + 0x45);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

