
/* WARNING: Removing unreachable block (ram,0x01c985a4) */
/* WARNING: Removing unreachable block (ram,0x01c985d4) */

void FUN_01c983c0(long *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  void *pvVar10;
  undefined *local_58;
  char *pcStack_50;
  undefined4 local_44;
  
  *param_1 = (long)param_2;
  puVar1 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    plVar6 = malloc(0x2ca40);
  }
  else {
    plVar6 = param_2;
    if (param_2 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar9 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x2ca40,8);
  }
  *(undefined1 *)((long)plVar6 + 0x16b) = 0;
  *(undefined1 *)((long)plVar6 + 0x6c) = 0;
  *(undefined4 *)(plVar6 + 0xd) = 0x100;
  plVar6[0xb] = (long)(PTR_DAT_04bb21f8 + 0x10);
  plVar6[0xc] = (long)plVar6 + 0x6c;
  puVar4 = PTR_DAT_04bc39a0;
  puVar3 = PTR_DAT_04bc3808;
  *(undefined4 *)(plVar6 + 2) = 0;
  plVar6[0x2e] = 0;
  *(undefined4 *)(plVar6 + 0x2f) = 0;
  *(undefined4 *)(plVar6 + 0x33) = 0;
  plVar6[0x30] = 0;
  plVar6[3] = (long)(puVar3 + 0x10);
  plVar6[7] = (long)(puVar3 + 0x10);
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[1] = 0;
  plVar8 = plVar6 + 0x5d;
  plVar6[0x31] = (long)(plVar6 + 0x31);
  plVar6[0x32] = (long)(plVar6 + 0x31);
  plVar6[0x34] = (long)(plVar6 + 0x37);
  for (lVar9 = 0x256; plVar8[-0x26] = (long)plVar8, lVar9 != 0; lVar9 = lVar9 + -2) {
    *plVar8 = (long)(plVar8 + 0x26);
    plVar8 = plVar8 + 0x4c;
  }
  plVar6[0x5921] = 0;
  *(undefined1 *)(plVar6 + 0x5947) = 0;
  lVar9 = *(long *)puVar1;
  plVar6[0x35] = (long)(plVar6 + 0x37);
  *(undefined4 *)(plVar6 + 0x36) = 600;
  param_1[0x18] = (long)plVar6;
  if (lVar9 == 0) {
    puVar7 = malloc(0x20);
  }
  else {
    plVar6 = param_2;
    if (param_2 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar9 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      puVar7 = (undefined8 *)0x0;
      if (plVar6 == (long *)0x0) goto LAB_01c98564;
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x20,8);
  }
LAB_01c98564:
  puVar7[2] = 0;
  *puVar7 = &PTR_LAB_04a44e60;
  puVar7[1] = 0;
  *(undefined8 *)((long)puVar7 + 0x15) = 0;
  param_1[0x19] = (long)puVar7;
  local_44 = 0x13;
  local_58 = (undefined *)CONCAT44(local_58._4_4_,0x13);
  if (*(long *)(*(long *)PTR_DAT_04bc1060 + 0xa0) == 0) {
    *(undefined8 **)(*(long *)PTR_DAT_04bc1060 + 0xa0) = puVar7;
    pvVar10 = (void *)param_1[0x15];
  }
  else {
    pvVar10 = (void *)param_1[0x15];
  }
  if (pvVar10 == (void *)0x0) {
    pvVar10 = (void *)param_1[0x16];
  }
  else {
    if (*(long *)puVar1 == 0) {
      free(pvVar10);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,pvVar10);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar10);
      }
    }
    param_1[0x15] = 0;
    pvVar10 = (void *)param_1[0x16];
  }
  if (pvVar10 == (void *)0x0) {
    pvVar10 = (void *)param_1[0x17];
  }
  else {
    if (*(long *)puVar1 == 0) {
      free(pvVar10);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,pvVar10);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar10);
      }
    }
    param_1[0x16] = 0;
    pvVar10 = (void *)param_1[0x17];
  }
  if (pvVar10 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar10);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,pvVar10);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar10);
      }
    }
    param_1[0x17] = 0;
  }
  plVar6 = param_1 + 3;
  FUN_03ebac90(plVar6,3,0,param_2,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_50 = "SendState::cIdle";
  local_58 = puVar1;
  FUN_03ebaf40(plVar6,0,&local_58);
  puVar7 = (undefined8 *)param_1[9];
  puVar7[2] = &LAB_01c988f8;
  puVar7[3] = 0;
  *puVar7 = &PTR_LAB_04a44ec0;
  puVar7[1] = param_1;
  puVar7[4] = &LAB_01c988fc;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  pcStack_50 = "SendState::cSetupHandle";
  local_58 = puVar1;
  FUN_03ebaf40(plVar6,1,&local_58);
  puVar7 = (undefined8 *)(param_1[9] + (ulong)(1 < *(uint *)(param_1 + 8)) * 0x40);
  puVar7[2] = &LAB_01c98900;
  puVar7[3] = 0;
  *puVar7 = &PTR_LAB_04a44ec0;
  puVar7[1] = param_1;
  puVar7[4] = &LAB_01c989b4;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  pcStack_50 = "SendState::cWithLoad";
  local_58 = puVar1;
  FUN_03ebaf40(plVar6,2,&local_58);
  puVar7 = (undefined8 *)(param_1[9] + (ulong)(2 < *(uint *)(param_1 + 8)) * 0x80);
  puVar7[2] = &LAB_01c989f4;
  puVar7[3] = 0;
  *puVar7 = &PTR_LAB_04a44ec0;
  puVar7[1] = param_1;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[4] = &LAB_01c98a00;
  puVar7[5] = 0;
  *(undefined1 *)((long)param_1 + 0x39) = 1;
  uVar2 = *(uint *)(param_1 + 6);
  *(int *)(param_1 + 5) = (int)param_1[4];
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_1 + 0x24);
  *(uint *)(param_1 + 4) = uVar2;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  if (uVar2 != 0xffffffff) {
    if (*(uint *)(param_1 + 8) <= uVar2) {
      uVar2 = 0;
    }
    puVar7 = *(undefined8 **)(param_1[9] + (long)(int)uVar2 * 0x40);
    if (puVar7 != (undefined8 *)0x0) {
      (*(code *)*puVar7)();
    }
  }
  plVar6 = param_1 + 0xc;
  FUN_03ebac90(plVar6,2,0,param_2,0);
  pcStack_50 = "ReceiveState::cIdle";
  local_58 = puVar1;
  FUN_03ebaf40(plVar6,0,&local_58);
  puVar7 = (undefined8 *)param_1[0x12];
  puVar7[2] = &LAB_01c990f4;
  puVar7[3] = 0;
  *puVar7 = &PTR_LAB_04a44ec0;
  puVar7[1] = param_1;
  puVar7[4] = &LAB_01c990f8;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  pcStack_50 = "ReceiveState::cWithSave";
  local_58 = puVar1;
  FUN_03ebaf40(plVar6,1,&local_58);
  puVar7 = (undefined8 *)(param_1[0x12] + (ulong)(1 < *(uint *)(param_1 + 0x11)) * 0x40);
  puVar7[2] = &LAB_01c990fc;
  puVar7[3] = 0;
  *puVar7 = &PTR_LAB_04a44ec0;
  puVar7[1] = param_1;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[4] = &LAB_01c99100;
  puVar7[5] = 0;
  *(undefined1 *)((long)param_1 + 0x81) = 1;
  uVar2 = *(uint *)(param_1 + 0xf);
  *(int *)(param_1 + 0xe) = (int)param_1[0xd];
  *(undefined4 *)((long)param_1 + 0x74) = *(undefined4 *)((long)param_1 + 0x6c);
  *(uint *)(param_1 + 0xd) = uVar2;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  if (uVar2 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x11) <= uVar2) {
      uVar2 = 0;
    }
    puVar7 = *(undefined8 **)(param_1[0x12] + (long)(int)uVar2 * 0x40);
    if (puVar7 != (undefined8 *)0x0) {
      (*(code *)*puVar7)();
    }
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)((long)param_1 + 0xd9) = 0;
  return;
}

