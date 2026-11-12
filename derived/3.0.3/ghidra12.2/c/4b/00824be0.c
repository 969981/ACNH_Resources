
/* WARNING: Removing unreachable block (ram,0x00824f60) */
/* WARNING: Removing unreachable block (ram,0x00824f90) */
/* WARNING: Removing unreachable block (ram,0x00824fa0) */
/* WARNING: Removing unreachable block (ram,0x00824fc4) */

void FUN_00824be0(long param_1,byte param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  byte bVar17;
  undefined8 *puVar18;
  long lVar19;
  byte *pbVar20;
  uint uVar21;
  long lVar22;
  undefined4 *puVar23;
  byte bVar24;
  undefined8 *puVar25;
  long lVar26;
  long lVar27;
  int *piVar28;
  uint *puVar29;
  undefined8 uVar30;
  byte local_94 [4];
  byte local_90 [4];
  undefined4 local_8c [3];
  undefined8 local_80;
  char *local_78;
  undefined8 uStack_70;
  byte local_48 [4];
  undefined4 local_44;
  
  puVar8 = PTR_DAT_04bb27d0;
  iVar4 = *(int *)(param_1 + 0x15c);
  if (*(byte *)(param_1 + 0x158) < 8) {
    local_48[0] = *(byte *)(param_1 + 0x158);
    iVar10 = FUN_02582fe0(local_48);
    local_90[0] = *(byte *)(param_1 + 0x158);
    if (7 < local_90[0]) {
      local_90[0] = 0xff;
    }
    lVar22 = **(long **)puVar8;
    bVar24 = *(byte *)(lVar22 + 0x473);
    pcVar13 = PTR_DAT_04bc1220;
    if ((long)(char)bVar24 != 0xffffffffffffffff) {
      puVar29 = (uint *)(lVar22 + 0x48) + ((long)(char)bVar24 & 0xffffffffU) * 0x20;
      if (7 < bVar24) {
        puVar29 = (uint *)(lVar22 + 0x48);
      }
      if ((*puVar29 & 8) != 0) {
        pcVar13 = (char *)(lVar22 + 0x472);
      }
    }
    cVar6 = *pcVar13;
    pcVar13 = (char *)FUN_02582a24(local_90);
    if ((((cVar6 == *pcVar13) && (uVar11 = FUN_02582d8c(local_90,2), uVar11 < 8)) &&
        (lVar22 = *(long *)PTR_DAT_04bb4fb8 + (ulong)uVar11 * 0x13f0,
        *(char *)(lVar22 + 0x13d4) != '\0')) && (*(int *)(lVar22 + 0x13d0) == 1)) {
      uVar11 = (uint)*(byte *)(lVar22 + 0x13d5);
    }
    else {
      uVar11 = 0xffffffff;
    }
  }
  else {
    uVar11 = 0xffffffff;
    iVar10 = -1;
  }
  if (((DAT_04cd19d8 == 0) || (*(int *)(DAT_04cd19d8 + 0x15c) == 0)) ||
     ((*(long *)PTR_DAT_04bb4718 == 0 ||
      (pbVar20 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), 7 < *pbVar20)))) {
    if (*(long **)puVar8 == (long *)0x0) {
LAB_00824d8c:
      pbVar20 = PTR_DAT_04bb5038;
      goto LAB_00824d94;
    }
    lVar22 = **(long **)puVar8;
    bVar24 = *(byte *)(lVar22 + 0x473);
    pbVar20 = PTR_DAT_04bb5038;
    if ((long)(char)bVar24 != 0xffffffffffffffff) {
      puVar29 = (uint *)(lVar22 + 0x48) + ((long)(char)bVar24 & 0xffffffffU) * 0x20;
      if (7 < bVar24) {
        puVar29 = (uint *)(lVar22 + 0x48);
      }
      if ((*puVar29 & 8) != 0) {
        pbVar20 = (byte *)(lVar22 + 0x471);
      }
    }
    local_94[0] = *pbVar20;
    if (7 < local_94[0]) goto LAB_00824d8c;
  }
  else {
LAB_00824d94:
    local_94[0] = *pbVar20;
    if (7 < local_94[0]) {
      local_94[0] = 0xff;
    }
  }
  iVar12 = FUN_02582fe0(local_94);
  iVar5 = *(int *)(param_1 + 0xf8);
  if ((iVar4 == 1) && (iVar5 == 1)) {
    FUN_009b5860(*(undefined8 *)PTR_DAT_04bb3960);
    FUN_00825ca0(param_1);
  }
  else {
    FUN_00825ca0(param_1);
    if (1 < iVar5) {
      local_80._0_4_ = 1;
      if (((*(int *)(param_1 + 0x15c) != 1) && (*(int *)(param_1 + 0x15c) != 0)) &&
         (*(int *)(param_1 + 0x15c) == 1)) {
        FUN_00826090(param_1);
        FUN_00824be0(param_1,0);
        FUN_02509b80(*(undefined8 *)PTR_DAT_04bb4fb8);
        if (0 < *(int *)(param_1 + 0xf8)) {
          lVar22 = 0;
          puVar18 = *(undefined8 **)(param_1 + 0x108);
          do {
            puVar25 = *(undefined8 **)(*(long *)(param_1 + 0x100) + lVar22 * 8);
            lVar22 = lVar22 + 1;
            *puVar25 = puVar18;
            *(undefined8 **)(param_1 + 0x108) = puVar25;
            puVar18 = puVar25;
          } while (lVar22 < *(int *)(param_1 + 0xf8));
        }
        *(undefined4 *)(param_1 + 0xf8) = 0;
      }
      *(undefined4 *)(param_1 + 0x15c) = (undefined4)local_80;
      puVar7 = PTR_DAT_04bb5038;
      uVar21 = iVar5 - 1;
      if (2 < uVar21) {
        uVar21 = 3;
      }
      *(char *)(param_1 + 0x160) = (char)uVar21;
      bVar17 = *puVar7;
      bVar24 = bVar17;
      if (7 < bVar17) {
        bVar24 = 0xff;
      }
      *(byte *)(param_1 + 0x158) = bVar24;
      if ((iVar10 != -1) && (*(int *)(param_1 + 0xf8) != 0)) {
        uVar14 = 0;
        lVar22 = (long)*(int *)(param_1 + 0xf8) << 3;
        do {
          piVar28 = *(int **)(*(long *)(param_1 + 0x100) + uVar14 * 8);
          local_80._0_4_ = 0;
          if (((piVar28[1] & 1U) == 0) && (*piVar28 == iVar10)) goto LAB_00825208;
          uVar14 = uVar14 + 1;
          lVar22 = lVar22 + -8;
        } while (lVar22 != 0);
      }
      if ((uVar11 != 0xffffffff) && (*(int *)(param_1 + 0xf8) != 0)) {
        uVar14 = 0;
        lVar22 = (long)*(int *)(param_1 + 0xf8) << 3;
        do {
          puVar29 = *(uint **)(*(long *)(param_1 + 0x100) + uVar14 * 8);
          local_80._0_4_ = 0;
          if (((puVar29[1] & 1) != 0) && (*puVar29 == uVar11)) goto LAB_00825208;
          uVar14 = uVar14 + 1;
          lVar22 = lVar22 + -8;
        } while (lVar22 != 0);
      }
      goto LAB_00825230;
    }
  }
  local_8c[0] = 1;
  if (*(int *)(param_1 + 0x15c) == 1) {
    local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
    *(undefined4 *)(param_1 + 0x15c) = 0;
    *(undefined1 *)(param_1 + 0x160) = 0;
  }
  *(undefined1 *)(param_1 + 0x162) = 0;
  *(undefined1 *)(param_1 + 0x158) = 0xff;
  if ((((DAT_04cd19d8 == 0) || (*(int *)(DAT_04cd19d8 + 0x15c) == 0)) ||
      (*(long *)PTR_DAT_04bb4718 == 0)) ||
     (bVar24 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), 7 < bVar24)) {
    if (*(long **)puVar8 != (long *)0x0) {
      lVar22 = **(long **)puVar8;
      bVar24 = *(byte *)(lVar22 + 0x473);
      pbVar20 = PTR_DAT_04bb5038;
      if ((long)(char)bVar24 != 0xffffffffffffffff) {
        puVar29 = (uint *)(lVar22 + 0x48) + ((long)(char)bVar24 & 0xffffffffU) * 0x20;
        if (7 < bVar24) {
          puVar29 = (uint *)(lVar22 + 0x48);
        }
        if ((*puVar29 & 8) != 0) {
          pbVar20 = (byte *)(lVar22 + 0x471);
        }
      }
      bVar24 = *pbVar20;
      if (bVar24 < 8) goto LAB_00825078;
    }
    bVar24 = *PTR_DAT_04bb5038;
    if (bVar24 < 8) goto LAB_00825078;
LAB_0082507c:
    if (*(long *)PTR_DAT_04bb4718 != 0) {
      bVar24 = *PTR_DAT_04bb5038;
      if (7 < bVar24) {
        bVar24 = 0xff;
      }
      *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5) = bVar24;
    }
  }
  else {
LAB_00825078:
    if (bVar24 != 0) goto LAB_0082507c;
  }
  if (*(int *)(param_1 + 0xf8) != 0) {
    local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
    if (((((int *)**(undefined8 **)(param_1 + 0x100))[1] & 1U) == 0) &&
       (*(int *)**(undefined8 **)(param_1 + 0x100) != iVar12)) {
      FUN_007b4370();
      bVar24 = *PTR_DAT_04bb5038;
      lVar22 = *(long *)PTR_DAT_04bb49f0;
      if (7 < bVar24) {
        bVar24 = 0xff;
      }
      *(byte *)(lVar22 + 0xb1) = bVar24;
      puVar7 = PTR_DAT_04bb21d0;
      *(undefined1 *)(lVar22 + 0xb0) = 1;
      lVar22 = *(long *)puVar7;
      *(undefined2 *)(lVar22 + 0x1cd4) = 1;
      *(undefined4 *)(lVar22 + 0x1cd8) = 2;
      if ((*(long *)puVar8 != 0) && (lVar22 = *(long *)(*(long *)puVar8 + 0x28), lVar22 != 0)) {
        *(undefined8 *)(lVar22 + 0x1c) = 0;
      }
    }
  }
  *(byte *)(param_1 + 0x161) = param_2 & 1;
  if (iVar4 == 1) {
    FUN_009b5340(*(undefined8 *)PTR_DAT_04bb3960);
    FUN_01dbd52c(*(undefined8 *)puVar8);
    pbVar20 = PTR_DAT_04bb32e0;
    if (DAT_04cd19d8 == 0) {
LAB_00825378:
      if (*pbVar20 < 8) goto LAB_008253e8;
LAB_00825384:
      if (*(long **)puVar8 == (long *)0x0) {
LAB_008253e0:
        pbVar20 = PTR_DAT_04bb5038;
        goto LAB_008253e8;
      }
      lVar22 = **(long **)puVar8;
      bVar24 = *(byte *)(lVar22 + 0x473);
      pbVar20 = PTR_DAT_04bb5038;
      if ((long)(char)bVar24 != 0xffffffffffffffff) {
        puVar29 = (uint *)(lVar22 + 0x48) + ((long)(char)bVar24 & 0xffffffffU) * 0x20;
        if (7 < bVar24) {
          puVar29 = (uint *)(lVar22 + 0x48);
        }
        if ((*puVar29 & 8) != 0) {
          pbVar20 = (byte *)(lVar22 + 0x471);
        }
      }
      bVar17 = *pbVar20;
      bVar24 = bVar17;
      if (7 < bVar17) {
        bVar24 = 0xff;
      }
      local_8c[0] = CONCAT31(local_8c[0]._1_3_,bVar24);
      if (7 < bVar17) goto LAB_008253e0;
    }
    else {
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar20 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      if (7 < *pbVar20) {
        if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar20 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_00825378;
        }
        goto LAB_00825384;
      }
LAB_008253e8:
      bVar17 = *pbVar20;
      if (7 < bVar17) {
        bVar17 = 0xff;
      }
      local_8c[0] = CONCAT31(local_8c[0]._1_3_,bVar17);
    }
    local_80 = &PTR_FUN_04a72e28;
    if (7 < bVar17) {
      bVar17 = 0xff;
    }
    local_78 = (char *)CONCAT71(local_78._1_7_,bVar17);
    iVar4 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
    if (iVar4 != 0) {
      lVar22 = (long)iVar4 << 3;
      puVar18 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
      do {
        (*(code *)*local_80)(&local_80,*puVar18);
        lVar22 = lVar22 + -8;
        puVar18 = puVar18 + 1;
      } while (lVar22 != 0);
    }
    FUN_021af03c(&DAT_053fe348);
    FUN_033fba40(local_8c);
    puVar18 = *(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10);
    if ((*(byte *)(*(long *)PTR_DAT_04bb46b0 + 0x453) & 1) == 0) {
      lVar22 = (**(code **)(*(long *)*puVar18 + 0x38))();
      if (lVar22 != 0) {
        lVar22 = lVar22 + 0x70;
        goto LAB_008254b4;
      }
    }
    else if (((puVar18 != (undefined8 *)0x0) && ((long *)puVar18[0x26] != (long *)0x0)) &&
            (lVar22 = (**(code **)(*(long *)puVar18[0x26] + 0x38))(), lVar22 != 0)) {
LAB_008254b4:
      plVar1 = (long *)(lVar22 + 0x1bf240);
      lVar19 = *(long *)(lVar22 + 0x1bf260);
      if (lVar19 == 0) {
        FUN_028d9484(*(long *)(lVar22 + 0x1bf248) + *plVar1);
      }
      else {
        if (*(undefined8 **)(lVar19 + 0x10) == (undefined8 *)0x0) {
          uVar14 = 0;
LAB_00825534:
          plVar15 = *(long **)(lVar19 + 0x20);
          if (plVar15 != (long *)0x0) {
            local_80 = (undefined **)*plVar1;
            local_78 = *(char **)(lVar22 + 0x1bf248);
            uStack_70 = 0x94;
            (**(code **)(*plVar15 + 0x20))(plVar15,&local_80);
          }
        }
        else {
          uVar14 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
          lVar19 = *(long *)(lVar22 + 0x1bf260);
          uVar14 = uVar14 & 0xffffffff;
          if (lVar19 != 0) goto LAB_00825534;
        }
        FUN_028d9484(*(long *)(lVar22 + 0x1bf248) + *plVar1);
        if ((((uVar14 & 1) != 0) && (*(long *)(lVar22 + 0x1bf260) != 0)) &&
           (puVar18 = *(undefined8 **)(*(long *)(lVar22 + 0x1bf260) + 0x18),
           puVar18 != (undefined8 *)0x0)) {
          (**(code **)*puVar18)();
        }
      }
    }
    if ((param_2 & 1) != 0) {
      FUN_025176f0(*(undefined8 *)PTR_DAT_04bb4718);
      if (*(long *)PTR_DAT_04bb6270 != 0) {
        FUN_00a715d0(*(long *)PTR_DAT_04bb6270,1);
      }
      lVar22 = *(long *)PTR_DAT_04bb4778;
      if (lVar22 != 0) {
        memset((void *)(lVar22 + 0x2a58),0,0x4800);
        *(undefined2 *)(lVar22 + 0x87e0) = 0;
        *(undefined4 *)(lVar22 + 0x9150) = 0;
      }
      FUN_022c0370();
      puVar8 = PTR_DAT_04bc2f38;
      uVar11 = 0;
      *PTR_DAT_04bc2da0 = 0xff;
      do {
        uVar14 = (ulong)uVar11;
        uVar11 = uVar11 + 1;
        lVar22 = (long)(uVar14 << 0x20) >> 0x1a;
        *(undefined8 *)(puVar8 + lVar22 + 8) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + lVar22 + 0x20) = 0;
        *(undefined4 *)(puVar8 + lVar22 + 0x30) = 0;
        *(undefined8 *)(puVar8 + lVar22 + 0x34) = 0xffff000000000000;
        puVar8[lVar22 + 0x3e] = 0;
        *(undefined2 *)(puVar8 + lVar22 + 0x3c) = 0;
        puVar9 = PTR_DAT_04bb5038;
        puVar7 = PTR_DAT_04bb4f78;
      } while (uVar11 != 0x14);
      lVar19 = *(long *)PTR_DAT_04bb28b0;
      *(uint *)(*(long *)PTR_DAT_04bb26a8 + 0xb389c) =
           *(uint *)(*(long *)PTR_DAT_04bb26a8 + 0xb389c) | 0x23;
      lVar22 = *(long *)puVar7 + 0x20 + (ulong)(uint)(byte)*puVar9 * 0x740;
      if (7 < (byte)*puVar9) {
        lVar22 = *(long *)puVar7 + 0x20;
      }
      *(byte *)(lVar19 + 0x61) = *(byte *)(lVar19 + 0x61) | 1;
      *(undefined4 *)(lVar22 + 0x4ec) = 3;
      FUN_01393458(lVar22 + 0x590);
      lVar22 = *(long *)puVar7 + 0x20 + (ulong)(uint)(byte)puVar9[1] * 0x740;
      if (7 < (byte)puVar9[1]) {
        lVar22 = *(long *)puVar7 + 0x20;
      }
      *(undefined4 *)(lVar22 + 0x4ec) = 3;
      FUN_01393458(lVar22 + 0x590);
      lVar22 = *(long *)puVar7 + 0x20 + (ulong)(uint)(byte)puVar9[2] * 0x740;
      if (7 < (byte)puVar9[2]) {
        lVar22 = *(long *)puVar7 + 0x20;
      }
      *(undefined4 *)(lVar22 + 0x4ec) = 3;
      FUN_01393458(lVar22 + 0x590);
      lVar22 = *(long *)puVar7 + 0x20 + (ulong)(uint)(byte)puVar9[3] * 0x740;
      if (7 < (byte)puVar9[3]) {
        lVar22 = *(long *)puVar7 + 0x20;
      }
      *(undefined4 *)(lVar22 + 0x4ec) = 3;
      FUN_01393458(lVar22 + 0x590);
      lVar22 = *(long *)puVar7 + 0x20 + (ulong)(uint)(byte)puVar9[4] * 0x740;
      if (7 < (byte)puVar9[4]) {
        lVar22 = *(long *)puVar7 + 0x20;
      }
      *(undefined4 *)(lVar22 + 0x4ec) = 3;
      FUN_01393458(lVar22 + 0x590);
      lVar22 = *(long *)puVar7 + 0x20 + (ulong)(uint)(byte)puVar9[5] * 0x740;
      if (7 < (byte)puVar9[5]) {
        lVar22 = *(long *)puVar7 + 0x20;
      }
      *(undefined4 *)(lVar22 + 0x4ec) = 3;
      FUN_01393458(lVar22 + 0x590);
      lVar22 = *(long *)puVar7 + 0x20 + (ulong)(uint)(byte)puVar9[6] * 0x740;
      if (7 < (byte)puVar9[6]) {
        lVar22 = *(long *)puVar7 + 0x20;
      }
      *(undefined4 *)(lVar22 + 0x4ec) = 3;
      FUN_01393458(lVar22 + 0x590);
      lVar22 = *(long *)puVar7 + 0x20 + (ulong)(uint)(byte)puVar9[7] * 0x740;
      if (7 < (byte)puVar9[7]) {
        lVar22 = *(long *)puVar7 + 0x20;
      }
      *(undefined4 *)(lVar22 + 0x4ec) = 3;
      FUN_01393458(lVar22 + 0x590);
    }
    FUN_021c8fb8(&DAT_053fe348);
  }
  iVar4 = *(int *)(param_1 + 0x10);
joined_r0x00825b20:
  if ((iVar4 != 0) || (0 < *(int *)(param_1 + 0x50))) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    local_80 = (undefined **)((ulong)local_80._4_4_ << 0x20);
    FUN_03ebb160(param_1 + 8,0);
  }
  return;
LAB_00825208:
  local_80._0_4_ = 0;
  pbVar20 = puVar7 + (uVar14 & 0xffffffff);
  if (7 < (uint)uVar14) {
    pbVar20 = PTR_DAT_04bb32e0;
  }
  bVar24 = *pbVar20;
  if (7 < bVar24) {
    bVar24 = 0xff;
  }
  *(byte *)(param_1 + 0x158) = bVar24;
LAB_00825230:
  if ((iVar12 != -1) && (*(int *)(param_1 + 0xf8) != 0)) {
    lVar26 = *(long *)(param_1 + 0x100);
    lVar27 = (long)*(int *)(param_1 + 0xf8) << 3;
    lVar22 = 0;
    lVar19 = lVar27;
    do {
      piVar28 = *(int **)(lVar26 + lVar22 * 8);
      local_80._0_4_ = 0;
      if (((piVar28[1] & 1U) == 0) && (*piVar28 == iVar12)) {
        if ((DAT_04cd19d8 == 0) ||
           (((*(int *)(DAT_04cd19d8 + 0x15c) == 0 || (*(long *)PTR_DAT_04bb4718 == 0)) ||
            (pbVar20 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), 7 < *pbVar20)))) {
          pbVar20 = PTR_DAT_04bb5038;
          if (*(long **)puVar8 == (long *)0x0) goto LAB_00825310;
          lVar19 = **(long **)puVar8;
          bVar24 = *(byte *)(lVar19 + 0x473);
          if ((long)(char)bVar24 != 0xffffffffffffffff) {
            puVar29 = (uint *)(lVar19 + 0x48) + ((long)(char)bVar24 & 0xffffffffU) * 0x20;
            if (7 < bVar24) {
              puVar29 = (uint *)(lVar19 + 0x48);
            }
            pbVar3 = PTR_DAT_04bb5038;
            if ((*puVar29 & 8) != 0) {
              pbVar3 = (byte *)(lVar19 + 0x471);
            }
            bVar17 = *pbVar3;
          }
          if (7 < bVar17) goto LAB_00825310;
        }
        else {
LAB_00825310:
          bVar17 = *pbVar20;
          if (7 < bVar17) {
            bVar17 = 0xff;
          }
        }
        if ((7 < bVar17 || (int)(char)bVar17 != (uint)lVar22) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar20 = puVar7 + lVar22;
          if (7 < (uint)lVar22) {
            pbVar20 = PTR_DAT_04bb32e0;
          }
          bVar24 = *pbVar20;
          if (7 < bVar24) {
            bVar24 = 0xff;
          }
          *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5) = bVar24;
        }
        goto LAB_00825850;
      }
      lVar22 = lVar22 + 1;
      lVar19 = lVar19 + -8;
    } while (lVar19 != 0);
    lVar22 = 0;
    do {
      puVar23 = *(undefined4 **)(lVar26 + lVar22 * 8);
      local_80._0_4_ = 0;
      if ((puVar23[1] & 1) == 0) {
        if (*(long *)PTR_DAT_04bb4718 != 0) {
          pbVar20 = puVar7 + lVar22;
          if (7 < (uint)lVar22) {
            pbVar20 = PTR_DAT_04bb32e0;
          }
          bVar24 = *pbVar20;
          if (7 < bVar24) {
            bVar24 = 0xff;
          }
          *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5) = bVar24;
          puVar23 = *(undefined4 **)(lVar26 + lVar22 * 8);
        }
        FUN_007b4370(*puVar23);
        break;
      }
      lVar22 = lVar22 + 1;
      lVar27 = lVar27 + -8;
    } while (lVar27 != 0);
  }
LAB_00825850:
  *(undefined1 *)(param_1 + 0x161) = 0;
  FUN_009b5d00(*(undefined8 *)PTR_DAT_04bb3960);
  puVar9 = PTR_DAT_04bb49e8;
  if (*(long *)(*(long *)puVar8 + 0x20) != 0) {
    lVar22 = *(long *)PTR_DAT_04bb49e8;
    *(undefined2 *)(*(long *)(lVar22 + 0x30) + 0xa8) = 0;
    *(undefined2 *)(*(long *)(lVar22 + 0x38) + 0xa8) = 0;
    *(undefined1 *)(lVar22 + 0x40) = 1;
  }
  FUN_0254ad10();
  pbVar20 = PTR_DAT_04bb32e0;
  if (DAT_04cd19d8 == 0) {
LAB_008258f0:
    if (*pbVar20 < 8) goto LAB_00825960;
LAB_008258fc:
    if (*(long **)puVar8 == (long *)0x0) {
LAB_00825958:
      pbVar20 = PTR_DAT_04bb5038;
      goto LAB_00825960;
    }
    lVar22 = **(long **)puVar8;
    bVar24 = *(byte *)(lVar22 + 0x473);
    pbVar20 = PTR_DAT_04bb5038;
    if ((long)(char)bVar24 != 0xffffffffffffffff) {
      puVar29 = (uint *)(lVar22 + 0x48) + ((long)(char)bVar24 & 0xffffffffU) * 0x20;
      if (7 < bVar24) {
        puVar29 = (uint *)(lVar22 + 0x48);
      }
      if ((*puVar29 & 8) != 0) {
        pbVar20 = (byte *)(lVar22 + 0x471);
      }
    }
    bVar17 = *pbVar20;
    bVar24 = bVar17;
    if (7 < bVar17) {
      bVar24 = 0xff;
    }
    local_8c[0] = CONCAT31(local_8c[0]._1_3_,bVar24);
    if (7 < bVar17) goto LAB_00825958;
  }
  else {
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar20 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar20) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar20 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_008258f0;
      }
      goto LAB_008258fc;
    }
LAB_00825960:
    bVar17 = *pbVar20;
    if (7 < bVar17) {
      bVar17 = 0xff;
    }
    local_8c[0] = CONCAT31(local_8c[0]._1_3_,bVar17);
  }
  local_80 = &PTR_FUN_04a72e28;
  if (7 < bVar17) {
    bVar17 = 0xff;
  }
  local_78 = (char *)CONCAT71(local_78._1_7_,bVar17);
  iVar4 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
  if (iVar4 != 0) {
    lVar22 = (long)iVar4 << 3;
    puVar18 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
    do {
      (*(code *)*local_80)(&local_80,*puVar18);
      lVar22 = lVar22 + -8;
      puVar18 = puVar18 + 1;
    } while (lVar22 != 0);
  }
  FUN_021af03c(&DAT_053fe348);
  FUN_033fba40(local_8c);
  puVar18 = *(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10);
  if ((*(byte *)(*(long *)PTR_DAT_04bb46b0 + 0x453) & 1) == 0) {
    lVar22 = (**(code **)(*(long *)*puVar18 + 0x38))();
    if (lVar22 != 0) {
      lVar22 = lVar22 + 0x70;
      goto LAB_00825a30;
    }
  }
  else if (((puVar18 != (undefined8 *)0x0) && ((long *)puVar18[0x26] != (long *)0x0)) &&
          (lVar22 = (**(code **)(*(long *)puVar18[0x26] + 0x38))(), lVar22 != 0)) {
LAB_00825a30:
    plVar1 = (long *)(lVar22 + 0x1bf240);
    lVar19 = *(long *)(lVar22 + 0x1bf260);
    if (lVar19 == 0) {
      FUN_028d9220(*(long *)(lVar22 + 0x1bf248) + *plVar1);
    }
    else {
      if (*(undefined8 **)(lVar19 + 0x10) == (undefined8 *)0x0) {
        uVar14 = 0;
LAB_00825a78:
        plVar15 = *(long **)(lVar19 + 0x20);
        if (plVar15 != (long *)0x0) {
          local_80 = (undefined **)*plVar1;
          local_78 = *(char **)(lVar22 + 0x1bf248);
          uStack_70 = 0x94;
          (**(code **)(*plVar15 + 0x20))(plVar15,&local_80);
        }
      }
      else {
        uVar14 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
        lVar19 = *(long *)(lVar22 + 0x1bf260);
        uVar14 = uVar14 & 0xffffffff;
        if (lVar19 != 0) goto LAB_00825a78;
      }
      FUN_028d9220(*(long *)(lVar22 + 0x1bf248) + *plVar1);
      if ((((uVar14 & 1) != 0) && (*(long *)(lVar22 + 0x1bf260) != 0)) &&
         (puVar18 = *(undefined8 **)(*(long *)(lVar22 + 0x1bf260) + 0x18),
         puVar18 != (undefined8 *)0x0)) {
        (**(code **)*puVar18)();
      }
    }
  }
  FUN_021c8a64(&DAT_053fe348);
  FUN_02507c6c(local_8c,1,1,0,0);
  puVar8 = PTR_DAT_04bb49a0;
  if ((byte)local_8c[0] < 8) {
    ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    do {
      uVar30 = *(undefined8 *)puVar8;
      local_78 = "PE_SharePlay";
      local_80 = ppuVar2;
      local_44 = FUN_006bd550("PE_SharePlay",0);
      uVar30 = FUN_01b5b4b0(uVar30,&local_44);
      FUN_01b5c860(&local_80,uVar30,local_8c,0,0);
      bVar24 = (byte)local_8c[0];
      uVar14 = (ulong)(byte)local_8c[0];
      if ((7 < (byte)local_8c[0]) || (uVar14 + 1 == 8)) break;
      pbVar20 = puVar7 + uVar14 + 1;
      uVar16 = FUN_02507924(local_8c,pbVar20);
      if ((uVar16 & 1) == 0) {
        if (uVar14 + 2 == 8) break;
        pbVar20 = puVar7 + uVar14 + 2;
        uVar16 = FUN_02507924(local_8c,pbVar20);
        if ((uVar16 & 1) == 0) {
          if (uVar14 + 3 == 8) break;
          pbVar20 = puVar7 + uVar14 + 3;
          uVar16 = FUN_02507924(local_8c,pbVar20);
          if ((uVar16 & 1) == 0) {
            if (uVar14 + 4 == 8) break;
            pbVar20 = puVar7 + uVar14 + 4;
            uVar16 = FUN_02507924(local_8c,pbVar20);
            if ((uVar16 & 1) == 0) {
              if (uVar14 + 5 == 8) break;
              pbVar20 = puVar7 + uVar14 + 5;
              uVar16 = FUN_02507924(local_8c,pbVar20);
              if ((uVar16 & 1) == 0) {
                if (uVar14 + 6 == 8) break;
                pbVar20 = puVar7 + uVar14 + 6;
                uVar16 = FUN_02507924(local_8c,pbVar20);
                if ((uVar16 & 1) == 0) {
                  if (uVar14 + 7 == 8) break;
                  pbVar20 = puVar7 + uVar14 + 7;
                  uVar16 = FUN_02507924(local_8c,pbVar20);
                  if ((uVar16 & 1) == 0) {
                    if (bVar24 == 0) break;
                    pbVar20 = puVar7 + uVar14 + 8;
                    FUN_02507924(local_8c,pbVar20);
                  }
                }
              }
            }
          }
        }
      }
      if (7 < *pbVar20) break;
      local_8c[0] = CONCAT31(local_8c[0]._1_3_,*pbVar20);
    } while( true );
  }
  lVar22 = *(long *)puVar9;
  *(undefined2 *)(*(long *)(lVar22 + 0x30) + 0xa8) = 0;
  *(undefined2 *)(*(long *)(lVar22 + 0x38) + 0xa8) = 0;
  *(undefined1 *)(lVar22 + 0x40) = 1;
  iVar4 = *(int *)(param_1 + 0x10);
  goto joined_r0x00825b20;
}

