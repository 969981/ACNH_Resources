
void FUN_03c217dc(undefined8 *param_1)

{
  long lVar1;
  short sVar2;
  uint uVar3;
  undefined *puVar4;
  long *plVar5;
  void *__ptr;
  long lVar6;
  
  __ptr = (void *)param_1[0x23b];
  *param_1 = &PTR_FUN_04b7e208;
  param_1[0x196] = &PTR_LAB_04b7e2d8;
  if (__ptr != (void *)0x0) {
    FUN_03b05aa8(__ptr);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar5 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,__ptr);
      }
    }
    param_1[0x23b] = 0;
  }
  FUN_03968cfc(param_1 + 0x22f);
  FUN_03968cfc(param_1 + 0x223);
  FUN_03968cfc(param_1 + 0x217);
  FUN_03968cfc(param_1 + 0x20b);
  FUN_03968cfc(param_1 + 0x1ff);
  puVar4 = PTR_DAT_04bc1010;
  if (*(short *)((long)param_1 + 0xff2) != -1) {
    lVar6 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar6 + 0x580));
    uVar3 = (int)*(short *)((long)param_1 + 0xff2) - (uint)*(ushort *)(lVar6 + 0x5c0);
    if (*(uint *)(lVar6 + 0x5a0) <= uVar3) {
      uVar3 = 0;
    }
    lVar1 = *(long *)(lVar6 + 0x5a8) + (long)(int)uVar3 * 0x80;
    sVar2 = *(short *)(lVar1 + 0x76) + -1;
    *(short *)(lVar1 + 0x76) = sVar2;
    if (sVar2 == 0) {
      *(short *)(lVar6 + 0x5c4) = *(short *)(lVar6 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar6 + 0x580));
    *(undefined2 *)((long)param_1 + 0xff2) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x1ed);
  param_1[0x1ba] = PTR_DAT_04bbd508 + 0x10;
  FUN_038fd0e0(param_1 + 0x1c5);
  if (*(short *)((long)param_1 + 0xdca) != -1) {
    lVar6 = *(long *)puVar4;
    nn::os::LockMutex((MutexType *)(lVar6 + 0x580));
    uVar3 = (int)*(short *)((long)param_1 + 0xdca) - (uint)*(ushort *)(lVar6 + 0x5c0);
    if (*(uint *)(lVar6 + 0x5a0) <= uVar3) {
      uVar3 = 0;
    }
    lVar1 = *(long *)(lVar6 + 0x5a8) + (long)(int)uVar3 * 0x80;
    sVar2 = *(short *)(lVar1 + 0x76) + -1;
    *(short *)(lVar1 + 0x76) = sVar2;
    if (sVar2 == 0) {
      *(short *)(lVar6 + 0x5c4) = *(short *)(lVar6 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar6 + 0x580));
    *(undefined2 *)((long)param_1 + 0xdca) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x1a8);
  FUN_0399e080(param_1);
  return;
}

