
void FUN_030dfb3c(long *param_1)

{
  undefined **local_40;
  long *plStack_38;
  undefined1 *local_30;
  undefined8 uStack_28;
  
  FUN_034129e0(param_1 + 0xca);
  plStack_38 = param_1 + 0xa9;
  local_30 = &LAB_030e22e4;
  uStack_28 = 0;
  local_40 = &PTR_LAB_04afee00;
  if (param_1[0xa9] != 0) {
    FUN_030e22f0(param_1[0xa9],&local_40);
  }
  FUN_03411c50(param_1 + 0x43);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

