
bool FUN_01d774b0(long param_1,undefined4 *param_2)

{
  undefined4 *__ptr;
  int iVar1;
  long *plVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    if (iVar1 < 1) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = *(long **)(param_1 + 8);
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    }
    __ptr = (undefined4 *)0x0;
    if (plVar2 != (long *)0x0) {
      __ptr = (undefined4 *)((long)plVar2 - (long)*(int *)(param_1 + 0x14));
    }
    if (param_2 == (undefined4 *)0x0) {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      if (__ptr == (undefined4 *)0x0) goto LAB_01d77584;
    }
    else {
      *param_2 = *__ptr;
      *(undefined8 *)(param_2 + 1) = *(undefined8 *)(__ptr + 1);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    }
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
LAB_01d77584:
  return iVar1 != 0;
}

