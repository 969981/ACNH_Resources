
void FUN_002146d8(long param_1)

{
  undefined *puVar1;
  undefined2 uVar2;
  ulong *puVar3;
  long *plVar4;
  undefined *local_58;
  ulong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  ulong *local_40;
  undefined8 uStack_38;
  
  plVar4 = (long *)(param_1 + 0x30);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  uVar2 = FUN_001a654c();
  *(undefined2 *)(param_1 + 0x80) = uVar2;
  local_50 = local_50 & 0xffffffffffffff00;
  uStack_38 = 0x10;
  local_40 = &local_50;
  if ((undefined **)(param_1 + 0x88) != &local_58) {
    puVar3 = (ulong *)(param_1 + 0x90);
    local_50 = *puVar3;
    local_48 = *(undefined4 *)(param_1 + 0x98);
    uStack_44 = *(undefined4 *)(param_1 + 0x9c);
    *(undefined1 *)puVar3 = 0;
    uStack_38 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = 0x10;
    local_40 = *(ulong **)(param_1 + 0xa0);
    if (*(ulong **)(param_1 + 0xa0) == puVar3) {
      local_40 = &local_50;
    }
    *(ulong **)(param_1 + 0xa0) = puVar3;
  }
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_58 = puVar1;
  FUN_0018b1a0(&local_58);
  *(undefined2 *)(param_1 + 0xb0) = 0;
  local_50 = local_50 & 0xffffffffffffff00;
  uStack_38 = 0x10;
  local_40 = &local_50;
  if ((undefined **)(param_1 + 0xb8) != &local_58) {
    puVar3 = (ulong *)(param_1 + 0xc0);
    local_50 = *puVar3;
    local_48 = *(undefined4 *)(param_1 + 200);
    uStack_44 = *(undefined4 *)(param_1 + 0xcc);
    *(undefined1 *)puVar3 = 0;
    uStack_38 = *(undefined8 *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = 0x10;
    local_40 = *(ulong **)(param_1 + 0xd0);
    if (*(ulong **)(param_1 + 0xd0) == puVar3) {
      local_40 = &local_50;
    }
    *(ulong **)(param_1 + 0xd0) = puVar3;
  }
  local_58 = puVar1;
  FUN_0018b1a0(&local_58);
  (**(code **)(*plVar4 + 0x20))(plVar4);
  return;
}

