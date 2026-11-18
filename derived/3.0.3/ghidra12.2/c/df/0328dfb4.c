
void FUN_0328dfb4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  *param_1 = &PTR_FUN_04b17f70;
  if ((long *)param_1[7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 8))();
  }
  puVar3 = param_1 + 1;
  plVar4 = (long *)*puVar3;
  if (plVar4 != (long *)0x0) {
    lVar1 = param_1[2];
    lVar2 = param_1[3];
    param_1[3] = 0;
    *puVar3 = 0;
    param_1[2] = 0;
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
  param_1[2] = 0;
  param_1[3] = 0;
  *puVar3 = 0;
  return;
}

