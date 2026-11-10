
/* WARNING: Removing unreachable block (ram,0x002b86f8) */

int FUN_002b8690(long param_1,undefined8 param_2)

{
  MutexType *pMVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined *local_50 [3];
  undefined2 local_38;
  
  pMVar1 = (MutexType *)(param_1 + 0x58);
  nn::os::LockMutex(pMVar1);
  for (lVar5 = *(long *)(param_1 + 0x6f8); lVar5 != param_1 + 0x6f0; lVar5 = *(long *)(lVar5 + 8)) {
    uVar2 = FUN_0021fe7c(lVar5 + 0x18,param_2);
    if ((uVar2 & 1) != 0) {
      iVar3 = *(int *)(lVar5 + 0x10);
      iVar4 = *(int *)(lVar5 + 0x14);
      nn::os::UnlockMutex(pMVar1);
      if (iVar3 == 0 && iVar4 == 0) goto LAB_002b8710;
      goto LAB_002b8780;
    }
  }
  nn::os::UnlockMutex(pMVar1);
LAB_002b8710:
  local_50[0] = PTR_DAT_04bccf70 + 0x10;
  FUN_0021f5a0(local_50,0xffffffff);
  local_38 = 0;
  nn::os::LockMutex(pMVar1);
  lVar5 = *(long *)(param_1 + 0x6f8);
  do {
    if (lVar5 == param_1 + 0x6f0) {
      iVar4 = 0;
      iVar3 = 0;
LAB_002b8770:
      nn::os::UnlockMutex(pMVar1);
      FUN_0021f584(local_50);
LAB_002b8780:
      uVar2 = FUN_0028d5ac(param_1 + 0x78);
      return iVar3 + (int)((uVar2 & 0xffffffff) * (ulong)(uint)(iVar4 - iVar3) >> 0x20);
    }
    uVar2 = FUN_0021fe7c(lVar5 + 0x18,local_50);
    if ((uVar2 & 1) != 0) {
      iVar3 = *(int *)(lVar5 + 0x10);
      iVar4 = *(int *)(lVar5 + 0x14);
      goto LAB_002b8770;
    }
    lVar5 = *(long *)(lVar5 + 8);
  } while( true );
}

