
void FUN_006b8540(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  
  nn::os::SdkMutexType::Lock();
  puVar3 = *(undefined4 **)(param_1 + 0x20);
  if (puVar3 == (undefined4 *)0x0) {
    do {
      nn::os::SdkConditionVariableType::Wait((SdkMutexType *)(param_1 + 0x1c));
      puVar3 = *(undefined4 **)(param_1 + 0x20);
    } while (puVar3 == (undefined4 *)0x0);
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(puVar3 + 2);
  *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 **)(param_1 + 0x28) = puVar3;
  uVar1 = *puVar3;
  nn::os::SdkMutexType::Unlock();
  puVar2 = (undefined8 *)nn::sf::hipc::GetMessageBufferOnTls();
  *puVar2 = 2;
  nn::sf::hipc::SendSyncRequest(uVar1,puVar2,0x100);
  nn::sf::hipc::CloseClientSessionHandle(uVar1);
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
  return;
}

