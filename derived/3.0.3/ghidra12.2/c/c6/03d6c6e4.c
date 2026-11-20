
void FUN_03d6c6e4(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_03c5cce8(param_1,param_2,0);
  puVar2 = PTR_DAT_04bd45f0;
  param_1[0x3e] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  if (param_3 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(char *)(param_3 + 0x28) != '\0';
  }
  *(bool *)(param_1 + 0x3f) = bVar3;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    pvVar5 = malloc(0x18);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar6 = (undefined8 *)(lVar7 + 8);
    if (lVar4 != 0) {
      puVar6 = (undefined8 *)(lVar4 + 0xa8);
    }
    pvVar5 = (void *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,0x18,8);
  }
  *(undefined4 *)((long)pvVar5 + 0x10) = 0;
  *(void **)pvVar5 = pvVar5;
  *(void **)((long)pvVar5 + 8) = pvVar5;
  plVar1 = param_1 + 0x40;
  param_1[0x3b] = (long)pvVar5;
  *(undefined4 *)((long)pvVar5 + 0x14) = 8;
  puVar2 = PTR_DAT_04bd4738;
  *param_1 = (long)&PTR_LAB_04b90a00;
  param_1[0x41] = 0xffffffff;
  param_1[0x42] = 0xffffffff;
  param_1[0x43] = 0xffffffff;
  param_1[0x40] = (long)(puVar2 + 0x10);
  *(undefined8 *)((long)param_1 + 0x2ac) = 0x3f00000040000000;
  *(undefined4 *)((long)param_1 + 0x2b4) = 0x3f733333;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 3;
  FUN_03ebac90(plVar1,10,0,0,0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cSleep";
  local_40 = puVar2;
  FUN_03ebaf40(plVar1,0,&local_40);
  puVar6 = (undefined8 *)param_1[0x46];
  puVar6[2] = FUN_03d6cbd8;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04b90bb0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_03d6cc3c;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_38 = "State::cStartDrag";
  local_40 = puVar2;
  FUN_03ebaf40(plVar1,1,&local_40);
  puVar6 = (undefined8 *)(param_1[0x46] + (ulong)(1 < *(uint *)(param_1 + 0x45)) * 0x40);
  puVar6[2] = &LAB_03d6cc40;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04b90bb0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_03d6cd14;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_38 = "State::cDrag";
  local_40 = puVar2;
  FUN_03ebaf40(plVar1,2,&local_40);
  puVar6 = (undefined8 *)(param_1[0x46] + (ulong)(2 < *(uint *)(param_1 + 0x45)) * 0x80);
  puVar6[2] = &LAB_03d6cdd0;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04b90bb0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_03d6cdd4;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_38 = "State::cDrop";
  local_40 = puVar2;
  FUN_03ebaf40(plVar1,3,&local_40);
  lVar7 = 0xc0;
  if (*(uint *)(param_1 + 0x45) < 4) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(param_1[0x46] + lVar7);
  puVar6[2] = &LAB_03d6cdd8;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04b90bb0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_03d6ce40;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_38 = "State::cEndDrop";
  local_40 = puVar2;
  FUN_03ebaf40(plVar1,4,&local_40);
  puVar6 = (undefined8 *)(param_1[0x46] + (ulong)(4 < *(uint *)(param_1 + 0x45)) * 0x100);
  puVar6[2] = &LAB_03d6cfa4;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04b90bb0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_03d6cfc0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_38 = "State::cCancel";
  local_40 = puVar2;
  FUN_03ebaf40(plVar1,5,&local_40);
  lVar7 = 0x140;
  if (*(uint *)(param_1 + 0x45) < 6) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(param_1[0x46] + lVar7);
  puVar6[2] = &LAB_03d6d02c;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04b90bb0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_03d6d094;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_38 = "State::cEndCancel";
  local_40 = puVar2;
  FUN_03ebaf40(plVar1,6,&local_40);
  lVar7 = 0x180;
  if (*(uint *)(param_1 + 0x45) < 7) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(param_1[0x46] + lVar7);
  puVar6[2] = &LAB_03d6d1f8;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04b90bb0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_03d6d214;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_38 = "State::cInto";
  local_40 = puVar2;
  FUN_03ebaf40(plVar1,7,&local_40);
  lVar7 = 0x1c0;
  if (*(uint *)(param_1 + 0x45) < 8) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(param_1[0x46] + lVar7);
  puVar6[2] = &LAB_03d6d280;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04b90bb0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_03d6d30c;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_38 = "State::cTargetMove";
  local_40 = puVar2;
  FUN_03ebaf40(plVar1,8,&local_40);
  puVar6 = (undefined8 *)(param_1[0x46] + (ulong)(8 < *(uint *)(param_1 + 0x45)) * 0x200);
  puVar6[2] = &LAB_03d6d4b0;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04b90bb0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_03d6d584;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_38 = "State::cEndTargetMove";
  local_40 = puVar2;
  FUN_03ebaf40(plVar1,9,&local_40);
  lVar7 = 0x240;
  if (*(uint *)(param_1 + 0x45) < 10) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(param_1[0x46] + lVar7);
  *puVar6 = &PTR_LAB_04b90bb0;
  puVar6[1] = param_1;
  puVar6[2] = &LAB_03d6d700;
  puVar6[3] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[4] = &LAB_03d6d71c;
  puVar6[5] = 0;
  return;
}

