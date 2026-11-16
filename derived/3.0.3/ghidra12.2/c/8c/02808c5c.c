
void FUN_02808c5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 local_90;
  char *pcStack_88;
  undefined *local_78 [4];
  int local_54;
  int local_34;
  
  local_34 = DAT_0559c898;
  FUN_028083d0(param_1,&local_34,param_2);
  puVar2 = PTR_DAT_04bb2020;
  local_90 = PTR_DAT_04bb2020 + 0x10;
  pcStack_88 = "talk_get_manpu";
  FUN_025ffac8(local_78,&local_90,param_2);
  puVar3 = PTR_DAT_04bc3488;
  pcStack_88 = (char *)((ulong)pcStack_88 & 0xffffffff);
  local_90._4_4_ = (uint)((ulong)local_90 >> 0x20) & 0xffffff00;
  puVar1 = PTR_DAT_04bc3488 + 0x10;
  local_90._0_4_ = DAT_0559c898;
  local_78[0] = puVar1;
  FUN_025e6090(local_78,&local_90);
  local_78[0] = puVar1;
  iVar4 = FUN_025e648c(local_78);
  if (iVar4 == -1) {
LAB_02808d20:
    if (local_54 == 0) {
      local_54 = 1;
    }
  }
  else {
    local_90._0_4_ = (**(code **)(local_78[0] + 0x20))(local_78);
    if (0xc < (int)local_90) goto LAB_02808d20;
  }
  FUN_02601530(local_78);
  local_34 = DAT_0559c89c;
  FUN_028083d0(param_1,&local_34,param_2);
  local_90 = puVar2 + 0x10;
  pcStack_88 = "talk_get_manpu";
  FUN_025ffac8(local_78,&local_90,param_2);
  pcStack_88 = (char *)((ulong)pcStack_88 & 0xffffffff);
  local_90._4_4_ = (uint)((ulong)local_90 >> 0x20) & 0xffffff00;
  local_90._0_4_ = DAT_0559c89c;
  local_78[0] = puVar3 + 0x10;
  FUN_025e6090(local_78,&local_90);
  local_78[0] = puVar3 + 0x10;
  iVar4 = FUN_025e648c(local_78);
  if (iVar4 == -1) {
LAB_02808dc4:
    if (local_54 == 0) {
      local_54 = 1;
    }
  }
  else {
    local_90._0_4_ = (**(code **)(local_78[0] + 0x20))(local_78);
    if (0xc < (int)local_90) goto LAB_02808dc4;
  }
  FUN_02601530(local_78);
  local_34 = DAT_0559c8a0;
  FUN_028083d0(param_1,&local_34,param_2);
  local_90 = puVar2 + 0x10;
  pcStack_88 = "talk_get_manpu";
  FUN_025ffac8(local_78,&local_90,param_2);
  pcStack_88 = (char *)((ulong)pcStack_88 & 0xffffffff);
  local_90._4_4_ = (uint)((ulong)local_90 >> 0x20) & 0xffffff00;
  local_90._0_4_ = DAT_0559c8a0;
  local_78[0] = puVar3 + 0x10;
  FUN_025e6090(local_78,&local_90);
  local_78[0] = puVar3 + 0x10;
  iVar4 = FUN_025e648c(local_78);
  if (iVar4 == -1) {
LAB_02808e68:
    if (local_54 == 0) {
      local_54 = 1;
    }
  }
  else {
    local_90._0_4_ = (**(code **)(local_78[0] + 0x20))(local_78);
    if (0xc < (int)local_90) goto LAB_02808e68;
  }
  FUN_02601530(local_78);
  local_34 = DAT_0559c8a4;
  FUN_028083d0(param_1,&local_34,param_2);
  local_90 = puVar2 + 0x10;
  pcStack_88 = "talk_get_manpu";
  FUN_025ffac8(local_78,&local_90,param_2);
  pcStack_88 = (char *)((ulong)pcStack_88 & 0xffffffff);
  local_90._4_4_ = (uint)((ulong)local_90 >> 0x20) & 0xffffff00;
  local_90._0_4_ = DAT_0559c8a4;
  local_78[0] = puVar3 + 0x10;
  FUN_025e6090(local_78,&local_90);
  local_78[0] = puVar3 + 0x10;
  iVar4 = FUN_025e648c(local_78);
  if (iVar4 != -1) {
    local_90._0_4_ = (**(code **)(local_78[0] + 0x20))(local_78);
    if ((int)local_90 < 0xd) goto LAB_02808f1c;
  }
  if (local_54 == 0) {
    local_54 = 1;
  }
LAB_02808f1c:
  FUN_02601530(local_78);
  return;
}

