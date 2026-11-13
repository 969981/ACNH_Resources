
bool FUN_013f4ed0(long param_1,ushort param_2)

{
  undefined *puVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  undefined *puVar5;
  ushort uVar6;
  int iVar7;
  uint *puVar8;
  ulong uVar9;
  int *piVar10;
  byte *pbVar11;
  long *plVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  char cVar16;
  ushort uVar17;
  undefined *local_48;
  char *pcStack_40;
  byte local_34 [4];
  ushort local_18 [4];
  
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  local_18[0] = param_2;
  FUN_0277d4ac(local_18);
  puVar1 = PTR_DAT_04bbcae8;
  puVar5 = PTR_DAT_04bbcae0;
  pbVar11 = PTR_DAT_04bb32e0;
  if (local_18[0] == 0xfffe) {
    return false;
  }
  uVar4 = (uint)param_2 - (uint)*(ushort *)(param_1 + 0x348);
  if ((*(uint *)(param_1 + 0x328) <= uVar4) ||
     (puVar13 = *(uint **)(*(long *)(param_1 + 0x330) + (long)(int)uVar4 * 8),
     puVar13 == (uint *)0x0)) {
    return false;
  }
  bVar2 = *PTR_DAT_04bb32e0;
  local_34[0] = bVar2;
  if (7 < bVar2) {
    local_34[0] = 0xff;
  }
  if (*puVar13 != 0) {
    cVar16 = *PTR_DAT_04bbcae0;
    do {
      if (cVar16 == '\0') {
        cVar16 = '\x01';
        *(undefined8 *)puVar1 = 0xffffffffffffffff;
        *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar1 + 0x40) = 0xffffffffffffffff;
        *(undefined4 *)(puVar1 + 0x48) = 0xffffffff;
        *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar1 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar1 + 0x38) = 0xffffffffffffffff;
      }
      else {
        uVar4 = *(uint *)(puVar1 + 0x24);
        if (-1 < (int)uVar4) {
          if ((ushort *)((ulong)uVar4 + (long)puVar13) != (ushort *)0x0) {
            uVar17 = *(ushort *)((ulong)uVar4 + (long)puVar13);
            goto LAB_013f5054;
          }
          break;
        }
        if (uVar4 != 0xffffffff) break;
      }
      puVar8 = (uint *)(ulong)*puVar13;
      uVar17 = 0;
      if ((*puVar13 == 0) || (puVar13 == puVar8)) goto LAB_013f5054;
      lVar14 = 0xc;
      if (*(char *)((long)puVar13 + (10 - (long)puVar8)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar13 + (lVar14 - (long)puVar8);
      if (lVar14 == 0) break;
      uVar9 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar8));
      *(undefined4 *)(puVar1 + 0x24) = 0xfffffffe;
      if (uVar9 == 0) break;
      piVar10 = (int *)(lVar14 + 4);
      while (piVar10[-1] != -0x15395fee) {
        piVar10 = piVar10 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) goto LAB_013f5050;
      }
      iVar7 = 0;
      if (*piVar10 != -1) {
        iVar7 = *piVar10;
      }
      *(int *)(puVar1 + 0x24) = iVar7;
      if (*puVar13 == 0) break;
    } while( true );
  }
LAB_013f5050:
  uVar17 = 0;
LAB_013f5054:
  puVar5 = PTR_DAT_04bb39b0;
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
LAB_013f50c0:
    lVar14 = **(long **)PTR_DAT_04bb27d0;
    if (*(byte *)(lVar14 + 0x476) < 2) {
      lVar15 = *(long *)PTR_DAT_04bb39b0;
      if (lVar15 == 0) {
LAB_013f5144:
        local_34[0] = bVar2;
        if (7 < bVar2) {
LAB_013f514c:
          bVar2 = *(byte *)(lVar14 + 0x473);
          pbVar11 = PTR_DAT_04bb5038;
          if ((long)(char)bVar2 != 0xffffffffffffffff) {
            puVar13 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
            if (7 < bVar2) {
              puVar13 = (uint *)(lVar14 + 0x48);
            }
            if ((*puVar13 & 8) != 0) {
              pbVar11 = (byte *)(lVar14 + 0x471);
            }
          }
          local_34[0] = *pbVar11;
          if ((7 < local_34[0]) && (local_34[0] = *PTR_DAT_04bb5038, 7 < local_34[0])) {
            uVar6 = 0;
            goto LAB_013f51e0;
          }
        }
      }
      else {
        if (*(int *)(lVar15 + 0x15c) != 0) {
          pbVar11 = (byte *)(lVar15 + 0x158);
        }
        local_34[0] = *pbVar11;
        if (7 < *pbVar11) {
          if ((*(int *)(lVar15 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            bVar2 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_013f5144;
          }
          goto LAB_013f514c;
        }
      }
      iVar7 = FUN_02582d8c(local_34,2);
      if (iVar7 < 0) {
        uVar6 = 0;
      }
      else {
        local_48 = PTR_DAT_04bb2020 + 0x10;
        pcStack_40 = "CatchFish";
        uVar6 = FUN_02798760(local_34,&local_48);
      }
    }
    else {
      local_48 = PTR_DAT_04bb2020 + 0x10;
      pcStack_40 = "FishNetHostCatchNumResult";
      uVar6 = FUN_0273ea30(&local_48);
    }
  }
  else {
    local_48 = (undefined *)CONCAT44(local_48._4_4_,0x20);
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
    if (0xff < (uint)(int)sVar3) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) == 0) goto LAB_013f50c0;
    uVar6 = *(ushort *)(*(long *)PTR_DAT_04bb5da0 + 0x770);
  }
LAB_013f51e0:
  if (*(int *)(*(long *)puVar5 + 0x15c) == 0) goto LAB_013f52f4;
  if (((*(int *)(*(long *)puVar5 + 0x15c) == 0) || (*(long *)PTR_DAT_04bb4718 == 0)) ||
     (local_34[0] = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), 7 < local_34[0])) {
    plVar12 = *(long **)PTR_DAT_04bb27d0;
    if (plVar12 != (long *)0x0) {
      lVar14 = *plVar12;
      bVar2 = *(byte *)(lVar14 + 0x473);
      pbVar11 = PTR_DAT_04bb5038;
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        puVar13 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
        if (7 < bVar2) {
          puVar13 = (uint *)(lVar14 + 0x48);
        }
        if ((*puVar13 & 8) != 0) {
          pbVar11 = (byte *)(lVar14 + 0x471);
        }
      }
      local_34[0] = *pbVar11;
      if (local_34[0] < 8) goto LAB_013f5290;
    }
    local_34[0] = *PTR_DAT_04bb5038;
    if (7 < local_34[0]) goto LAB_013f52f4;
  }
  else {
    plVar12 = *(long **)PTR_DAT_04bb27d0;
  }
LAB_013f5290:
  if (*(byte *)(*plVar12 + 0x476) < 2) {
    iVar7 = FUN_02582d8c(local_34,2);
    if (iVar7 < 0) goto LAB_013f52f4;
  }
  else {
    local_48 = (undefined *)CONCAT71(local_48._1_7_,local_34[0]);
    uVar9 = FUN_01d3e2d0(*plVar12 + 8,&local_48);
    if ((uVar9 & 1) == 0) goto LAB_013f52f4;
  }
  local_48 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "CatchFish";
  uVar6 = FUN_02798760(local_34,&local_48);
LAB_013f52f4:
  return uVar17 <= uVar6;
}

