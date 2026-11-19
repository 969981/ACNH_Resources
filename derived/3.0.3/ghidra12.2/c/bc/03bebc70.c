
void FUN_03bebc70(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  size_t __n;
  void *__ptr;
  
  if (*(long *)(param_1 + 0x980) == param_2) {
    *(undefined8 *)(param_1 + 0x980) = 0;
  }
  __ptr = *(void **)(param_2 + 0x30);
  plVar1 = (long *)(*(int *)((long)__ptr + 0x34) + param_2);
  if (*plVar1 != 0) {
    *(long *)(*plVar1 + 8) = plVar1[1];
  }
  if ((long *)plVar1[1] != (long *)0x0) {
    *(long *)plVar1[1] = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  iVar3 = *(int *)((long)__ptr + 0x30) + -1;
  *(int *)((long)__ptr + 0x30) = iVar3;
  if (iVar3 == 0) {
    plVar1 = (long *)((long)*(int *)(param_1 + 0x24) + (long)__ptr);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    uVar2 = *(uint *)(param_1 + 0x90);
    if (0 < (int)uVar2) {
      plVar1 = *(long **)(param_1 + 0x98);
      uVar4 = 0;
      __n = (long)(int)uVar2 * 8;
      do {
        __n = __n - 8;
        if ((void *)*plVar1 == __ptr) {
          iVar3 = (int)uVar4;
          if ((-1 < iVar3) && (iVar3 < (int)uVar2)) {
            if (iVar3 + 1 < (int)uVar2) {
              memmove(plVar1,plVar1 + 1,__n);
              uVar2 = *(uint *)(param_1 + 0x90);
            }
            *(uint *)(param_1 + 0x90) = uVar2 - 1;
          }
          break;
        }
        uVar4 = uVar4 + 1;
        plVar1 = plVar1 + 1;
      } while (uVar2 != uVar4);
    }
    FUN_03bf3000(__ptr);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
      return;
    }
    plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03bebdbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      return;
    }
  }
  return;
}

