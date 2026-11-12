
void FUN_0081442c(long param_1)

{
  long *plVar1;
  uint *puVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined2 uVar22;
  undefined1 uVar23;
  undefined8 *puVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 local_a0 [3];
  undefined1 uStack_9d;
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  long local_98;
  undefined8 local_90;
  undefined4 local_88;
  byte local_80 [4];
  byte local_7c [4];
  long local_78;
  long local_70;
  undefined8 local_68;
  
  if (*(int *)(param_1 + 0x30) == -1) {
    return;
  }
  iVar5 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)local_a0);
  if (iVar5 == 0) {
    uVar11 = nn::time::ToCalendarTimeInUtc((PosixTime *)local_a0);
    uVar20 = (undefined1)((ulong)uVar11 >> 0x10);
    uVar22 = (undefined2)uVar11;
    uVar25 = (undefined1)((ulong)uVar11 >> 0x20);
    uVar21 = (undefined1)((ulong)uVar11 >> 0x18);
    uVar26 = (undefined1)((ulong)uVar11 >> 0x28);
    uVar23 = (undefined1)((ulong)uVar11 >> 0x30);
  }
  else {
    uVar25 = 0;
    uVar26 = 0;
    uVar23 = 0;
    uVar20 = 1;
    uVar22 = 0x7b2;
    uVar21 = 1;
  }
  puVar4 = PTR_DAT_04bd0f18;
  if (*PTR_DAT_04bd0f18 == '\0') {
    uVar6 = nn::time::IsInitialized();
    if ((uVar6 & 1) == 0) {
      nn::time::Initialize();
    }
    *puVar4 = 1;
  }
  local_a0 = (undefined1  [3])CONCAT12(uVar20,uVar22);
  _local_a0 = CONCAT13(uVar21,local_a0);
  _local_a0 = (uint7)_local_a0;
  lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_a0);
  if (iVar5 != 0) {
    return;
  }
  uVar6 = FUN_02640eb0();
  if ((uVar6 & 1) == 0) {
    return;
  }
  lVar18 = *(long *)PTR_DAT_04bb39b0;
  pbVar15 = PTR_DAT_04bb32e0;
  if (lVar18 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_00814574;
LAB_008145e0:
    local_80[0] = *pbVar15;
    if (7 < local_80[0]) {
      local_80[0] = 0xff;
    }
  }
  else {
    if (*(int *)(lVar18 + 0x15c) != 0) {
      pbVar15 = (byte *)(lVar18 + 0x158);
    }
    if ((*pbVar15 < 8) ||
       (((*(int *)(lVar18 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar15 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar15 < 8)))) goto LAB_008145e0;
LAB_00814574:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_008145d8:
      pbVar15 = PTR_DAT_04bb5038;
      goto LAB_008145e0;
    }
    lVar18 = **(long **)PTR_DAT_04bb27d0;
    bVar3 = *(byte *)(lVar18 + 0x473);
    pbVar15 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar2 = (uint *)(lVar18 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar15 = (byte *)(lVar18 + 0x471);
      }
    }
    local_80[0] = *pbVar15;
    if (7 < local_80[0]) goto LAB_008145d8;
  }
  lVar18 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_80,1);
  if (lVar18 == 0) {
    return;
  }
  lVar14 = lVar18 + 0x194b0;
  if (*(long *)(lVar18 + 0x194b8) == 0) {
    lVar14 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  plVar1 = (long *)(lVar14 + 0x2a7e8);
  lVar18 = *(long *)(lVar14 + 0x2a808);
  if (lVar18 == 0) {
    uVar6 = 0;
  }
  else {
    if (*(undefined8 **)(lVar18 + 0x10) == (undefined8 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      lVar18 = *(long *)(lVar14 + 0x2a808);
      uVar6 = uVar6 & 0xffffffff;
      if (lVar18 == 0) goto LAB_008146a0;
    }
    plVar9 = *(long **)(lVar18 + 0x20);
    if (plVar9 != (long *)0x0) {
      _local_a0 = *plVar1;
      local_98 = *(long *)(lVar14 + 0x2a7f0);
      local_90 = 8;
      (**(code **)(*plVar9 + 0x20))(plVar9,local_a0);
    }
  }
LAB_008146a0:
  plVar9 = (long *)(*(long *)(lVar14 + 0x2a7f0) + *plVar1);
  if (*plVar9 == 0) {
    if ((*(long *)(lVar14 + 0x2a808) != 0) &&
       (plVar10 = *(long **)(*(long *)(lVar14 + 0x2a808) + 0x20), plVar10 != (long *)0x0)) {
      local_90 = 8;
      _local_a0 = *plVar1;
      local_98 = *(long *)(lVar14 + 0x2a7f0);
      (**(code **)(*plVar10 + 0x20))(plVar10,local_a0);
      plVar9 = (long *)(*(long *)(lVar14 + 0x2a7f0) + *plVar1);
    }
    *plVar9 = lVar7;
    goto LAB_00814b14;
  }
  if (*puVar4 == '\0') {
    uVar8 = nn::time::IsInitialized();
    if ((uVar8 & 1) == 0) {
      nn::time::Initialize();
    }
    *puVar4 = 1;
  }
  lVar18 = _local_a0;
  local_a0 = (undefined1  [3])CONCAT12(uVar20,uVar22);
  _local_a0 = CONCAT13(uVar21,local_a0);
  uStack_99 = SUB81(lVar18,7);
  _local_a0 = CONCAT16(uVar23,CONCAT15(uVar26,CONCAT14(uVar25,_local_a0)));
  lVar18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_a0);
  if ((*(long *)(lVar14 + 0x2a808) != 0) &&
     (plVar9 = *(long **)(*(long *)(lVar14 + 0x2a808) + 0x20), plVar9 != (long *)0x0)) {
    _local_a0 = *plVar1;
    local_98 = *(long *)(lVar14 + 0x2a7f0);
    local_90 = 8;
    (**(code **)(*plVar9 + 0x20))(plVar9,local_a0);
  }
  plVar9 = (long *)(*(long *)(lVar14 + 0x2a7f0) + *plVar1);
  if (lVar18 - *plVar9 < 0x15180) goto LAB_00814b14;
  local_90 = 0;
  local_88 = 0;
  _local_a0 = 0x1000007b2;
  local_98 = 0x400000001;
  if ((*(long *)(lVar14 + 0x2a808) != 0) &&
     (plVar10 = *(long **)(*(long *)(lVar14 + 0x2a808) + 0x20), plVar10 != (long *)0x0)) {
    local_68 = 8;
    local_78 = *plVar1;
    local_70 = *(long *)(lVar14 + 0x2a7f0);
    (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
    plVar9 = (long *)(*(long *)(lVar14 + 0x2a7f0) + *plVar1);
  }
  puVar4 = PTR_DAT_04bb4f78;
  pbVar15 = PTR_DAT_04bb32e0;
  local_78 = *plVar9;
  FUN_038e9ac8(&local_78,local_a0);
  FUN_00813c8c(param_1,2,local_a0);
  if (*(int *)(param_1 + 0x30) != -1) {
    lVar18 = *(long *)PTR_DAT_04bb39b0;
    if (lVar18 == 0) {
LAB_00814824:
      if (*pbVar15 < 8) goto LAB_00814890;
LAB_00814830:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_00814888:
        pbVar15 = PTR_DAT_04bb5038;
        goto LAB_00814890;
      }
      lVar18 = **(long **)PTR_DAT_04bb27d0;
      bVar3 = *(byte *)(lVar18 + 0x473);
      pbVar15 = PTR_DAT_04bb5038;
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar2 = (uint *)(lVar18 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pbVar15 = (byte *)(lVar18 + 0x471);
        }
      }
      local_7c[0] = *pbVar15;
      if (7 < local_7c[0]) goto LAB_00814888;
    }
    else {
      if (*(int *)(lVar18 + 0x15c) != 0) {
        pbVar15 = (byte *)(lVar18 + 0x158);
      }
      if (7 < *pbVar15) {
        if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar15 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_00814824;
        }
        goto LAB_00814830;
      }
LAB_00814890:
      local_7c[0] = *pbVar15;
      if (7 < local_7c[0]) {
        local_7c[0] = 0xff;
      }
    }
    if (7 < local_7c[0]) {
      local_7c[0] = 0xff;
    }
    lVar18 = FUN_02583354(*(undefined8 *)puVar4,local_7c,1);
    if (lVar18 != 0) {
      lVar19 = lVar18 + 0x194b0;
      lVar16 = lVar19;
      if (*(long *)(lVar18 + 0x194b8) == 0) {
        lVar16 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      }
      lVar17 = *(long *)(lVar16 + 0x2a760);
      if (lVar17 == 0) {
        uVar8 = 0;
      }
      else {
        if (*(undefined8 **)(lVar17 + 0x10) == (undefined8 *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
          lVar17 = *(long *)(lVar16 + 0x2a760);
          uVar8 = uVar8 & 0xffffffff;
          if (lVar17 == 0) goto LAB_0081499c;
        }
        plVar9 = *(long **)(lVar17 + 0x20);
        if (plVar9 != (long *)0x0) {
          local_78 = *(long *)(lVar16 + 0x2a740);
          local_70 = *(long *)(lVar16 + 0x2a748);
          local_68 = 8;
          (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
        }
      }
LAB_0081499c:
      *(undefined8 *)(*(long *)(lVar16 + 0x2a748) + *(long *)(lVar16 + 0x2a740)) = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
      puVar13 = DAT_04ccc690;
      puVar24 = *(undefined8 **)(param_1 + 0x68);
      if (*(char *)(DAT_04ccc690 + 1) == '\0') {
        uVar11 = nn::oe::GetProgramTotalActiveTime();
        *puVar13 = uVar11;
        *(undefined1 *)(puVar13 + 1) = 1;
      }
      else {
        uVar11 = *DAT_04ccc690;
      }
      *puVar24 = uVar11;
      if (*(long *)(lVar18 + 0x194b8) == 0) {
        lVar19 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      }
      lVar18 = *(long *)(lVar19 + 0x2a7d0);
      if (lVar18 == 0) {
        uVar12 = 0;
      }
      else {
        if (*(undefined8 **)(lVar18 + 0x10) == (undefined8 *)0x0) {
          uVar12 = 0;
        }
        else {
          uVar12 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
          lVar18 = *(long *)(lVar19 + 0x2a7d0);
          uVar12 = uVar12 & 0xffffffff;
          if (lVar18 == 0) goto LAB_00814a5c;
        }
        plVar9 = *(long **)(lVar18 + 0x20);
        if (plVar9 != (long *)0x0) {
          local_78 = *(long *)(lVar19 + 0x2a7b0);
          local_70 = *(long *)(lVar19 + 0x2a7b8);
          local_68 = 8;
          (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
        }
      }
LAB_00814a5c:
      *(undefined8 *)(*(long *)(lVar19 + 0x2a7b8) + *(long *)(lVar19 + 0x2a7b0)) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      puVar13 = DAT_04ccc690;
      puVar24 = *(undefined8 **)(param_1 + 0x88);
      if (*(char *)(DAT_04ccc690 + 1) == '\0') {
        uVar11 = nn::oe::GetProgramTotalActiveTime();
        *puVar13 = uVar11;
        *(undefined1 *)(puVar13 + 1) = 1;
      }
      else {
        uVar11 = *DAT_04ccc690;
      }
      *puVar24 = uVar11;
      if ((((uVar12 & 1) != 0) && (*(long *)(lVar19 + 0x2a7d0) != 0)) &&
         (puVar13 = *(undefined8 **)(*(long *)(lVar19 + 0x2a7d0) + 0x18),
         puVar13 != (undefined8 *)0x0)) {
        (**(code **)*puVar13)();
      }
      if ((((uVar8 & 1) != 0) && (*(long *)(lVar16 + 0x2a760) != 0)) &&
         (puVar13 = *(undefined8 **)(*(long *)(lVar16 + 0x2a760) + 0x18),
         puVar13 != (undefined8 *)0x0)) {
        (**(code **)*puVar13)();
      }
    }
  }
  if ((*(long *)(lVar14 + 0x2a808) != 0) &&
     (plVar9 = *(long **)(*(long *)(lVar14 + 0x2a808) + 0x20), plVar9 != (long *)0x0)) {
    local_78 = *plVar1;
    local_70 = *(long *)(lVar14 + 0x2a7f0);
    local_68 = 8;
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
  }
  *(long *)(*(long *)(lVar14 + 0x2a7f0) + *plVar1) = lVar7;
LAB_00814b14:
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar14 + 0x2a808) != 0)) &&
     (puVar13 = *(undefined8 **)(*(long *)(lVar14 + 0x2a808) + 0x18), puVar13 != (undefined8 *)0x0))
  {
    (**(code **)*puVar13)();
  }
  return;
}

