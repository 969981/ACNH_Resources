
undefined8 FUN_00710d8c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_50;
  char *pcStack_48;
  
  puVar2 = PTR_DAT_04bb2020;
  lVar5 = *(long *)(param_1 + 0x70);
  if (*(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80) < 2) {
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "TownNewsHeardEventStarted";
    uVar3 = FUN_0273f0a0(&local_50);
    if ((uVar3 & 1) == 0) {
      local_50 = (undefined *)CONCAT44(local_50._4_4_,1);
    }
    else {
      local_50 = (undefined *)((ulong)local_50._4_4_ << 0x20);
    }
  }
  else {
    local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
  }
  FUN_03ebac90(lVar5 + 0x278,4,(ulong)local_50 & 0xffffffff,0,0);
  lVar1 = lVar5 + 0x278;
  puVar2 = puVar2 + 0x10;
  pcStack_48 = "State::cNoCheck";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,0,&local_50);
  puVar4 = *(undefined8 **)(lVar5 + 0x2a8);
  puVar4[2] = &LAB_00710fa0;
  puVar4[3] = 0;
  puVar4[4] = &LAB_00710fa4;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_048ff140;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_00710fa8;
  puVar4[7] = 0;
  pcStack_48 = "State::cCheck";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,1,&local_50);
  puVar4 = (undefined8 *)(*(long *)(lVar5 + 0x2a8) + (ulong)(1 < *(uint *)(lVar5 + 0x2a0)) * 0x40);
  puVar4[4] = &LAB_00710fb0;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_048ff140;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_00710fac;
  puVar4[3] = 0;
  puVar4[6] = &LAB_0071116c;
  puVar4[7] = 0;
  pcStack_48 = "State::cRequestSpeak";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,2,&local_50);
  puVar4 = (undefined8 *)(*(long *)(lVar5 + 0x2a8) + (ulong)(2 < *(uint *)(lVar5 + 0x2a0)) * 0x80);
  puVar4[4] = &LAB_00711174;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_048ff140;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_00711170;
  puVar4[3] = 0;
  puVar4[6] = &LAB_007112f0;
  puVar4[7] = 0;
  pcStack_48 = "State::cWaitMessage";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,3,&local_50);
  lVar1 = 0xc0;
  if (*(uint *)(lVar5 + 0x2a0) < 4) {
    lVar1 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(lVar5 + 0x2a8) + lVar1);
  *puVar4 = &PTR_LAB_048ff140;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_007112f4;
  puVar4[3] = 0;
  puVar4[4] = &LAB_00711494;
  puVar4[5] = 0;
  puVar4[6] = &LAB_00711748;
  puVar4[7] = 0;
  return 0;
}

