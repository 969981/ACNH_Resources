
void FUN_02340418(undefined8 *param_1)

{
  char *pcVar1;
  int iVar2;
  
  if ((DAT_05493948 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_05493948);
    if (iVar2 != 0) {
      DAT_05493938 = &PTR_LAB_048f9770;
      DAT_05493940 = "PlayerWait";
      __cxa_guard_release(&DAT_05493948);
    }
  }
  pcVar1 = DAT_05493940;
  *param_1 = &PTR_LAB_048f9770;
  param_1[1] = pcVar1;
  return;
}

