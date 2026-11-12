
void FUN_006b7c70(undefined8 param_1,UserHandle *param_2)

{
  int iVar1;
  long *plVar2;
  long *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  long **local_8;
  
  local_30 = 0;
  uStack_28 = 0;
  iVar1 = nn::account::GetUserId((Uid *)&local_30,param_2);
  local_8 = (long **)CONCAT44(local_8._4_4_,iVar1);
  if (iVar1 == 0) {
    local_38 = (long *)0x0;
    plVar2 = (long *)FUN_006b8260();
    local_8 = &local_38;
    iVar1 = (**(code **)(*plVar2 + 0x58))(plVar2,&local_8,&local_30);
    plVar2 = local_38;
    local_8 = (long **)CONCAT44(local_8._4_4_,iVar1);
    if (iVar1 == 0) {
      local_38 = (long *)0x0;
      FUN_006bb30c(param_1,plVar2);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 8))();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl((Result *)&local_8);
}

