
void FUN_00757510(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  void *__ptr;
  
  __ptr = (void *)param_1[0x276];
  *param_1 = &PTR_LAB_04906188;
  if (__ptr == (void *)0x0) goto LAB_00757600;
  plVar2 = (long *)param_1[0x273];
  if (plVar2 == param_1 + 0x272) {
LAB_007575c0:
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
  }
  else {
    do {
      plVar1 = (long *)plVar2[1];
      plVar3 = plVar1;
      if (*plVar2 != 0) {
        *(long **)(*plVar2 + 8) = plVar1;
        plVar3 = (long *)plVar2[1];
      }
      if (plVar3 != (long *)0x0) {
        *plVar3 = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + -1;
      plVar2[-0x14] = param_1[0x275];
      param_1[0x275] = plVar2 + -0x14;
      plVar2 = plVar1;
    } while (plVar1 != param_1 + 0x272);
    __ptr = (void *)param_1[0x276];
    if (__ptr != (void *)0x0) goto LAB_007575c0;
  }
  *(undefined4 *)(param_1 + 0x277) = 0;
  param_1[0x275] = 0;
  param_1[0x276] = 0;
LAB_00757600:
  *param_1 = &PTR_LAB_049056e8;
  FUN_0161b2d0(param_1 + 0x23e);
  *param_1 = &PTR_LAB_04903708;
  FUN_016101cc(param_1 + 0x22c);
  return;
}

