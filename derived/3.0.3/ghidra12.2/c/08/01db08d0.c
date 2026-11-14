
void FUN_01db08d0(long param_1)

{
  MutexType *pMVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  pMVar1 = (MutexType *)(param_1 + 0xd0);
  nn::os::LockMutex(pMVar1);
  lVar6 = *(long *)(param_1 + 0x78);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0xc) != 0)) {
    iVar3 = *(int *)(param_1 + 0x60);
    iVar4 = *(int *)(param_1 + 0x58);
    if (iVar3 < iVar4) {
      *(int *)(param_1 + 0x60) = iVar3 + 1;
      iVar3 = *(int *)(param_1 + 0x5c) + iVar3;
      iVar2 = 0;
      if (iVar4 <= iVar3) {
        iVar2 = iVar4;
      }
      *(long *)(*(long *)(param_1 + 0x50) + (long)(iVar3 - iVar2) * 8) = lVar6;
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  nn::os::LockMutex(pMVar1);
  if (*(long *)(param_1 + 0x78) == 0) {
    if (0 < *(int *)(param_1 + 0x38)) {
      iVar4 = *(int *)(param_1 + 0x30);
      iVar2 = *(int *)(param_1 + 0x34);
      iVar3 = 0;
      if (iVar4 <= iVar2) {
        iVar3 = iVar4;
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x28) + (long)(iVar2 - iVar3) * 8);
      iVar3 = 0;
      if (iVar2 + 1 < iVar4) {
        iVar3 = iVar2 + 1;
      }
      *(int *)(param_1 + 0x34) = iVar3;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      *(long *)(param_1 + 0x78) = lVar6;
      if (lVar6 != 0) goto LAB_01db0948;
    }
    if (*(int *)(DAT_05358908 + 0x38) != 0 && *(char *)(DAT_05358908 + 0xfd8) == '\0') {
      plVar7 = *(long **)(DAT_05ae6a60 + 0x30);
      uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7);
      if (((uVar5 & 1) == 0) && (uVar5 = (**(code **)(*plVar7 + 0x18))(plVar7), (uVar5 & 1) == 0)) {
        FUN_0387de70(plVar7,&DAT_05b03f00,0xe,0x14,0x2a);
      }
    }
  }
LAB_01db0948:
  nn::os::UnlockMutex(pMVar1);
  nn::os::UnlockMutex(pMVar1);
  return;
}

