
undefined8 FUN_01dfcf00(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  uVar1 = 0;
  *(undefined1 *)(param_1 + 0x10b) = 0;
  if (((*(char *)(param_1 + 0x108) != '\0') && (*(char *)(param_1 + 0x109) != '\0')) &&
     (*param_2 != 0)) {
    *(undefined1 *)(param_1 + 0x2a0) = 0;
    if (0 < *(int *)(param_1 + 0x280)) {
      lVar2 = 0;
      puVar4 = *(undefined8 **)(param_1 + 0x290);
      do {
        puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x288) + lVar2 * 8);
        lVar2 = lVar2 + 1;
        *puVar5 = puVar4;
        *(undefined8 **)(param_1 + 0x290) = puVar5;
        puVar4 = puVar5;
      } while (lVar2 < *(int *)(param_1 + 0x280));
    }
    *(undefined4 *)(param_1 + 0x280) = 0;
    if (0 < *(int *)(param_1 + 0x284)) {
      plVar3 = *(long **)(param_1 + 0x290);
      if (plVar3 != (long *)0x0) {
        *(long *)(param_1 + 0x290) = *plVar3;
      }
      *plVar3 = *param_2;
      if (*(int *)(param_1 + 0x280) < *(int *)(param_1 + 0x284)) {
        *(long **)(*(long *)(param_1 + 0x288) + (long)*(int *)(param_1 + 0x280) * 8) = plVar3;
        *(int *)(param_1 + 0x280) = *(int *)(param_1 + 0x280) + 1;
      }
    }
    *(undefined4 *)(param_1 + 0x2d0) = 0x11;
    nn::os::LockMutex((MutexType *)(param_1 + 0x658));
    FUN_03ebb160(param_1 + 8,2);
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x658));
    uVar1 = 1;
  }
  return uVar1;
}

