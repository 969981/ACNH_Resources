
void FUN_00cf74f0(long param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  undefined *local_68;
  char *pcStack_60;
  undefined4 local_58;
  char local_54 [8];
  char local_4c [6];
  char acStack_46 [2];
  char acStack_44 [6];
  undefined1 local_3e;
  undefined1 local_35;
  ulong local_30;
  float local_28;
  byte local_8 [4];
  undefined4 local_4;
  
  local_28 = (float)*(int *)(*(long *)PTR_DAT_04bb5c90 + 0x2c) * 5.0 + 70.0;
  local_30 = (ulong)(uint)((float)*(int *)(*(long *)PTR_DAT_04bb5c90 + 0x28) * 5.0 + 60.0);
  if (((*PTR_DAT_04bb3998 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar3 != 0))
  {
    FUN_00773950(PTR_DAT_04bb3990);
    __cxa_guard_release(PTR_DAT_04bb3998);
  }
  if (0 < (int)*(uint *)PTR_DAT_04bb3990) {
    uVar4 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bb3990 + 8) + uVar4 * 4) == 0x2ec94ec5) goto LAB_00cf759c;
      uVar4 = uVar4 + 1;
    } while (*(uint *)PTR_DAT_04bb3990 != uVar4);
  }
  uVar4 = 0;
LAB_00cf759c:
  local_35 = 0;
  local_58 = 0x20;
  local_3e = 0;
  local_54[0] = s_MainFieldDemoFirstLive_040f4105[0];
  local_54[1] = s_MainFieldDemoFirstLive_040f4105[1];
  local_54[2] = s_MainFieldDemoFirstLive_040f4105[2];
  local_54[3] = s_MainFieldDemoFirstLive_040f4105[3];
  local_54[4] = s_MainFieldDemoFirstLive_040f4105[4];
  local_54[5] = s_MainFieldDemoFirstLive_040f4105[5];
  local_54[6] = s_MainFieldDemoFirstLive_040f4105[6];
  local_54[7] = s_MainFieldDemoFirstLive_040f4105[7];
  local_4c[0] = s_MainFieldDemoFirstLive_040f4105[8];
  local_4c[1] = s_MainFieldDemoFirstLive_040f4105[9];
  local_4c[2] = s_MainFieldDemoFirstLive_040f4105[10];
  local_4c[3] = s_MainFieldDemoFirstLive_040f4105[0xb];
  local_4c[4] = s_MainFieldDemoFirstLive_040f4105[0xc];
  local_4c[5] = s_MainFieldDemoFirstLive_040f4105[0xd];
  acStack_46[0] = s_MainFieldDemoFirstLive_040f4105[0xe];
  acStack_46[1] = s_MainFieldDemoFirstLive_040f4105[0xf];
  acStack_44[0] = s_MainFieldDemoFirstLive_040f4105[0x10];
  acStack_44[1] = s_MainFieldDemoFirstLive_040f4105[0x11];
  acStack_44[2] = s_MainFieldDemoFirstLive_040f4105[0x12];
  acStack_44[3] = s_MainFieldDemoFirstLive_040f4105[0x13];
  acStack_44[4] = s_MainFieldDemoFirstLive_040f4105[0x14];
  acStack_44[5] = s_MainFieldDemoFirstLive_040f4105[0x15];
  pcStack_60 = local_54;
  local_4 = (undefined4)uVar4;
  local_68 = PTR_DAT_04bb2028 + 0x10;
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  pbVar5 = PTR_DAT_04bb32e0;
  if (lVar6 == 0) {
LAB_00cf7644:
    if (7 < *pbVar5) {
LAB_00cf7650:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar6 = **(long **)PTR_DAT_04bb27d0;
        bVar2 = *(byte *)(lVar6 + 0x473);
        pbVar5 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar5 = (byte *)(lVar6 + 0x471);
          }
        }
        local_8[0] = *pbVar5;
        if (local_8[0] < 8) goto LAB_00cf76d0;
      }
      pbVar5 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar6 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(lVar6 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar5 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_00cf7644;
      }
      goto LAB_00cf7650;
    }
  }
  local_8[0] = *pbVar5;
  if (7 < local_8[0]) {
    local_8[0] = 0xff;
  }
LAB_00cf76d0:
  bVar2 = FUN_02917ecc(&local_68,&local_30,PTR_DAT_04bb2cf0,&local_4,local_8,PTR_DAT_04bb7ab0);
  *(byte *)(param_1 + 0xb4) = bVar2 & 1;
  return;
}

