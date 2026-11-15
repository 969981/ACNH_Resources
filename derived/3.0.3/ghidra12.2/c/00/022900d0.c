
void FUN_022900d0(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  undefined8 *puStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined4 local_68;
  
  puVar5 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_90 = "Actor";
  local_98 = puVar1;
  FUN_00751ec0(param_1,&local_98,param_2,0);
  local_68 = 0;
  *param_1 = (long)&PTR_FUN_04a7cdb8;
  pcStack_90 = "mOffsetPos0";
  puStack_80 = &DAT_0407ebb1;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_006fdfc0(param_1 + 0x18,&local_98,PTR_DAT_04bb2150,param_1);
  param_1[0x22] = 0;
  param_1[0x20] = (long)"mOffsetBodyHeight0";
  param_1[0x21] = 0;
  puVar3 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  puVar2 = puVar3 + 0x10;
  param_1[0x24] = 0;
  plVar8 = param_1 + 0x1f;
  *plVar8 = (long)puVar2;
  (**(code **)(*param_1 + 0x140))(param_1,plVar8);
  puVar7 = (undefined4 *)(**(code **)(*plVar8 + 0xf0))(plVar8);
  *puVar7 = 0;
  if ((*(uint *)(param_1 + 0x23) >> 7 & 1) == 0) {
    param_1[0x24] = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  puStack_80 = &DAT_0407ebb1;
  *(uint *)(param_1 + 0x23) = *(uint *)(param_1 + 0x23) & 0xfeffffff;
  puVar6 = PTR_DAT_04bb2150;
  pcStack_90 = "mOffsetAngle0";
  local_68 = 0;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_006fdfc0(param_1 + 0x25,&local_98,PTR_DAT_04bb2150,param_1);
  pcStack_90 = "mOffsetPos1";
  local_68 = 0;
  puStack_80 = &DAT_0407ebb1;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_006fdfc0(param_1 + 0x2c,&local_98,puVar6,param_1);
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x33] = (long)puVar2;
  param_1[0x34] = (long)"mOffsetBodyHeight1";
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x38] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x33);
  uVar9 = 0x40a00000;
  if ((*(uint *)(param_1 + 0x37) & 0x800) != 0) {
    uVar9 = 0x3db2b8c2;
  }
  puVar7 = (undefined4 *)(**(code **)(param_1[0x33] + 0xf0))(param_1 + 0x33);
  *puVar7 = uVar9;
  uVar4 = *(uint *)(param_1 + 0x37);
  if ((uVar4 >> 7 & 1) == 0) {
    param_1[0x38] = 0;
    uVar9 = 0x40a00000;
    if ((uVar4 & 0x800) != 0) {
      uVar9 = 0x3db2b8c2;
    }
    *(undefined4 *)(param_1 + 0x38) = uVar9;
  }
  puVar1 = puVar5 + 0x10;
  local_68 = 0;
  *(uint *)(param_1 + 0x37) = uVar4 & 0xfeffffff;
  puVar2 = PTR_DAT_04bb2150;
  pcStack_90 = "mOffsetAngle1";
  puStack_80 = &DAT_0407ebb1;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_006fdfc0(param_1 + 0x39,&local_98,PTR_DAT_04bb2150,param_1);
  pcStack_90 = "mOffsetPos2";
  local_68 = 0;
  puStack_80 = &DAT_0407ebb1;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_006fdfc0(param_1 + 0x40,&local_98,puVar2,param_1);
  param_1[0x49] = 0;
  param_1[0x48] = (long)"mOffsetBodyHeight2";
  puVar3 = puVar3 + 0x10;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x47] = (long)puVar3;
  param_1[0x4c] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x47);
  uVar9 = 0x40a00000;
  if ((*(uint *)(param_1 + 0x4b) & 0x800) != 0) {
    uVar9 = 0x3db2b8c2;
  }
  puVar7 = (undefined4 *)(**(code **)(param_1[0x47] + 0xf0))(param_1 + 0x47);
  *puVar7 = uVar9;
  uVar4 = *(uint *)(param_1 + 0x4b);
  if ((uVar4 >> 7 & 1) == 0) {
    param_1[0x4c] = 0;
    uVar9 = 0x40a00000;
    if ((uVar4 & 0x800) != 0) {
      uVar9 = 0x3db2b8c2;
    }
    *(undefined4 *)(param_1 + 0x4c) = uVar9;
  }
  puStack_80 = &DAT_0407ebb1;
  *(uint *)(param_1 + 0x4b) = uVar4 & 0xfeffffff;
  puVar2 = PTR_DAT_04bb2150;
  pcStack_90 = "mOffsetAngle2";
  local_68 = 0;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_006fdfc0(param_1 + 0x4d,&local_98,PTR_DAT_04bb2150,param_1);
  pcStack_90 = "mOffsetPos3";
  local_68 = 0;
  puStack_80 = &DAT_0407ebb1;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_006fdfc0(param_1 + 0x54,&local_98,puVar2,param_1);
  param_1[0x5d] = 0;
  param_1[0x5c] = (long)"mOffsetBodyHeight3";
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x5b] = (long)puVar3;
  param_1[0x60] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5b);
  uVar9 = 0x40a00000;
  if ((*(uint *)(param_1 + 0x5f) & 0x800) != 0) {
    uVar9 = 0x3db2b8c2;
  }
  puVar7 = (undefined4 *)(**(code **)(param_1[0x5b] + 0xf0))(param_1 + 0x5b);
  *puVar7 = uVar9;
  uVar4 = *(uint *)(param_1 + 0x5f);
  if ((uVar4 >> 7 & 1) == 0) {
    param_1[0x60] = 0;
    uVar9 = 0x40a00000;
    if ((uVar4 & 0x800) != 0) {
      uVar9 = 0x3db2b8c2;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar9;
  }
  *(uint *)(param_1 + 0x5f) = uVar4 & 0xfeffffff;
  local_98 = puVar5 + 0x10;
  local_68 = 0;
  pcStack_90 = "mOffsetAngle3";
  puStack_80 = &DAT_0407ebb1;
  puStack_70 = &DAT_0407ebb1;
  local_88 = local_98;
  local_78 = local_98;
  FUN_006fdfc0(param_1 + 0x61,&local_98,PTR_DAT_04bb2150,param_1);
  return;
}

