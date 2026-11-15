
void FUN_020cd4c4(undefined8 param_1,uint *param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  long *plVar16;
  undefined4 uVar17;
  undefined *local_80;
  char *pcStack_78;
  byte local_64 [4];
  
  puVar3 = PTR_DAT_04bb2020;
  local_80 = PTR_DAT_04bb2020 + 0x10;
  pcStack_78 = "HalloweenApproachNpcIndex";
  iVar5 = FUN_02743000(&local_80);
  puVar4 = PTR_DAT_04bb27c0;
  if (iVar5 != 0) {
    return;
  }
  lVar13 = *(long *)PTR_DAT_04bb27c0;
  if (lVar13 == 0) {
    return;
  }
  uVar8 = *param_2;
  if ((((uVar8 == 0) ||
       (plVar16 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                            ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar16 == (long *)0x0)) ||
      ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar16 + 0x46) != uVar8)) {
    plVar16 = (long *)0x0;
  }
  if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
    plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar13 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar10 + 0x60))();
    if (iVar5 < 0x11) {
      uVar8 = 1;
    }
    else {
      if (4 < *(uint *)(lVar13 + 0x5e8)) goto LAB_020cd5d8;
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_020cd5d8:
    uVar8 = 0;
  }
  if (plVar16 == (long *)0x0) {
    return;
  }
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar6 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb37d0);
  if ((uVar8 & uVar6) != 1) {
    return;
  }
  lVar13 = *(long *)PTR_DAT_04bb4138;
  if (lVar13 == 0) {
    return;
  }
  (**(code **)(plVar16[0x7c] + 0x18))(plVar16 + 0x7c);
  uVar7 = FUN_006bd550(plVar16[0x7d],0);
  local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar7);
  lVar13 = FUN_0079e770(lVar13,&local_80);
  puVar4 = PTR_DAT_04bb39b0;
  pbVar15 = PTR_DAT_04bb32e0;
  if (lVar13 == 0) {
    return;
  }
  iVar5 = (int)plVar16[0xa1];
  lVar13 = *(long *)PTR_DAT_04bb39b0;
  pbVar14 = PTR_DAT_04bb32e0;
  if (lVar13 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_020cd6dc;
LAB_020cd748:
    local_64[0] = *pbVar14;
    if (7 < local_64[0]) {
      local_64[0] = 0xff;
    }
  }
  else {
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar14 = (byte *)(lVar13 + 0x158);
    }
    if ((*pbVar14 < 8) ||
       (((*(int *)(lVar13 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar14 < 8)))) goto LAB_020cd748;
LAB_020cd6dc:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_020cd740:
      pbVar14 = PTR_DAT_04bb5038;
      goto LAB_020cd748;
    }
    lVar13 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar13 + 0x473);
    pbVar14 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar13 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar14 = (byte *)(lVar13 + 0x471);
      }
    }
    local_64[0] = *pbVar14;
    if (7 < local_64[0]) goto LAB_020cd740;
  }
  local_80 = puVar3 + 0x10;
  pcStack_78 = "FirstMeetGreetAtThisVillage";
  lVar13 = FUN_0265cf70(iVar5,local_64);
  if (lVar13 == 0) {
    return;
  }
  if ((*(long **)(lVar13 + 0x28) == (long *)0x0) ||
     (puVar11 = (undefined8 *)**(long **)(lVar13 + 0x28), puVar11 == (undefined8 *)0x0)) {
    uVar8 = 1;
  }
  else {
    uVar8 = (**(code **)*puVar11)();
    uVar8 = uVar8 ^ 1;
  }
  iVar9 = FUN_02746e10(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8),&local_80);
  if ((((uVar8 & 1) == 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  if (iVar9 == 0) {
    return;
  }
  lVar13 = *(long *)puVar4;
  pbVar14 = pbVar15;
  if (lVar13 == 0) {
    if (7 < *pbVar15) goto LAB_020cd844;
LAB_020cd8b0:
    local_64[0] = *pbVar14;
    if (7 < local_64[0]) {
      local_64[0] = 0xff;
    }
  }
  else {
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar14 = (byte *)(lVar13 + 0x158);
    }
    if ((*pbVar14 < 8) ||
       (((*(int *)(lVar13 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar14 < 8)))) goto LAB_020cd8b0;
LAB_020cd844:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_020cd8a8:
      pbVar14 = PTR_DAT_04bb5038;
      goto LAB_020cd8b0;
    }
    lVar13 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar13 + 0x473);
    pbVar14 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar13 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar14 = (byte *)(lVar13 + 0x471);
      }
    }
    local_64[0] = *pbVar14;
    if (7 < local_64[0]) goto LAB_020cd8a8;
  }
  local_80 = puVar3 + 0x10;
  pcStack_78 = "HasAcquaintanceship";
  iVar9 = FUN_02746c30(iVar5,local_64,&local_80);
  if (iVar9 == 0) {
    return;
  }
  lVar13 = *(long *)puVar4;
  if (lVar13 == 0) {
LAB_020cd92c:
    if (7 < *pbVar15) {
LAB_020cd938:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar13 = **(long **)PTR_DAT_04bb27d0;
        bVar2 = *(byte *)(lVar13 + 0x473);
        pbVar15 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar13 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar15 = (byte *)(lVar13 + 0x471);
          }
        }
        local_64[0] = *pbVar15;
        if (local_64[0] < 8) goto LAB_020cd9b8;
      }
      pbVar15 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar15 = (byte *)(lVar13 + 0x158);
    }
    if (7 < *pbVar15) {
      if ((*(int *)(lVar13 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar15 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_020cd92c;
      }
      goto LAB_020cd938;
    }
  }
  local_64[0] = *pbVar15;
  if (7 < local_64[0]) {
    local_64[0] = 0xff;
  }
LAB_020cd9b8:
  local_80 = puVar3 + 0x10;
  pcStack_78 = "HaloweenTalkThisSceneFalg";
  iVar9 = FUN_02746c30(iVar5,local_64,&local_80);
  if ((iVar9 == 0) && (uVar12 = FUN_021bea90(&DAT_053fe348,param_2), (uVar12 & 1) != 0)) {
    lVar13 = plVar16[0x78];
    uVar17 = *(undefined4 *)(lVar13 + 0x29c);
    *(undefined4 *)(lVar13 + 0x29c) = 0x42700000;
    uVar7 = FUN_0252cb54();
    local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar7);
    uVar12 = FUN_02087ce0(lVar13,&local_80,0);
    *(undefined4 *)(lVar13 + 0x29c) = uVar17;
    if ((uVar12 & 1) != 0) {
      local_80 = puVar3 + 0x10;
      pcStack_78 = "HalloweenApproachNpcIndex";
      FUN_02743234(&local_80,iVar5 + 1);
    }
  }
  return;
}

