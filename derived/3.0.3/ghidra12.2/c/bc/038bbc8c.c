
void FUN_038bbc8c(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    nn::os::LockMutex((MutexType *)(*(long *)(param_1 + 0x78) + 0x20));
  }
  plVar3 = (long *)(param_2 + 0x20);
  lVar1 = *plVar3;
  if ((lVar1 == 0) || (*(long **)(lVar1 + 8) != plVar3)) {
    if (*(long *)(param_2 + 0x38) != 0) {
      *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10) = *(undefined8 *)(param_2 + 0x30);
    }
    lVar1 = *(long *)(param_2 + 0x30);
    if (lVar1 != 0) goto LAB_038bbd0c;
    if (*plVar3 != 0) {
      *(undefined8 *)(*(long *)(*plVar3 + 8) + 0x18) = *(undefined8 *)(param_2 + 0x38);
    }
  }
  else {
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_2 + 0x30);
    lVar1 = *(long *)(param_2 + 0x30);
    if (lVar1 != 0) {
LAB_038bbd0c:
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x30) = 0;
    }
  }
  plVar4 = (long *)(param_2 + 0x38);
  *plVar4 = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_1 + 0x78);
  if ((*(long *)(param_2 + 0x28) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_2 + 0x28) + 0x20), lVar1 == 0)) {
LAB_038bbd74:
    if (*plVar4 != 0) {
      *(undefined8 *)(*plVar4 + 0x10) = *(undefined8 *)(param_2 + 0x30);
    }
    lVar1 = *(long *)(param_2 + 0x30);
    if (lVar1 == 0) {
      if (*plVar3 != 0) {
        *(long *)(*(long *)(*plVar3 + 8) + 0x18) = *plVar4;
      }
      goto LAB_038bbdb0;
    }
  }
  else {
    FUN_038bbc40(lVar1,*(undefined8 *)(param_1 + 0x78));
    lVar1 = *plVar3;
    if ((lVar1 == 0) || (*(long **)(lVar1 + 8) != plVar3)) goto LAB_038bbd74;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_2 + 0x30);
    lVar1 = *(long *)(param_2 + 0x30);
    if (lVar1 == 0) goto LAB_038bbdb0;
  }
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = 0;
LAB_038bbdb0:
  *plVar4 = 0;
  *plVar3 = 0;
  plVar2 = (long *)(param_1 + 0x28);
  if (*plVar2 != 0) {
    *(long *)(param_2 + 0x30) = *plVar2;
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(*plVar2 + 0x18);
    plVar4 = plVar2;
    plVar2 = (long *)(*plVar2 + 0x18);
  }
  *plVar2 = (long)plVar3;
  *plVar4 = (long)plVar3;
  *plVar3 = param_1 + 0x20;
  if (*(long *)(param_1 + 0x78) == 0) {
    return;
  }
  nn::os::UnlockMutex((MutexType *)(*(long *)(param_1 + 0x78) + 0x20));
  return;
}

