
/* WARNING: Removing unreachable block (ram,0x032c365c) */

void FUN_032c35a0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  void *__ptr;
  ulong uVar6;
  undefined8 *puVar7;
  
  *(ushort *)(param_1 + 0xd8) = *(ushort *)(param_1 + 0xd8) | 0x80;
  *(ushort *)(param_1 + 0x2f8) = *(ushort *)(param_1 + 0x2f8) | 0x80;
  iVar2 = *(int *)(param_2 + 1);
  *(int *)(param_1 + 4) = iVar2;
  puVar3 = PTR_DAT_04bb2698;
  if (0 < iVar2) {
    uVar6 = 0;
    puVar7 = (undefined8 *)(param_1 + 8);
    do {
      puVar1 = puVar7;
      if (0xf < uVar6) {
        puVar1 = (undefined8 *)(param_1 + 8);
      }
      puVar4 = (undefined8 *)(**(code **)(**(long **)*param_2 + 0x30))(*(long **)*param_2,0x40,8);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      __ptr = (void *)*puVar1;
      *puVar1 = puVar4;
      if (__ptr != (void *)0x0) {
        if (*(long *)puVar3 == 0) {
          free(__ptr);
        }
        else {
          plVar5 = (long *)FUN_038cb610(*(long *)puVar3,__ptr);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x38))(plVar5,__ptr);
          }
        }
      }
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 1;
    } while ((long)uVar6 < (long)*(int *)(param_1 + 4));
  }
  if (*(long *)(param_1 + 0x5c0) == 0) {
    *(long *)(param_1 + 0x5a8) = param_1;
    *(undefined1 **)(param_1 + 0x5b0) = &LAB_032c3b60;
    *(undefined8 *)(param_1 + 0x5b8) = 0;
    *(undefined ***)(param_1 + 0x5a0) = &PTR_LAB_04b1ae98;
  }
  else {
    nn::os::LockMutex((MutexType *)(*(long *)(param_1 + 0x5c0) + 0x20));
    *(undefined1 **)(param_1 + 0x5b0) = &LAB_032c3b60;
    *(long *)(param_1 + 0x5a8) = param_1;
    *(undefined8 *)(param_1 + 0x5b8) = 0;
    *(undefined ***)(param_1 + 0x5a0) = &PTR_LAB_04b1ae98;
    if (*(long *)(param_1 + 0x5c0) != 0) {
      nn::os::UnlockMutex((MutexType *)(*(long *)(param_1 + 0x5c0) + 0x20));
    }
  }
  *(char **)(param_1 + 0x598) = "guiTouchManager::update()";
  FUN_038bbab4(*(long *)PTR_DAT_04bc8dd0 + 0x930,param_1 + 0x548);
  return;
}

