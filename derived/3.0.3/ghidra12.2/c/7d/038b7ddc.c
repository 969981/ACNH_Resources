
void FUN_038b7ddc(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_04bd0cb0 + 0x10);
  plVar1 = (long *)param_1[0x11];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,0);
    if ((long *)param_1[0x11] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x11] + 8))();
    }
  }
  FUN_038ba610(param_1);
  return;
}

