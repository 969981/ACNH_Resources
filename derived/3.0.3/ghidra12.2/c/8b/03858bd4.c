
void FUN_03858bd4(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_LAB_04b5ebd0;
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

