
int FUN_006b85e4(long param_1,long *param_2,undefined4 param_3)

{
  MutexType *pMVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined4 local_34;
  
  local_34 = 0;
  iVar6 = nn::sf::hipc::client::HipcClientSessionManager::ConvertToDomainImpl
                    (param_1,&local_34,param_3);
  uVar5 = local_34;
  puVar4 = PTR_DAT_04bdf708;
  if (iVar6 == 0) {
    pMVar1 = (MutexType *)(PTR_DAT_04bdf708 + 8);
    nn::os::LockMutex(pMVar1);
    puVar7 = (undefined8 *)nn::lmem::AllocateFromExpHeap(*(HeapHead **)puVar4,0x30);
    nn::os::UnlockMutex(pMVar1);
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[2] = param_1;
      *(undefined4 *)(puVar7 + 3) = uVar5;
      *(undefined4 *)((long)puVar7 + 0x1c) = 0;
      *(undefined4 *)(puVar7 + 5) = 1;
      *(undefined1 *)(puVar7 + 1) = 1;
      *puVar7 = &PTR_LAB_048f9090;
      puVar7[4] = &DAT_048f9128;
    }
    plVar8 = (long *)*param_2;
    *param_2 = (long)puVar7;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    nn::os::SdkMutexType::Lock();
    lVar2 = *(long *)(param_1 + 0x20);
    puVar3 = *(undefined4 **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(puVar3 + 2);
    *(long *)(puVar3 + 2) = lVar2;
    *(undefined4 **)(param_1 + 0x20) = puVar3;
    *puVar3 = param_3;
    if (lVar2 == 0) {
      nn::os::SdkConditionVariableType::Broadcast();
    }
    nn::os::SdkMutexType::Unlock();
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  }
  return iVar6;
}

