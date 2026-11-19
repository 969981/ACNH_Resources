
undefined8 FUN_039ffa80(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x68));
  if (*(long *)(param_1 + 0x20) != param_1 + 0x18) {
    lVar2 = (long)*(int *)(param_1 + 0x2c);
    lVar4 = *(long *)(param_1 + 0x20) - lVar2;
    lVar3 = lVar4 + lVar2;
    do {
      if (lVar4 == param_2) {
        plVar1 = (long *)(lVar2 + param_2);
        if (*plVar1 != 0) {
          *(long *)(*plVar1 + 8) = plVar1[1];
        }
        if ((long *)plVar1[1] != (long *)0x0) {
          *(long *)plVar1[1] = *plVar1;
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
        if (*(long *)(param_2 + 0x2a8) != 0 || *(long *)(param_2 + 0x2a0) != 0) {
          plVar1 = (long *)(*(int *)(param_1 + 0x44) + param_2);
          if (*plVar1 != 0) {
            *(long *)(*plVar1 + 8) = plVar1[1];
          }
          if ((long *)plVar1[1] != (long *)0x0) {
            *(long *)plVar1[1] = *plVar1;
          }
          *plVar1 = 0;
          plVar1[1] = 0;
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
        }
        *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | 1;
        uVar5 = 1;
        goto LAB_039ffb7c;
      }
      lVar3 = *(long *)(lVar3 + 8);
      lVar4 = lVar3 - lVar2;
    } while (lVar4 != (param_1 + 0x18) - lVar2);
  }
  uVar5 = 0;
LAB_039ffb7c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
  return uVar5;
}

