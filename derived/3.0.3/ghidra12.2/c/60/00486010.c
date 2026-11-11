
void FUN_00486010(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[6];
  *param_1 = &PTR_LAB_04865d50;
  if (plVar1 != (long *)0x0) {
    FUN_0047b600(plVar1 + 2);
    if (plVar1[2] != 0) {
      FUN_004435c0();
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      (**(code **)(*(long *)plVar1[1] + 8))();
    }
    if (*plVar1 != 0) {
      FUN_004435c0();
    }
    FUN_00438870(plVar1,0x20);
  }
  if (param_1[5] != 0) {
    FUN_004435c0();
  }
  if (param_1[4] != 0) {
    FUN_004435c0();
  }
  if (param_1[3] != 0) {
    FUN_004435c0();
  }
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

