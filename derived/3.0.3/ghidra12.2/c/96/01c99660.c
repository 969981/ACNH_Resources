
/* WARNING: Removing unreachable block (ram,0x01c996fc) */
/* WARNING: Removing unreachable block (ram,0x01c99774) */

void FUN_01c99660(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  void *__ptr;
  undefined4 local_38;
  undefined4 local_34;
  
  __ptr = (void *)param_1[0x18];
  param_1[2] = 0;
  if (__ptr != (void *)0x0) {
    lVar3 = (long)__ptr + 0x188;
    do {
      lVar3 = *(long *)(lVar3 + 8);
    } while (lVar3 != (long)__ptr + 0x188);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
  }
  param_1[0x18] = 0;
  local_34 = 0x13;
  *(undefined8 *)(*(long *)PTR_DAT_04bc1060 + 0xa0) = 0;
  if ((long *)param_1[0x19] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x19] + 8))();
  }
  param_1[0x19] = 0;
  FUN_03ebae78(param_1 + 3);
  FUN_03ebae78(param_1 + 0xc);
  puVar1 = PTR_DAT_04bb2110;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  local_38 = 0;
  lVar3 = FUN_00818c64(*(undefined8 *)puVar1,&local_38);
  if (lVar3 != 0) {
    lVar3 = *(long *)puVar1;
    plVar2 = (long *)**(undefined8 **)(lVar3 + 0x10);
    nn::os::LockMutex((MutexType *)(plVar2 + 0x4d));
    (**(code **)(*plVar2 + 0x38))(plVar2,lVar3 + 0x800);
    nn::os::UnlockMutex((MutexType *)(plVar2 + 0x4d));
  }
  *param_1 = 0;
  return;
}

