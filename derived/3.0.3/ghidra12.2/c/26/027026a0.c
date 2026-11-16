
/* WARNING: Removing unreachable block (ram,0x027027e4) */

undefined8 FUN_027026a0(long param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  size_t __n;
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 0x4c0);
  if ((__ptr != (void *)0x0) && (*(long *)(*(long *)(param_1 + 0x10) + 0x180) != 0)) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
    *(undefined8 *)(param_1 + 0x4c0) = 0;
    plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 0x180);
    if (plVar1 != (long *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0x40))();
      uVar3 = *(uint *)(param_1 + 0x128);
      if (0 < (int)uVar3) {
        plVar1 = *(long **)(param_1 + 0x130);
        __n = (long)(int)uVar3 * 8;
        uVar5 = 0;
        do {
          __n = __n - 8;
          if (*plVar1 == lVar2) {
            iVar4 = (int)uVar5;
            if ((-1 < iVar4) && (iVar4 < (int)uVar3)) {
              if (iVar4 + 1 < (int)uVar3) {
                memmove(plVar1,plVar1 + 1,__n);
                uVar3 = *(uint *)(param_1 + 0x128);
              }
              *(uint *)(param_1 + 0x128) = uVar3 - 1;
            }
            break;
          }
          uVar5 = uVar5 + 1;
          plVar1 = plVar1 + 1;
        } while (uVar3 != uVar5);
      }
      lVar2 = *(long *)(param_1 + 0x10);
      if (*(long **)(lVar2 + 0x180) != (long *)0x0) {
        (**(code **)(**(long **)(lVar2 + 0x180) + 8))();
        lVar2 = *(long *)(param_1 + 0x10);
      }
      *(undefined8 *)(lVar2 + 0x180) = 0;
    }
    if (DAT_04cce818 != 0) {
      plVar1 = (long *)**(undefined8 **)(DAT_04cce818 + 0x10);
      lVar2 = DAT_04cce818 + 0x850;
      nn::os::LockMutex((MutexType *)(plVar1 + 0x4d));
      (**(code **)(*plVar1 + 0x38))(plVar1,lVar2);
      nn::os::UnlockMutex((MutexType *)(plVar1 + 0x4d));
    }
  }
  return 1;
}

