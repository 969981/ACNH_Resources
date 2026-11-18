
void FUN_0371aae0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_04b45f90;
  if (0 < *(int *)(param_1 + 0x247a)) {
    lVar1 = 0;
    do {
      (**(code **)**(undefined8 **)(param_1[0x247b] + lVar1 * 8))();
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x247a));
  }
  if (0 < *(int *)(param_1 + 0x247)) {
    lVar1 = 0;
    do {
      (**(code **)**(undefined8 **)(param_1[0x248] + lVar1 * 8))();
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x247));
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    lVar1 = 0;
    do {
      (**(code **)**(undefined8 **)(param_1[0x1d] + lVar1 * 8))();
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x1c));
  }
  param_1[1] = &PTR_LAB_04a74f20;
  return;
}

