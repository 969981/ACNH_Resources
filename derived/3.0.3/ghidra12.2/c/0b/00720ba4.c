
void FUN_00720ba4(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  char *pcVar9;
  long lVar10;
  undefined **local_78;
  char *local_70;
  undefined **local_68;
  undefined *puStack_60;
  undefined **local_58;
  undefined8 *puStack_50;
  undefined4 local_48;
  
  puVar4 = PTR_DAT_04bb2ea0;
  pcVar9 = (char *)((long)param_1 + 0x6c);
  param_1[0xc] = pcVar9;
  *(undefined1 *)((long)param_1 + 0x16b) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[1] = puVar4 + 0x10;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x100;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar3 = s_Component_040afd3c._0_8_;
  if (pcVar9 != "Component") {
    *(undefined1 *)((long)param_1 + 0x75) = 0;
    *(undefined8 *)pcVar9 = uVar3;
    *(char *)((long)param_1 + 0x74) = s_Component_040afd3c[8];
  }
  puVar4 = PTR_DAT_04bb21f8;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x2e] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2f) = 0xb;
  param_1[0xb] = puVar4 + 0x10;
  param_1[0x38] = 0;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0xffffffff;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0xffffffff;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x4d] = PTR_DAT_04bb3100 + 0x10;
  param_1[0x4e] = param_1;
  param_1[0x32] = PTR_LAB_04bb30d8;
  param_1[0x33] = 0;
  param_1[0x30] = &PTR_LAB_048fe328;
  param_1[0x31] = param_1;
  puVar5 = PTR_LAB_04bb30e0;
  param_1[0x37] = &PTR_LAB_048fe328;
  param_1[0x38] = param_1;
  param_1[0x39] = 0;
  param_1[0x3f] = param_1;
  param_1[0x40] = 0;
  param_1[0x39] = puVar5;
  param_1[0x3a] = 0;
  param_1[0x3e] = &PTR_LAB_048fe328;
  param_1[0x40] = &LAB_00705dc8;
  param_1[0x45] = &PTR_LAB_048fe328;
  *(undefined4 *)(param_1 + 0x5d) = 0x100;
  param_1[0x46] = param_1;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x54] = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  *(undefined1 *)((long)param_1 + 0x3eb) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xe;
  param_1[0x5b] = puVar4 + 0x10;
  *(undefined4 *)(param_1 + 0x50) = 7;
  param_1[0x56] = "KKFesConductorParams";
  param_1[0x47] = &LAB_00705dd4;
  *param_1 = &PTR_LAB_04900308;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)((long)param_1 + 0x2ec) = 0;
  param_1[0x5c] = (undefined1 *)((long)param_1 + 0x2ec);
  param_1[0x7f] = param_1 + 0x55;
  param_1[0x55] = &PTR_LAB_04900410;
  local_78 = &PTR_LAB_048f9770;
  local_70 = "mPlayerParamsBuffer";
  local_58 = &PTR_LAB_048f9770;
  puStack_50 = &DAT_0407ebb1;
  local_68 = &PTR_LAB_048f9770;
  puStack_60 = &DAT_040ee4c8;
  local_48 = 0x10000;
  param_1[0x81] = 0;
  param_1[0x80] = &PTR_FUN_04b64428;
  lVar6 = DAT_05ae7600;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  if (lVar6 != 0) {
    lVar6 = FUN_038cb610(lVar6,param_1 + 0x80);
    param_1[0x81] = lVar6;
    if (lVar6 != 0) {
      if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = lVar6 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
      }
      plVar8 = (long *)(lVar6 + 0x70);
      lVar7 = *plVar8;
      plVar1 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)(param_1 + 0x80));
      *plVar8 = (long)plVar1;
      *plVar1 = lVar7;
      plVar1[1] = (long)plVar8;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar1;
      }
      *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
      if (lVar10 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
      }
    }
  }
  param_1[0x84] = PTR_DAT_04bb3050 + 0x10;
  (*(code *)local_78[3])(&local_78);
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x85] = local_70;
  puVar4 = PTR_DAT_04bb60a0;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x88) = local_48;
  param_1[0x84] = puVar4 + 0x10;
  (**(code **)(param_1[0x55] + 0x140))(param_1 + 0x55,param_1 + 0x84);
  pcVar9 = (char *)param_1[0xc];
  param_1[0x80] = &PTR_LAB_04900578;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  param_1[0x84] = &PTR_LAB_04900638;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  *(uint *)(param_1 + 0x59) = *(uint *)(param_1 + 0x59) | 0x800000;
  if (pcVar9 != "KKFesConductor") {
    iVar2 = 0xe;
    if (*(int *)(param_1 + 0xd) < 0xf) {
      iVar2 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(pcVar9,"KKFesConductor",(long)iVar2);
    pcVar9[iVar2] = '\0';
  }
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffff0 | 5;
  *(uint *)(param_1 + 0x2f) = *(uint *)(param_1 + 0x2f) | 4;
  return;
}

