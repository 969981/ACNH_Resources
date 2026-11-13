
void FUN_0138de8c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = PTR_DAT_04bb5c98;
  *param_1 = &PTR_FUN_04993b50;
  param_1[0x49] = puVar3 + 0x10;
  if ((param_1[0x4b] != 0 || param_1[0x4a] != 0) && (lVar4 = *(long *)PTR_DAT_04bb27c8, lVar4 != 0))
  {
    plVar1 = param_1 + 0x49;
    nn::os::LockMutex((MutexType *)(lVar4 + 0x50));
    plVar2 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)plVar1);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    nn::os::UnlockMutex((MutexType *)(lVar4 + 0x50));
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  FUN_00960e20(param_1 + 0xb);
  param_1[5] = PTR_DAT_04bbc1a0 + 0x10;
  return;
}

