
int FUN_006b8170(long param_1,undefined8 *param_2,char *param_3)

{
  long *plVar1;
  int iVar2;
  long *local_48;
  undefined4 local_24;
  
  local_48 = (long *)0x0;
  nn::sf::hipc::InitializeHipcServiceResolution();
  local_24 = 0;
  iVar2 = nn::sf::hipc::ConnectToHipcService((Handle *)&local_24,param_3);
  if (iVar2 == 0) {
    iVar2 = FUN_006b85e4(param_1 + 8,&local_48,local_24);
    nn::sf::hipc::FinalizeHipcServiceResolution();
    if (iVar2 == 0) {
      nn::os::SdkMutexType::Lock();
      if (*(int *)(param_1 + 0x40) < 1) {
LAB_006b8258:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl();
      }
      iVar2 = FUN_006b8430(param_1 + 8,1);
      nn::os::SdkMutexType::Unlock();
      plVar1 = local_48;
      if (iVar2 == 0) {
        local_48 = (long *)0x0;
        *param_2 = plVar1;
        if (plVar1 != (long *)0x0) {
          return 0;
        }
        goto LAB_006b8258;
      }
    }
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 8))();
    }
  }
  else {
    nn::sf::hipc::FinalizeHipcServiceResolution();
  }
  return iVar2;
}

