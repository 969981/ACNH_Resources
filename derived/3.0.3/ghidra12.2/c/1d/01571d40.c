
void FUN_01571d40(long *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined8 *puStack_50;
  undefined4 local_48;
  
  FUN_015727c0(param_1,param_2,param_2 + 0x10,param_3);
  param_1[0xb7] = 0;
  puVar2 = PTR_DAT_04bb31d0;
  *param_1 = (long)&PTR_FUN_049ab458;
  param_1[0xb6] = (long)"mRadius";
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0;
  param_1[0xba] = 0;
  param_1[0xb5] = (long)(puVar2 + 0x10);
  plVar8 = param_1 + 5;
  lVar7 = *plVar8;
  if (*plVar8 != 0) {
    do {
      lVar6 = lVar7;
      lVar7 = *(long *)(lVar6 + 0x10);
    } while (lVar7 != 0);
    plVar8 = (long *)(lVar6 + 0x10);
  }
  *plVar8 = (long)(param_1 + 0xb5);
  param_1[0xb8] = (long)param_1;
  uVar9 = 0x3f800000;
  if ((*(uint *)(param_1 + 0xb9) & 0x800) != 0) {
    uVar9 = 0x3c8efa35;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0xb5] + 0xf0))();
  *puVar4 = uVar9;
  uVar1 = *(uint *)(param_1 + 0xb9);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0xba] = 0;
    uVar9 = 0x3f800000;
    if ((uVar1 & 0x800) != 0) {
      uVar9 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0xba) = uVar9;
  }
  param_1[0xbd] = 0;
  *(uint *)(param_1 + 0xb9) = uVar1 & 0xfeffffff;
  param_1[0xbc] = (long)"mIsCandle";
  param_1[0xbe] = 0;
  puVar3 = PTR_DAT_04bb33a8;
  *(undefined4 *)(param_1 + 0xbf) = 0;
  param_1[0xc0] = 0;
  param_1[0xbb] = (long)(puVar3 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xbb);
  puVar5 = (undefined1 *)(**(code **)(param_1[0xbb] + 0xf0))(param_1 + 0xbb);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0xbf) >> 7 & 1) == 0) {
    param_1[0xc0] = 0;
    *(undefined1 *)(param_1 + 0xc0) = 0;
  }
  param_1[0xc3] = 0;
  *(uint *)(param_1 + 0xbf) = *(uint *)(param_1 + 0xbf) & 0xfeffffff;
  param_1[0xc2] = (long)"mIsCandleColor";
  param_1[0xc4] = 0;
  *(undefined4 *)(param_1 + 0xc5) = 0;
  param_1[0xc1] = (long)(puVar3 + 0x10);
  param_1[0xc6] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xc1);
  puVar5 = (undefined1 *)(**(code **)(param_1[0xc1] + 0xf0))(param_1 + 0xc1);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0xc5) >> 7 & 1) == 0) {
    param_1[0xc6] = 0;
    *(undefined1 *)(param_1 + 0xc6) = 0;
  }
  local_78 = PTR_DAT_04bb2020;
  *(uint *)(param_1 + 0xc5) = *(uint *)(param_1 + 0xc5) & 0xfeffffff;
  local_48 = 0;
  local_78 = local_78 + 0x10;
  local_88 = 0;
  uStack_80 = 0;
  pcStack_70 = "mColorOffset";
  puStack_60 = &DAT_040f4605;
  puStack_50 = &DAT_0407ebb1;
  local_68 = local_78;
  local_58 = local_78;
  FUN_00744b60(param_1 + 199,&local_78,&local_88,param_1);
  param_1[0xd1] = 0;
  param_1[0xd0] = (long)"mRadiusOffset";
  param_1[0xd2] = 0;
  *(undefined4 *)(param_1 + 0xd3) = 0;
  param_1[0xcf] = (long)(puVar2 + 0x10);
  param_1[0xd4] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xcf);
  uVar9 = 0x3f800000;
  if ((*(uint *)(param_1 + 0xd3) & 0x800) != 0) {
    uVar9 = 0x3c8efa35;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0xcf] + 0xf0))(param_1 + 0xcf);
  *puVar4 = uVar9;
  uVar1 = *(uint *)(param_1 + 0xd3);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0xd4] = 0;
    uVar9 = 0x3f800000;
    if ((uVar1 & 0x800) != 0) {
      uVar9 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0xd4) = uVar9;
  }
  param_1[0xd7] = 0;
  *(uint *)(param_1 + 0xd3) = uVar1 & 0xfeffffff;
  param_1[0xd6] = (long)"mCycleA";
  param_1[0xd8] = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0;
  param_1[0xd5] = (long)(puVar2 + 0x10);
  param_1[0xda] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xd5);
  uVar9 = 0x3e4ccccd;
  if ((*(uint *)(param_1 + 0xd9) & 0x800) != 0) {
    uVar9 = 0x3b64c388;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0xd5] + 0xf0))(param_1 + 0xd5);
  *puVar4 = uVar9;
  uVar1 = *(uint *)(param_1 + 0xd9);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0xda] = 0;
    uVar9 = 0x3e4ccccd;
    if ((uVar1 & 0x800) != 0) {
      uVar9 = 0x3b64c388;
    }
    *(undefined4 *)(param_1 + 0xda) = uVar9;
  }
  param_1[0xdd] = 0;
  *(uint *)(param_1 + 0xd9) = uVar1 & 0xfeffffff;
  param_1[0xdc] = (long)"mCycleB";
  param_1[0xde] = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  param_1[0xdb] = (long)(puVar2 + 0x10);
  param_1[0xe0] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xdb);
  uVar9 = 0x3d4ccccd;
  if ((*(uint *)(param_1 + 0xdf) & 0x800) != 0) {
    uVar9 = 0x3a64c388;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0xdb] + 0xf0))(param_1 + 0xdb);
  *puVar4 = uVar9;
  uVar1 = *(uint *)(param_1 + 0xdf);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0xe0] = 0;
    uVar9 = 0x3d4ccccd;
    if ((uVar1 & 0x800) != 0) {
      uVar9 = 0x3a64c388;
    }
    *(undefined4 *)(param_1 + 0xe0) = uVar9;
  }
  param_1[0xe3] = 0;
  *(uint *)(param_1 + 0xdf) = uVar1 & 0xfeffffff;
  param_1[0xe2] = (long)"mCycleAR";
  param_1[0xe4] = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  param_1[0xe1] = (long)(puVar2 + 0x10);
  param_1[0xe6] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xe1);
  uVar9 = 0x3db851ec;
  if ((*(uint *)(param_1 + 0xe5) & 0x800) != 0) {
    uVar9 = 0x3acde32e;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0xe1] + 0xf0))(param_1 + 0xe1);
  *puVar4 = uVar9;
  uVar1 = *(uint *)(param_1 + 0xe5);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0xe6] = 0;
    uVar9 = 0x3db851ec;
    if ((uVar1 & 0x800) != 0) {
      uVar9 = 0x3acde32e;
    }
    *(undefined4 *)(param_1 + 0xe6) = uVar9;
  }
  param_1[0xe9] = 0;
  *(uint *)(param_1 + 0xe5) = uVar1 & 0xfeffffff;
  param_1[0xe8] = (long)"mCycleBR";
  param_1[0xea] = 0;
  *(undefined4 *)(param_1 + 0xeb) = 0;
  param_1[0xe7] = (long)(puVar2 + 0x10);
  param_1[0xec] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xe7);
  uVar9 = 0x3b449ba6;
  if ((*(uint *)(param_1 + 0xeb) & 0x800) != 0) {
    uVar9 = 0x385b9cfe;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0xe7] + 0xf0))(param_1 + 0xe7);
  *puVar4 = uVar9;
  uVar1 = *(uint *)(param_1 + 0xeb);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0xec] = 0;
    uVar9 = 0x3b449ba6;
    if ((uVar1 & 0x800) != 0) {
      uVar9 = 0x385b9cfe;
    }
    *(undefined4 *)(param_1 + 0xec) = uVar9;
  }
  *(uint *)(param_1 + 0xeb) = uVar1 & 0xfeffffff;
  return;
}

