
void FUN_028bff78(undefined8 *param_1)

{
  undefined **local_40;
  long *plStack_38;
  undefined1 *local_30;
  undefined8 uStack_28;
  
  *param_1 = &PTR_FUN_04a922d8;
  local_30 = &LAB_028c0e60;
  uStack_28 = 0;
  plStack_38 = param_1 + 0xc05;
  local_40 = &PTR_LAB_04a92360;
  if (param_1[0xc05] != 0) {
    FUN_028c0e70(param_1[0xc05],&local_40);
  }
  plStack_38 = param_1 + 1;
  local_30 = &LAB_028c0d04;
  uStack_28 = 0;
  local_40 = &PTR_LAB_04a92310;
  if (*plStack_38 != 0) {
    FUN_028c0d10(*plStack_38,&local_40);
  }
  return;
}

