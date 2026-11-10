
void FUN_001a0620(long *param_1)

{
  long ***ppplVar1;
  long ****pppplVar2;
  long ****pppplVar3;
  long ****local_38;
  long ****local_30;
  long local_28;
  
  local_28 = 0;
  *param_1 = (long)(PTR_DAT_04bcc220 + 0x10);
  local_38 = (long ****)&local_38;
  local_30 = (long ****)&local_38;
  FUN_001a06c0(param_1 + 1,&local_38);
  if (local_28 != 0) {
    ppplVar1 = *local_30;
    ppplVar1[1] = (long **)local_38[1];
    *local_38[1] = (long **)ppplVar1;
    local_28 = 0;
    if ((long *****)local_30 != &local_38) {
      pppplVar2 = local_30;
      do {
        pppplVar3 = (long ****)pppplVar2[1];
        (*(code *)*pppplVar2[2])();
        FUN_00187e4c(pppplVar2);
        pppplVar2 = pppplVar3;
      } while ((long *****)pppplVar3 != &local_38);
    }
  }
  return;
}

