
void FUN_038beda0(long param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x20));
  lVar2 = *(long *)(param_3 + 0x80);
  puVar1 = (undefined8 *)(param_3 + 0x68);
  if (lVar2 != 0) {
    *(undefined8 *)(param_3 + 0x80) = 0;
    if (*(long *)(param_3 + 0x68) != 0) {
      *(undefined8 *)(*(long *)(param_3 + 0x68) + 8) = *(undefined8 *)(param_3 + 0x70);
    }
    if (*(undefined8 **)(param_3 + 0x70) != (undefined8 *)0x0) {
      **(undefined8 **)(param_3 + 0x70) = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_3 + 0x70) = 0;
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  plVar3 = param_2;
  do {
    plVar3 = (long *)plVar3[1];
    if (plVar3 == param_2) {
      lVar2 = *(long *)(param_3 + 0x80);
      plVar3 = param_2;
      if (lVar2 == 0) goto LAB_038bee84;
      goto LAB_038bee50;
    }
    lVar2 = plVar3[2];
  } while (*(int *)(param_3 + 0xbc) <= *(int *)(lVar2 + 0xbc));
  param_2 = (long *)(lVar2 + 0x68);
  plVar3 = *(long **)(lVar2 + 0x80);
  lVar2 = *(long *)(param_3 + 0x80);
  if (lVar2 != 0) {
LAB_038bee50:
    *(undefined8 *)(param_3 + 0x80) = 0;
    if (*(long *)(param_3 + 0x68) != 0) {
      *(undefined8 *)(*(long *)(param_3 + 0x68) + 8) = *(undefined8 *)(param_3 + 0x70);
    }
    if (*(undefined8 **)(param_3 + 0x70) != (undefined8 *)0x0) {
      **(undefined8 **)(param_3 + 0x70) = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_3 + 0x70) = 0;
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
LAB_038bee84:
  *(long **)(param_3 + 0x80) = plVar3;
  lVar2 = *param_2;
  *param_2 = (long)puVar1;
  *(long *)(param_3 + 0x68) = lVar2;
  *(long **)(param_3 + 0x70) = param_2;
  if (lVar2 != 0) {
    *(undefined8 **)(lVar2 + 8) = puVar1;
  }
  *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x20));
  return;
}

