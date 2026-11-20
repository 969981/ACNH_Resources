
undefined8 FUN_04002d34(void *param_1,long param_2)

{
  ThreadType *pTVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = 0x10000;
  if (*(ulong *)(param_2 + 8) != 0) {
    uVar3 = *(ulong *)(param_2 + 8);
  }
  lVar2 = (**(code **)(**(long **)((long)param_1 + 600) + 0x10))
                    (*(long **)((long)param_1 + 600),uVar3,0x1000);
  *(long *)((long)param_1 + 0x230) = lVar2;
  if (lVar2 != 0) {
    nn::os::InitializeEvent((long)param_1 + 0x208,0,0);
    iVar4 = *(int *)(param_2 + 0x14);
    if (iVar4 == 0x7fffffff) {
      iVar4 = (int)(char)(&DAT_0408f1eb)[*(uint *)(param_2 + 0x10)];
    }
    pTVar1 = (ThreadType *)((long)param_1 + 0x48);
    iVar4 = nn::os::CreateThread
                      (pTVar1,FUN_04002e30,param_1,*(void **)((long)param_1 + 0x230),uVar3,iVar4);
    if (iVar4 == 0) {
      uVar3 = *(ulong *)(param_2 + 0x18);
      if (uVar3 + 1 < 2) {
        uVar3 = nn::os::GetThreadAvailableCoreMask();
      }
      nn::os::SetThreadCoreMask(pTVar1,-1,uVar3);
      nn::os::InitializeMultiWaitHolder((MultiWaitHolderType *)((long)param_1 + 8),pTVar1);
      return 0;
    }
    (**(code **)(**(long **)((long)param_1 + 600) + 0x18))
              (*(long **)((long)param_1 + 600),*(undefined8 *)((long)param_1 + 0x230));
  }
  return 0x80000007;
}

