
void FUN_02efe71c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *local_50;
  char *pcStack_48;
  
  param_1[4] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  puVar1 = PTR_DAT_04bd4738;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *param_1 = &PTR_FUN_04adff48;
  param_1[1] = puVar1 + 0x10;
  *(undefined1 *)((long)param_1 + 0x54) = 0xff;
  puVar1 = PTR_DAT_04bbb868 + 0x10;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xb] = 0xffffffffffffffff;
  param_1[0xc] = puVar1;
  puVar1 = PTR_DAT_04bbb848;
  *(undefined1 *)((long)param_1 + 0xcb) = 0;
  param_1[0xe] = puVar1 + 0x10;
  param_1[0x10] = (long)param_1 + 0x8c;
  *(undefined4 *)(param_1 + 0x11) = 0x40;
  puVar1 = PTR_DAT_04bb2bc0;
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  *(undefined1 *)((long)param_1 + 0xe4) = 0;
  param_1[0x1b] = (undefined1 *)((long)param_1 + 0xe4);
  *(undefined4 *)(param_1 + 0x1c) = 0x40;
  *(undefined1 *)((long)param_1 + 0x123) = 0;
  param_1[0x25] = 0;
  *(undefined2 *)(param_1 + 0x26) = 0xff;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  param_1[0xf] = puVar1 + 0x10;
  param_1[0x1a] = puVar1 + 0x10;
  FUN_031418f8(param_1 + 0x29);
  puVar1 = PTR_DAT_04bb48c8;
  param_1[0x14b] = 0;
  puVar6 = *(undefined8 **)puVar1;
  if (*(char *)(puVar6 + 1) == '\0') {
    uVar4 = nn::oe::GetProgramTotalActiveTime();
    *puVar6 = uVar4;
    *(undefined1 *)(puVar6 + 1) = 1;
  }
  else {
    uVar4 = *puVar6;
  }
  param_1[0x14b] = uVar4;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)((long)param_1 + 0xa63) = 0;
  puVar6 = param_1 + 1;
  FUN_03ebac90(puVar6,10,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cIdle";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,0,&local_50);
  puVar5 = (undefined8 *)param_1[7];
  puVar5[2] = &LAB_02eff674;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04adfff8;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_02eff784;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cCreateSeq";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,1,&local_50);
  puVar5 = (undefined8 *)(param_1[7] + (ulong)(1 < *(uint *)(param_1 + 6)) * 0x40);
  puVar5[2] = &LAB_02eff788;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04adfff8;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_02eff78c;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cDeleteSeq";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,2,&local_50);
  puVar5 = (undefined8 *)(param_1[7] + (ulong)(2 < *(uint *)(param_1 + 6)) * 0x80);
  puVar5[2] = &LAB_02eff8f0;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04adfff8;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_02eff8f4;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cManufacturerWait";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,3,&local_50);
  lVar2 = 0xc0;
  if (*(uint *)(param_1 + 6) < 4) {
    lVar2 = 0;
  }
  puVar5 = (undefined8 *)(param_1[7] + lVar2);
  puVar5[2] = &LAB_02eff974;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04adfff8;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_02eff978;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cExecDevice";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,4,&local_50);
  puVar5 = (undefined8 *)(param_1[7] + (ulong)(4 < *(uint *)(param_1 + 6)) * 0x100);
  puVar5[2] = &LAB_02eff97c;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04adfff8;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_02effa70;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cExecContent";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,5,&local_50);
  lVar2 = 0x140;
  if (*(uint *)(param_1 + 6) < 6) {
    lVar2 = 0;
  }
  puVar5 = (undefined8 *)(param_1[7] + lVar2);
  puVar5[2] = &LAB_02f000a4;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04adfff8;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_02f005d8;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cExecCatalog";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,6,&local_50);
  lVar2 = 0x180;
  if (*(uint *)(param_1 + 6) < 7) {
    lVar2 = 0;
  }
  puVar5 = (undefined8 *)(param_1[7] + lVar2);
  puVar5[2] = &LAB_02f00ee4;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04adfff8;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_02f00fd8;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cWipeWait";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,7,&local_50);
  lVar2 = 0x1c0;
  if (*(uint *)(param_1 + 6) < 8) {
    lVar2 = 0;
  }
  puVar5 = (undefined8 *)(param_1[7] + lVar2);
  puVar5[2] = &LAB_02f01320;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04adfff8;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_02f01324;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cUseEventFlow";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,8,&local_50);
  puVar5 = (undefined8 *)(param_1[7] + (ulong)(8 < *(uint *)(param_1 + 6)) * 0x200);
  puVar5[2] = &LAB_02f01380;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04adfff8;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_02f01470;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cExecMydesignShowcaseMobile";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,9,&local_50);
  lVar2 = 0x240;
  if (*(uint *)(param_1 + 6) < 10) {
    lVar2 = 0;
  }
  puVar6 = (undefined8 *)(param_1[7] + lVar2);
  puVar6[2] = &LAB_02f0152c;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04adfff8;
  puVar6[1] = param_1;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[4] = &LAB_02f017bc;
  puVar6[5] = 0;
  *(undefined1 *)((long)param_1 + 0x29) = 1;
  uVar3 = *(uint *)(param_1 + 4);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_1 + 0x14);
  *(uint *)(param_1 + 2) = uVar3;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 6) <= uVar3) {
      uVar3 = 0;
    }
    puVar6 = *(undefined8 **)(param_1[7] + (long)(int)uVar3 * 0x40);
    if (puVar6 != (undefined8 *)0x0) {
      (*(code *)*puVar6)();
    }
  }
  return;
}

