
void FUN_0327edb0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[3];
  if (plVar2 != (long *)0x0) {
    if ((long *)plVar2[3] != (long *)0x0) {
      (**(code **)(*(long *)plVar2[3] + 8))();
    }
    if ((long *)plVar2[2] != (long *)0x0) {
      (**(code **)(*(long *)plVar2[2] + 8))();
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      (**(code **)(*(long *)plVar2[1] + 8))();
    }
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 0x18))();
    }
    if (DAT_05ae7600 == 0) {
      free(plVar2);
      plVar2 = (long *)param_1[2];
      goto joined_r0x0327ee48;
    }
    plVar1 = (long *)FUN_038cb610(DAT_05ae7600,plVar2);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1,plVar2);
    }
  }
  plVar2 = (long *)param_1[2];
joined_r0x0327ee48:
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

