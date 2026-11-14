
void FUN_01db39fc(long param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *local_50;
  char *pcStack_48;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    puVar5 = malloc(4);
  }
  else {
    plVar4 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    puVar5 = (undefined4 *)(**(code **)(*plVar4 + 0x30))(plVar4,4,8);
  }
  *puVar5 = 0;
  lVar7 = *(long *)puVar1;
  *(undefined4 **)(param_1 + 0xb0) = puVar5;
  if (lVar7 == 0) {
    puVar6 = malloc(8);
  }
  else {
    plVar4 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,8,8);
  }
  *puVar6 = 0;
  *(undefined8 **)(param_1 + 0xb8) = puVar6;
  FUN_03ebac90(param_1,10,0,param_2,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cIdle";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0,&local_50);
  puVar6 = *(undefined8 **)(param_1 + 0x30);
  puVar6[2] = FUN_01db3e98;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b0d8;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01db3fc4;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cError";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,1,&local_50);
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)(1 < *(uint *)(param_1 + 0x28)) * 0x40)
  ;
  puVar6[2] = &LAB_01db4018;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b0d8;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01db401c;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cDoneReady";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,2,&local_50);
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)(2 < *(uint *)(param_1 + 0x28)) * 0x80)
  ;
  puVar6[2] = &LAB_01db4030;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b0d8;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01db4034;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cConnect";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,3,&local_50);
  lVar7 = 0xc0;
  if (*(uint *)(param_1 + 0x28) < 4) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7);
  puVar6[2] = &LAB_01db4098;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b0d8;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01db4160;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cGetPOPID";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,4,&local_50);
  puVar6 = (undefined8 *)
           (*(long *)(param_1 + 0x30) + (ulong)(4 < *(uint *)(param_1 + 0x28)) * 0x100);
  puVar6[2] = &LAB_01db41d0;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b0d8;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01db442c;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cDownloadHeader";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,5,&local_50);
  lVar7 = 0x140;
  if (*(uint *)(param_1 + 0x28) < 6) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7);
  puVar6[2] = &LAB_01db4834;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b0d8;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01db49ac;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cDownloadBody";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,6,&local_50);
  lVar7 = 0x180;
  if (*(uint *)(param_1 + 0x28) < 7) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7);
  puVar6[2] = &LAB_01db4a60;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b0d8;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01db4bdc;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cDeleteLegacyMyDesign";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,7,&local_50);
  lVar7 = 0x1c0;
  if (*(uint *)(param_1 + 0x28) < 8) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7);
  puVar6[2] = &LAB_01db4cc4;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b0d8;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01db4e3c;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cReadSD";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,8,&local_50);
  puVar6 = (undefined8 *)
           (*(long *)(param_1 + 0x30) + (ulong)(8 < *(uint *)(param_1 + 0x28)) * 0x200);
  puVar6[2] = &LAB_01db4e8c;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b0d8;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01db4e90;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cReadColorData";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,9,&local_50);
  lVar7 = 0x240;
  if (*(uint *)(param_1 + 0x28) < 10) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7);
  puVar6[2] = &LAB_01db4f00;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5b0d8;
  puVar6[1] = param_1;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[4] = &LAB_01db5150;
  puVar6[5] = 0;
  *(undefined1 *)(param_1 + 0x21) = 1;
  uVar2 = *(uint *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xc);
  *(uint *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (uVar2 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x28) <= uVar2) {
      uVar2 = 0;
    }
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x30) + (long)(int)uVar2 * 0x40);
    if (puVar6 != (undefined8 *)0x0) {
      (*(code *)*puVar6)();
    }
  }
  *(long **)(param_1 + 0x68) = param_2;
  return;
}

