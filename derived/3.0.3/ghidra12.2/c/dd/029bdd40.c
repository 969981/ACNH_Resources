
void FUN_029bdd40(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  void *__ptr;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x68));
  plVar6 = (long *)PTR_DAT_04bb3350;
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 == 0) {
    lVar7 = 1;
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)(lVar2 + 0xa8);
    *(long *)(lVar2 + 0xa8) = lVar5;
  }
  puVar1 = PTR_DAT_04bb2698;
  plVar8 = *(long **)(param_1 + 0xa0);
  if (plVar8 != (long *)(param_1 + 0x98)) {
    plVar6 = (long *)(param_1 + 0x2a8);
    do {
      lVar5 = plVar8[-1];
      __ptr = *(void **)(lVar5 + 0x30);
      if (__ptr != (void *)0x0) {
        if (*(long *)puVar1 == 0) {
          free(__ptr);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar1,__ptr);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
          }
        }
        *(undefined8 *)(lVar5 + 0x30) = 0;
        *(undefined4 *)(lVar5 + 0x28) = 0;
      }
      if (*(int *)(param_1 + 0x2b8) < *(int *)(param_1 + 0x2d0)) {
        plVar3 = *(long **)(param_1 + 0x2c0);
        if (plVar3 != (long *)0x0) {
          *(long *)(param_1 + 0x2c0) = *plVar3;
        }
        *plVar3 = lVar5;
        plVar3[2] = 0;
        plVar4 = plVar3 + 1;
        *plVar4 = 0;
        lVar5 = *plVar6;
        *plVar6 = (long)plVar4;
        plVar3[2] = (long)plVar6;
        *plVar4 = lVar5;
        if (lVar5 != 0) {
          *(long **)(lVar5 + 8) = plVar4;
        }
        *(int *)(param_1 + 0x2b8) = *(int *)(param_1 + 0x2b8) + 1;
      }
      plVar8 = (long *)plVar8[1];
    } while (plVar8 + -1 != (long *)(param_1 + 0x90));
    plVar8 = *(long **)(param_1 + 0xa0);
    plVar6 = (long *)PTR_DAT_04bb3350;
  }
  while (plVar8 != (long *)(param_1 + 0x98)) {
    plVar3 = (long *)plVar8[1];
    plVar4 = plVar3;
    if (*plVar8 != 0) {
      *(long **)(*plVar8 + 8) = plVar3;
      plVar4 = (long *)plVar8[1];
    }
    if (plVar4 != (long *)0x0) {
      *plVar4 = *plVar8;
    }
    *plVar8 = 0;
    plVar8[1] = 0;
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
    plVar8[-1] = *(long *)(param_1 + 0xb0);
    *(long **)(param_1 + 0xb0) = plVar8 + -1;
    plVar8 = plVar3;
  }
  if (lVar7 != 1) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*plVar6 + 0x68));
    *(long *)(lVar5 + 0xa8) = lVar7;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
  return;
}

