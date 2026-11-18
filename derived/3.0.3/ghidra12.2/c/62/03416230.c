
uint FUN_03416230(int *param_1,long param_2)

{
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  undefined *local_70;
  char *pcStack_68;
  byte local_5c [4];
  undefined *local_58;
  int local_50;
  int iStack_4c;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  if (*param_1 == 2) {
    uVar5 = 7;
    if (*(char *)(param_2 + 5) != '\0') {
      uVar5 = 0xf;
    }
    return uVar5;
  }
  piVar1 = param_1 + 1;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(piVar1);
  lVar13 = *(long *)puVar2;
  if (lVar13 == 0) {
    return 7;
  }
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if (*(uint *)(lVar12 + 0x1d8) <= uVar5) {
    return 7;
  }
  if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
    return 7;
  }
  local_48 = 0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  local_50 = param_1[1];
  iStack_4c = param_1[2];
  uVar5 = 7;
  if (*(char *)(param_2 + 5) != '\0') {
    uVar5 = 0x17;
  }
  uVar6 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar2 == 0) {
LAB_03416420:
    uVar6 = 0xbc;
  }
  else {
    lVar12 = *(long *)(lVar13 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_03416420;
    lVar12 = *(long *)PTR_DAT_04bc0428;
    uVar6 = FUN_0277d6c4(piVar1);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar6) ||
       (puVar10 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8),
       puVar10 == (uint *)0x0)) goto LAB_03416420;
    uVar3 = *puVar10;
    uVar6 = 0;
    if ((uVar3 != 0) && (puVar10 != (uint *)(ulong)uVar3)) {
      puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar11 != 0) {
        uVar6 = puVar11[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar11 + lVar12 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar12 != 0) {
            uVar3 = 0;
            if ((ulong)uVar6 != 0) {
              uVar3 = (uint)((ulong)((long)puVar10 - lVar12) / (ulong)uVar6);
            }
            if (*puVar11 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar6 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
               uVar6 < 0xbd)) goto LAB_03416424;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_03416424:
  local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar6);
  if (uVar6 == 5) {
    uVar8 = FUN_0180e3b0(piVar1);
    if ((uVar8 & 1) == 0) {
      return uVar5;
    }
    puVar2 = PTR_DAT_04bb37e0;
    if (*(long *)PTR_DAT_04bb5ce0 != 0) {
      puVar2 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe54);
    }
    uVar8 = FUN_0277d7b4(piVar1,puVar2);
    uVar6 = uVar5 | 0x20;
    if ((uVar8 & 1) == 0) {
      uVar6 = uVar5;
    }
    return uVar6;
  }
  if (uVar6 != 4) {
    return uVar5;
  }
  lVar12 = *(long *)PTR_DAT_04bb39b0;
  pbVar9 = PTR_DAT_04bb32e0;
  if (lVar12 == 0) {
LAB_034164e0:
    if (7 < *pbVar9) {
LAB_034164ec:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar12 = **(long **)PTR_DAT_04bb27d0;
        bVar4 = *(byte *)(lVar12 + 0x473);
        pbVar9 = PTR_DAT_04bb5038;
        if ((long)(char)bVar4 != 0xffffffffffffffff) {
          puVar10 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
          if (7 < bVar4) {
            puVar10 = (uint *)(lVar12 + 0x48);
          }
          if ((*puVar10 & 8) != 0) {
            pbVar9 = (byte *)(lVar12 + 0x471);
          }
        }
        local_5c[0] = *pbVar9;
        if (local_5c[0] < 8) goto LAB_0341656c;
      }
      pbVar9 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar12 + 0x15c) != 0) {
      pbVar9 = (byte *)(lVar12 + 0x158);
    }
    if (7 < *pbVar9) {
      if ((*(int *)(lVar12 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar9 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_034164e0;
      }
      goto LAB_034164ec;
    }
  }
  local_5c[0] = *pbVar9;
  if (7 < local_5c[0]) {
    local_5c[0] = 0xff;
  }
LAB_0341656c:
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "WHEREAREN_Unlock_AccentWall";
  iVar7 = FUN_0274bce0(local_5c,&local_70);
  if (iVar7 == 0) {
    return uVar5;
  }
  puVar2 = PTR_DAT_04bb37e0;
  if (*(long *)PTR_DAT_04bb5ce0 != 0) {
    puVar2 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe70);
  }
  uVar8 = FUN_0277d7b4(piVar1,puVar2);
  if ((uVar8 & 1) == 0) {
    uVar5 = uVar5 | 0x40;
  }
  return uVar5;
}

