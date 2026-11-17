
void FUN_02ae9800(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined *local_58;
  undefined8 *puStack_50;
  undefined4 local_48;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar2 = PTR_DAT_04bb60a0;
  lVar6 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar6;
  lVar6 = param_2[6];
  plVar7 = param_1 + 5;
  *plVar7 = 0;
  *param_1 = (long)(puVar2 + 0x10);
  *(int *)(param_1 + 4) = (int)lVar6;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  puVar1 = PTR_DAT_04bbbd28;
  param_1[9] = 0;
  puVar2 = PTR_DAT_04bb5a60;
  param_1[7] = (long)"mHotelBuildUnit";
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 8;
  param_1[0xc] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[6] = (long)(puVar2 + 0x10);
  lVar6 = param_1[5];
  if (param_1[5] != 0) {
    do {
      lVar5 = lVar6;
      lVar6 = *(long *)(lVar5 + 0x10);
    } while (lVar6 != 0);
    plVar7 = (long *)(lVar5 + 0x10);
  }
  *plVar7 = (long)(param_1 + 6);
  param_1[9] = (long)param_1;
  puVar3 = (undefined8 *)(**(code **)(param_1[6] + 0xf0))();
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 10) >> 7 & 1) == 0) {
    param_1[0xc] = 0;
  }
  param_1[0x10] = 0;
  *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) & 0xfeffffff;
  param_1[0xe] = (long)"mBridgeBuildHalfUnit";
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x11) = 8;
  plVar7 = param_1 + 0xd;
  *plVar7 = (long)(puVar2 + 0x10);
  param_1[0x13] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  puVar3 = (undefined8 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0x11) >> 7 & 1) == 0) {
    param_1[0x13] = 0;
  }
  *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 0x11) & 0xfeffffff;
  param_1[0x15] = (long)"mBridgeBuildHeight";
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  puVar1 = PTR_DAT_04bb31d0 + 0x10;
  *(undefined4 *)(param_1 + 0x18) = 8;
  param_1[0x19] = 0;
  plVar7 = param_1 + 0x14;
  *plVar7 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  puVar4 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x18) >> 7 & 1) == 0) {
    param_1[0x19] = 0;
    *(undefined4 *)(param_1 + 0x19) = 0;
  }
  param_1[0x1d] = 0;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfeffffff;
  param_1[0x1b] = (long)"mTradeBoxHalfUnit";
  param_1[0x1c] = 0;
  plVar7 = param_1 + 0x1a;
  *plVar7 = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x1e) = 8;
  param_1[0x20] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  puVar3 = (undefined8 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0x1e) >> 7 & 1) == 0) {
    param_1[0x20] = 0;
  }
  *(undefined4 *)(param_1 + 0x25) = 8;
  *(uint *)(param_1 + 0x1e) = *(uint *)(param_1 + 0x1e) & 0xfeffffff;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x21] = (long)(puVar2 + 0x10);
  param_1[0x22] = (long)"mSignboardHalfUnit";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x21);
  puVar3 = (undefined8 *)(**(code **)(param_1[0x21] + 0xf0))(param_1 + 0x21);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0x25) >> 7 & 1) == 0) {
    param_1[0x27] = 0;
  }
  local_78 = PTR_DAT_04bb2020;
  *(uint *)(param_1 + 0x25) = *(uint *)(param_1 + 0x25) & 0xfeffffff;
  local_48 = 8;
  local_78 = local_78 + 0x10;
  pcStack_70 = "mKppPosOffset";
  puStack_60 = &DAT_0407ebb1;
  puStack_50 = &DAT_0407ebb1;
  local_68 = local_78;
  local_58 = local_78;
  FUN_006fdfc0(param_1 + 0x28,&local_78,PTR_DAT_04bb2150,param_1);
  *(undefined4 *)(param_1 + 0x33) = 8;
  param_1[0x2f] = (long)(puVar2 + 0x10);
  param_1[0x30] = (long)"mTradeBoxTutorialItemHideRangeMin";
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2f);
  puVar3 = (undefined8 *)(**(code **)(param_1[0x2f] + 0xf0))(param_1 + 0x2f);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0x33) >> 7 & 1) == 0) {
    param_1[0x35] = 0;
  }
  *(undefined4 *)(param_1 + 0x3a) = 8;
  *(uint *)(param_1 + 0x33) = *(uint *)(param_1 + 0x33) & 0xfeffffff;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x36] = (long)(puVar2 + 0x10);
  param_1[0x37] = (long)"mTradeBoxTutorialItemHideRangeSize";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x36);
  puVar3 = (undefined8 *)(**(code **)(param_1[0x36] + 0xf0))(param_1 + 0x36);
  *puVar3 = 0x100000001;
  if ((*(uint *)(param_1 + 0x3a) >> 7 & 1) == 0) {
    param_1[0x3c] = 0x100000001;
  }
  *(uint *)(param_1 + 0x3a) = *(uint *)(param_1 + 0x3a) & 0xfeffffff;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 8;
  param_1[0x3d] = (long)(puVar2 + 0x10);
  param_1[0x3e] = (long)"mBalloonAvoidanceRangeMin";
  param_1[0x43] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3d);
  puVar3 = (undefined8 *)(**(code **)(param_1[0x3d] + 0xf0))(param_1 + 0x3d);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0x41) >> 7 & 1) == 0) {
    param_1[0x43] = 0;
  }
  param_1[0x46] = 0;
  *(uint *)(param_1 + 0x41) = *(uint *)(param_1 + 0x41) & 0xfeffffff;
  param_1[0x45] = (long)"mBalloonAvoidanceRangeSize";
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 8;
  param_1[0x44] = (long)(puVar2 + 0x10);
  param_1[0x4a] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x44);
  puVar3 = (undefined8 *)(**(code **)(param_1[0x44] + 0xf0))(param_1 + 0x44);
  *puVar3 = 0x100000001;
  if ((*(uint *)(param_1 + 0x48) >> 7 & 1) == 0) {
    param_1[0x4a] = 0x100000001;
  }
  param_1[0x4d] = 0;
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfeffffff;
  param_1[0x4c] = (long)"mBridgeRangeMin";
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 8;
  param_1[0x4b] = (long)(puVar2 + 0x10);
  param_1[0x51] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4b);
  puVar3 = (undefined8 *)(**(code **)(param_1[0x4b] + 0xf0))(param_1 + 0x4b);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0x4f) >> 7 & 1) == 0) {
    param_1[0x51] = 0;
  }
  param_1[0x54] = 0;
  *(uint *)(param_1 + 0x4f) = *(uint *)(param_1 + 0x4f) & 0xfeffffff;
  param_1[0x53] = (long)"mBridgeRangeSize";
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 8;
  param_1[0x52] = (long)(puVar2 + 0x10);
  param_1[0x58] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x52);
  puVar3 = (undefined8 *)(**(code **)(param_1[0x52] + 0xf0))(param_1 + 0x52);
  *puVar3 = 0x100000001;
  if ((*(uint *)(param_1 + 0x56) >> 7 & 1) == 0) {
    param_1[0x58] = 0x100000001;
  }
  *(uint *)(param_1 + 0x56) = *(uint *)(param_1 + 0x56) & 0xfeffffff;
  return;
}

