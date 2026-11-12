
void FUN_00820588(void)

{
  uint *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  byte *pbVar13;
  byte bVar14;
  long lVar15;
  byte *pbVar16;
  byte bVar17;
  long lVar18;
  long lVar19;
  undefined8 local_118;
  undefined4 local_110;
  undefined *local_108;
  undefined *local_e8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined *local_b0;
  undefined *local_90;
  undefined8 local_70;
  
  if (*(long *)PTR_DAT_04bb4fb8 != 0) {
    FUN_02509b80();
  }
  puVar5 = PTR_DAT_04bb46b0;
  if (*(long *)PTR_DAT_04bb46b0 != 0) {
    FUN_027026a0();
  }
  FUN_00821968();
  puVar6 = PTR_DAT_04bb8460;
  puVar4 = PTR_DAT_04bb39b0;
  pbVar16 = PTR_DAT_04bb32e0;
  puVar3 = PTR_DAT_04bb27d0;
  lVar19 = *(long *)puVar5;
  lVar18 = *(long *)PTR_DAT_04bb8460;
  if (lVar19 != 0 && lVar18 != 0) {
    plVar12 = *(long **)PTR_DAT_04bb27d0;
    if (plVar12 != (long *)0x0) {
      lVar15 = *plVar12;
      bVar17 = *(byte *)(lVar15 + 0x473);
      if ((long)(char)bVar17 != 0xffffffffffffffff) {
        pbVar13 = (byte *)(lVar15 + 0x48) + ((long)(char)bVar17 & 0xffffffffU) * 0x80;
        if (7 < bVar17) {
          pbVar13 = (byte *)(lVar15 + 0x48);
        }
        if (((*pbVar13 >> 3 & 1) != 0) && (*(byte *)(lVar15 + 0x472) != bVar17)) goto LAB_00820bc8;
      }
    }
    lVar15 = *(long *)PTR_DAT_04bb39b0;
    pbVar13 = PTR_DAT_04bb32e0;
    if (lVar15 == 0) {
      bVar8 = 7 < (byte)*PTR_DAT_04bb32e0;
      if (bVar8) {
        pbVar13 = PTR_DAT_04bb5038;
      }
      if (plVar12 == (long *)0x0) goto LAB_0082071c;
LAB_008206c0:
      if (!bVar8) goto LAB_0082071c;
LAB_008206cc:
      lVar15 = *plVar12;
      bVar17 = *(byte *)(lVar15 + 0x473);
      pbVar13 = PTR_DAT_04bb5038;
      if ((long)(char)bVar17 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar17 & 0xffffffffU) * 0x20;
        if (7 < bVar17) {
          puVar1 = (uint *)(lVar15 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar13 = (byte *)(lVar15 + 0x471);
        }
      }
      bVar17 = *pbVar13;
      if (7 < bVar17) goto LAB_00820714;
    }
    else {
      if (*(int *)(lVar15 + 0x15c) != 0) {
        pbVar13 = (byte *)(lVar15 + 0x158);
      }
      if (7 < *pbVar13) {
        if ((*(int *)(lVar15 + 0x15c) == 0) || (*(long *)PTR_DAT_04bb4718 == 0)) {
          if (plVar12 != (long *)0x0) goto LAB_008206cc;
LAB_00820714:
          pbVar13 = PTR_DAT_04bb5038;
        }
        else {
          pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          bVar8 = 7 < *pbVar13;
          if (bVar8) {
            pbVar13 = PTR_DAT_04bb5038;
          }
          if (plVar12 != (long *)0x0) goto LAB_008206c0;
        }
      }
LAB_0082071c:
      bVar17 = *pbVar13;
      if (7 < bVar17) {
        bVar17 = 0xff;
      }
    }
    bVar14 = *PTR_DAT_04bb32e0;
    if (7 < bVar17) {
      bVar17 = 0xff;
    }
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    if (bVar17 != bVar14) {
      local_c0 = CONCAT71(local_c0._1_7_,bVar17);
      uVar9 = FUN_02582fe0(&local_c0);
      if (uVar9 < 8) {
        if ((*(int *)(lVar19 + 0x114) != 1) || (*(uint *)(lVar19 + 0x110) != uVar9)) {
          local_110 = 0;
          local_c8 = 0xffffffff;
          local_118 = 0x1030;
          local_108 = PTR_DAT_04bc3880 + 0x10;
          local_e8 = local_108;
          FUN_0283d404(lVar18,&local_118);
          plVar12 = *(long **)puVar3;
          if (plVar12 != (long *)0x0) {
            lVar15 = *plVar12;
            bVar17 = *(byte *)(lVar15 + 0x473);
            if ((long)(char)bVar17 != 0xffffffffffffffff) {
              pbVar13 = (byte *)(lVar15 + 0x48) + ((long)(char)bVar17 & 0xffffffffU) * 0x80;
              if (7 < bVar17) {
                pbVar13 = (byte *)(lVar15 + 0x48);
              }
              if (((*pbVar13 >> 3 & 1) != 0) && (*(byte *)(lVar15 + 0x472) != bVar17))
              goto LAB_00820994;
            }
          }
          lVar15 = *(long *)puVar4;
          pbVar13 = pbVar16;
          if (lVar15 == 0) {
            bVar8 = 7 < *pbVar16;
            if (bVar8) {
              pbVar13 = PTR_DAT_04bb5038;
            }
            if (plVar12 == (long *)0x0) goto LAB_008208c4;
LAB_00820868:
            if (!bVar8) goto LAB_008208c4;
LAB_00820874:
            lVar15 = *plVar12;
            bVar17 = *(byte *)(lVar15 + 0x473);
            pbVar13 = PTR_DAT_04bb5038;
            if ((long)(char)bVar17 != 0xffffffffffffffff) {
              puVar1 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar17 & 0xffffffffU) * 0x20;
              if (7 < bVar17) {
                puVar1 = (uint *)(lVar15 + 0x48);
              }
              if ((*puVar1 & 8) != 0) {
                pbVar13 = (byte *)(lVar15 + 0x471);
              }
            }
            bVar17 = *pbVar13;
            if (7 < bVar17) goto LAB_008208bc;
          }
          else {
            if (*(int *)(lVar15 + 0x15c) != 0) {
              pbVar13 = (byte *)(lVar15 + 0x158);
            }
            if (7 < *pbVar13) {
              if ((*(int *)(lVar15 + 0x15c) == 0) || (*(long *)PTR_DAT_04bb4718 == 0)) {
                if (plVar12 != (long *)0x0) goto LAB_00820874;
LAB_008208bc:
                pbVar13 = PTR_DAT_04bb5038;
              }
              else {
                pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
                bVar8 = 7 < *pbVar13;
                if (bVar8) {
                  pbVar13 = PTR_DAT_04bb5038;
                }
                if (plVar12 != (long *)0x0) goto LAB_00820868;
              }
            }
LAB_008208c4:
            bVar17 = *pbVar13;
            if (7 < bVar17) {
              bVar17 = 0xff;
            }
          }
          bVar14 = *pbVar16;
          if (7 < bVar17) {
            bVar17 = 0xff;
          }
          if (7 < bVar14) {
            bVar14 = 0xff;
          }
          if (bVar17 != bVar14) {
            local_c0 = CONCAT71(local_c0._1_7_,bVar17);
            uVar10 = FUN_02582fe0(&local_c0);
            if ((uVar10 != 0xffffffff) && (lVar15 = *(long *)puVar6, lVar15 != 0)) {
              local_c0 = 0;
              local_b8 = 0;
              local_b0 = PTR_DAT_04bc3880 + 0x10;
              local_70 = 0xffffffff;
              local_90 = local_b0;
              if ((uVar10 < 8) &&
                 (((*(long *)puVar5 != 0 &&
                   (lVar11 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar5 + 0x10) + 0x18)
                             )(), lVar11 != 0)) &&
                  (lVar11 = lVar11 + (ulong)uVar10 * 0x48,
                  *(long *)(lVar11 + 0x1e34c0) != 0 || *(long *)(lVar11 + 0x1e34c8) != 0)))) {
                local_70 = CONCAT44(local_70._4_4_,uVar10);
                local_c0 = 4;
              }
              FUN_0283d404(lVar15,&local_c0);
            }
          }
        }
LAB_00820994:
        puVar7 = PTR_DAT_04bc3880;
        if ((*(int *)(lVar19 + 0x11c) != 1) || (*(uint *)(lVar19 + 0x118) != uVar9)) {
          local_110 = 0;
          local_c8 = 0xffffffff;
          local_118 = 0x1040;
          local_108 = PTR_DAT_04bc3880 + 0x10;
          local_e8 = local_108;
          FUN_0283d404(lVar18,&local_118);
          plVar12 = *(long **)puVar3;
          if (plVar12 != (long *)0x0) {
            lVar18 = *plVar12;
            bVar17 = *(byte *)(lVar18 + 0x473);
            if ((long)(char)bVar17 != 0xffffffffffffffff) {
              pbVar13 = (byte *)(lVar18 + 0x48) + ((long)(char)bVar17 & 0xffffffffU) * 0x80;
              if (7 < bVar17) {
                pbVar13 = (byte *)(lVar18 + 0x48);
              }
              if (((*pbVar13 >> 3 & 1) != 0) && (*(byte *)(lVar18 + 0x472) != bVar17))
              goto LAB_00820bbc;
            }
          }
          lVar18 = *(long *)puVar4;
          pbVar13 = pbVar16;
          if (lVar18 == 0) {
            bVar8 = 7 < *pbVar16;
            if (bVar8) {
              pbVar13 = PTR_DAT_04bb5038;
            }
            if (plVar12 == (long *)0x0) goto LAB_00820af4;
LAB_00820a98:
            if (!bVar8) goto LAB_00820af4;
LAB_00820aa4:
            lVar18 = *plVar12;
            bVar17 = *(byte *)(lVar18 + 0x473);
            pbVar13 = PTR_DAT_04bb5038;
            if ((long)(char)bVar17 != 0xffffffffffffffff) {
              puVar1 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar17 & 0xffffffffU) * 0x20;
              if (7 < bVar17) {
                puVar1 = (uint *)(lVar18 + 0x48);
              }
              if ((*puVar1 & 8) != 0) {
                pbVar13 = (byte *)(lVar18 + 0x471);
              }
            }
            bVar17 = *pbVar13;
            if (7 < bVar17) goto LAB_00820aec;
          }
          else {
            if (*(int *)(lVar18 + 0x15c) != 0) {
              pbVar13 = (byte *)(lVar18 + 0x158);
            }
            if (7 < *pbVar13) {
              if ((*(int *)(lVar18 + 0x15c) == 0) || (*(long *)PTR_DAT_04bb4718 == 0)) {
                if (plVar12 != (long *)0x0) goto LAB_00820aa4;
LAB_00820aec:
                pbVar13 = PTR_DAT_04bb5038;
              }
              else {
                pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
                bVar8 = 7 < *pbVar13;
                if (bVar8) {
                  pbVar13 = PTR_DAT_04bb5038;
                }
                if (plVar12 != (long *)0x0) goto LAB_00820a98;
              }
            }
LAB_00820af4:
            bVar17 = *pbVar13;
            if (7 < bVar17) {
              bVar17 = 0xff;
            }
          }
          bVar14 = *pbVar16;
          if (7 < bVar17) {
            bVar17 = 0xff;
          }
          if (7 < bVar14) {
            bVar14 = 0xff;
          }
          if (bVar17 != bVar14) {
            local_c0 = CONCAT71(local_c0._1_7_,bVar17);
            uVar9 = FUN_02582fe0(&local_c0);
            if ((uVar9 != 0xffffffff) && (lVar18 = *(long *)puVar6, lVar18 != 0)) {
              local_b0 = puVar7 + 0x10;
              local_c0 = 0;
              local_b8 = 0;
              local_70 = 0xffffffff;
              local_90 = local_b0;
              if ((uVar9 < 8) &&
                 (((*(long *)puVar5 != 0 &&
                   (lVar19 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar5 + 0x10) + 0x18)
                             )(), lVar19 != 0)) &&
                  (lVar19 = lVar19 + (ulong)uVar9 * 0x48,
                  *(long *)(lVar19 + 0x1e34c0) != 0 || *(long *)(lVar19 + 0x1e34c8) != 0)))) {
                local_70 = CONCAT44(local_70._4_4_,uVar9);
                local_c0 = 5;
              }
              FUN_0283d404(lVar18,&local_c0);
            }
          }
        }
LAB_00820bbc:
        local_c0 = 0;
      }
    }
  }
LAB_00820bc8:
  uVar2 = (ulong)local_c0 >> 0x10;
  local_c0 = CONCAT62((uint6)uVar2 & 0xffff,1);
  FUN_01384940(&local_c0);
  FUN_007f2e80();
  FUN_01dbd1dc(*(undefined8 *)puVar3);
  lVar18 = *(long *)puVar4;
  if (lVar18 == 0) {
LAB_00820c38:
    if (7 < *pbVar16) {
LAB_00820c44:
      if (*(long **)puVar3 != (long *)0x0) {
        lVar18 = **(long **)puVar3;
        bVar17 = *(byte *)(lVar18 + 0x473);
        pbVar16 = PTR_DAT_04bb5038;
        if ((long)(char)bVar17 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar17 & 0xffffffffU) * 0x20;
          if (7 < bVar17) {
            puVar1 = (uint *)(lVar18 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar16 = (byte *)(lVar18 + 0x471);
          }
        }
        bVar17 = *pbVar16;
        bVar8 = bVar17 < 8;
        if (!bVar8) {
          bVar17 = 0xff;
        }
        local_c0 = CONCAT71(local_c0._1_7_,bVar17);
        if (bVar8) goto LAB_00820cbc;
      }
      pbVar16 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar18 + 0x15c) != 0) {
      pbVar16 = (byte *)(lVar18 + 0x158);
    }
    if (7 < *pbVar16) {
      if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_00820c38;
      }
      goto LAB_00820c44;
    }
  }
  bVar17 = *pbVar16;
  if (7 < bVar17) {
    bVar17 = 0xff;
  }
  local_c0 = CONCAT71(local_c0._1_7_,bVar17);
LAB_00820cbc:
  if (*(long *)(*(long *)PTR_DAT_04bb4fb0 + 0x10) != 0) {
    FUN_03365804(*(long *)(*(long *)PTR_DAT_04bb4fb0 + 0x10),&local_c0);
  }
  return;
}

