
void FUN_026c4000(long param_1,int *param_2)

{
  uint *puVar1;
  undefined *puVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  byte bVar7;
  undefined *puVar8;
  int iVar9;
  bool bVar10;
  int *piVar11;
  long lVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  undefined *local_78;
  long local_70;
  int local_54;
  undefined *local_50;
  char *pcStack_48;
  byte local_28 [4];
  uint local_24;
  
  puVar8 = PTR_DAT_04bb2020;
  if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
    return;
  }
  lVar12 = **(long **)PTR_DAT_04bb27d0;
  local_24 = 0;
  bVar7 = *(byte *)(lVar12 + 0x473);
  uVar14 = (ulong)(char)bVar7;
  pbVar13 = PTR_DAT_04bc1220;
  if (uVar14 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar12 + 0x48) + (uVar14 & 0xffffffff) * 0x20;
    if (7 < bVar7) {
      puVar1 = (uint *)(lVar12 + 0x48);
    }
    if ((*puVar1 & 8) != 0) {
      pbVar13 = (byte *)(lVar12 + 0x473);
    }
  }
  uVar16 = 0;
  bVar10 = false;
  iVar9 = 0;
  uVar17 = 0;
  puVar1 = (uint *)(lVar12 + 0x48);
  piVar3 = param_2 + (ulong)(uint)(int)(char)*pbVar13 * 3;
  if (7 < (uint)(int)(char)*pbVar13) {
    piVar3 = param_2;
  }
  puVar5 = puVar1 + (uVar14 & 0xffffffff) * 0x20;
  if (7 < bVar7) {
    puVar5 = puVar1;
  }
LAB_026c40b0:
  while (bVar7 != 0xff) {
    pbVar13 = PTR_DAT_04bc1220;
    if ((*puVar5 & 8) != 0) {
      pbVar13 = (byte *)(lVar12 + 0x473);
    }
    if ((((uVar17 ^ 0xffffffff) & 0xff) == 0) ||
       ((uint)*pbVar13 == (uVar17 & 0xff) || (*puVar5 & 8) == 0)) break;
    puVar4 = puVar1 + ((long)(char)uVar17 & 0xffffffffU) * 0x20;
    if ((uVar17 & 0xf8) != 0) {
      puVar4 = puVar1;
    }
    if (((byte)*puVar4 >> 3 & 1) == 0) break;
    piVar11 = param_2 + (long)iVar9 * 3;
    if ((char)piVar11[1] == '\0') goto LAB_026c4180;
    if (bVar10) {
      if ((1 < local_24) && (*piVar11 != *piVar3)) goto LAB_026c4150;
LAB_026c4158:
      bVar10 = true;
      uVar16 = local_24;
      break;
    }
    if (*piVar11 != *piVar3) {
LAB_026c4150:
      local_24 = 1;
      goto LAB_026c4158;
    }
    uVar17 = uVar17 + 1;
    if (uVar17 == 8) goto LAB_026c4180;
    bVar10 = false;
    iVar9 = iVar9 + 1;
  }
  uVar17 = uVar17 + 1;
  if (uVar17 != 8) {
    iVar9 = iVar9 + 1;
    goto LAB_026c40b0;
  }
  if (bVar10) goto LAB_026c4188;
LAB_026c4180:
  uVar16 = 0;
  local_24 = 0;
LAB_026c4188:
  bVar6 = *(byte *)(lVar12 + 0x476);
  iVar9 = *(int *)(param_1 + 0x460);
  if (bVar6 < 2) {
    bVar6 = 1;
  }
  lVar15 = *(long *)PTR_DAT_04bb39b0;
  if (lVar15 == 0) {
    local_28[0] = *PTR_DAT_04bb32e0;
    if (7 < local_28[0]) goto LAB_026c420c;
LAB_026c4260:
    if (7 < local_28[0]) {
      local_28[0] = 0xff;
    }
  }
  else {
    pbVar13 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar13 = (byte *)(lVar15 + 0x158);
    }
    local_28[0] = *pbVar13;
    if ((local_28[0] < 8) ||
       (((*(int *)(lVar15 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (local_28[0] = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), local_28[0] < 8))))
    goto LAB_026c4260;
LAB_026c420c:
    pbVar13 = PTR_DAT_04bb5038;
    if (bVar7 != 0xff) {
      puVar5 = puVar1 + (uVar14 & 0xffffffff) * 0x20;
      if (7 < bVar7) {
        puVar5 = puVar1;
      }
      if ((*puVar5 & 8) != 0) {
        pbVar13 = (byte *)(lVar12 + 0x471);
      }
    }
    local_28[0] = *pbVar13;
    if (7 < local_28[0]) {
      local_28[0] = *PTR_DAT_04bb5038;
      goto LAB_026c4260;
    }
  }
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "net_multiplay_save_failure";
  local_50 = puVar2;
  FUN_025ffac8(&local_78,&local_50,local_28);
  local_78 = PTR_DAT_04bc3368 + 0x10;
  pcStack_48 = "Reason";
  local_50 = puVar2;
  if (local_70 != 0) {
    FUN_026054d0(local_70,&local_50,uVar16);
    pcStack_48 = "StreakNum";
    local_50 = puVar2;
    if (local_70 != 0) {
      FUN_026054d0(local_70,&local_50,(long)iVar9);
      local_50 = puVar8 + 0x10;
      pcStack_48 = "PlayerNum";
      if (local_70 != 0) {
        FUN_026054d0(local_70,&local_50,bVar6);
      }
    }
  }
  iVar9 = (**(code **)(local_78 + 0x20))(&local_78);
  if (iVar9 != -1) {
    iVar9 = (**(code **)(local_78 + 0x20))(&local_78);
    local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar9);
    if (iVar9 < 0xd) goto LAB_026c4354;
  }
  if (local_54 == 0) {
    local_54 = 1;
  }
LAB_026c4354:
  FUN_02601530(&local_78);
  return;
}

