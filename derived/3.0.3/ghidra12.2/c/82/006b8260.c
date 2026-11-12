
undefined8 FUN_006b8260(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  int local_34;
  
  puVar1 = PTR_DAT_04bdf710;
  nn::os::SdkMutexType::Lock();
  iVar4 = *(int *)(puVar1 + 4);
  nn::os::SdkMutexType::Unlock();
  puVar2 = PTR_DAT_04bdf718;
  if (iVar4 != 0) {
    return *(undefined8 *)PTR_DAT_04bdf718;
  }
  nn::os::SdkMutexType::Lock();
  iVar4 = *(int *)(puVar1 + 4);
  if (iVar4 == 0) {
    local_34 = FUN_006b8170(PTR_DAT_04bdf718,PTR_DAT_04bdf718,"olsc:u");
    if (local_34 != 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl((Result *)&local_34);
    }
    iVar4 = *(int *)(puVar1 + 4);
    local_34 = 0;
  }
  else if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  *(int *)(puVar1 + 4) = iVar4 + 1;
  nn::os::SdkMutexType::Unlock();
  plVar3 = *(long **)puVar2;
  (**(code **)(*plVar3 + 0x20))(plVar3,0);
  return *(undefined8 *)puVar2;
}

