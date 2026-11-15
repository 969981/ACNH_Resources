
undefined8 FUN_01dfd010(long param_1,int *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  uVar1 = 0;
  *(undefined1 *)(param_1 + 0x10b) = 0;
  if (((*(char *)(param_1 + 0x108) != '\0') && (*(char *)(param_1 + 0x109) != '\0')) &&
     (*param_2 != 0)) {
    *(undefined1 *)(param_1 + 0x2a0) = 1;
    if (0 < *(int *)(param_1 + 0x280)) {
      lVar2 = 0;
      puVar3 = *(undefined8 **)(param_1 + 0x290);
      do {
        puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x288) + lVar2 * 8);
        lVar2 = lVar2 + 1;
        *puVar5 = puVar3;
        *(undefined8 **)(param_1 + 0x290) = puVar5;
        puVar3 = puVar5;
      } while (lVar2 < *(int *)(param_1 + 0x280));
    }
    *(undefined4 *)(param_1 + 0x280) = 0;
    if ((*param_2 != 0) && (0 < *(int *)(param_1 + 0x284))) {
      puVar3 = *(undefined8 **)(param_2 + 2);
      iVar4 = 0;
      lVar2 = (long)*param_2 << 3;
      do {
        if (iVar4 < *(int *)(param_1 + 0x284)) {
          puVar5 = (undefined8 *)*puVar3;
          puVar6 = *(undefined8 **)(param_1 + 0x290);
          if (puVar6 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x290) = *puVar6;
          }
          *puVar6 = *puVar5;
          iVar4 = *(int *)(param_1 + 0x280);
          if (iVar4 < *(int *)(param_1 + 0x284)) {
            *(undefined8 **)(*(long *)(param_1 + 0x288) + (long)iVar4 * 8) = puVar6;
            iVar4 = *(int *)(param_1 + 0x280) + 1;
            *(int *)(param_1 + 0x280) = iVar4;
          }
        }
        puVar3 = puVar3 + 1;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
    *(undefined4 *)(param_1 + 0x2d0) = 0x11;
    nn::os::LockMutex((MutexType *)(param_1 + 0x658));
    FUN_03ebb160(param_1 + 8,2);
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x658));
    uVar1 = 1;
  }
  return uVar1;
}

