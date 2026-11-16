
bool FUN_02953210(long param_1,ushort param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ushort uVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  int *piVar9;
  byte *pbVar10;
  long *plVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  char cVar15;
  ushort uVar16;
  undefined *local_50;
  char *pcStack_48;
  byte local_3c [4];
  ushort local_38 [4];
  
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[0] = param_2;
  FUN_0277d4ac(local_38);
  puVar4 = PTR_DAT_04bb39b0;
  puVar3 = PTR_DAT_04bb27d0;
  if (local_38[0] == 0xfffe) {
    return false;
  }
  uVar2 = (uint)param_2 - (uint)*(ushort *)(param_1 + 0xb50);
  if ((*(uint *)(param_1 + 0xb30) <= uVar2) ||
     (puVar12 = *(uint **)(*(long *)(param_1 + 0xb38) + (long)(int)uVar2 * 8),
     puVar12 == (uint *)0x0)) {
    return false;
  }
  bVar1 = *PTR_DAT_04bb32e0;
  local_3c[0] = bVar1;
  if (7 < bVar1) {
    local_3c[0] = 0xff;
  }
  if (*puVar12 != 0) {
    cVar15 = DAT_055d6978;
    do {
      if (cVar15 == '\0') {
        cVar15 = '\x01';
        DAT_055d697c = 0xffffffffffffffff;
        DAT_055d6984 = 0xffffffffffffffff;
        DAT_055d6978 = '\x01';
        DAT_055d699c = 0xffffffffffffffff;
        DAT_055d69a4 = 0xffffffff;
        DAT_055d698c = -1;
        DAT_055d6994 = 0xffffffffffffffff;
      }
      else {
        if (-1 < DAT_055d698c) {
          if ((ushort *)((ulong)DAT_055d698c._4_4_ + (long)puVar12) != (ushort *)0x0) {
            uVar16 = *(ushort *)((ulong)DAT_055d698c._4_4_ + (long)puVar12);
            goto LAB_02953384;
          }
          break;
        }
        if (DAT_055d698c._4_4_ != 0xffffffff) break;
      }
      puVar8 = (uint *)(ulong)*puVar12;
      uVar16 = 0;
      if ((*puVar12 == 0) || (puVar12 == puVar8)) goto LAB_02953384;
      lVar13 = 0xc;
      if (*(char *)((long)puVar12 + (10 - (long)puVar8)) != '\0') {
        lVar13 = 0x1c;
      }
      lVar13 = (long)puVar12 + (lVar13 - (long)puVar8);
      if (lVar13 == 0) break;
      uVar7 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar8));
      DAT_055d698c = CONCAT44(0xfffffffe,(undefined4)DAT_055d698c);
      if (uVar7 == 0) break;
      piVar9 = (int *)(lVar13 + 4);
      while (piVar9[-1] != -0x2bd20f4c) {
        piVar9 = piVar9 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_02953380;
      }
      iVar6 = 0;
      if (*piVar9 != -1) {
        iVar6 = *piVar9;
      }
      DAT_055d698c = CONCAT44(iVar6,(undefined4)DAT_055d698c);
      if (*puVar12 == 0) break;
    } while( true );
  }
LAB_02953380:
  uVar16 = 0;
LAB_02953384:
  lVar13 = **(long **)PTR_DAT_04bb27d0;
  if (*(byte *)(lVar13 + 0x476) < 2) {
    lVar14 = *(long *)PTR_DAT_04bb39b0;
    if (lVar14 == 0) {
LAB_02953410:
      local_3c[0] = bVar1;
      if (7 < bVar1) {
LAB_02953418:
        bVar1 = *(byte *)(lVar13 + 0x473);
        pbVar10 = PTR_DAT_04bb5038;
        if ((long)(char)bVar1 != 0xffffffffffffffff) {
          puVar12 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar1 & 0xffffffffU) * 0x20;
          if (7 < bVar1) {
            puVar12 = (uint *)(lVar13 + 0x48);
          }
          if ((*puVar12 & 8) != 0) {
            pbVar10 = (byte *)(lVar13 + 0x471);
          }
        }
        local_3c[0] = *pbVar10;
        if ((7 < local_3c[0]) && (local_3c[0] = *PTR_DAT_04bb5038, 7 < local_3c[0])) {
          uVar5 = 0;
          goto LAB_029534ac;
        }
      }
    }
    else {
      pbVar10 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar14 + 0x15c) != 0) {
        pbVar10 = (byte *)(lVar14 + 0x158);
      }
      local_3c[0] = *pbVar10;
      if (7 < *pbVar10) {
        if ((*(int *)(lVar14 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_02953410;
        }
        goto LAB_02953418;
      }
    }
    iVar6 = FUN_02582d8c(local_3c,2);
    if (iVar6 < 0) {
      uVar5 = 0;
    }
    else {
      local_50 = PTR_DAT_04bb2020 + 0x10;
      pcStack_48 = "CatchSeafood";
      uVar5 = FUN_02798760(local_3c,&local_50);
    }
  }
  else {
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "DiveFishNetHostCatchNumResult";
    uVar5 = FUN_0273ea30(&local_50);
  }
LAB_029534ac:
  if (*(int *)(*(long *)puVar4 + 0x15c) == 0) goto LAB_029535b0;
  if (((*(int *)(*(long *)puVar4 + 0x15c) == 0) || (*(long *)PTR_DAT_04bb4718 == 0)) ||
     (local_3c[0] = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), 7 < local_3c[0])) {
    plVar11 = *(long **)puVar3;
    if (plVar11 != (long *)0x0) {
      lVar13 = *plVar11;
      bVar1 = *(byte *)(lVar13 + 0x473);
      pbVar10 = PTR_DAT_04bb5038;
      if ((long)(char)bVar1 != 0xffffffffffffffff) {
        puVar12 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar1 & 0xffffffffU) * 0x20;
        if (7 < bVar1) {
          puVar12 = (uint *)(lVar13 + 0x48);
        }
        if ((*puVar12 & 8) != 0) {
          pbVar10 = (byte *)(lVar13 + 0x471);
        }
      }
      local_3c[0] = *pbVar10;
      if (local_3c[0] < 8) goto LAB_0295354c;
    }
    local_3c[0] = *PTR_DAT_04bb5038;
    if (7 < local_3c[0]) goto LAB_029535b0;
  }
  else {
    plVar11 = *(long **)puVar3;
  }
LAB_0295354c:
  if (*(byte *)(*plVar11 + 0x476) < 2) {
    iVar6 = FUN_02582d8c(local_3c,2);
    if (iVar6 < 0) goto LAB_029535b0;
  }
  else {
    local_50 = (undefined *)CONCAT71(local_50._1_7_,local_3c[0]);
    uVar7 = FUN_01d3e2d0(*plVar11 + 8,&local_50);
    if ((uVar7 & 1) == 0) goto LAB_029535b0;
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "CatchSeafood";
  uVar5 = FUN_02798760(local_3c,&local_50);
LAB_029535b0:
  return uVar16 <= uVar5;
}

