
void FUN_03bcf690(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_04b7b2a0;
  if (*(char *)(param_1 + 9) != '\0') {
    if ((long *)param_1[3] != (long *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0x28))();
    }
    if ((long *)param_1[4] != (long *)0x0) {
      (**(code **)(*(long *)param_1[4] + 0x30))();
    }
    if (*(int *)(param_1 + 7) != 0) {
      if ((undefined8 *)param_1[6] != param_1 + 5) {
        lVar2 = (long)*(int *)((long)param_1 + 0x3c);
        plVar1 = (long *)((long)param_1[6] - lVar2);
        do {
          (**(code **)(*plVar1 + 0x28))(plVar1);
          plVar1 = (long *)(*(long *)((long)plVar1 + lVar2 + 8) - lVar2);
        } while (plVar1 != (long *)((long)(param_1 + 5) - (long)*(int *)((long)param_1 + 0x3c)));
      }
    }
    if ((long *)param_1[1] != (long *)0x0) {
      (**(code **)(*(long *)param_1[1] + 0x28))();
    }
    *(undefined1 *)(param_1 + 9) = 0;
  }
  if ((*(char *)((long)param_1 + 0x49) != '\0') && ((long *)param_1[1] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[1] + 0x18))();
    param_1[1] = 0;
  }
  if ((*(char *)((long)param_1 + 0x4b) != '\0') && ((long *)param_1[3] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[3] + 0x18))();
    param_1[3] = 0;
  }
  if ((*(char *)((long)param_1 + 0x4a) != '\0') && ((long *)param_1[2] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[2] + 8))();
    param_1[2] = 0;
  }
  return;
}

