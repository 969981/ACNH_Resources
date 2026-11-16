
void FUN_029098f0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_03c3c8f0();
  *(undefined2 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x47] = 0xffffffff;
  puVar1 = PTR_DAT_04bd4738;
  puVar2 = param_1 + 0x46;
  *param_1 = &PTR_LAB_04a928e0;
  param_1[0x48] = 0xffffffff;
  param_1[0x49] = 0xffffffff;
  param_1[0x4c] = 0;
  param_1[0x46] = puVar1 + 0x10;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4f] = 0xffffffffffffffff;
  param_1[0x50] = &PTR_LAB_04a92960;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x52] = &PTR_LAB_04a92980;
  *(undefined1 *)(param_1 + 0x56) = 0;
  puVar1 = PTR_DAT_04bbb868 + 0x10;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x57] = puVar1;
  puVar1 = PTR_DAT_04bbb848 + 0x10;
  *(undefined1 *)((long)param_1 + 0x323) = 0;
  *(undefined1 *)((long)param_1 + 0x2e4) = 0;
  param_1[0x59] = puVar1;
  param_1[0x5b] = (long)param_1 + 0x2e4;
  *(undefined4 *)(param_1 + 0x5c) = 0x40;
  puVar1 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0x67) = 0x40;
  *(undefined1 *)((long)param_1 + 0x37b) = 0;
  param_1[0x70] = 0;
  *(undefined1 *)((long)param_1 + 0x33c) = 0;
  param_1[0x66] = (undefined1 *)((long)param_1 + 0x33c);
  *(undefined2 *)(param_1 + 0x71) = 0xff;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x5a] = puVar1 + 0x10;
  param_1[0x65] = puVar1 + 0x10;
  FUN_03ebac90(puVar2,2,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cBootSequence";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,0,&local_40);
  puVar4 = (undefined8 *)param_1[0x4c];
  puVar4[2] = FUN_02909b20;
  puVar4[3] = 0;
  puVar4[4] = &LAB_02909b90;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04a929d0;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02909cd0;
  puVar4[7] = 0;
  pcStack_38 = "State::cExit";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,1,&local_40);
  puVar2 = (undefined8 *)(param_1[0x4c] + (ulong)(1 < *(uint *)(param_1 + 0x4b)) * 0x40);
  puVar2[2] = &LAB_02909d38;
  puVar2[3] = 0;
  *puVar2 = &PTR_LAB_04a929d0;
  puVar2[1] = param_1;
  puVar2[6] = &LAB_02909d40;
  puVar2[7] = 0;
  puVar2[4] = &LAB_02909d3c;
  puVar2[5] = 0;
  lVar5 = *(long *)PTR_DAT_04bb8460;
  if (lVar5 != 0) {
    *(undefined2 *)(lVar5 + 0x3c) = 0;
    *(undefined1 *)(lVar5 + 0x3e) = 0;
  }
  if (*(long *)PTR_DAT_04bb4fb8 != 0) {
    FUN_02509b80();
  }
  lVar5 = *(long *)PTR_DAT_04bb2118;
  uVar3 = nn::os::GetSystemTick();
  *(undefined8 *)(lVar5 + 0x520) = uVar3;
  return;
}

