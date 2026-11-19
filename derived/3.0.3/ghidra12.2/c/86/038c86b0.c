
long FUN_038c86b0(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  uVar2 = (**(code **)(*param_1 + 0x88))();
  if ((uVar2 & 1) == 0) {
    lVar4 = 0;
  }
  else {
    if ((*(uint *)(param_1 + 0x1a) & 1) == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = param_1 + 0x12;
      nn::os::LockMutex((MutexType *)(param_1 + 0x16));
    }
    lVar4 = param_2 + -0x20;
    if ((*(ulong *)(param_2 + -8) & 1) != 0) {
      lVar4 = *(ulong *)(param_2 + -8) - 1;
    }
    uVar3 = param_3 + 7U & 0xfffffffffffffff8;
    uVar2 = *(ulong *)(lVar4 + 0x18) - uVar3;
    if (*(ulong *)(lVar4 + 0x18) < uVar3) {
      lVar4 = 0;
    }
    else if ((uVar2 == 0) || (uVar2 < 0x20)) {
      lVar4 = lVar4 + (ulong)*(ushort *)(lVar4 + 0x12) + 0x20;
    }
    else {
      *(ulong *)(lVar4 + 0x18) = uVar3;
      puVar1 = (undefined8 *)(lVar4 + 0x20 + uVar3 + (ulong)*(ushort *)(lVar4 + 0x12));
      *(undefined4 *)(puVar1 + 2) = 0;
      puVar1[3] = uVar2 - 0x20;
      *puVar1 = 0;
      puVar1[1] = 0;
      FUN_038c8240(param_1);
      lVar4 = lVar4 + 0x20 + (ulong)*(ushort *)(lVar4 + 0x12);
    }
    if (plVar5 != (long *)0x0) {
      nn::os::UnlockMutex((MutexType *)(plVar5 + 4));
    }
  }
  return lVar4;
}

