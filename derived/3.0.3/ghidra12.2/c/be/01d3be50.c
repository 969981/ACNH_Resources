
void FUN_01d3be50(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    plVar2 = (long *)param_1[2];
    if (plVar2 != param_1 + 1) {
      plVar1 = (long *)((long)*(int *)((long)param_1 + 0x1c) + (long)param_2);
      do {
        if (plVar2 == plVar1) {
          if (*plVar1 != 0) {
            *(long *)(*plVar1 + 8) = plVar1[1];
          }
          if ((long *)plVar1[1] != (long *)0x0) {
            *(long *)plVar1[1] = *plVar1;
          }
          *plVar1 = 0;
          plVar1[1] = 0;
          *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + -1;
          if (*(char *)(param_2 + 2) == '\0') {
            (**(code **)(*(long *)*param_1 + 0x38))((long *)*param_1,*param_2);
          }
                    /* WARNING: Could not recover jumptable at 0x01d3bf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)*param_1 + 0x38))((long *)*param_1,param_2);
          return;
        }
        plVar2 = (long *)plVar2[1];
      } while (plVar2 != param_1 + 1);
    }
  }
  return;
}

