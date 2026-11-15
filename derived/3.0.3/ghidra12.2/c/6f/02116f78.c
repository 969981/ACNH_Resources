
void FUN_02116f78(long param_1)

{
  undefined2 *puVar1;
  uint *puVar2;
  short sVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  undefined *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined1 local_81;
  undefined4 local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined1 local_79;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined1 local_71;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined1 local_61;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined1 local_59;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined1 local_51;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  byte local_24 [4];
  
  if ((*(ushort *)(param_1 + 0x1528) >> 1 & 1) == 0) {
    FUN_02116d14(param_1);
  }
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
    return;
  }
  local_98 = (undefined *)CONCAT44(local_98._4_4_,0x15);
  puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
  if (0xff < (uint)(int)sVar3) {
    puVar2 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar2 >> 0x15 & 1) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1604) == 2) {
    uVar7 = nn::os::GetSystemTick();
    uVar4 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
    uVar7 = uVar4 ^ uVar4 * 0x800;
    uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
    uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
    uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
    *(int *)(param_1 + 0x161c) =
         (int)((ulong)(uVar7 >> 8 ^ uVar4 >> 0x13 ^ uVar7 ^ uVar4) * 3 >> 0x20);
  }
  FUN_02117470(param_1);
  puVar6 = PTR_DAT_04bb39b0;
  pbVar12 = PTR_DAT_04bb32e0;
  lVar11 = *(long *)PTR_DAT_04bb39b0;
  pbVar10 = PTR_DAT_04bb32e0;
  if (lVar11 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_021170d8;
LAB_02117144:
    local_24[0] = *pbVar10;
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
  }
  else {
    if (*(int *)(lVar11 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar11 + 0x158);
    }
    if ((*pbVar10 < 8) ||
       (((*(int *)(lVar11 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar10 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar10 < 8)))) goto LAB_02117144;
LAB_021170d8:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0211713c:
      pbVar10 = PTR_DAT_04bb5038;
      goto LAB_02117144;
    }
    lVar11 = **(long **)PTR_DAT_04bb27d0;
    bVar9 = *(byte *)(lVar11 + 0x473);
    pbVar10 = PTR_DAT_04bb5038;
    if ((long)(char)bVar9 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
      if (7 < bVar9) {
        puVar2 = (uint *)(lVar11 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar10 = (byte *)(lVar11 + 0x471);
      }
    }
    local_24[0] = *pbVar10;
    if (7 < local_24[0]) goto LAB_0211713c;
  }
  (**(code **)(DAT_053ed0b8 + 0x18))(&DAT_053ed0b8);
  puVar5 = PTR_DAT_04bb2020;
  local_98 = PTR_DAT_04bb2020 + 0x10;
  local_90 = DAT_053ed0c0;
  iVar8 = FUN_02753180(local_24,&local_98);
  if (iVar8 == 0) {
    puVar1 = (undefined2 *)(PTR_DAT_04bb37e0 + 2);
    local_82 = *(undefined1 *)puVar1;
    local_81 = PTR_DAT_04bb37e0[3];
    local_88 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_84 = *(undefined2 *)PTR_DAT_04bb37e0;
    lVar11 = *(long *)puVar6;
    local_90 = CONCAT26(*puVar1,CONCAT24(local_84,local_88));
    if (lVar11 == 0) {
      if (7 < *pbVar12) goto LAB_021172c4;
      pbVar10 = PTR_DAT_04bb32e0;
LAB_02117324:
      bVar9 = *pbVar10;
      if (7 < bVar9) {
        bVar9 = 0xff;
      }
    }
    else {
      pbVar10 = pbVar12;
      if (*(int *)(lVar11 + 0x15c) != 0) {
        pbVar10 = (byte *)(lVar11 + 0x158);
      }
      if ((*pbVar10 < 8) ||
         (((*(int *)(lVar11 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
          (pbVar10 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar10 < 8))))
      goto LAB_02117324;
LAB_021172c4:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0211731c:
        pbVar10 = PTR_DAT_04bb5038;
        goto LAB_02117324;
      }
      lVar11 = **(long **)PTR_DAT_04bb27d0;
      bVar9 = *(byte *)(lVar11 + 0x473);
      pbVar10 = PTR_DAT_04bb5038;
      if ((long)(char)bVar9 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
        if (7 < bVar9) {
          puVar2 = (uint *)(lVar11 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pbVar10 = (byte *)(lVar11 + 0x471);
        }
      }
      bVar9 = *pbVar10;
      if (7 < bVar9) goto LAB_0211731c;
    }
    local_4c = 0;
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    local_48 = 0;
    local_98 = (undefined *)
               CONCAT71((int7)(CONCAT26(*puVar1,CONCAT24(local_84,(int)local_98)) >> 8),bVar9);
    local_80 = local_88;
    local_7c = local_84;
    local_7a = local_82;
    local_79 = local_81;
    local_78 = local_88;
    local_74 = local_84;
    local_72 = local_82;
    local_71 = local_81;
    local_70 = local_88;
    local_6c = local_84;
    local_6a = local_82;
    local_69 = local_81;
    local_68 = local_88;
    local_64 = local_84;
    local_62 = local_82;
    local_61 = local_81;
    local_60 = local_88;
    local_5c = local_84;
    local_5a = local_82;
    local_59 = local_81;
    local_58 = local_88;
    local_54 = local_84;
    local_52 = local_82;
    local_51 = local_81;
    local_50 = local_88;
    FUN_02543cdc(&local_98);
    lVar11 = *(long *)puVar6;
    if (lVar11 != 0) goto LAB_0211735c;
LAB_02117398:
    if (7 < *pbVar12) {
LAB_021173a4:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar11 = **(long **)PTR_DAT_04bb27d0;
        bVar9 = *(byte *)(lVar11 + 0x473);
        pbVar10 = PTR_DAT_04bb5038;
        if ((long)(char)bVar9 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
          if (7 < bVar9) {
            puVar2 = (uint *)(lVar11 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar10 = (byte *)(lVar11 + 0x471);
          }
        }
        local_24[0] = *pbVar10;
        if (local_24[0] < 8) goto LAB_02117424;
      }
      pbVar12 = PTR_DAT_04bb5038;
    }
  }
  else {
    lVar11 = *(long *)puVar6;
    if (lVar11 == 0) goto LAB_02117398;
LAB_0211735c:
    if (*(int *)(lVar11 + 0x15c) != 0) {
      pbVar12 = (byte *)(lVar11 + 0x158);
    }
    if (7 < *pbVar12) {
      if ((*(int *)(lVar11 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar12 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02117398;
      }
      goto LAB_021173a4;
    }
  }
  local_24[0] = *pbVar12;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
LAB_02117424:
  (**(code **)(DAT_053ed0b8 + 0x18))(&DAT_053ed0b8);
  local_98 = puVar5 + 0x10;
  local_90 = DAT_053ed0c0;
  iVar8 = FUN_02753180(local_24,&local_98);
  if (iVar8 != 0) {
    FUN_02118490(param_1);
  }
  return;
}

