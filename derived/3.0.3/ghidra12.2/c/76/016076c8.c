
void FUN_016076c8(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined **local_e0;
  uint *local_d8;
  undefined4 local_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined **local_c0;
  undefined8 *puStack_b8;
  undefined4 local_b0;
  undefined1 local_8d;
  undefined **local_88;
  char *pcStack_80;
  undefined **local_78;
  undefined *puStack_70;
  undefined **local_68;
  undefined8 *puStack_60;
  undefined4 local_58;
  
  lVar6 = *(long *)(param_2 + 8);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar4 = PTR_DAT_04bb60a0;
  puVar1 = PTR_DAT_04bb60a0 + 0x10;
  param_1[5] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = lVar6;
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x140))(param_4,param_1);
  }
  *(undefined1 *)((long)param_1 + 0x143) = 0;
  puVar1 = PTR_DAT_04bb21f8;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 8) = 0x100;
  param_1[6] = (long)(puVar1 + 0x10);
  param_1[7] = (long)param_1 + 0x44;
  local_d0 = 0x48f9770;
  uStack_cc = 0;
  uStack_c8 = 0x405c812;
  uStack_c4 = 0;
  *param_1 = (long)&PTR_FUN_049b2928;
  local_e0 = &PTR_LAB_048f9770;
  local_d8 = (uint *)0x409bc98;
  local_b0 = 8;
  local_c0 = &PTR_LAB_048f9770;
  puStack_b8 = &DAT_0407ebb1;
  puVar1 = PTR_DAT_04bd0d40 + 0x10;
  param_1[0x2a] = (long)param_1;
  param_1[0x2b] = (long)puVar1;
  lVar6 = DAT_05ae7600;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  if (lVar6 != 0) {
    lVar6 = FUN_038cb610(lVar6,param_1 + 0x2b);
    param_1[0x2c] = lVar6;
    if (lVar6 != 0) {
      if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = lVar6 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
      }
      plVar8 = (long *)(lVar6 + 0x70);
      lVar7 = *plVar8;
      plVar3 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)(param_1 + 0x2b));
      *plVar8 = (long)plVar3;
      *plVar3 = lVar7;
      plVar3[1] = (long)plVar8;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar3;
      }
      *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
      if (lVar9 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
      }
    }
  }
  param_1[0x2f] = (long)(PTR_DAT_04bb3050 + 0x10);
  (*(code *)local_e0[3])(&local_e0);
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x33) = local_b0;
  param_1[0x2f] = (long)(puVar4 + 0x10);
  param_1[0x30] = (long)local_d8;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2f);
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x2b] = (long)&PTR_LAB_049b2a90;
  param_1[0x2f] = (long)&PTR_LAB_049b2b50;
  local_88 = &PTR_LAB_048f9770;
  pcStack_80 = "mOverridePaletteName";
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x35] = 0;
  local_58 = 0;
  local_d0 = 0x40;
  local_8d = 0;
  uStack_cc = uStack_cc & 0xffffff00;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  local_78 = &PTR_LAB_048f9770;
  puStack_70 = &DAT_040f98fb;
  local_68 = &PTR_LAB_048f9770;
  puStack_60 = &DAT_0407ebb1;
  ppuVar2 = (undefined **)(PTR_DAT_04bb2bc0 + 0x10);
  local_e0 = ppuVar2;
  local_d8 = &uStack_cc;
  FUN_00744dd0(param_1 + 0x3b,&local_88,&local_e0,param_1);
  local_58 = 0;
  local_88 = &PTR_LAB_048f9770;
  pcStack_80 = "mPaletteName";
  local_78 = &PTR_LAB_048f9770;
  puStack_70 = &DAT_040ca03d;
  local_d0 = 0x40;
  local_68 = &PTR_LAB_048f9770;
  puStack_60 = &DAT_0407ebb1;
  local_8d = 0;
  uStack_cc = s_DefaultName_0405c6e7._0_4_;
  uStack_c8 = s_DefaultName_0405c6e7._4_4_;
  uStack_c4 = 0x656d61;
  local_e0 = ppuVar2;
  local_d8 = &uStack_cc;
  FUN_00744dd0(param_1 + 0x4c,&local_88,&local_e0,param_1);
  param_1[0x5f] = 0;
  param_1[0x5e] = (long)"mReleaseVersion";
  param_1[0x61] = 0x80;
  param_1[0x5d] = (long)&PTR_LAB_049b1bd8;
  param_1[0x60] = 0;
  param_1[0x62] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5d);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x5d] + 0xf0))(param_1 + 0x5d);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x61) >> 7 & 1) == 0) {
    param_1[0x62] = 0;
    *(undefined4 *)(param_1 + 0x62) = 0;
  }
  param_1[99] = 0;
  *(uint *)(param_1 + 0x61) = *(uint *)(param_1 + 0x61) & 0xfeffffff;
  param_1[100] = (long)&PTR_LAB_048f9770;
  *(undefined4 *)(param_1 + 0x67) = 0;
  puVar1 = PTR_DAT_04c4b988;
  param_1[0x68] = 0;
  param_1[0x65] = (long)puVar1;
  param_1[0x66] = -1;
  *(undefined1 *)(param_1 + 0x69) = 1;
  (**(code **)(param_1[0x4c] + 0xf0))(param_1 + 0x4c);
  return;
}

