
void FUN_027c3158(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *local_50;
  char *pcStack_48;
  
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar1 = PTR_DAT_04bd4738 + 0x10;
  *(undefined2 *)(param_1 + 0x15) = 0;
  plVar5 = param_1 + 0x11;
  *plVar5 = (long)puVar1;
  param_1[0x14] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[6] = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  DAT_05590f18 = &PTR_LAB_04a91420;
  DAT_05590f28 = FUN_027c3440;
  DAT_05590f30 = 0;
  DAT_05590f20 = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[3] = param_1;
  param_1[4] = FUN_027c3690;
  param_1[2] = &PTR_LAB_04a91448;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_03ebac90(plVar5,4,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cIdle";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,0,&local_50);
  puVar4 = (undefined8 *)param_1[0x17];
  puVar4[2] = &LAB_027c36ec;
  puVar4[3] = 0;
  puVar4[4] = &LAB_027c36f0;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04a91498;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_027c36f4;
  puVar4[7] = 0;
  pcStack_48 = "State::cHostWaitResponse";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,1,&local_50);
  puVar4 = (undefined8 *)(param_1[0x17] + (ulong)(1 < *(uint *)(param_1 + 0x16)) * 0x40);
  puVar4[4] = &LAB_027c36fc;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04a91498;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_027c36f8;
  puVar4[3] = 0;
  puVar4[6] = &LAB_027c3bc4;
  puVar4[7] = 0;
  pcStack_48 = "State::cHostSave";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,2,&local_50);
  puVar4 = (undefined8 *)(param_1[0x17] + (ulong)(2 < *(uint *)(param_1 + 0x16)) * 0x80);
  puVar4[4] = &LAB_027c3c34;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04a91498;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_027c3bc8;
  puVar4[3] = 0;
  puVar4[6] = &LAB_027c3d70;
  puVar4[7] = 0;
  pcStack_48 = "State::cVisitorWaitResponse";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,3,&local_50);
  lVar2 = 0xc0;
  if (*(uint *)(param_1 + 0x16) < 4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x17] + lVar2);
  puVar4[2] = &LAB_027c3d74;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a91498;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_027c3dc8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_027c3d78;
  puVar4[5] = 0;
  *(undefined1 *)((long)param_1 + 0xa9) = 1;
  uVar3 = *(uint *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_1 + 0x12);
  *(undefined4 *)((long)param_1 + 0x9c) = *(undefined4 *)((long)param_1 + 0x94);
  *(uint *)(param_1 + 0x12) = uVar3;
  *(undefined4 *)((long)param_1 + 0x94) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x16) <= uVar3) {
      uVar3 = 0;
    }
    puVar4 = *(undefined8 **)(param_1[0x17] + (long)(int)uVar3 * 0x40);
    if (puVar4 != (undefined8 *)0x0) {
      (*(code *)*puVar4)();
    }
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return;
}

