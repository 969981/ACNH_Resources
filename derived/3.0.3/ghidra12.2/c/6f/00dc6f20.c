
void FUN_00dc6f20(long *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *local_50;
  char *pcStack_48;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  param_1[1] = *param_2;
  lVar3 = param_2[1];
  param_1[3] = 0;
  param_1[4] = 0x1000000000;
  param_1[5] = (long)(param_1 + 6);
  puVar1 = PTR_DAT_04bd4738;
  *param_1 = (long)&PTR_LAB_04956848;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  *(int *)(param_1 + 2) = (int)lVar3;
  plVar5 = param_1 + 0x17;
  *plVar5 = (long)(puVar1 + 0x10);
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  FUN_026cd93c(param_1 + 0x20);
  param_1[0x20] = (long)(PTR_DAT_04bc3630 + 0x10);
  FUN_026cd93c(param_1 + 0x37);
  puVar1 = PTR_DAT_04bc3638;
  *(undefined1 *)((long)param_1 + 0x269) = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x37] = (long)(puVar1 + 0x10);
  FUN_03ebac90(plVar5,5,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cIdle";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,0,&local_50);
  puVar4 = (undefined8 *)param_1[0x1d];
  puVar4[2] = &LAB_00dc7220;
  puVar4[3] = 0;
  puVar4[4] = &LAB_00dc7224;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_049568b8;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_00dc7228;
  puVar4[7] = 0;
  pcStack_48 = "State::cNetSetup";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,1,&local_50);
  puVar4 = (undefined8 *)(param_1[0x1d] + (ulong)(1 < *(uint *)(param_1 + 0x1c)) * 0x40);
  puVar4[4] = &LAB_00dc724c;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_049568b8;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_00dc722c;
  puVar4[3] = 0;
  puVar4[6] = &LAB_00dc72ac;
  puVar4[7] = 0;
  pcStack_48 = "State::cUpdateInfo";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,2,&local_50);
  puVar4 = (undefined8 *)(param_1[0x1d] + (ulong)(2 < *(uint *)(param_1 + 0x1c)) * 0x80);
  puVar4[4] = &LAB_00dc72cc;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_049568b8;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_00dc72b0;
  puVar4[3] = 0;
  puVar4[6] = &LAB_00dc73f4;
  puVar4[7] = 0;
  pcStack_48 = "State::cUpload";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,3,&local_50);
  lVar3 = 0xc0;
  if (*(uint *)(param_1 + 0x1c) < 4) {
    lVar3 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x1d] + lVar3);
  puVar4[2] = &LAB_00dc73f8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_049568b8;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_00dc745c;
  puVar4[5] = 0;
  puVar4[6] = &LAB_00dc7574;
  puVar4[7] = 0;
  pcStack_48 = "State::cFinish";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,4,&local_50);
  puVar4 = (undefined8 *)(param_1[0x1d] + (ulong)(4 < *(uint *)(param_1 + 0x1c)) * 0x100);
  puVar4[2] = &LAB_00dc7578;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_049568b8;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_00dc75c4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_00dc75c0;
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

