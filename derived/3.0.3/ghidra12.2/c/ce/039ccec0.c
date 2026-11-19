
void FUN_039ccec0(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  int *piVar5;
  
  plVar2 = *(long **)(param_1 + 0x48);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x138));
  if (*(long *)(param_2 + 0x220) != 0 || *(long *)(param_2 + 0x218) != 0) {
    plVar2 = (long *)(*(int *)(param_1 + 0x16c) + param_2);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + -1;
  }
  if (*(long *)(param_2 + 0x230) != 0 || *(long *)(param_2 + 0x228) != 0) {
    plVar2 = *(long **)(param_1 + 0x178);
    if (plVar2 != (long *)(param_1 + 0x170)) {
      plVar4 = (long *)(*(int *)(param_1 + 0x184) + param_2);
      do {
        if (plVar2 == plVar4) {
          if (*plVar4 != 0) {
            *(long *)(*plVar4 + 8) = plVar4[1];
          }
          if ((long *)plVar4[1] != (long *)0x0) {
            *(long *)plVar4[1] = *plVar4;
          }
          piVar5 = (int *)(param_1 + 0x180);
          goto LAB_039cd004;
        }
        plVar2 = (long *)plVar2[1];
      } while (plVar2 != (long *)(param_1 + 0x170));
    }
    plVar2 = *(long **)(param_1 + 400);
    if (plVar2 != (long *)(param_1 + 0x188)) {
      plVar4 = (long *)(*(int *)(param_1 + 0x19c) + param_2);
      do {
        if (plVar2 == plVar4) {
          if (*plVar4 != 0) {
            *(long *)(*plVar4 + 8) = plVar4[1];
          }
          if ((long *)plVar4[1] != (long *)0x0) {
            *(long *)plVar4[1] = *plVar4;
          }
          piVar5 = (int *)(param_1 + 0x198);
LAB_039cd004:
          *plVar4 = 0;
          plVar4[1] = 0;
          *piVar5 = *piVar5 + -1;
          break;
        }
        plVar2 = (long *)plVar2[1];
      } while (plVar2 != (long *)(param_1 + 0x188));
    }
  }
  if (*(int *)(param_1 + 0x1b0) != 0) {
    (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x1b8) + 8))();
    uVar1 = *(int *)(param_1 + 0x1b0) - 1;
    if (0 < *(int *)(param_1 + 0x1b0)) {
      if (uVar1 == 0) {
        iVar3 = 0;
      }
      else {
        memmove(*(void **)(param_1 + 0x1b8),(void *)((long)*(void **)(param_1 + 0x1b8) + 8),
                (ulong)uVar1 << 3);
        iVar3 = *(int *)(param_1 + 0x1b0) + -1;
      }
      *(int *)(param_1 + 0x1b0) = iVar3;
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x138));
  return;
}

