
void FUN_039ccd60(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xb8));
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    plVar2 = *(long **)(param_1 + 0x18);
    lVar5 = (long)iVar3 << 3;
    iVar4 = 1;
    do {
      if (*plVar2 == param_2) {
        if (iVar4 + -1 < iVar3) {
          uVar1 = iVar3 - iVar4;
          if (uVar1 != 0 && iVar4 <= iVar3) {
            memmove(plVar2,plVar2 + 1,
                    -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
            iVar3 = *(int *)(param_1 + 0x10);
          }
          *(int *)(param_1 + 0x10) = iVar3 + -1;
        }
        piVar6 = (int *)(param_1 + 0x30);
        iVar3 = *piVar6;
        if (iVar3 == 0) goto LAB_039ccea4;
        plVar2 = *(long **)(param_1 + 0x38);
        lVar5 = (long)iVar3 << 3;
        iVar4 = 1;
        goto LAB_039cce40;
      }
      plVar2 = plVar2 + 1;
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  piVar6 = (int *)(param_1 + 0x20);
  iVar3 = *piVar6;
  if (iVar3 != 0) {
    plVar2 = *(long **)(param_1 + 0x28);
    lVar5 = (long)iVar3 << 3;
    iVar4 = 1;
    do {
      if (*plVar2 == param_2) {
        if (iVar4 + -1 < iVar3) {
          uVar1 = iVar3 - iVar4;
          if (uVar1 != 0 && iVar4 <= iVar3) {
LAB_039cce8c:
            memmove(plVar2,plVar2 + 1,
                    -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
            iVar3 = *piVar6;
          }
LAB_039cce9c:
          *piVar6 = iVar3 + -1;
        }
        break;
      }
      plVar2 = plVar2 + 1;
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
LAB_039ccea4:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xb8));
  return;
  while( true ) {
    plVar2 = plVar2 + 1;
    iVar4 = iVar4 + 1;
    lVar5 = lVar5 + -8;
    if (lVar5 == 0) break;
LAB_039cce40:
    if (*plVar2 == param_2) {
      if (iVar4 + -1 < iVar3) {
        uVar1 = iVar3 - iVar4;
        if (uVar1 == 0 || iVar3 < iVar4) goto LAB_039cce9c;
        goto LAB_039cce8c;
      }
      break;
    }
  }
  goto LAB_039ccea4;
}

