
void FUN_00daf084(long *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *local_50;
  char *pcStack_48;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  puVar1 = PTR_DAT_04bd4738;
  param_1[1] = *param_2;
  lVar3 = param_2[1];
  plVar5 = param_1 + 0x17;
  *plVar5 = (long)(puVar1 + 0x10);
  param_1[3] = 0;
  *param_1 = (long)&PTR_LAB_049558c0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(int *)(param_1 + 2) = (int)lVar3;
  param_1[4] = 0x1000000000;
  param_1[5] = (long)(param_1 + 6);
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x21] = (long)param_1;
  param_1[0x22] = (long)FUN_00daf398;
  param_1[0x1f] = 0;
  param_1[0x20] = (long)&PTR_LAB_04955930;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  param_1[0x28] = (long)FUN_00daf688;
  param_1[0x29] = 0;
  param_1[0x26] = (long)&PTR_LAB_04955980;
  param_1[0x27] = (long)param_1;
  lVar3 = nn::os::GetSystemTick();
  param_1[0x2b] = lVar3;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  FUN_03ebac90(plVar5,5,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cIdle";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,0,&local_50);
  puVar4 = (undefined8 *)param_1[0x1d];
  puVar4[2] = &LAB_00daf74c;
  puVar4[3] = 0;
  puVar4[4] = &LAB_00daf750;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_049559d0;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_00daf754;
  puVar4[7] = 0;
  pcStack_48 = "State::cDownload";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,1,&local_50);
  puVar4 = (undefined8 *)(param_1[0x1d] + (ulong)(1 < *(uint *)(param_1 + 0x1c)) * 0x40);
  puVar4[4] = &LAB_00daf820;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_049559d0;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_00daf758;
  puVar4[3] = 0;
  puVar4[6] = &LAB_00daf844;
  puVar4[7] = 0;
  pcStack_48 = "State::cAppletStart";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,2,&local_50);
  puVar4 = (undefined8 *)(param_1[0x1d] + (ulong)(2 < *(uint *)(param_1 + 0x1c)) * 0x80);
  puVar4[4] = &LAB_00daf84c;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_049559d0;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_00daf848;
  puVar4[3] = 0;
  puVar4[6] = &LAB_00daf8fc;
  puVar4[7] = 0;
  pcStack_48 = "State::cApplet";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,3,&local_50);
  lVar3 = 0xc0;
  if (*(uint *)(param_1 + 0x1c) < 4) {
    lVar3 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x1d] + lVar3);
  puVar4[2] = &LAB_00daf900;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_049559d0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_00daf904;
  puVar4[5] = 0;
  puVar4[6] = &LAB_00daf9d4;
  puVar4[7] = 0;
  pcStack_48 = "State::cFinish";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,4,&local_50);
  puVar4 = (undefined8 *)(param_1[0x1d] + (ulong)(4 < *(uint *)(param_1 + 0x1c)) * 0x100);
  puVar4[2] = &LAB_00daf9d8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_049559d0;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_00dafa34;
  puVar4[7] = 0;
  puVar4[4] = &LAB_00dafa30;
  puVar4[5] = 0;
  *(undefined1 *)((long)param_1 + 0xd9) = 1;
  uVar2 = *(uint *)(param_1 + 0x1a);
  *(int *)(param_1 + 0x19) = (int)param_1[0x18];
  *(undefined4 *)((long)param_1 + 0xcc) = *(undefined4 *)((long)param_1 + 0xc4);
  *(uint *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)((long)param_1 + 0xc4) = 0;
  if (uVar2 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x1c) <= uVar2) {
      uVar2 = 0;
    }
    puVar4 = *(undefined8 **)(param_1[0x1d] + (long)(int)uVar2 * 0x40);
    if (puVar4 != (undefined8 *)0x0) {
      (*(code *)*puVar4)();
    }
  }
  return;
}

