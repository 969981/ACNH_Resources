
void FUN_038bbe20(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 0x78);
  FUN_038bbc40(param_1,0);
  *(long *)(param_1 + 0x78) = lVar1;
  if (lVar1 != 0) {
    nn::os::LockMutex((MutexType *)(lVar1 + 0x20));
  }
  plVar2 = (long *)(param_1 + 0x20);
  lVar1 = *plVar2;
  if ((lVar1 == 0) || (*(long **)(lVar1 + 8) != plVar2)) {
    if (*(long *)(param_1 + 0x38) != 0) {
      *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10) = *(undefined8 *)(param_1 + 0x30);
    }
    lVar1 = *(long *)(param_1 + 0x30);
    if (lVar1 == 0) {
      if (*plVar2 != 0) {
        *(undefined8 *)(*(long *)(*plVar2 + 8) + 0x18) = *(undefined8 *)(param_1 + 0x38);
      }
      goto LAB_038bbeb0;
    }
  }
  else {
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 0x30);
    lVar1 = *(long *)(param_1 + 0x30);
    if (lVar1 == 0) goto LAB_038bbeb0;
  }
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = 0;
LAB_038bbeb0:
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_038aae00(plVar2);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *plVar2 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(long *)(param_1 + 0x78) != 0) {
    nn::os::UnlockMutex((MutexType *)(*(long *)(param_1 + 0x78) + 0x20));
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}

