
void FUN_03b6cd68(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *__ptr;
  
  if ((undefined8 *)*param_1 == (undefined8 *)0x0) goto LAB_03b6ce5c;
  plVar4 = *(long **)*param_1;
  if ((long *)*plVar4 != (long *)0x0) {
    (**(code **)(*(long *)*plVar4 + 8))();
    plVar4 = *(long **)*param_1;
  }
  if ((long *)plVar4[1] != (long *)0x0) {
    (**(code **)(*(long *)plVar4[1] + 8))();
    plVar4 = *(long **)*param_1;
  }
  puVar1 = PTR_DAT_04bb2698;
  if ((long *)plVar4[2] == (long *)0x0) {
LAB_03b6cde8:
    lVar2 = *(long *)puVar1;
    if (lVar2 == 0) {
      free(plVar4);
      __ptr = (undefined8 *)*param_1;
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar2,plVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,plVar4);
      }
      __ptr = (undefined8 *)*param_1;
    }
    if (__ptr != (undefined8 *)0x0) goto LAB_03b6ce28;
  }
  else {
    (**(code **)(*(long *)plVar4[2] + 8))();
    __ptr = (undefined8 *)*param_1;
    plVar4 = (long *)*__ptr;
    if (plVar4 != (long *)0x0) goto LAB_03b6cde8;
LAB_03b6ce28:
    lVar2 = *(long *)puVar1;
    if (lVar2 == 0) {
      free(__ptr);
    }
    else {
      plVar4 = (long *)FUN_038cb610(lVar2,__ptr);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
      }
    }
  }
  *param_1 = 0;
LAB_03b6ce5c:
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
    param_1[1] = 0;
  }
  return;
}

