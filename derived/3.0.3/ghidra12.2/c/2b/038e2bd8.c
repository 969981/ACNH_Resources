
void FUN_038e2bd8(long param_1,long *param_2)

{
  undefined4 uVar1;
  int iVar2;
  ThreadType *pTVar3;
  ThreadType *pTVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  
  pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
  pTVar4 = (ThreadType *)nn::os::GetCurrentThread();
  nn::os::ChangeThreadPriority(pTVar4,0x10);
  uVar1 = nn::os::GetThreadId(pTVar3);
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    puVar7 = malloc(0x108);
  }
  else {
    plVar6 = param_2;
    if (param_2 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar8 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x108,8);
  }
  FUN_038e2440(puVar7,param_2,pTVar3,uVar1);
  *puVar7 = &PTR_LAB_04b652b8;
  *(undefined8 **)(param_1 + 0x60) = puVar7;
  nn::os::SetTlsValue(*(undefined4 *)(param_1 + 0x68),puVar7);
  uVar1 = DAT_05ae7898;
  iVar2 = nn::os::GetCurrentCoreNumber();
  nn::os::SetTlsValue(uVar1,(long)(iVar2 + 1));
  return;
}

