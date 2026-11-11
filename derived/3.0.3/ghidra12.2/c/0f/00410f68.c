
void FUN_00410f68(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  undefined *local_48;
  ulong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  ulong *local_30;
  undefined8 uStack_28;
  
  plVar2 = (long *)(param_1 + 0x30);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  local_40 = local_40 & 0xffffffffffffff00;
  uStack_28 = 0x10;
  local_30 = &local_40;
  if ((undefined **)(param_1 + 8) != &local_48) {
    puVar1 = (ulong *)(param_1 + 0x10);
    local_40 = *puVar1;
    local_38 = *(undefined4 *)(param_1 + 0x18);
    uStack_34 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined1 *)puVar1 = 0;
    uStack_28 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0x10;
    local_30 = *(ulong **)(param_1 + 0x20);
    if (*(ulong **)(param_1 + 0x20) == puVar1) {
      local_30 = &local_40;
    }
    *(ulong **)(param_1 + 0x20) = puVar1;
  }
  local_48 = PTR_DAT_04bc0ec8 + 0x10;
  FUN_0018b1a0(&local_48);
  (**(code **)(*plVar2 + 0x20))(plVar2);
  return;
}

