
void FUN_0339a6b4(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *local_50;
  char *pcStack_48;
  
  param_1[2] = param_1;
  param_1[3] = FUN_0339a994;
  *param_1 = &PTR_LAB_04b23fa8;
  param_1[1] = &PTR_LAB_04b24158;
  param_1[6] = param_1;
  param_1[7] = &LAB_0339acb0;
  param_1[4] = 0;
  param_1[5] = &PTR_LAB_04b24158;
  param_1[10] = param_1;
  param_1[0xb] = &LAB_0339adfc;
  puVar1 = PTR_DAT_04bd4738 + 0x10;
  param_1[0x10] = 0;
  plVar5 = param_1 + 0x11;
  *plVar5 = (long)puVar1;
  *(undefined2 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *(undefined1 *)((long)param_1 + 0xde) = 0;
  param_1[8] = 0;
  param_1[9] = &PTR_LAB_04b24158;
  param_1[0xc] = 0;
  param_1[0xd] = &PTR_LAB_04b24158;
  *(undefined2 *)((long)param_1 + 0xdc) = 0x101;
  param_1[0x1c] = &PTR_LAB_04b240e0;
  param_1[0x20] = &PTR_LAB_04b24108;
  param_1[0x24] = &PTR_LAB_04b24130;
  param_1[0xe] = param_1;
  param_1[0xf] = &LAB_0339af3c;
  param_1[0x14] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xd4) = 0xff;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x144) = 0xff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x29] = PTR_DAT_04bbba70 + 0x10;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined8 *)((long)param_1 + 0x17c) = 0x100000000;
  *(undefined4 *)((long)param_1 + 0x184) = 0;
  param_1[0x2d] = param_1 + 0x2d;
  param_1[0x2e] = param_1 + 0x2d;
  FUN_038e18e4(param_1 + 0x31);
  FUN_03ebac90(plVar5,4,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cPlay";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,0,&local_50);
  puVar4 = (undefined8 *)param_1[0x17];
  puVar4[2] = &LAB_0339b0ac;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b241a8;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0339b0b0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cCreateSeq";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,1,&local_50);
  puVar4 = (undefined8 *)(param_1[0x17] + (ulong)(1 < *(uint *)(param_1 + 0x16)) * 0x40);
  puVar4[4] = &LAB_0339b3d0;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04b241a8;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_0339b324;
  puVar4[3] = 0;
  puVar4[6] = &LAB_0339b698;
  puVar4[7] = 0;
  pcStack_48 = "State::cPreDeleteSeq";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,2,&local_50);
  puVar4 = (undefined8 *)(param_1[0x17] + (ulong)(2 < *(uint *)(param_1 + 0x16)) * 0x80);
  puVar4[2] = &LAB_0339b69c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b241a8;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0339b6b0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cDeleteSeq";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,3,&local_50);
  lVar2 = 0xc0;
  if (*(uint *)(param_1 + 0x16) < 4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x17] + lVar2);
  puVar4[2] = &LAB_0339b924;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b241a8;
  puVar4[1] = param_1;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0339b9c8;
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
  return;
}

