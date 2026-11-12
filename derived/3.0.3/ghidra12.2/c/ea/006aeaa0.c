
int FUN_006aeaa0(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 local_28;
  
  local_28 = 0;
  plVar2 = (long *)FUN_006af0e0();
  iVar1 = (**(code **)(*plVar2 + 0x40))(plVar2,&local_28);
  if (iVar1 != 0) {
    if (local_28._4_1_ != '\0') {
      nn::os::CloseNativeHandle((uint)local_28);
    }
    return iVar1;
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  nn::os::AttachReadableHandleToSystemEvent(param_1,local_28 & 0xffffffff,local_28._4_1_,1);
  return 0;
}

