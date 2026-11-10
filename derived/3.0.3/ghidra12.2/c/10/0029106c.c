
void thunk_FUN_00290b48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  ThreadType *pTVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 auStack_40 [2];
  ulong uStack_38;
  
  pTVar4 = (ThreadType *)nn::os::GetCurrentThread();
  plVar5 = (long *)FUN_00285d10(0xf0,param_2);
  if (plVar5 != (long *)0x0) {
    FUN_00289f24(plVar5);
    puVar1 = PTR_DAT_04bcddb8;
    plVar5[4] = (long)(PTR_DAT_04bccec0 + 0x10);
    plVar5[5] = (long)"pead::MainThread";
    *plVar5 = (long)(puVar1 + 0x10);
    FUN_00290d14(plVar5 + 6);
    uVar6 = *(undefined8 *)(pTVar4 + 0x58);
    plVar5[0x15] = 0;
    plVar5[0x11] = 0;
    plVar5[0x12] = 0;
    *(int *)(plVar5 + 0x10) = (int)uVar6;
    plVar5[0x13] = 0;
    plVar5[0x14] = 0;
    FUN_0028a4a0(plVar5 + 0x16);
    plVar5[0x1c] = 0;
    *(undefined4 *)(plVar5 + 0x17) = 1;
    plVar5[0x18] = 0x7fffffff;
    *(int *)(plVar5 + 0x19) = (int)pTVar4;
    *(undefined4 *)((long)plVar5 + 0xcc) = 1;
    plVar5[0x1a] = (long)pTVar4;
    plVar5[0x1b] = 0;
    uVar2 = nn::os::GetThreadPriority(pTVar4);
    *(undefined4 *)(plVar5 + 0x1d) = uVar2;
    plVar5[0x13] = (long)plVar5;
    FUN_00290d20(plVar5 + 6,0x20,param_2);
    nn::os::GetCurrentStackInfo(&uStack_38,(ulong *)auStack_40);
    plVar5[0x1c] = uStack_38;
    puVar1 = PTR_DAT_04bcddd8;
    *(undefined4 *)(plVar5 + 0x10) = auStack_40[0];
    *plVar5 = (long)(puVar1 + 0x10);
  }
  *(long **)(param_1 + 0x80) = plVar5;
  nn::os::SetTlsValue(*(undefined4 *)(param_1 + 0x88),plVar5);
  uVar2 = *(undefined4 *)PTR_DAT_04bccfe8;
  iVar3 = nn::os::GetCurrentCoreNumber();
  nn::os::SetTlsValue(uVar2,(long)(iVar3 + 1));
  return;
}

