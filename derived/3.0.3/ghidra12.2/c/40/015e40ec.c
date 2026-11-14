
void FUN_015e40ec(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 uVar6;
  undefined *local_c0;
  char *pcStack_b8;
  undefined4 local_b0;
  char local_ac [9];
  undefined6 uStack_a3;
  char cStack_9d;
  undefined3 uStack_9c;
  undefined1 local_99;
  undefined1 local_8d;
  undefined **local_88;
  char *pcStack_80;
  undefined **local_78;
  undefined *puStack_70;
  undefined **local_68;
  undefined8 *puStack_60;
  undefined4 local_58;
  
  lVar5 = *(long *)(param_2 + 8);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar1 = PTR_DAT_04bb60a0 + 0x10;
  param_1[5] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = lVar5;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  *(undefined1 *)((long)param_1 + 0x143) = 0;
  puVar1 = PTR_DAT_04bb21f8;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = (long)param_1;
  *(undefined4 *)(param_1 + 8) = 0x100;
  *param_1 = (long)&PTR_LAB_049afcb8;
  param_1[6] = (long)(puVar1 + 0x10);
  param_1[7] = (long)param_1 + 0x44;
  local_58 = 0;
  local_b0 = 0x20;
  local_8d = 0;
  builtin_strncpy(local_ac,"cloud_vr",9);
  local_88 = &PTR_LAB_048f9770;
  pcStack_80 = "mModelName";
  local_78 = &PTR_LAB_048f9770;
  puStack_70 = &DAT_040b07eb;
  local_68 = &PTR_LAB_048f9770;
  puStack_60 = &DAT_0407ebb1;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  local_c0 = puVar1;
  pcStack_b8 = local_ac;
  FUN_008f0e20(param_1 + 0x2b,&local_88,&local_c0,param_1);
  local_58 = 0;
  local_88 = &PTR_LAB_048f9770;
  pcStack_80 = "mTextureName";
  local_78 = &PTR_LAB_048f9770;
  puStack_70 = &DAT_040621f8;
  local_b0 = 0x20;
  local_68 = &PTR_LAB_048f9770;
  puStack_60 = &DAT_0407ebb1;
  local_8d = 0;
  local_ac[0] = s_VRCloudCumulonimbus_0409bc14[0];
  local_ac[1] = s_VRCloudCumulonimbus_0409bc14[1];
  local_ac[2] = s_VRCloudCumulonimbus_0409bc14[2];
  local_ac[3] = s_VRCloudCumulonimbus_0409bc14[3];
  local_ac[4] = s_VRCloudCumulonimbus_0409bc14[4];
  local_ac[5] = s_VRCloudCumulonimbus_0409bc14[5];
  local_ac[6] = s_VRCloudCumulonimbus_0409bc14[6];
  local_ac[7] = s_VRCloudCumulonimbus_0409bc14[7];
  local_ac[8] = s_VRCloudCumulonimbus_0409bc14[8];
  uStack_a3 = s_VRCloudCumulonimbus_0409bc14._9_6_;
  _cStack_9d = CONCAT31(0x737562,s_VRCloudCumulonimbus_0409bc14[0xf]);
  local_99 = 0;
  local_c0 = puVar1;
  pcStack_b8 = local_ac;
  FUN_008f0e20(param_1 + 0x38,&local_88,&local_c0,param_1);
  param_1[0x47] = 0;
  param_1[0x46] = (long)"mCloudScaleMax";
  param_1[0x48] = 0;
  puVar2 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  puVar1 = puVar2 + 0x10;
  param_1[0x45] = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x45);
  uVar6 = 0x41200000;
  if ((*(uint *)(param_1 + 0x49) & 0x800) != 0) {
    uVar6 = 0x3e32b8c2;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x45] + 0xf0))(param_1 + 0x45);
  *puVar4 = uVar6;
  uVar3 = *(uint *)(param_1 + 0x49);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x4a] = 0;
    uVar6 = 0x41200000;
    if ((uVar3 & 0x800) != 0) {
      uVar6 = 0x3e32b8c2;
    }
    *(undefined4 *)(param_1 + 0x4a) = uVar6;
  }
  param_1[0x4d] = 0;
  *(uint *)(param_1 + 0x49) = uVar3 & 0xfeffffff;
  param_1[0x4c] = (long)"mCloudScaleMin";
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x4b] = (long)puVar1;
  param_1[0x50] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4b);
  uVar6 = 0x41200000;
  if ((*(uint *)(param_1 + 0x4f) & 0x800) != 0) {
    uVar6 = 0x3e32b8c2;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x4b] + 0xf0))(param_1 + 0x4b);
  *puVar4 = uVar6;
  uVar3 = *(uint *)(param_1 + 0x4f);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x50] = 0;
    uVar6 = 0x41200000;
    if ((uVar3 & 0x800) != 0) {
      uVar6 = 0x3e32b8c2;
    }
    *(undefined4 *)(param_1 + 0x50) = uVar6;
  }
  puVar2 = puVar2 + 0x10;
  param_1[0x53] = 0;
  *(uint *)(param_1 + 0x4f) = uVar3 & 0xfeffffff;
  param_1[0x52] = (long)"mCloudThresholdMax";
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x51] = (long)puVar2;
  param_1[0x56] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x51);
  uVar6 = 0x3f000000;
  if ((*(uint *)(param_1 + 0x55) & 0x800) != 0) {
    uVar6 = 0x3c0efa35;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x51] + 0xf0))(param_1 + 0x51);
  *puVar4 = uVar6;
  uVar3 = *(uint *)(param_1 + 0x55);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x56] = 0;
    uVar6 = 0x3f000000;
    if ((uVar3 & 0x800) != 0) {
      uVar6 = 0x3c0efa35;
    }
    *(undefined4 *)(param_1 + 0x56) = uVar6;
  }
  param_1[0x59] = 0;
  *(uint *)(param_1 + 0x55) = uVar3 & 0xfeffffff;
  param_1[0x58] = (long)"mCloudThresholdMin";
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x57] = (long)puVar2;
  param_1[0x5c] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x57);
  uVar6 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x5b) & 0x800) != 0) {
    uVar6 = 0x3c8efa35;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x57] + 0xf0))(param_1 + 0x57);
  *puVar4 = uVar6;
  uVar3 = *(uint *)(param_1 + 0x5b);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x5c] = 0;
    uVar6 = 0x3f800000;
    if ((uVar3 & 0x800) != 0) {
      uVar6 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar6;
  }
  *(uint *)(param_1 + 0x5b) = uVar3 & 0xfeffffff;
  return;
}

