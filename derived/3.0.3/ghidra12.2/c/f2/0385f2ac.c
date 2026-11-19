
void FUN_0385f2ac(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *local_50;
  char *pcStack_48;
  
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
    bVar5 = false;
  }
  else {
    bVar5 = *(char *)(param_3 + 0x28) != '\0';
  }
  *(bool *)(param_1 + 0x3f) = bVar5;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    pvVar7 = malloc(0x18);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar8 = (undefined8 *)(lVar9 + 8);
    if (lVar6 != 0) {
      puVar8 = (undefined8 *)(lVar6 + 0xa8);
    }
    pvVar7 = (void *)(**(code **)(*(long *)*puVar8 + 0x30))((long *)*puVar8,0x18,8);
  }
  *(undefined4 *)((long)pvVar7 + 0x10) = 0;
  *(void **)pvVar7 = pvVar7;
  *(void **)((long)pvVar7 + 8) = pvVar7;
  plVar1 = param_1 + 0x52;
  param_1[0x3b] = (long)pvVar7;
  *(undefined4 *)((long)pvVar7 + 0x14) = 8;
  *param_1 = (long)&PTR_LAB_04b5f440;
  *(undefined1 *)((long)param_1 + 0x22c) = 0;
  param_1[0x44] = (long)param_1 + 0x22c;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0x40;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  *(undefined1 *)((long)param_1 + 0x26b) = 0;
  param_1[0x43] = (long)puVar2;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  puVar2 = PTR_DAT_04bd4738 + 0x10;
  param_1[100] = (long)&LAB_0385f740;
  param_1[0x62] = (long)&PTR_LAB_04b5f648;
  param_1[0x66] = (long)&PTR_LAB_04b5f698;
  param_1[0x6a] = (long)&PTR_LAB_04b5f6c0;
  param_1[0x6e] = (long)&PTR_LAB_04b5f6e8;
  param_1[0x72] = (long)&PTR_LAB_04b5f710;
  *(undefined4 *)((long)param_1 + 0x3c4) = 10;
  param_1[0x52] = (long)puVar2;
  param_1[0x53] = 0xffffffff;
  param_1[0x54] = 0xffffffff;
  param_1[0x55] = 0xffffffff;
  param_1[0x5c] = -0x100000000;
  param_1[0x61] = -0x100000000;
  param_1[0x87] = -0x100000000;
  param_1[0x51] = 0;
  *(undefined2 *)(param_1 + 0x56) = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[99] = (long)param_1;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(undefined4 *)((long)param_1 + 0x3dc) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  *(undefined1 *)((long)param_1 + 0x3fc) = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 2;
  *(undefined1 *)((long)param_1 + 0x42c) = 0;
  param_1[0x86] = 0;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  *(undefined4 *)((long)param_1 + 0x474) = 1;
  *(undefined1 *)(param_1 + 0x8f) = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  param_1[0x9c] = (long)&PTR_LAB_04b5f590;
  param_1[0x9e] = 0;
  *(undefined8 *)((long)param_1 + 0x3cc) = 0;
  *(undefined8 *)((long)param_1 + 0x3d4) = 0;
  param_1[0x7c] = 0x80000000d;
  *(undefined8 *)((long)param_1 + 0x3f1) = 0;
  *(undefined8 *)((long)param_1 + 0x3ec) = 0;
  *(undefined8 *)((long)param_1 + 0x424) = 0;
  *(undefined8 *)((long)param_1 + 0x41c) = 0;
  param_1[0x9d] = (long)&PTR_LAB_04b5f5c8;
  FUN_03ebac90(plVar1,5,0,0,0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cInit";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,0,&local_50);
  puVar8 = (undefined8 *)param_1[0x58];
  puVar8[4] = &LAB_0385f84c;
  puVar8[5] = 0;
  *puVar8 = &PTR_LAB_04b5f738;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cIdle";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,1,&local_50);
  puVar8 = (undefined8 *)(param_1[0x58] + (ulong)(1 < *(uint *)(param_1 + 0x57)) * 0x40);
  puVar8[2] = &LAB_0385f850;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_04b5f738;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_0385fa24;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cPlay";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,2,&local_50);
  puVar8 = (undefined8 *)(param_1[0x58] + (ulong)(2 < *(uint *)(param_1 + 0x57)) * 0x80);
  puVar8[4] = &LAB_0385fd8c;
  puVar8[5] = 0;
  *puVar8 = &PTR_LAB_04b5f738;
  puVar8[1] = param_1;
  puVar8[2] = &LAB_0385fa30;
  puVar8[3] = 0;
  puVar8[6] = &LAB_03860ba4;
  puVar8[7] = 0;
  pcStack_48 = "State::cPause";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,3,&local_50);
  lVar9 = 0xc0;
  if (*(uint *)(param_1 + 0x57) < 4) {
    lVar9 = 0;
  }
  puVar8 = (undefined8 *)(param_1[0x58] + lVar9);
  puVar8[2] = &LAB_03860bb0;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_04b5f738;
  puVar8[1] = param_1;
  puVar8[6] = &LAB_03860d20;
  puVar8[7] = 0;
  puVar8[4] = &LAB_03860d1c;
  puVar8[5] = 0;
  *(undefined1 *)((long)param_1 + 0x2b1) = 1;
  uVar3 = *(uint *)(param_1 + 0x55);
  *(int *)(param_1 + 0x54) = (int)param_1[0x53];
  uVar4 = *(undefined4 *)((long)param_1 + 0x29c);
  *(uint *)(param_1 + 0x53) = uVar3;
  *(undefined4 *)((long)param_1 + 0x29c) = 0;
  *(undefined4 *)((long)param_1 + 0x2a4) = uVar4;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x57) <= uVar3) {
      uVar3 = 0;
    }
    puVar8 = *(undefined8 **)(param_1[0x58] + (long)(int)uVar3 * 0x40);
    if (puVar8 != (undefined8 *)0x0) {
      (*(code *)*puVar8)();
    }
  }
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  return;
}

