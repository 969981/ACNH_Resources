
void FUN_015ed5a0(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined4 local_68;
  undefined *local_60;
  undefined *puStack_58;
  
  puVar2 = PTR_DAT_04bb2020;
  local_98 = PTR_DAT_04bb2020 + 0x10;
  pcStack_90 = "PointLightParam";
  puStack_58 = &DAT_040f97d6;
  local_60 = local_98;
  FUN_015727c0(param_1,&local_98,&local_60,0);
  puVar4 = PTR_DAT_04bbd598;
  puVar3 = PTR_DAT_04bb31d0;
  param_1[0xb6] = (long)"mRadius";
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0;
  param_1[0xba] = 0;
  param_1[0xb5] = (long)(puVar3 + 0x10);
  *param_1 = (long)(puVar4 + 0x10);
  plVar9 = param_1 + 5;
  lVar8 = *plVar9;
  if (*plVar9 != 0) {
    do {
      lVar7 = lVar8;
      lVar8 = *(long *)(lVar7 + 0x10);
    } while (lVar8 != 0);
    plVar9 = (long *)(lVar7 + 0x10);
  }
  *plVar9 = (long)(param_1 + 0xb5);
  param_1[0xb8] = (long)param_1;
  uVar10 = 0x3f800000;
  if ((*(uint *)(param_1 + 0xb9) & 0x800) != 0) {
    uVar10 = 0x3c8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xb5] + 0xf0))();
  *puVar5 = uVar10;
  uVar1 = *(uint *)(param_1 + 0xb9);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0xba] = 0;
    uVar10 = 0x3f800000;
    if ((uVar1 & 0x800) != 0) {
      uVar10 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0xba) = uVar10;
  }
  param_1[0xbd] = 0;
  *(uint *)(param_1 + 0xb9) = uVar1 & 0xfeffffff;
  param_1[0xbc] = (long)"mIsCandle";
  param_1[0xbe] = 0;
  puVar4 = PTR_DAT_04bb33a8;
  *(undefined4 *)(param_1 + 0xbf) = 0;
  param_1[0xc0] = 0;
  param_1[0xbb] = (long)(puVar4 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xbb);
  puVar6 = (undefined1 *)(**(code **)(param_1[0xbb] + 0xf0))(param_1 + 0xbb);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0xbf) >> 7 & 1) == 0) {
    param_1[0xc0] = 0;
    *(undefined1 *)(param_1 + 0xc0) = 0;
  }
  param_1[0xc3] = 0;
  *(uint *)(param_1 + 0xbf) = *(uint *)(param_1 + 0xbf) & 0xfeffffff;
  param_1[0xc2] = (long)"mIsCandleColor";
  param_1[0xc4] = 0;
  *(undefined4 *)(param_1 + 0xc5) = 0;
  param_1[0xc1] = (long)(puVar4 + 0x10);
  param_1[0xc6] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xc1);
  puVar6 = (undefined1 *)(**(code **)(param_1[0xc1] + 0xf0))(param_1 + 0xc1);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0xc5) >> 7 & 1) == 0) {
    param_1[0xc6] = 0;
    *(undefined1 *)(param_1 + 0xc6) = 0;
  }
  local_98 = puVar2 + 0x10;
  local_68 = 0;
  *(uint *)(param_1 + 0xc5) = *(uint *)(param_1 + 0xc5) & 0xfeffffff;
  pcStack_90 = "mColorOffset";
  puStack_80 = &DAT_040f4605;
  puStack_70 = &DAT_0407ebb1;
  local_60 = (undefined *)0x0;
  puStack_58 = (undefined *)0x0;
  local_88 = local_98;
  local_78 = local_98;
  FUN_00744b60(param_1 + 199,&local_98,&local_60,param_1);
  param_1[0xd1] = 0;
  param_1[0xd0] = (long)"mRadiusOffset";
  param_1[0xd2] = 0;
  *(undefined4 *)(param_1 + 0xd3) = 0;
  param_1[0xcf] = (long)(puVar3 + 0x10);
  param_1[0xd4] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xcf);
  uVar10 = 0x3f800000;
  if ((*(uint *)(param_1 + 0xd3) & 0x800) != 0) {
    uVar10 = 0x3c8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xcf] + 0xf0))(param_1 + 0xcf);
  *puVar5 = uVar10;
  uVar1 = *(uint *)(param_1 + 0xd3);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0xd4] = 0;
    uVar10 = 0x3f800000;
    if ((uVar1 & 0x800) != 0) {
      uVar10 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0xd4) = uVar10;
  }
  param_1[0xd7] = 0;
  *(uint *)(param_1 + 0xd3) = uVar1 & 0xfeffffff;
  param_1[0xd6] = (long)"mCycleA";
  param_1[0xd8] = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0;
  param_1[0xd5] = (long)(puVar3 + 0x10);
  param_1[0xda] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xd5);
  uVar10 = 0x3e4ccccd;
  if ((*(uint *)(param_1 + 0xd9) & 0x800) != 0) {
    uVar10 = 0x3b64c388;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xd5] + 0xf0))(param_1 + 0xd5);
  *puVar5 = uVar10;
  uVar1 = *(uint *)(param_1 + 0xd9);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0xda] = 0;
    uVar10 = 0x3e4ccccd;
    if ((uVar1 & 0x800) != 0) {
      uVar10 = 0x3b64c388;
    }
    *(undefined4 *)(param_1 + 0xda) = uVar10;
  }
  param_1[0xdd] = 0;
  *(uint *)(param_1 + 0xd9) = uVar1 & 0xfeffffff;
  param_1[0xdc] = (long)"mCycleB";
  param_1[0xde] = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  param_1[0xdb] = (long)(puVar3 + 0x10);
  param_1[0xe0] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xdb);
  uVar10 = 0x3d4ccccd;
  if ((*(uint *)(param_1 + 0xdf) & 0x800) != 0) {
    uVar10 = 0x3a64c388;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xdb] + 0xf0))(param_1 + 0xdb);
  *puVar5 = uVar10;
  uVar1 = *(uint *)(param_1 + 0xdf);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0xe0] = 0;
    uVar10 = 0x3d4ccccd;
    if ((uVar1 & 0x800) != 0) {
      uVar10 = 0x3a64c388;
    }
    *(undefined4 *)(param_1 + 0xe0) = uVar10;
  }
  param_1[0xe3] = 0;
  *(uint *)(param_1 + 0xdf) = uVar1 & 0xfeffffff;
  param_1[0xe2] = (long)"mCycleAR";
  param_1[0xe4] = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  param_1[0xe1] = (long)(puVar3 + 0x10);
  param_1[0xe6] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xe1);
  uVar10 = 0x3db851ec;
  if ((*(uint *)(param_1 + 0xe5) & 0x800) != 0) {
    uVar10 = 0x3acde32e;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xe1] + 0xf0))(param_1 + 0xe1);
  *puVar5 = uVar10;
  uVar1 = *(uint *)(param_1 + 0xe5);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0xe6] = 0;
    uVar10 = 0x3db851ec;
    if ((uVar1 & 0x800) != 0) {
      uVar10 = 0x3acde32e;
    }
    *(undefined4 *)(param_1 + 0xe6) = uVar10;
  }
  param_1[0xe9] = 0;
  *(uint *)(param_1 + 0xe5) = uVar1 & 0xfeffffff;
  param_1[0xe8] = (long)"mCycleBR";
  param_1[0xea] = 0;
  *(undefined4 *)(param_1 + 0xeb) = 0;
  param_1[0xe7] = (long)(puVar3 + 0x10);
  param_1[0xec] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xe7);
  uVar10 = 0x3b449ba6;
  if ((*(uint *)(param_1 + 0xeb) & 0x800) != 0) {
    uVar10 = 0x385b9cfe;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xe7] + 0xf0))(param_1 + 0xe7);
  *puVar5 = uVar10;
  uVar1 = *(uint *)(param_1 + 0xeb);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0xec] = 0;
    uVar10 = 0x3b449ba6;
    if ((uVar1 & 0x800) != 0) {
      uVar10 = 0x385b9cfe;
    }
    *(undefined4 *)(param_1 + 0xec) = uVar10;
  }
  *(uint *)(param_1 + 0xeb) = uVar1 & 0xfeffffff;
  return;
}

