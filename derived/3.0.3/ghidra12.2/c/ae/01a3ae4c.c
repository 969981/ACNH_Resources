
void FUN_01a3ae4c(long *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined4 local_58;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_DAT_04bb2020;
  lVar5 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  local_58 = 8;
  param_1[1] = lVar5;
  lVar5 = param_2[6];
  puVar1 = puVar1 + 0x10;
  *param_1 = (long)&PTR_LAB_049fd3c0;
  pcStack_80 = "mVirtualCameraAngle";
  param_1[5] = 0;
  puStack_70 = &DAT_0407ebb1;
  *(int *)(param_1 + 4) = (int)lVar5;
  puStack_60 = &DAT_0407ebb1;
  local_88 = puVar1;
  local_78 = puVar1;
  local_68 = puVar1;
  FUN_006fdfc0(param_1 + 6,&local_88,PTR_DAT_04bb2150,param_1);
  param_1[0x10] = 0;
  param_1[0xe] = (long)"mScale";
  param_1[0xf] = 0;
  puVar3 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x11) = 8;
  param_1[0x12] = 0;
  plVar6 = param_1 + 0xd;
  *plVar6 = (long)(puVar3 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar6);
  uVar7 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x11) & 0x800) != 0) {
    uVar7 = 0x3c8efa35;
  }
  puVar4 = (undefined4 *)(**(code **)(*plVar6 + 0xf0))(plVar6);
  *puVar4 = uVar7;
  uVar2 = *(uint *)(param_1 + 0x11);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x12] = 0;
    uVar7 = 0x3f800000;
    if ((uVar2 & 0x800) != 0) {
      uVar7 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x12) = uVar7;
  }
  puStack_70 = &DAT_0407ebb1;
  *(uint *)(param_1 + 0x11) = uVar2 & 0xfeffffff;
  pcStack_80 = "mOffset";
  local_58 = 8;
  puStack_60 = &DAT_0407ebb1;
  local_88 = puVar1;
  local_78 = puVar1;
  local_68 = puVar1;
  FUN_006fdfc0(param_1 + 0x13,&local_88,PTR_DAT_04bb2150,param_1);
  return;
}

