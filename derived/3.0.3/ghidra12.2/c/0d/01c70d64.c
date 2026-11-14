
void FUN_01c70d64(long param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *__ptr;
  long lVar6;
  void *__ptr_00;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_03ebac90(param_1,0x12,0,param_2,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cNone";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0,&local_50);
  puVar5 = *(undefined8 **)(param_1 + 0x30);
  puVar5[2] = FUN_01c714fc;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a431f0;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01c7154c;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cStandbySaveDataReady";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,1,&local_50);
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)(1 < *(uint *)(param_1 + 0x28)) * 0x40)
  ;
  *puVar5 = &PTR_LAB_04a431f0;
  puVar5[1] = param_1;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = &LAB_01c71550;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cStandbySaveDataWait";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,2,&local_50);
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)(2 < *(uint *)(param_1 + 0x28)) * 0x80)
  ;
  *puVar5 = &PTR_LAB_04a431f0;
  puVar5[1] = param_1;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = &LAB_01c71740;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cSwitchStandbySaveDataProc";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,3,&local_50);
  lVar6 = 0xc0;
  if (*(uint *)(param_1 + 0x28) < 4) {
    lVar6 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar6);
  *puVar5 = &PTR_LAB_04a431f0;
  puVar5[1] = param_1;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = &LAB_01c717bc;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cReflectDownloadedData";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,4,&local_50);
  puVar5 = (undefined8 *)
           (*(long *)(param_1 + 0x30) + (ulong)(4 < *(uint *)(param_1 + 0x28)) * 0x100);
  puVar5[2] = &LAB_01c7181c;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a431f0;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01c719d0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cSetupSaveDataHostStartReady";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,5,&local_50);
  lVar6 = 0x140;
  if (*(uint *)(param_1 + 0x28) < 6) {
    lVar6 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar6);
  puVar5[2] = &LAB_01c71a94;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a431f0;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01c71ac0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cSetupSaveDataHostStartWait";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,6,&local_50);
  lVar6 = 0x180;
  if (*(uint *)(param_1 + 0x28) < 7) {
    lVar6 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar6);
  *puVar5 = &PTR_LAB_04a431f0;
  puVar5[1] = param_1;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = &LAB_01c71dd8;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cGoToCloudIslandStage";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,7,&local_50);
  lVar6 = 0x1c0;
  if (*(uint *)(param_1 + 0x28) < 8) {
    lVar6 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar6);
  *puVar5 = &PTR_LAB_04a431f0;
  puVar5[1] = param_1;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = &LAB_01c71e58;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cReturnVillageBeforeRollback";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,8,&local_50);
  puVar5 = (undefined8 *)
           (*(long *)(param_1 + 0x30) + (ulong)(8 < *(uint *)(param_1 + 0x28)) * 0x200);
  puVar5[2] = &LAB_01c71f9c;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a431f0;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01c720b0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cReturnFreeCloudIslandSaveDataReady";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,9,&local_50);
  lVar6 = 0x240;
  if (*(uint *)(param_1 + 0x28) < 10) {
    lVar6 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar6);
  puVar5[2] = &LAB_01c720f0;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a431f0;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01c721ec;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cReturnFreeCloudIslandSaveDataWait";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,10,&local_50);
  lVar6 = 0x280;
  if (*(uint *)(param_1 + 0x28) < 0xb) {
    lVar6 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar6);
  *puVar5 = &PTR_LAB_04a431f0;
  puVar5[1] = param_1;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = &LAB_01c72324;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cReturnLoadVillageSaveData";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0xb,&local_50);
  lVar6 = 0x2c0;
  if (*(uint *)(param_1 + 0x28) < 0xc) {
    lVar6 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar6);
  puVar5[2] = &LAB_01c723c0;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a431f0;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01c72408;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cReturnLoadWherearenSaveData";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0xc,&local_50);
  lVar6 = 0x300;
  if (*(uint *)(param_1 + 0x28) < 0xd) {
    lVar6 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar6);
  puVar5[2] = &LAB_01c725ac;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a431f0;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01c726c4;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cReturnVillageAfterRollback";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0xd,&local_50);
  lVar6 = 0x340;
  if (*(uint *)(param_1 + 0x28) < 0xe) {
    lVar6 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar6);
  puVar5[2] = &LAB_01c72750;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a431f0;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01c7280c;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cReturnFromCloudIslandCallback";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0xe,&local_50);
  lVar6 = 0x380;
  if (*(uint *)(param_1 + 0x28) < 0xf) {
    lVar6 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar6);
  puVar5[2] = &LAB_01c7286c;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a431f0;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01c7291c;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cWakeUpDisableCloudIslandSave";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0xf,&local_50);
  lVar6 = 0x3c0;
  if (*(uint *)(param_1 + 0x28) < 0x10) {
    lVar6 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar6);
  puVar5[2] = &LAB_01c72970;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a431f0;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01c7298c;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cWakeUpFreeCloudIslandSaveDataWait";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0x10,&local_50);
  puVar5 = (undefined8 *)
           (*(long *)(param_1 + 0x30) + (ulong)(0x10 < *(uint *)(param_1 + 0x28)) * 0x400);
  *puVar5 = &PTR_LAB_04a431f0;
  puVar5[1] = param_1;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = &LAB_01c72ad8;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cWakeUpLoadWherearenSaveData";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0x11,&local_50);
  lVar6 = 0x440;
  if (*(uint *)(param_1 + 0x28) < 0x12) {
    lVar6 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar6);
  puVar5[2] = &LAB_01c72c78;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a431f0;
  puVar5[1] = param_1;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[4] = &LAB_01c72d90;
  puVar5[5] = 0;
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
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x30) + (long)(int)uVar2 * 0x40);
    if (puVar5 != (undefined8 *)0x0) {
      (*(code *)*puVar5)();
    }
  }
  puVar1 = PTR_DAT_04bb2698;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    puVar5 = malloc(8);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar5 = (undefined8 *)(lVar6 + 8);
      if (lVar3 != 0) {
        puVar5 = (undefined8 *)(lVar3 + 0xa8);
      }
      param_2 = (long *)*puVar5;
      if (param_2 == (long *)0x0) goto LAB_01c71488;
    }
    puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,8,8);
  }
  if (puVar5 == (undefined8 *)0x0) goto LAB_01c71488;
  *puVar5 = 0;
  __ptr = *(undefined8 **)(param_1 + 0x138);
  *(undefined8 **)(param_1 + 0x138) = puVar5;
  if (__ptr == (undefined8 *)0x0) goto LAB_01c71488;
  __ptr_00 = (void *)*__ptr;
  *__ptr = 0;
  if (__ptr_00 == (void *)0x0) {
LAB_01c71448:
    lVar6 = *(long *)puVar1;
  }
  else {
    FUN_027c10a4((long)__ptr_00 + 0x56954);
    FUN_027c10a4((long)__ptr_00 + 0x568f0);
    if (*(long *)puVar1 != 0) {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar1,__ptr_00);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,__ptr_00);
      }
      goto LAB_01c71448;
    }
    free(__ptr_00);
    lVar6 = *(long *)puVar1;
  }
  if (lVar6 == 0) {
    free(__ptr);
  }
  else {
    plVar4 = (long *)FUN_038cb610(lVar6,__ptr);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
    }
  }
LAB_01c71488:
  *(byte *)(param_1 + 0x1a9) = *(byte *)(param_1 + 0x1a9) | 1;
  local_50._0_4_ = 0x11;
  if (*(uint *)(*(long *)PTR_DAT_04bb36f0 + 0x20) < 0x12) {
    local_50._0_4_ = 0;
  }
  *(bool *)(*(long *)(*(long *)PTR_DAT_04bb36f0 + 0x28) + (long)(int)local_50 * 0x38 + 0x30) =
       *(char *)(param_1 + 0x1a8) == '\0';
  return;
}

