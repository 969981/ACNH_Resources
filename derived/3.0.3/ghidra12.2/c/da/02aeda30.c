
void FUN_02aeda30(long *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  char *pcStack_58;
  
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "Actor";
  local_68 = param_2;
  local_60 = local_70;
  FUN_00751ec0(param_1,&local_60,&local_70,0);
  *(undefined1 *)(param_1 + 0x18) = 0;
  puVar2 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x1d) = 8;
  *param_1 = (long)&PTR_LAB_04aa0618;
  param_1[0x1a] = (long)"mDecoPosX";
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = (long)(puVar2 + 0x10);
  plVar4 = param_1 + 5;
  lVar6 = *plVar4;
  if (*plVar4 != 0) {
    do {
      lVar5 = lVar6;
      lVar6 = *(long *)(lVar5 + 0x10);
    } while (lVar6 != 0);
    plVar4 = (long *)(lVar5 + 0x10);
  }
  *plVar4 = (long)(param_1 + 0x19);
  param_1[0x1c] = (long)param_1;
  puVar3 = (undefined4 *)(**(code **)(param_1[0x19] + 0xf0))();
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0x1d) >> 7 & 1) == 0) {
    param_1[0x1e] = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0;
  }
  param_1[0x22] = 0;
  *(uint *)(param_1 + 0x1d) = *(uint *)(param_1 + 0x1d) & 0xfeffffff;
  param_1[0x20] = (long)"mDecoPosY";
  param_1[0x21] = 0;
  plVar4 = param_1 + 0x1f;
  *plVar4 = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x23) = 8;
  param_1[0x24] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar4);
  uVar7 = 0x41200000;
  if ((*(uint *)(param_1 + 0x23) & 0x800) != 0) {
    uVar7 = 0x3e32b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(*plVar4 + 0xf0))(plVar4);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x23);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x24] = 0;
    uVar7 = 0x41200000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3e32b8c2;
    }
    *(undefined4 *)(param_1 + 0x24) = uVar7;
  }
  *(undefined4 *)(param_1 + 0x29) = 8;
  *(uint *)(param_1 + 0x23) = uVar1 & 0xfeffffff;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x25] = (long)(puVar2 + 0x10);
  param_1[0x26] = (long)"mLeafFlyFrame";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x25);
  uVar7 = 0x41a00000;
  if ((*(uint *)(param_1 + 0x29) & 0x800) != 0) {
    uVar7 = 0x3eb2b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x25] + 0xf0))(param_1 + 0x25);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x29);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x2a] = 0;
    uVar7 = 0x41a00000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3eb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x2a) = uVar7;
  }
  *(uint *)(param_1 + 0x29) = uVar1 & 0xfeffffff;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 8;
  param_1[0x2b] = (long)(puVar2 + 0x10);
  param_1[0x2c] = (long)"mLeafWaitFrame";
  param_1[0x30] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2b);
  puVar3 = (undefined4 *)(**(code **)(param_1[0x2b] + 0xf0))(param_1 + 0x2b);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0x2f) >> 7 & 1) == 0) {
    param_1[0x30] = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x35) = 8;
  *(uint *)(param_1 + 0x2f) = *(uint *)(param_1 + 0x2f) & 0xfeffffff;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x36] = 0;
  param_1[0x31] = (long)(puVar2 + 0x10);
  param_1[0x32] = (long)"mLeafGravity";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x31);
  uVar7 = 0x3dcccccd;
  if ((*(uint *)(param_1 + 0x35) & 0x800) != 0) {
    uVar7 = 0x3ae4c388;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x31] + 0xf0))(param_1 + 0x31);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x35);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x36] = 0;
    uVar7 = 0x3dcccccd;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3ae4c388;
    }
    *(undefined4 *)(param_1 + 0x36) = uVar7;
  }
  *(uint *)(param_1 + 0x35) = uVar1 & 0xfeffffff;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 8;
  param_1[0x37] = (long)(puVar2 + 0x10);
  param_1[0x38] = (long)"mLeafOffsetPosY";
  param_1[0x3c] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x37);
  uVar7 = 0x40a00000;
  if ((*(uint *)(param_1 + 0x3b) & 0x800) != 0) {
    uVar7 = 0x3db2b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x37] + 0xf0))(param_1 + 0x37);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x3b);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x3c] = 0;
    uVar7 = 0x40a00000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3db2b8c2;
    }
    *(undefined4 *)(param_1 + 0x3c) = uVar7;
  }
  *(undefined4 *)(param_1 + 0x41) = 8;
  *(uint *)(param_1 + 0x3b) = uVar1 & 0xfeffffff;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x42] = 0;
  param_1[0x3d] = (long)(puVar2 + 0x10);
  param_1[0x3e] = (long)"mDemiseScaleDownFrame";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3d);
  uVar7 = 0x40e00000;
  if ((*(uint *)(param_1 + 0x41) & 0x800) != 0) {
    uVar7 = 0x3dfa35dd;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x3d] + 0xf0))(param_1 + 0x3d);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x41);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x42] = 0;
    uVar7 = 0x40e00000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3dfa35dd;
    }
    *(undefined4 *)(param_1 + 0x42) = uVar7;
  }
  *(uint *)(param_1 + 0x41) = uVar1 & 0xfeffffff;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x800000;
  return;
}

