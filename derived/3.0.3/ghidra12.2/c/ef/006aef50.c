
void FUN_006aef50(int param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  
  plVar3 = DAT_04c81ad0;
  plVar2 = DAT_04c81ac8;
  plVar1 = DAT_04c81ac0;
  if (param_1 == 2) {
    DAT_04c81ad0 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    puVar6 = &DAT_04c81b20;
    nn::os::SdkMutexType::Lock();
    DAT_04c81b24 = DAT_04c81b24 + -1;
    if (DAT_04c81b24 != 0) goto LAB_006aefac;
    (**(code **)(*DAT_04c81b18 + 8))();
    DAT_04c81b18 = (long *)0x0;
    if (DAT_04c81b28 == (code *)0x0) goto LAB_006af0c4;
    uVar4 = DAT_04c81b30;
    pcVar5 = DAT_04c81b28;
  }
  else if (param_1 == 1) {
    DAT_04c81ac8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    puVar6 = &DAT_04c81b00;
    nn::os::SdkMutexType::Lock();
    DAT_04c81b04 = DAT_04c81b04 + -1;
    if (DAT_04c81b04 != 0) goto LAB_006aefac;
    (**(code **)(*DAT_04c81af8 + 8))();
    DAT_04c81af8 = (long *)0x0;
    if (DAT_04c81b08 == (code *)0x0) goto LAB_006af0c4;
    uVar4 = DAT_04c81b10;
    pcVar5 = DAT_04c81b08;
  }
  else {
    if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
      nn::detail::UnexpectedDefaultImpl();
    }
    DAT_04c81ac0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puVar6 = &DAT_04c81ae0;
    nn::os::SdkMutexType::Lock();
    DAT_04c81ae4 = DAT_04c81ae4 + -1;
    if (DAT_04c81ae4 != 0) {
LAB_006aefac:
      nn::os::SdkMutexType::Unlock();
      return;
    }
    (**(code **)(*DAT_04c81ad8 + 8))();
    DAT_04c81ad8 = (long *)0x0;
    if (DAT_04c81ae8 == (code *)0x0) goto LAB_006af0c4;
    uVar4 = DAT_04c81af0;
    pcVar5 = DAT_04c81ae8;
  }
  (*pcVar5)(uVar4);
LAB_006af0c4:
  *(undefined8 *)(puVar6 + 8) = 0;
  *(undefined8 *)(puVar6 + 0x10) = 0;
  nn::os::SdkMutexType::Unlock();
  return;
}

