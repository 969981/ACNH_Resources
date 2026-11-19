
void FUN_038bbab4(long param_1,long param_2)

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
    if (lVar1 != 0) goto LAB_038bbb34;
    if (*plVar3 != 0) {
      *(undefined8 *)(*(long *)(*plVar3 + 8) + 0x18) = *(undefined8 *)(param_2 + 0x38);
    }
  }
  else {
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_2 + 0x30);
    lVar1 = *(long *)(param_2 + 0x30);
    if (lVar1 != 0) {
LAB_038bbb34:
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
LAB_038bbb9c:
    if (*plVar4 != 0) {
      *(undefined8 *)(*plVar4 + 0x10) = *(undefined8 *)(param_2 + 0x30);
    }
    lVar1 = *(long *)(param_2 + 0x30);
    if (lVar1 == 0) {
      if (*plVar3 != 0) {
        *(long *)(*(long *)(*plVar3 + 8) + 0x18) = *plVar4;
      }
      goto LAB_038bbbd8;
    }
  }
  else {
    FUN_038bbc40(lVar1,*(undefined8 *)(param_1 + 0x78));
    lVar1 = *plVar3;
    if ((lVar1 == 0) || (*(long **)(lVar1 + 8) != plVar3)) goto LAB_038bbb9c;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_2 + 0x30);
    lVar1 = *(long *)(param_2 + 0x30);
    if (lVar1 == 0) goto LAB_038bbbd8;
  }
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = 0;
LAB_038bbbd8:
  *plVar4 = 0;
  *plVar3 = 0;
  if (*(long *)(param_1 + 0x28) == 0) {
    *(long **)(param_1 + 0x28) = plVar3;
    *plVar3 = param_1 + 0x20;
  }
  else {
    plVar2 = *(long **)(*(long *)(param_1 + 0x28) + 0x18);
    plVar2[2] = (long)plVar3;
    *plVar4 = (long)plVar2;
    *plVar3 = *plVar2;
    plVar4 = (long *)(*(long *)(param_1 + 0x28) + 0x18);
  }
  *plVar4 = (long)plVar3;
  if (*(long *)(param_1 + 0x78) == 0) {
    return;
  }
  nn::os::UnlockMutex((MutexType *)(*(long *)(param_1 + 0x78) + 0x20));
  return;
}

