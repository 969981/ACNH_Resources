
void FUN_032ae0c8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  if ((long *)param_1[0x34] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x34] + 8))();
  }
  if ((long *)param_1[0x2e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2e] + 8))();
  }
  if ((long *)param_1[0x28] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x28] + 8))();
  }
  if ((long *)param_1[0x22] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x22] + 8))();
  }
  if ((long *)param_1[0x1c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1c] + 8))();
  }
  if ((long *)param_1[0x16] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x16] + 8))();
  }
  if ((long *)param_1[0x10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x10] + 8))();
  }
  if ((long *)param_1[10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[10] + 8))();
  }
  puVar3 = param_1 + 4;
  plVar4 = (long *)*puVar3;
  if (plVar4 != (long *)0x0) {
    lVar1 = param_1[5];
    lVar2 = param_1[6];
    param_1[6] = 0;
    *puVar3 = 0;
    param_1[5] = 0;
    if ((undefined8 *)*plVar4 == puVar3) {
      *plVar4 = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = lVar1;
    }
    if (lVar1 != 0) {
      *(long *)(lVar1 + 0x10) = lVar2;
    }
  }
  param_1[5] = 0;
  param_1[6] = 0;
  *puVar3 = 0;
  FUN_032e3cd0(param_1);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

