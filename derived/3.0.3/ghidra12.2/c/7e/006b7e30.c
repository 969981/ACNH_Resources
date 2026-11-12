
void FUN_006b7e30(undefined8 param_1,UserHandle *param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 *local_28;
  
  local_38 = 0;
  uStack_30 = 0;
  iVar1 = nn::account::GetUserId((Uid *)&local_38,param_2);
  local_28 = (undefined1 *)CONCAT44(local_28._4_4_,iVar1);
  if (iVar1 == 0) {
    local_40 = (long *)0x0;
    plVar2 = (long *)FUN_006b8260();
    local_28 = (undefined1 *)&local_40;
    iVar1 = (**(code **)(*plVar2 + 0x70))(plVar2,&local_28,&local_38,param_3);
    plVar2 = local_40;
    local_28 = (undefined1 *)CONCAT44(local_28._4_4_,iVar1);
    if (iVar1 == 0) {
      local_40 = (long *)0x0;
      thunk_FUN_006bb30c(param_1,plVar2);
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 8))();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl((Result *)&local_28);
}

