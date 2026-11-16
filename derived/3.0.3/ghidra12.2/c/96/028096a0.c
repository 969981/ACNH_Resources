
void FUN_028096a0(undefined8 param_1,undefined8 param_2)

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
  
  local_34 = DAT_0559c8c4;
  FUN_028083d0(param_1,&local_34,param_2);
  puVar2 = PTR_DAT_04bb2020;
  local_90 = PTR_DAT_04bb2020 + 0x10;
  pcStack_88 = "talk_get_manpu";
  FUN_025ffac8(local_78,&local_90,param_2);
  puVar3 = PTR_DAT_04bc3488;
  pcStack_88 = (char *)((ulong)pcStack_88 & 0xffffffff);
  local_90._4_4_ = (uint)((ulong)local_90 >> 0x20) & 0xffffff00;
  puVar1 = PTR_DAT_04bc3488 + 0x10;
  local_90._0_4_ = DAT_0559c8c4;
  local_78[0] = puVar1;
  FUN_025e6090(local_78,&local_90);
  local_78[0] = puVar1;
  iVar4 = FUN_025e648c(local_78);
  if (iVar4 == -1) {
LAB_02809764:
    if (local_54 == 0) {
      local_54 = 1;
    }
  }
  else {
    local_90._0_4_ = (**(code **)(local_78[0] + 0x20))(local_78);
    if (0xc < (int)local_90) goto LAB_02809764;
  }
  FUN_02601530(local_78);
  local_34 = DAT_0559c8c8;
  FUN_028083d0(param_1,&local_34,param_2);
  local_90 = puVar2 + 0x10;
  pcStack_88 = "talk_get_manpu";
  FUN_025ffac8(local_78,&local_90,param_2);
  pcStack_88 = (char *)((ulong)pcStack_88 & 0xffffffff);
  local_90._4_4_ = (uint)((ulong)local_90 >> 0x20) & 0xffffff00;
  local_90._0_4_ = DAT_0559c8c8;
  local_78[0] = puVar3 + 0x10;
  FUN_025e6090(local_78,&local_90);
  local_78[0] = puVar3 + 0x10;
  iVar4 = FUN_025e648c(local_78);
  if (iVar4 == -1) {
LAB_02809808:
    if (local_54 == 0) {
      local_54 = 1;
    }
  }
  else {
    local_90._0_4_ = (**(code **)(local_78[0] + 0x20))(local_78);
    if (0xc < (int)local_90) goto LAB_02809808;
  }
  FUN_02601530(local_78);
  local_34 = DAT_0559c8cc;
  FUN_028083d0(param_1,&local_34,param_2);
  local_90 = puVar2 + 0x10;
  pcStack_88 = "talk_get_manpu";
  FUN_025ffac8(local_78,&local_90,param_2);
  pcStack_88 = (char *)((ulong)pcStack_88 & 0xffffffff);
  local_90._4_4_ = (uint)((ulong)local_90 >> 0x20) & 0xffffff00;
  local_90._0_4_ = DAT_0559c8cc;
  local_78[0] = puVar3 + 0x10;
  FUN_025e6090(local_78,&local_90);
  local_78[0] = puVar3 + 0x10;
  iVar4 = FUN_025e648c(local_78);
  if (iVar4 == -1) {
LAB_028098ac:
    if (local_54 == 0) {
      local_54 = 1;
    }
  }
  else {
    local_90._0_4_ = (**(code **)(local_78[0] + 0x20))(local_78);
    if (0xc < (int)local_90) goto LAB_028098ac;
  }
  FUN_02601530(local_78);
  local_34 = DAT_0559c8d0;
  FUN_028083d0(param_1,&local_34,param_2);
  local_90 = puVar2 + 0x10;
  pcStack_88 = "talk_get_manpu";
  FUN_025ffac8(local_78,&local_90,param_2);
  pcStack_88 = (char *)((ulong)pcStack_88 & 0xffffffff);
  local_90._4_4_ = (uint)((ulong)local_90 >> 0x20) & 0xffffff00;
  local_90._0_4_ = DAT_0559c8d0;
  local_78[0] = puVar3 + 0x10;
  FUN_025e6090(local_78,&local_90);
  local_78[0] = puVar3 + 0x10;
  iVar4 = FUN_025e648c(local_78);
  if (iVar4 == -1) {
LAB_02809950:
    if (local_54 == 0) {
      local_54 = 1;
    }
  }
  else {
    local_90._0_4_ = (**(code **)(local_78[0] + 0x20))(local_78);
    if (0xc < (int)local_90) goto LAB_02809950;
  }
  FUN_02601530(local_78);
  local_34 = DAT_0559c8d4;
  FUN_028083d0(param_1,&local_34,param_2);
  local_90 = puVar2 + 0x10;
  pcStack_88 = "talk_get_manpu";
  FUN_025ffac8(local_78,&local_90,param_2);
  pcStack_88 = (char *)((ulong)pcStack_88 & 0xffffffff);
  local_90._4_4_ = (uint)((ulong)local_90 >> 0x20) & 0xffffff00;
  local_90._0_4_ = DAT_0559c8d4;
  local_78[0] = puVar3 + 0x10;
  FUN_025e6090(local_78,&local_90);
  local_78[0] = puVar3 + 0x10;
  iVar4 = FUN_025e648c(local_78);
  if (iVar4 == -1) {
LAB_028099f4:
    if (local_54 == 0) {
      local_54 = 1;
    }
  }
  else {
    local_90._0_4_ = (**(code **)(local_78[0] + 0x20))(local_78);
    if (0xc < (int)local_90) goto LAB_028099f4;
  }
  FUN_02601530(local_78);
  local_34 = DAT_0559c8d8;
  FUN_028083d0(param_1,&local_34,param_2);
  local_90 = puVar2 + 0x10;
  pcStack_88 = "talk_get_manpu";
  FUN_025ffac8(local_78,&local_90,param_2);
  pcStack_88 = (char *)((ulong)pcStack_88 & 0xffffffff);
  local_90._4_4_ = (uint)((ulong)local_90 >> 0x20) & 0xffffff00;
  local_90._0_4_ = DAT_0559c8d8;
  local_78[0] = puVar3 + 0x10;
  FUN_025e6090(local_78,&local_90);
  local_78[0] = puVar3 + 0x10;
  iVar4 = FUN_025e648c(local_78);
  if (iVar4 == -1) {
LAB_02809a98:
    if (local_54 == 0) {
      local_54 = 1;
    }
  }
  else {
    local_90._0_4_ = (**(code **)(local_78[0] + 0x20))(local_78);
    if (0xc < (int)local_90) goto LAB_02809a98;
  }
  FUN_02601530(local_78);
  local_34 = DAT_0559c8dc;
  FUN_028083d0(param_1,&local_34,param_2);
  local_90 = puVar2 + 0x10;
  pcStack_88 = "talk_get_manpu";
  FUN_025ffac8(local_78,&local_90,param_2);
  pcStack_88 = (char *)((ulong)pcStack_88 & 0xffffffff);
  local_90._4_4_ = (uint)((ulong)local_90 >> 0x20) & 0xffffff00;
  local_90._0_4_ = DAT_0559c8dc;
  local_78[0] = puVar3 + 0x10;
  FUN_025e6090(local_78,&local_90);
  local_78[0] = puVar3 + 0x10;
  iVar4 = FUN_025e648c(local_78);
  if (iVar4 == -1) {
LAB_02809b3c:
    if (local_54 == 0) {
      local_54 = 1;
    }
  }
  else {
    local_90._0_4_ = (**(code **)(local_78[0] + 0x20))(local_78);
    if (0xc < (int)local_90) goto LAB_02809b3c;
  }
  FUN_02601530(local_78);
  local_34 = DAT_0559c8e0;
  FUN_028083d0(param_1,&local_34,param_2);
  local_90 = puVar2 + 0x10;
  pcStack_88 = "talk_get_manpu";
  FUN_025ffac8(local_78,&local_90,param_2);
  pcStack_88 = (char *)((ulong)pcStack_88 & 0xffffffff);
  local_90._4_4_ = (uint)((ulong)local_90 >> 0x20) & 0xffffff00;
  local_90._0_4_ = DAT_0559c8e0;
  local_78[0] = puVar3 + 0x10;
  FUN_025e6090(local_78,&local_90);
  local_78[0] = puVar3 + 0x10;
  iVar4 = FUN_025e648c(local_78);
  if (iVar4 == -1) {
LAB_02809be0:
    if (local_54 == 0) {
      local_54 = 1;
    }
  }
  else {
    local_90._0_4_ = (**(code **)(local_78[0] + 0x20))(local_78);
    if (0xc < (int)local_90) goto LAB_02809be0;
  }
  FUN_02601530(local_78);
  local_34 = DAT_0559c8e4;
  FUN_028083d0(param_1,&local_34,param_2);
  local_90 = puVar2 + 0x10;
  pcStack_88 = "talk_get_manpu";
  FUN_025ffac8(local_78,&local_90,param_2);
  pcStack_88 = (char *)((ulong)pcStack_88 & 0xffffffff);
  local_90._4_4_ = (uint)((ulong)local_90 >> 0x20) & 0xffffff00;
  local_90._0_4_ = DAT_0559c8e4;
  local_78[0] = puVar3 + 0x10;
  FUN_025e6090(local_78,&local_90);
  local_78[0] = puVar3 + 0x10;
  iVar4 = FUN_025e648c(local_78);
  if (iVar4 == -1) {
LAB_02809c84:
    if (local_54 == 0) {
      local_54 = 1;
    }
  }
  else {
    local_90._0_4_ = (**(code **)(local_78[0] + 0x20))(local_78);
    if (0xc < (int)local_90) goto LAB_02809c84;
  }
  FUN_02601530(local_78);
  local_34 = DAT_0559c8e8;
  FUN_028083d0(param_1,&local_34,param_2);
  local_90 = puVar2 + 0x10;
  pcStack_88 = "talk_get_manpu";
  FUN_025ffac8(local_78,&local_90,param_2);
  pcStack_88 = (char *)((ulong)pcStack_88 & 0xffffffff);
  local_90._4_4_ = (uint)((ulong)local_90 >> 0x20) & 0xffffff00;
  local_90._0_4_ = DAT_0559c8e8;
  local_78[0] = puVar3 + 0x10;
  FUN_025e6090(local_78,&local_90);
  local_78[0] = puVar3 + 0x10;
  iVar4 = FUN_025e648c(local_78);
  if (iVar4 == -1) {
LAB_02809d28:
    if (local_54 == 0) {
      local_54 = 1;
    }
  }
  else {
    local_90._0_4_ = (**(code **)(local_78[0] + 0x20))(local_78);
    if (0xc < (int)local_90) goto LAB_02809d28;
  }
  FUN_02601530(local_78);
  local_34 = DAT_0559c8ec;
  FUN_028083d0(param_1,&local_34,param_2);
  local_90 = puVar2 + 0x10;
  pcStack_88 = "talk_get_manpu";
  FUN_025ffac8(local_78,&local_90,param_2);
  pcStack_88 = (char *)((ulong)pcStack_88 & 0xffffffff);
  local_90._4_4_ = (uint)((ulong)local_90 >> 0x20) & 0xffffff00;
  local_90._0_4_ = DAT_0559c8ec;
  local_78[0] = puVar3 + 0x10;
  FUN_025e6090(local_78,&local_90);
  local_78[0] = puVar3 + 0x10;
  iVar4 = FUN_025e648c(local_78);
  if (iVar4 != -1) {
    local_90._0_4_ = (**(code **)(local_78[0] + 0x20))(local_78);
    if ((int)local_90 < 0xd) goto LAB_02809ddc;
  }
  if (local_54 == 0) {
    local_54 = 1;
  }
LAB_02809ddc:
  FUN_02601530(local_78);
  return;
}

