
void FUN_006b7d10(undefined8 param_1,UserHandle *param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  long *local_90;
  undefined8 local_88;
  int local_80 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 *local_18;
  
  local_40 = 0;
  uStack_38 = 0;
  local_80[0] = nn::account::GetUserId((Uid *)&local_40,param_2);
  if (local_80[0] != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl((Result *)local_80);
  }
  local_80[0xc] = 0;
  local_80[0xd] = 0;
  local_80[0xe] = 0;
  local_80[0xf] = 0;
  local_80[8] = 0;
  local_80[9] = 0;
  local_80[10] = 0;
  local_80[0xb] = 0;
  local_80[4] = 0;
  local_80[5] = 0;
  local_80[6] = 0;
  local_80[7] = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  iVar1 = nn::os::CreateTransferMemory(local_80,param_3,param_4,0);
  local_18 = (undefined1 *)CONCAT44(local_18._4_4_,iVar1);
  if (iVar1 == 0) {
    local_88 = 0x100000000;
    uVar2 = nn::os::DetachTransferMemory((TransferMemoryType *)local_80);
    local_88 = CONCAT44(local_88._4_4_,uVar2);
    local_90 = (long *)0x0;
    plVar3 = (long *)FUN_006b8260();
    local_18 = (undefined1 *)&local_90;
    iVar1 = (**(code **)(*plVar3 + 0x68))(plVar3,&local_18,&local_40,&local_88,param_4 & 0xffffffff)
    ;
    plVar3 = local_90;
    local_18 = (undefined1 *)CONCAT44(local_18._4_4_,iVar1);
    if (iVar1 == 0) {
      local_90 = (long *)0x0;
      thunk_FUN_006bb30c(param_1,plVar3);
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 8))();
      }
      if (local_88._4_1_ != '\0') {
        nn::os::CloseNativeHandle((uint)local_88);
      }
      if (local_80[0]._0_1_ != (TransferMemoryType)0x0) {
        nn::os::DestroyTransferMemory((TransferMemoryType *)local_80);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl((Result *)&local_18);
}

