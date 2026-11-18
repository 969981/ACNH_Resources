
void FUN_0327f04c(undefined8 *param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[3];
  puVar1 = (undefined1 *)0x0;
  if (plVar3 != (long *)0x0) {
    puVar1 = &LAB_0327f5b4;
  }
  if (puVar1 != (undefined1 *)0x0) {
    plVar2 = (long *)plVar3[3];
    plVar3[3] = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = (long *)*plVar3;
    *plVar3 = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))();
    }
    plVar2 = (long *)plVar3[1];
    plVar3[1] = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = (long *)plVar3[2];
    plVar3[2] = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar3 = (long *)param_1[3];
    param_1[3] = 0;
    if (plVar3 != (long *)0x0) {
      if ((long *)plVar3[3] != (long *)0x0) {
        (**(code **)(*(long *)plVar3[3] + 8))();
      }
      if ((long *)plVar3[2] != (long *)0x0) {
        (**(code **)(*(long *)plVar3[2] + 8))();
      }
      if ((long *)plVar3[1] != (long *)0x0) {
        (**(code **)(*(long *)plVar3[1] + 8))();
      }
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 0x18))();
      }
      if (DAT_05ae7600 == 0) {
        free(plVar3);
      }
      else {
        plVar2 = (long *)FUN_038cb610(DAT_05ae7600,plVar3);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,plVar3);
        }
      }
    }
  }
  puVar1 = (undefined1 *)0x0;
  if ((long *)param_1[2] != (long *)0x0) {
    puVar1 = &LAB_0327f5b8;
  }
  if (puVar1 != (undefined1 *)0x0) {
    (**(code **)(*(long *)param_1[2] + 0x38))();
    plVar3 = (long *)param_1[2];
    param_1[2] = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

