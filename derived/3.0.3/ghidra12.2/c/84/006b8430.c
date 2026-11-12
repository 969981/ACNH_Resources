
int FUN_006b8430(Handle *param_1,int param_2)

{
  long lVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_2 - *(int *)(param_1 + 0x3c);
  if (iVar3 == 0 || param_2 < *(int *)(param_1 + 0x3c)) {
    if (iVar3 < 0) {
      iVar5 = 1;
      if (1 < -iVar3) {
        iVar5 = -iVar3;
      }
      do {
        FUN_006b8540(param_1);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    iVar5 = 0;
    do {
      iVar4 = nn::sf::hipc::client::HipcClientSessionManager::CreateNewSession(param_1);
      if (iVar4 != 0) {
        for (; iVar5 != 0; iVar5 = iVar5 + -1) {
          FUN_006b8540(param_1);
        }
        return iVar4;
      }
      nn::os::SdkMutexType::Lock();
      lVar1 = *(long *)(param_1 + 0x20);
      puVar2 = *(undefined4 **)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(puVar2 + 2);
      *(long *)(puVar2 + 2) = lVar1;
      *(undefined4 **)(param_1 + 0x20) = puVar2;
      *puVar2 = 0;
      if (lVar1 == 0) {
        nn::os::SdkConditionVariableType::Broadcast();
      }
      nn::os::SdkMutexType::Unlock();
      iVar5 = iVar5 + 1;
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    } while (iVar3 != iVar5);
  }
  return 0;
}

