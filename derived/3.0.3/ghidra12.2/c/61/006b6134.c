
int FUN_006b6134(undefined8 *param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  long *plVar7;
  undefined4 local_24;
  
  plVar7 = (long *)*param_1;
  nn::os::SdkMutexType::Lock();
  if (*(int *)((long)plVar7 + 0xc) == 0) {
    lVar4 = nn::lmem::CreateUnitHeap(plVar7 + 0x16,0x40,0x40,4,0x10,(HeapHead *)(plVar7 + 2));
    *plVar7 = (long)(plVar7 + 2);
    plVar7[0x14] = (long)&PTR_LAB_048f7f90;
    plVar7[0x15] = lVar4;
    *(undefined4 *)((long)plVar7 + 0xc) = 1;
    nn::os::SdkMutexType::Unlock();
    plVar6 = (long *)param_1[2];
  }
  else {
    *(int *)((long)plVar7 + 0xc) = *(int *)((long)plVar7 + 0xc) + 1;
    nn::os::SdkMutexType::Unlock();
    plVar6 = (long *)param_1[2];
  }
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)(*plVar7 + 0x90);
    param_1[2] = plVar6;
  }
  pcVar5 = (char *)param_1[1];
  local_24 = 0;
  nn::sf::hipc::InitializeHipcServiceResolution();
  iVar3 = nn::sf::hipc::ConnectToHipcService((Handle *)&local_24,pcVar5);
  nn::sf::hipc::FinalizeHipcServiceResolution();
  uVar2 = local_24;
  if (iVar3 != 0) {
    nn::os::SdkMutexType::Lock();
    iVar1 = *(int *)((long)plVar7 + 0xc) + -1;
    *(int *)((long)plVar7 + 0xc) = iVar1;
    if (iVar1 == 0) {
      nn::lmem::DestroyUnitHeap(*(HeapHead **)(*plVar7 + 0x98));
      *plVar7 = 0;
    }
    nn::os::SdkMutexType::Unlock();
    return iVar3;
  }
  plVar7 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x28,8);
  if (plVar7 != (long *)0x0) {
    *(undefined4 *)((long)plVar7 + 0xc) = uVar2;
    *(undefined4 *)(plVar7 + 3) = 1;
    *(undefined2 *)(plVar7 + 1) = 1;
    plVar7[4] = (long)plVar6;
    *plVar7 = (long)&PTR_LAB_048f8c70;
    plVar7[2] = (long)&DAT_048f8f18;
    nn::sf::impl::detail::ServiceObjectImplBase2::AddReferenceImpl();
  }
  plVar6 = (long *)*param_2;
  *param_2 = (long)plVar7;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  return 0;
}

