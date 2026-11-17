
void FUN_02e72bcc(long *param_1)

{
  undefined **local_40;
  long *plStack_38;
  undefined1 *local_30;
  undefined8 uStack_28;
  
  local_30 = &LAB_02e77914;
  uStack_28 = 0;
  plStack_38 = param_1 + 0x38a8;
  local_40 = &PTR_LAB_04ad9560;
  if (*plStack_38 != 0) {
    FUN_02e77920(*plStack_38,&local_40);
  }
  FUN_03411c50(param_1 + 0x3842);
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

