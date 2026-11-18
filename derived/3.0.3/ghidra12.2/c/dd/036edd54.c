
/* WARNING: Removing unreachable block (ram,0x036ede34) */
/* WARNING: Removing unreachable block (ram,0x036edf98) */

void FUN_036edd54(void *param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  ushort uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  undefined *local_48;
  char *pcStack_40;
  byte local_34 [4];
  
  puVar3 = PTR_DAT_04bc39f0;
  if ((*(ushort *)((long)param_1 + 0x6e8) & 1) == 0) {
    return;
  }
  uVar7 = *(ushort *)PTR_DAT_04bc39f0;
  if (uVar7 == 0xffff) {
    uVar8 = 0;
    goto LAB_036edf58;
  }
  local_48 = (undefined *)CONCAT44(local_48._4_4_,0x1a);
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar7 * 8);
  if (0xff < uVar7) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar1 >> 0x1a & 1) == 0) {
    bVar4 = false;
  }
  else {
    lVar9 = *(long *)PTR_DAT_04bb39b0;
    pbVar6 = PTR_DAT_04bb32e0;
    if (lVar9 == 0) {
LAB_036ede40:
      if (*pbVar6 < 8) goto LAB_036edeb8;
LAB_036ede4c:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_036edeb0:
        pbVar6 = PTR_DAT_04bb5038;
        goto LAB_036edeb8;
      }
      lVar9 = **(long **)PTR_DAT_04bb27d0;
      bVar2 = *(byte *)(lVar9 + 0x473);
      pbVar6 = PTR_DAT_04bb5038;
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
        if (7 < bVar2) {
          puVar1 = (uint *)(lVar9 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar6 = (byte *)(lVar9 + 0x471);
        }
      }
      local_34[0] = *pbVar6;
      if (7 < local_34[0]) goto LAB_036edeb0;
    }
    else {
      if (*(int *)(lVar9 + 0x15c) != 0) {
        pbVar6 = (byte *)(lVar9 + 0x158);
      }
      if (7 < *pbVar6) {
        if ((*(int *)(lVar9 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar6 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_036ede40;
        }
        goto LAB_036ede4c;
      }
LAB_036edeb8:
      local_34[0] = *pbVar6;
      if (7 < local_34[0]) {
        local_34[0] = 0xff;
      }
    }
    local_48 = PTR_DAT_04bb2020 + 0x10;
    pcStack_40 = "WHEREAREN_ResortPlanner_InspectHouse";
    iVar5 = FUN_02753180(local_34,&local_48);
    uVar7 = *(ushort *)puVar3;
    bVar4 = iVar5 != 0;
    if (uVar7 == 0xffff) {
      uVar8 = 0;
      if (bVar4) {
        return;
      }
      goto LAB_036edf58;
    }
  }
  local_48 = (undefined *)CONCAT44(local_48._4_4_,0x1d);
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar7 & 0xffffffffU) * 8);
  if (0xff < uVar7) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  uVar8 = *puVar1 >> 0x1d & 1;
  if (bVar4) {
    return;
  }
LAB_036edf58:
  if (uVar8 == 0) {
    *(ushort *)((long)param_1 + 0x6e8) = *(ushort *)((long)param_1 + 0x6e8) & 0xfffe;
    local_48 = (undefined *)CONCAT44(local_48._4_4_,2);
    lVar9 = *(long *)PTR_DAT_04bb2110;
    plVar10 = (long *)**(undefined8 **)(lVar9 + 0x10);
    nn::os::LockMutex((MutexType *)(plVar10 + 0x4d));
    (**(code **)(*plVar10 + 0x38))(plVar10,lVar9 + 0x8a0);
    nn::os::UnlockMutex((MutexType *)(plVar10 + 0x4d));
    FUN_01dfc530(*(undefined8 *)PTR_DAT_04bb7bc0);
    memset(param_1,0,0x6e8);
  }
  return;
}

