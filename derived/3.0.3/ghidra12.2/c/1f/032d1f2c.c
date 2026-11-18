
void FUN_032d1f2c(undefined8 *param_1)

{
  long *plVar1;
  undefined **local_40;
  long *plStack_38;
  undefined1 *local_30;
  undefined8 uStack_28;
  
  *param_1 = &PTR_LAB_04b1b5b8;
  local_30 = &LAB_032d22f8;
  uStack_28 = 0;
  plStack_38 = param_1 + 1;
  local_40 = &PTR_LAB_04b1b608;
  if (*plStack_38 != 0) {
    FUN_032d2300(*plStack_38,&local_40);
  }
  if (DAT_05ae7600 == 0) {
    free(param_1);
  }
  else {
    plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
    }
  }
  return;
}

