
undefined8 FUN_00818484(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *param_2;
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x160) == '\0')) {
    if (((*(byte *)(lVar3 + 0x128) >> 1 & 1) == 0) && (*(char *)(lVar3 + 0x118) == '\0')) {
      plVar2 = *(long **)(*(long *)(param_1 + 0x10) + (long)*(int *)(lVar3 + 0x108) * 8);
      nn::os::LockMutex((MutexType *)(plVar2 + 0x4d));
      (**(code **)(*plVar2 + 0x40))(plVar2,lVar3 + 0x110,lVar3 + 0x18,PTR_PTR_04bb2238);
      nn::os::UnlockMutex((MutexType *)(plVar2 + 0x4d));
    }
    uVar1 = FUN_03f2dedc(lVar3 + 0x120,0);
    if ((uVar1 & 1) != 0) {
      uVar1 = FUN_03f2eb0c(lVar3 + 0x120);
      if ((uVar1 & 1) != 0) {
        *(undefined1 *)(lVar3 + 0x118) = 1;
      }
      *(undefined1 *)(lVar3 + 0x161) = 1;
    }
  }
  return 1;
}

