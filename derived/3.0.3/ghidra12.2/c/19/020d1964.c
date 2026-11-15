
void FUN_020d1964(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = param_2 + 2;
  if (*plVar1 != 0) {
    *(undefined8 *)(*plVar1 + 8) = param_2[3];
  }
  if ((long *)param_2[3] != (long *)0x0) {
    *(long *)param_2[3] = *plVar1;
  }
  *plVar1 = 0;
  param_2[3] = 0;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  (**(code **)*param_2)(param_2);
  *param_2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x18) = param_2;
  return;
}

