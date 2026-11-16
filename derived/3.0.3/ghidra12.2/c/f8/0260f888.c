
void FUN_0260f888(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined *local_50;
  char *pcStack_48;
  
  lVar1 = param_1 + 8;
  FUN_03ebac90(lVar1,9,0,param_2,0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cSleep";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,0,&local_50);
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  puVar5[4] = &LAB_0260fbc4;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_04a86ed8;
  puVar5[1] = param_1;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cParseNpcRoom0";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,1,&local_50);
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x38) + (ulong)(1 < *(uint *)(param_1 + 0x30)) * 0x40)
  ;
  *puVar5 = &PTR_LAB_04a86ed8;
  puVar5[1] = param_1;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = &LAB_0260fbc8;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cParseNpcRoom1";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,2,&local_50);
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x38) + (ulong)(2 < *(uint *)(param_1 + 0x30)) * 0x80)
  ;
  *puVar5 = &PTR_LAB_04a86ed8;
  puVar5[1] = param_1;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = &LAB_0260fc50;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cParseNpcGarden";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,3,&local_50);
  lVar3 = 0xc0;
  if (*(uint *)(param_1 + 0x30) < 4) {
    lVar3 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar3);
  *puVar5 = &PTR_LAB_04a86ed8;
  puVar5[1] = param_1;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = &LAB_0260fccc;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cEditEndNpcHouse";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,4,&local_50);
  puVar5 = (undefined8 *)
           (*(long *)(param_1 + 0x38) + (ulong)(4 < *(uint *)(param_1 + 0x30)) * 0x100);
  *puVar5 = &PTR_LAB_04a86ed8;
  puVar5[1] = param_1;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = &LAB_0260fd3c;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cParseFacilityRoom0";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,5,&local_50);
  lVar3 = 0x140;
  if (*(uint *)(param_1 + 0x30) < 6) {
    lVar3 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar3);
  *puVar5 = &PTR_LAB_04a86ed8;
  puVar5[1] = param_1;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = &LAB_0260fe78;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cParseFacilityRoom1";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,6,&local_50);
  lVar3 = 0x180;
  if (*(uint *)(param_1 + 0x30) < 7) {
    lVar3 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar3);
  *puVar5 = &PTR_LAB_04a86ed8;
  puVar5[1] = param_1;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = &LAB_0260ff04;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cParseFacilityRoom2";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,7,&local_50);
  lVar3 = 0x1c0;
  if (*(uint *)(param_1 + 0x30) < 8) {
    lVar3 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar3);
  *puVar5 = &PTR_LAB_04a86ed8;
  puVar5[1] = param_1;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = &LAB_0260ff8c;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cEditEndFacility";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,8,&local_50);
  puVar5 = (undefined8 *)
           (*(long *)(param_1 + 0x38) + (ulong)(8 < *(uint *)(param_1 + 0x30)) * 0x200);
  *puVar5 = &PTR_LAB_04a86ed8;
  puVar5[1] = param_1;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = &LAB_02610008;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  *(undefined1 *)(param_1 + 0x29) = 1;
  uVar4 = *(uint *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x10) = uVar4;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (uVar4 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x30) <= uVar4) {
      uVar4 = 0;
    }
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x38) + (long)(int)uVar4 * 0x40);
    if (puVar5 != (undefined8 *)0x0) {
      (*(code *)*puVar5)();
    }
  }
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}

