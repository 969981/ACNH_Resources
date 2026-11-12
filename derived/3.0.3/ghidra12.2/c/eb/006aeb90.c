
int FUN_006aeb90(uint param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined *local_38;
  undefined *puStack_30;
  undefined8 local_28;
  long *local_8;
  
  puStack_30 = (&PTR_s_npns_u_048f7f68)[param_1];
  if (param_1 == 2) {
    local_28 = 0;
    local_38 = &DAT_04c81b40;
    nn::os::SdkMutexType::Lock();
    if (DAT_04c81b24 == 0) {
      local_8 = (long *)0x0;
      iVar5 = FUN_006b6134(&local_38,&local_8);
      if (iVar5 != 0) {
        if (local_8 != (long *)0x0) {
          (**(code **)(*local_8 + 8))();
        }
        nn::os::SdkMutexType::Unlock();
        return iVar5;
      }
      DAT_04c81b24 = 1;
      DAT_04c81b18 = local_8;
      DAT_04c81b28 = &LAB_006b78ec;
      DAT_04c81b30 = &DAT_04c81b40;
      nn::os::SdkMutexType::Unlock();
      plVar1 = DAT_04c81b18;
    }
    else {
      if (DAT_04c81b28 == (undefined1 *)0x0) {
        DAT_04c81b28 = &LAB_006b78ec;
        DAT_04c81b30 = &DAT_04c81b40;
      }
      DAT_04c81b24 = DAT_04c81b24 + 1;
      nn::os::SdkMutexType::Unlock();
      plVar1 = DAT_04c81b18;
    }
    plVar3 = DAT_04c81ac0;
    plVar4 = DAT_04c81ad0;
    DAT_04c81b18 = plVar1;
    plVar2 = DAT_04c81ac8;
    if (plVar1 != (long *)0x0) {
      (**(code **)*plVar1)(plVar1);
      plVar3 = DAT_04c81ac0;
      plVar4 = DAT_04c81ad0;
      plVar2 = DAT_04c81ac8;
    }
  }
  else if (param_1 == 1) {
    local_28 = 0;
    local_38 = &DAT_04c81b40;
    nn::os::SdkMutexType::Lock();
    if (DAT_04c81b04 == 0) {
      local_8 = (long *)0x0;
      iVar5 = FUN_006b1644(&local_38,&local_8);
      if (iVar5 != 0) {
        if (local_8 != (long *)0x0) {
          (**(code **)(*local_8 + 8))();
        }
        nn::os::SdkMutexType::Unlock();
        return iVar5;
      }
      DAT_04c81b04 = 1;
      DAT_04c81af8 = local_8;
      DAT_04c81b08 = FUN_006b60d8;
      DAT_04c81b10 = &DAT_04c81b40;
      nn::os::SdkMutexType::Unlock();
      plVar2 = DAT_04c81af8;
    }
    else {
      if (DAT_04c81b08 == (code *)0x0) {
        DAT_04c81b08 = FUN_006b60d8;
        DAT_04c81b10 = &DAT_04c81b40;
      }
      DAT_04c81b04 = DAT_04c81b04 + 1;
      nn::os::SdkMutexType::Unlock();
      plVar2 = DAT_04c81af8;
    }
    plVar3 = DAT_04c81ac0;
    plVar4 = DAT_04c81ac8;
    plVar1 = DAT_04c81ad0;
    DAT_04c81af8 = plVar2;
    if (plVar2 != (long *)0x0) {
      (**(code **)*plVar2)(plVar2);
      plVar3 = DAT_04c81ac0;
      plVar4 = DAT_04c81ac8;
      plVar1 = DAT_04c81ad0;
    }
  }
  else {
    if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
      nn::detail::UnexpectedDefaultImpl();
    }
    local_28 = 0;
    local_38 = &DAT_04c81b40;
    nn::os::SdkMutexType::Lock();
    if (DAT_04c81ae4 == 0) {
      local_8 = (long *)0x0;
      iVar5 = FUN_006af104(&local_38,&local_8);
      if (iVar5 != 0) {
        if (local_8 != (long *)0x0) {
          (**(code **)(*local_8 + 8))();
        }
        nn::os::SdkMutexType::Unlock();
        return iVar5;
      }
      DAT_04c81ae4 = 1;
      DAT_04c81ad8 = local_8;
      DAT_04c81ae8 = &LAB_006b15e8;
      DAT_04c81af0 = &DAT_04c81b40;
      nn::os::SdkMutexType::Unlock();
      plVar3 = DAT_04c81ad8;
    }
    else {
      if (DAT_04c81ae8 == (undefined1 *)0x0) {
        DAT_04c81ae8 = &LAB_006b15e8;
        DAT_04c81af0 = &DAT_04c81b40;
      }
      DAT_04c81ae4 = DAT_04c81ae4 + 1;
      nn::os::SdkMutexType::Unlock();
      plVar3 = DAT_04c81ad8;
    }
    plVar4 = DAT_04c81ac0;
    plVar1 = DAT_04c81ad0;
    DAT_04c81ad8 = plVar3;
    plVar2 = DAT_04c81ac8;
    if (plVar3 != (long *)0x0) {
      (**(code **)*plVar3)(plVar3);
      plVar4 = DAT_04c81ac0;
      plVar1 = DAT_04c81ad0;
      plVar2 = DAT_04c81ac8;
    }
  }
  DAT_04c81ac8 = plVar2;
  DAT_04c81ad0 = plVar1;
  DAT_04c81ac0 = plVar3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  return 0;
}

