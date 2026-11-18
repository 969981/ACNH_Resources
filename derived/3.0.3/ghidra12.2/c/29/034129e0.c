
void FUN_034129e0(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  iVar2 = 0;
  *param_1 = &PTR_FUN_04b29f18;
  do {
    if (*(int *)(param_1 + (long)iVar2 * 0x35 + 0x35) != 0) {
      lVar4 = (long)iVar2;
      *(undefined1 *)param_1[lVar4 * 0x35 + 0xd] = 0;
      *(undefined1 *)(param_1 + lVar4 * 0x35 + 0x1f) = 0;
      if (((*(int *)(param_1 + lVar4 * 0x35 + 0x21) != 1) &&
          ((*(byte *)(param_1 + lVar4 * 0x35 + 4) >> 1 & 1) != 0)) &&
         (*(int *)(param_1 + lVar4 * 0x35 + 0x29) == -1)) {
        *(undefined4 *)(param_1 + lVar4 * 0x35 + 0x29) = 1;
      }
      *(undefined4 *)(param_1 + (long)iVar2 * 0x35 + 0x35) = 0;
    }
    puVar1 = PTR_DAT_04bb2110;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x10e);
  param_1 = param_1 + 0x37b2;
  lVar4 = -0x1bf30;
  do {
    if (((*(byte *)(param_1 + 3) >> 1 & 1) != 0) && (*(long *)puVar1 != 0)) {
      plVar3 = *(long **)(*(long *)(*(long *)puVar1 + 0x10) + (long)*(int *)(param_1 + 10) * 8);
      nn::os::LockMutex((MutexType *)(plVar3 + 0x4d));
      (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
      nn::os::UnlockMutex((MutexType *)(plVar3 + 0x4d));
    }
    FUN_03ebae78(param_1 + 0x1f);
    FUN_03f2d448(param_1 + 2);
    param_1 = param_1 + -0x35;
    lVar4 = lVar4 + 0x1a8;
  } while (lVar4 != 0);
  return;
}

