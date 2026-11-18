
void FUN_0340c9e0(long *param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined *local_50;
  char *pcStack_48;
  
  *param_1 = (long)(PTR_DAT_04bc9b88 + 0x10);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  *(undefined4 *)(param_1 + 6) = 0;
  puVar2 = PTR_DAT_04bd4738;
  plVar1 = param_1 + 0x35;
  *(undefined2 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 0;
  param_1[4] = (long)param_1 + 0x34;
  param_1[5] = 3;
  param_1[0x34] = -1;
  param_1[0x35] = (long)(puVar2 + 0x10);
  param_1[0x38] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  param_1[0x36] = 0xffffffff;
  param_1[0x37] = 0xffffffff;
  FUN_03ebac90(plVar1,5,0,0,0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cIdle";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,0,&local_50);
  pcStack_48 = "State::cDeleteRequest";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,1,&local_50);
  puVar6 = (undefined8 *)(param_1[0x3b] + (ulong)(1 < *(uint *)(param_1 + 0x3a)) * 0x40);
  puVar6[2] = FUN_0340c474;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04b29b08;
  puVar6[1] = param_1;
  puVar6[4] = FUN_0340c514;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cDeleteWait";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,2,&local_50);
  puVar6 = (undefined8 *)(param_1[0x3b] + (ulong)(2 < *(uint *)(param_1 + 0x3a)) * 0x80);
  puVar6[2] = &LAB_0340c6d0;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04b29b08;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_0340c6d4;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cCreateRequest";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,3,&local_50);
  lVar3 = 0xc0;
  if (*(uint *)(param_1 + 0x3a) < 4) {
    lVar3 = 0;
  }
  puVar6 = (undefined8 *)(param_1[0x3b] + lVar3);
  puVar6[2] = &LAB_0340c8bc;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04b29b08;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_0340c8c0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cCreateWait";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,4,&local_50);
  puVar6 = (undefined8 *)(param_1[0x3b] + (ulong)(4 < *(uint *)(param_1 + 0x3a)) * 0x100);
  puVar6[2] = &LAB_0340c9d8;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04b29b08;
  puVar6[1] = param_1;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[4] = &LAB_0340c9dc;
  puVar6[5] = 0;
  *(undefined1 *)((long)param_1 + 0x1c9) = 1;
  uVar4 = *(uint *)(param_1 + 0x38);
  *(int *)(param_1 + 0x37) = (int)param_1[0x36];
  uVar5 = *(undefined4 *)((long)param_1 + 0x1b4);
  *(uint *)(param_1 + 0x36) = uVar4;
  *(undefined4 *)((long)param_1 + 0x1b4) = 0;
  *(undefined4 *)((long)param_1 + 0x1bc) = uVar5;
  if (uVar4 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x3a) <= uVar4) {
      uVar4 = 0;
    }
    puVar6 = *(undefined8 **)(param_1[0x3b] + (long)(int)uVar4 * 0x40);
    if (puVar6 != (undefined8 *)0x0) {
      (*(code *)*puVar6)();
    }
  }
  return;
}

