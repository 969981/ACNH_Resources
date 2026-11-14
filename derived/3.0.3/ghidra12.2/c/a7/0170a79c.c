
void FUN_0170a79c(undefined8 *param_1)

{
  char *pcVar1;
  int iVar2;
  
  if ((DAT_05248690 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_05248690);
    if (iVar2 != 0) {
      DAT_05248680 = &PTR_LAB_048f9770;
      DAT_05248688 = "CommonStandWait";
      __cxa_guard_release(&DAT_05248690);
    }
  }
  pcVar1 = DAT_05248688;
  *param_1 = &PTR_LAB_048f9770;
  param_1[1] = pcVar1;
  return;
}

