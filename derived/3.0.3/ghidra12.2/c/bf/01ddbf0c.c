
void FUN_01ddbf0c(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *local_50;
  char *pcStack_48;
  
  *param_1 = param_2;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "NetReportMgr";
  local_50 = puVar1;
  uVar4 = FUN_038c6d48(0xc800,&local_50,param_2,8,1,0);
  puVar6 = param_1 + 2;
  param_1[1] = uVar4;
  FUN_03ebac90(puVar6,5,0,uVar4,0);
  pcStack_48 = "State::cIdle";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,0,&local_50);
  puVar5 = (undefined8 *)param_1[8];
  puVar5[2] = FUN_01ddc16c;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a5bb90;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01ddc1ac;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cConnect";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,1,&local_50);
  puVar5 = (undefined8 *)(param_1[8] + (ulong)(1 < *(uint *)(param_1 + 7)) * 0x40);
  puVar5[2] = &LAB_01ddc1b0;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a5bb90;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01ddc250;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cCheckNSA";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,2,&local_50);
  puVar5 = (undefined8 *)(param_1[8] + (ulong)(2 < *(uint *)(param_1 + 7)) * 0x80);
  puVar5[2] = &LAB_01ddc4ac;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a5bb90;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01ddc544;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cContentReport";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,3,&local_50);
  lVar2 = 0xc0;
  if (*(uint *)(param_1 + 7) < 4) {
    lVar2 = 0;
  }
  puVar5 = (undefined8 *)(param_1[8] + lVar2);
  puVar5[2] = &LAB_01ddc79c;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a5bb90;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01ddc7b8;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cUserReport";
  local_50 = puVar1;
  FUN_03ebaf40(puVar6,4,&local_50);
  puVar6 = (undefined8 *)(param_1[8] + (ulong)(4 < *(uint *)(param_1 + 7)) * 0x100);
  puVar6[2] = &LAB_01ddca04;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5bb90;
  puVar6[1] = param_1;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[4] = &LAB_01ddca20;
  puVar6[5] = 0;
  *(undefined1 *)((long)param_1 + 0x31) = 1;
  uVar3 = *(uint *)(param_1 + 5);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 3);
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)((long)param_1 + 0x1c);
  *(uint *)(param_1 + 3) = uVar3;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 7) <= uVar3) {
      uVar3 = 0;
    }
    puVar6 = *(undefined8 **)(param_1[8] + (long)(int)uVar3 * 0x40);
    if (puVar6 != (undefined8 *)0x0) {
      (*(code *)*puVar6)();
    }
  }
  return;
}

