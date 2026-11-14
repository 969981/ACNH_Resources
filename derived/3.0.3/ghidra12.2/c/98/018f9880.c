
void FUN_018f9880(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  long lVar6;
  long *plVar7;
  undefined1 *__src;
  undefined *local_b0;
  undefined1 *puStack_a8;
  int local_a0;
  undefined1 auStack_9c [31];
  undefined1 local_7d;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined8 *puStack_50;
  undefined4 local_48;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar3 = PTR_DAT_04bb60a0;
  lVar6 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar6;
  lVar6 = param_2[6];
  *param_1 = (long)(puVar3 + 0x10);
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar6;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  local_78 = PTR_DAT_04bb2020;
  local_48 = 0;
  *param_1 = (long)&PTR_LAB_049d5330;
  puVar3 = PTR_PTR_04bb2238;
  local_78 = local_78 + 0x10;
  pcStack_70 = "mLabel";
  puStack_60 = &DAT_040dedc8;
  puStack_50 = &DAT_0407ebb1;
  local_a0 = 0x20;
  local_b0 = PTR_DAT_04bb2a08 + 0x10;
  local_7d = 0;
  puStack_a8 = auStack_9c;
  local_68 = local_78;
  local_58 = local_78;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  __src = *(undefined1 **)(puVar3 + 8);
  if (auStack_9c != __src) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar6) == '\0') goto LAB_018f99ec;
      lVar1 = *(long *)(puVar3 + 8) + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_018f99ec;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_018f99ec;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_018f99ec:
    iVar2 = (int)lVar6;
    if (local_a0 <= (int)lVar6) {
      iVar2 = local_a0 + -1;
    }
    memcpy(auStack_9c,__src,(long)iVar2);
    auStack_9c[iVar2] = 0;
  }
  local_b0 = PTR_DAT_04bb2028 + 0x10;
  FUN_008f0e20(param_1 + 6,&local_78,&local_b0,param_1);
  param_1[0x16] = 0;
  param_1[0x14] = (long)"mHitRad";
  param_1[0x15] = 0;
  puVar3 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  plVar7 = param_1 + 0x13;
  *plVar7 = (long)(puVar3 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  puVar5 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x17) >> 7 & 1) == 0) {
    param_1[0x18] = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  param_1[0x1c] = 0;
  *(uint *)(param_1 + 0x17) = *(uint *)(param_1 + 0x17) & 0xfeffffff;
  param_1[0x1a] = (long)"mSarchDistance";
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  plVar7 = param_1 + 0x19;
  *plVar7 = (long)(puVar3 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  puVar5 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x1d) >> 7 & 1) == 0) {
    param_1[0x1e] = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0;
  }
  param_1[0x22] = 0;
  *(uint *)(param_1 + 0x1d) = *(uint *)(param_1 + 0x1d) & 0xfeffffff;
  param_1[0x20] = (long)"mPatienceLv1";
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  plVar7 = param_1 + 0x1f;
  *plVar7 = (long)(puVar3 + 0x10);
  param_1[0x24] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  puVar5 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x23) >> 7 & 1) == 0) {
    param_1[0x24] = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(uint *)(param_1 + 0x23) = *(uint *)(param_1 + 0x23) & 0xfeffffff;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x25] = (long)(puVar3 + 0x10);
  param_1[0x26] = (long)"mPatienceLv2";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x25);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x25] + 0xf0))(param_1 + 0x25);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x29) >> 7 & 1) == 0) {
    param_1[0x2a] = 0;
    *(undefined4 *)(param_1 + 0x2a) = 0;
  }
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(uint *)(param_1 + 0x29) = *(uint *)(param_1 + 0x29) & 0xfeffffff;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  puVar4 = PTR_DAT_04bb3380;
  param_1[0x30] = 0;
  param_1[0x2b] = (long)(puVar4 + 0x10);
  param_1[0x2c] = (long)"mSeaHoveringFrame";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2b);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x2b] + 0xf0))(param_1 + 0x2b);
  *puVar5 = 8;
  if ((*(uint *)(param_1 + 0x2f) >> 7 & 1) == 0) {
    param_1[0x30] = 0;
    *(undefined4 *)(param_1 + 0x30) = 8;
  }
  *(uint *)(param_1 + 0x2f) = *(uint *)(param_1 + 0x2f) & 0xfeffffff;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x31] = (long)(puVar3 + 0x10);
  param_1[0x32] = (long)"mPlayerSpeedOffset";
  param_1[0x36] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x31);
  puVar5 = (undefined4 *)(**(code **)(param_1[0x31] + 0xf0))(param_1 + 0x31);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x35) >> 7 & 1) == 0) {
    param_1[0x36] = 0;
    *(undefined4 *)(param_1 + 0x36) = 0;
  }
  *(uint *)(param_1 + 0x35) = *(uint *)(param_1 + 0x35) & 0xfeffffff;
  return;
}

