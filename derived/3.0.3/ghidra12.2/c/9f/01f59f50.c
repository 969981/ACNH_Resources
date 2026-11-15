
void FUN_01f59f50(long param_1,uint param_2)

{
  uint *puVar1;
  undefined *puVar2;
  uint *puVar3;
  byte bVar4;
  ulong uVar5;
  undefined *puVar6;
  byte bVar7;
  short sVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  undefined4 uVar17;
  undefined *local_b8;
  char *pcStack_b0;
  byte local_a4 [4];
  undefined *local_a0;
  char *local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  byte local_58 [4];
  byte local_54 [4];
  uint local_48;
  uint local_44;
  
  puVar1 = (uint *)(param_1 + 0x13648);
  local_44 = param_2;
  FUN_0252d11c(&local_b8);
  if ((((byte)local_b8 < 8) && (iVar9 = FUN_00a74b78(&local_b8), iVar9 == 0x13)) &&
     ((*(byte *)(*(long *)PTR_DAT_04bb2230 + 0x3f0) >> 1 & 1) == 0)) {
    lVar15 = *(long *)(param_1 + 0x18);
    uVar17 = *(undefined4 *)(lVar15 + 0x29c);
    *(undefined4 *)(lVar15 + 0x29c) = 0x42700000;
    lVar16 = *(long *)PTR_DAT_04bb39b0;
    if (lVar16 == 0) {
      bVar7 = *PTR_DAT_04bb32e0;
LAB_01f5a488:
      uVar11 = (uint)bVar7;
      if (uVar11 < 8) goto LAB_01f5a4fc;
LAB_01f5a490:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar16 = **(long **)PTR_DAT_04bb27d0;
        bVar7 = *(byte *)(lVar16 + 0x473);
        pbVar12 = PTR_DAT_04bb5038;
        if ((long)(char)bVar7 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar16 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
          if (7 < bVar7) {
            puVar3 = (uint *)(lVar16 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar12 = (byte *)(lVar16 + 0x471);
          }
        }
        uVar11 = (uint)*pbVar12;
        if (uVar11 < 8) goto LAB_01f5a4fc;
      }
      uVar11 = (uint)(byte)*PTR_DAT_04bb5038;
      if (uVar11 < 8) goto LAB_01f5a4fc;
LAB_01f5a518:
      puVar13 = (undefined4 *)PTR_DAT_04bb3238;
    }
    else {
      pbVar12 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar16 + 0x15c) != 0) {
        pbVar12 = (byte *)(lVar16 + 0x158);
      }
      uVar11 = (uint)*pbVar12;
      if (7 < *pbVar12) {
        if ((*(int *)(lVar16 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          bVar7 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_01f5a488;
        }
        goto LAB_01f5a490;
      }
LAB_01f5a4fc:
      if (*(long *)PTR_DAT_04bb4718 == 0) goto LAB_01f5a518;
      puVar13 = (undefined4 *)(*(long *)PTR_DAT_04bb4718 + (ulong)uVar11 * 4 + 0xde8);
    }
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,*puVar13);
    bVar7 = FUN_02087ce0(lVar15,&local_a0,0);
    *(undefined4 *)(lVar15 + 0x29c) = uVar17;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)(param_1 + 0x136e0) = bVar7 & 1;
  if ((*(byte *)(param_1 + 0xad5a) >> 1 & 1) != 0) {
    return;
  }
  uVar11 = *puVar1;
  *puVar1 = uVar11 + 1;
  puVar6 = PTR_DAT_04bb2020;
  local_48 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
  if (9 < local_48) {
    return;
  }
  uVar5 = (ulong)local_48;
  lVar16 = uVar5 * 0xba0;
  if ((&DAT_053fee41)[lVar16] == '\0') {
    return;
  }
  uVar14 = 18000;
  if ((local_44 & 0xfffffffd) != 0) {
    uVar14 = 900;
  }
  if (uVar14 <= uVar11 + 1) {
    bVar4 = (&DAT_053fe810)[lVar16];
    *(undefined4 *)(&DAT_053fe814 + lVar16) = 0;
    puVar2 = puVar6 + 0x10;
    bVar7 = bVar4 >> 1;
    if (0x1e < bVar7) {
      bVar7 = 0x1f;
    }
    (&DAT_053fe810)[lVar16] = bVar7;
    (&DAT_053fe829)[lVar16] = 0x3f < bVar4;
    *puVar1 = 0;
    local_98 = "FireworksApproachTalk";
    local_a0 = puVar2;
    sVar8 = FUN_02196ed0(&local_48,&local_a0);
    if (sVar8 != 0) {
      local_98 = "FireworksApproachTalk";
      local_a0 = puVar2;
      FUN_021be8c0(&local_48,&local_a0,0);
    }
    local_98 = "HalloweenApproachNpcIndex";
    local_a0 = puVar2;
    iVar9 = FUN_02743000(&local_a0);
    if (iVar9 != 0) {
      local_a0 = puVar6 + 0x10;
      local_98 = "HalloweenApproachNpcIndex";
      FUN_02743234(&local_a0,0);
    }
    local_98 = "EasterRecipeTalk";
    local_a0 = puVar6 + 0x10;
    sVar8 = FUN_02196ed0(&local_48,&local_a0);
    if (sVar8 != 0) {
      local_98 = "EasterRecipeTalk";
      local_a0 = puVar6 + 0x10;
      FUN_021be8c0(&local_48,&local_a0,0);
    }
  }
  local_a0 = puVar6 + 0x10;
  local_98 = "HalloweenApproachNpcIndex";
  iVar9 = FUN_02743000(&local_a0);
  if (iVar9 == 0) goto LAB_01f5a3c8;
  lVar15 = *(long *)PTR_DAT_04bb39b0;
  pbVar12 = PTR_DAT_04bb32e0;
  if (lVar15 == 0) {
LAB_01f5a1e0:
    if (*pbVar12 < 8) goto LAB_01f5a258;
LAB_01f5a1ec:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01f5a250:
      pbVar12 = PTR_DAT_04bb5038;
      goto LAB_01f5a258;
    }
    lVar15 = **(long **)PTR_DAT_04bb27d0;
    bVar7 = *(byte *)(lVar15 + 0x473);
    pbVar12 = PTR_DAT_04bb5038;
    if ((long)(char)bVar7 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
      if (7 < bVar7) {
        puVar1 = (uint *)(lVar15 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar12 = (byte *)(lVar15 + 0x471);
      }
    }
    local_54[0] = *pbVar12;
    if (7 < local_54[0]) goto LAB_01f5a250;
  }
  else {
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar12 = (byte *)(lVar15 + 0x158);
    }
    if (7 < *pbVar12) {
      if ((*(int *)(lVar15 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar12 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01f5a1e0;
      }
      goto LAB_01f5a1ec;
    }
LAB_01f5a258:
    local_54[0] = *pbVar12;
    if (7 < local_54[0]) {
      local_54[0] = 0xff;
    }
  }
  bVar7 = local_54[0];
  if (7 < local_54[0]) {
    bVar7 = 0xff;
  }
  local_58[0] = bVar7;
  lVar15 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_58,1);
  if (lVar15 != 0) {
    local_90 = *(undefined2 *)PTR_DAT_04bb37e0;
    local_8e = PTR_DAT_04bb37e0[2];
    local_8d = PTR_DAT_04bb37e0[3];
    local_8c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_98 = *(char **)PTR_DAT_04bb37e0;
    local_a0 = *(undefined **)PTR_DAT_04bb37e0;
    local_a4[0] = bVar7;
    local_88 = local_90;
    local_86 = local_8e;
    local_85 = local_8d;
    local_84 = local_8c;
    local_80 = local_90;
    local_7e = local_8e;
    local_7d = local_8d;
    local_7c = local_8c;
    local_78 = local_90;
    local_76 = local_8e;
    local_75 = local_8d;
    local_74 = local_8c;
    local_70 = local_90;
    local_6e = local_8e;
    local_6d = local_8d;
    local_6c = local_8c;
    local_68 = local_90;
    local_66 = local_8e;
    local_65 = local_8d;
    local_64 = local_8c;
    local_60 = local_90;
    local_5e = local_8e;
    local_5d = local_8d;
    local_5c = local_8c;
    FUN_02665c20(local_a4,&local_a0,1);
    iVar9 = FUN_0277d6c4(&local_88);
    if ((((iVar9 == 0x32bb) && (iVar9 = FUN_0277d6c4(&local_a0), iVar9 == 0x32ca)) &&
        (uVar10 = FUN_02532e88(local_54,&local_88,0,1), (uVar10 & 1) != 0)) &&
       (uVar10 = FUN_02532e88(local_54,&local_a0,0,1), (uVar10 & 1) != 0)) {
      local_b8 = puVar6 + 0x10;
      pcStack_b0 = "HalloweenApproachNpcIndex";
      FUN_02743234(&local_b8,0);
    }
  }
LAB_01f5a3c8:
  if ((byte)(&DAT_053fe810)[lVar16] < 0x20) {
    local_98 = "FireworksApproachTalk";
    local_a0 = puVar6 + 0x10;
    sVar8 = FUN_02196ed0(&local_48,&local_a0);
    if (sVar8 == 0) {
      local_98 = "HalloweenApproachNpcIndex";
      local_a0 = puVar6 + 0x10;
      iVar9 = FUN_02743000(&local_a0);
      if (iVar9 == 0) {
        local_a0 = puVar6 + 0x10;
        local_98 = "EasterRecipeTalk";
        sVar8 = FUN_02196ed0(&local_48,&local_a0);
        if (sVar8 == 0) {
          FUN_021af5e0(&DAT_053fe348);
          (&DAT_053fe824)[uVar5 * 0x2e8] = 0;
          FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
        }
      }
    }
  }
  return;
}

