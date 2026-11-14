
void FUN_01d851d0(long param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  long *plVar17;
  int iVar18;
  long lVar19;
  undefined8 uVar20;
  int iVar21;
  long lVar22;
  undefined8 uVar23;
  int iVar24;
  undefined8 uVar25;
  byte local_34 [4];
  
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  if (lVar9 == 0) {
    pbVar7 = &DAT_0548e140;
LAB_01d85248:
    if (7 < *pbVar7) {
LAB_01d85254:
      if (DAT_0537d558 != (long *)0x0) {
        lVar9 = *DAT_0537d558;
        bVar14 = *(byte *)(lVar9 + 0x473);
        pbVar7 = PTR_DAT_04bb5038;
        if ((long)(char)bVar14 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar14 & 0xffffffffU) * 0x20;
          if (7 < bVar14) {
            puVar3 = (uint *)(lVar9 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar7 = (byte *)(lVar9 + 0x471);
          }
        }
        local_34[0] = *pbVar7;
        if (local_34[0] < 8) goto LAB_01d852d4;
      }
      pbVar7 = &DAT_0548e168;
    }
  }
  else {
    pbVar7 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar9 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(lVar9 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar7 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01d85248;
      }
      goto LAB_01d85254;
    }
  }
  local_34[0] = *pbVar7;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
LAB_01d852d4:
  lVar9 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_34,1);
  if (lVar9 == 0) {
    bVar4 = false;
    lVar9 = 0;
  }
  else {
    lVar8 = lVar9 + 0x194b0;
    if (*(long *)(lVar9 + 0x194b8) == 0) {
      lVar8 = *(long *)(DAT_05574040 + 0x20);
    }
    if (*(long **)(lVar8 + 0x24838) == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar5 = (undefined8 *)**(long **)(lVar8 + 0x24838);
      uVar6 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        uVar6 = (**(code **)*puVar5)();
      }
    }
    lVar9 = *(long *)(*(long *)(lVar8 + 0x24820) + *(long *)(lVar8 + 0x24818) + 0x50);
    bVar4 = lVar9 != 0;
    if ((((uVar6 & 1) != 0) && (*(long *)(lVar8 + 0x24838) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar8 + 0x24838) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  *(undefined8 *)(param_1 + 0x94) = 0;
  if (*(int *)(DAT_05373f28 + 0x78) == 0) {
    *(undefined8 *)(param_1 + 0xac) = 0;
  }
  else {
    plVar11 = *(long **)(DAT_05373f28 + 0x80);
    lVar8 = (long)*(int *)(DAT_05373f28 + 0x78) << 3;
    do {
      iVar15 = *(int *)(param_1 + 0x98);
      iVar10 = *(int *)(param_1 + 0x90);
      lVar13 = *plVar11;
      if (iVar15 < iVar10) {
        *(int *)(param_1 + 0x98) = iVar15 + 1;
        iVar18 = *(int *)(param_1 + 0x94) + iVar15;
      }
      else {
        iVar12 = *(int *)(param_1 + 0x94);
        iVar18 = iVar12;
        if (0 < iVar15) {
          iVar18 = 0;
          if (iVar12 + 1 < iVar10) {
            iVar18 = iVar12 + 1;
          }
          *(int *)(param_1 + 0x94) = iVar18;
          iVar15 = iVar15 + -1;
        }
        iVar18 = iVar15 + iVar18;
        *(int *)(param_1 + 0x98) = iVar15 + 1;
      }
      bVar14 = 0;
      iVar15 = 0;
      if (iVar10 <= iVar18) {
        iVar15 = iVar10;
      }
      plVar17 = (long *)(*(long *)(param_1 + 0x88) + (long)(iVar18 - iVar15) * 200);
      plVar17[0x17] = 0;
      plVar17[0x18] = 0;
      *plVar17 = 0;
      plVar17[0x15] = 0;
      plVar17[0x16] = 0;
      plVar17[0x13] = 0;
      plVar17[0x14] = 0;
      plVar17[0x11] = 0;
      plVar17[0x12] = 0;
      plVar17[0xf] = 0;
      plVar17[0x10] = 0;
      plVar17[0xd] = 0;
      plVar17[0xe] = 0;
      plVar17[0xb] = 0;
      plVar17[0xc] = 0;
      plVar17[9] = 0;
      plVar17[10] = 0;
      plVar17[7] = 0;
      plVar17[8] = 0;
      plVar17[5] = 0;
      plVar17[6] = 0;
      plVar17[3] = 0;
      plVar17[4] = 0;
      plVar17[1] = 0;
      plVar17[2] = 0;
      lVar19 = *(long *)(lVar13 + 0xc);
      lVar22 = *(long *)(lVar13 + 0x14);
      *(undefined4 *)(plVar17 + 4) = *(undefined4 *)(lVar13 + 0x1c);
      plVar17[2] = lVar19;
      plVar17[3] = lVar22;
      uVar20 = *(undefined8 *)(lVar13 + 0x22);
      uVar23 = *(undefined8 *)(lVar13 + 0x2a);
      *(undefined4 *)((long)plVar17 + 0x36) = *(undefined4 *)(lVar13 + 0x32);
      *(undefined8 *)((long)plVar17 + 0x2e) = uVar23;
      *(undefined8 *)((long)plVar17 + 0x26) = uVar20;
      uVar20 = *(undefined8 *)(lVar13 + 0x84);
      uVar23 = *(undefined8 *)(lVar13 + 0x8c);
      uVar25 = *(undefined8 *)(lVar13 + 0x94);
      *(undefined8 *)((long)plVar17 + 0x5c) = *(undefined8 *)(lVar13 + 0x7c);
      *(undefined8 *)((long)plVar17 + 0x74) = uVar25;
      *(undefined8 *)((long)plVar17 + 0x6c) = uVar23;
      *(undefined8 *)((long)plVar17 + 100) = uVar20;
      uVar20 = *(undefined8 *)(lVar13 + 0xa4);
      uVar23 = *(undefined8 *)(lVar13 + 0xac);
      uVar25 = *(undefined8 *)(lVar13 + 0xb4);
      *(undefined8 *)((long)plVar17 + 0x7c) = *(undefined8 *)(lVar13 + 0x9c);
      *(undefined8 *)((long)plVar17 + 0x94) = uVar25;
      *(undefined8 *)((long)plVar17 + 0x8c) = uVar23;
      *(undefined8 *)((long)plVar17 + 0x84) = uVar20;
      uVar20 = *(undefined8 *)(lVar13 + 0xc4);
      uVar23 = *(undefined8 *)(lVar13 + 0xcc);
      uVar25 = *(undefined8 *)(lVar13 + 0xd4);
      *(undefined8 *)((long)plVar17 + 0x9c) = *(undefined8 *)(lVar13 + 0xbc);
      *(undefined8 *)((long)plVar17 + 0xb4) = uVar25;
      *(undefined8 *)((long)plVar17 + 0xac) = uVar23;
      *(undefined8 *)((long)plVar17 + 0xa4) = uVar20;
      uVar20 = *(undefined8 *)(lVar13 + 0x5c);
      uVar23 = *(undefined8 *)(lVar13 + 100);
      uVar25 = *(undefined8 *)(lVar13 + 0x6c);
      *(undefined8 *)((long)plVar17 + 0x54) = *(undefined8 *)(lVar13 + 0x74);
      *(undefined8 *)((long)plVar17 + 0x4c) = uVar25;
      *(undefined8 *)((long)plVar17 + 0x44) = uVar23;
      *(undefined8 *)((long)plVar17 + 0x3c) = uVar20;
      lVar19 = *(long *)(lVar13 + 0xe0);
      *plVar17 = lVar19;
      plVar17[1] = *(long *)(lVar13 + 0x108);
      *(undefined4 *)(plVar17 + 0x18) = *(undefined4 *)(lVar13 + 0x58);
      *(byte *)((long)plVar17 + 0xc4) = *(byte *)(lVar13 + 0x101) & 1;
      if (((*(int *)(lVar13 + 0xfc) == -1) && (lVar19 != 0)) &&
         (bVar14 = bVar4 ^ 1, lVar9 != *(long *)(lVar13 + 0x108))) {
        bVar14 = 1;
      }
      plVar11 = plVar11 + 1;
      lVar8 = lVar8 + -8;
      *(byte *)((long)plVar17 + 0xc5) = bVar14;
    } while (lVar8 != 0);
    iVar15 = *(int *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0xac) = 0;
    if (iVar15 != 0) {
      iVar10 = 0;
      do {
        iVar16 = *(int *)(param_1 + 0x90);
        iVar18 = *(int *)(param_1 + 0x94) + iVar10;
        iVar12 = 0;
        if (iVar16 <= iVar18) {
          iVar12 = iVar16;
        }
        plVar11 = (long *)(*(long *)(param_1 + 0x88) + (long)(iVar18 - iVar12) * 200);
        if (*(char *)((long)plVar11 + 0xc5) != '\0') {
          iVar18 = *(int *)(param_1 + 0xb0);
          if (iVar18 == 0) {
            iVar12 = *(int *)(param_1 + 0xa8);
            if (0 < iVar12) {
              iVar21 = *(int *)(param_1 + 0xac);
              goto LAB_01d85570;
            }
            iVar18 = 0;
            if (0 < iVar12) goto LAB_01d85650;
          }
          else {
            iVar24 = 0;
            iVar12 = *(int *)(param_1 + 0xa8);
            iVar21 = *(int *)(param_1 + 0xac);
            do {
              iVar1 = 0;
              if (iVar12 <= iVar21 + iVar24) {
                iVar1 = iVar12;
              }
              iVar1 = *(int *)(*(long *)(param_1 + 0xa0) + (long)((iVar21 + iVar24) - iVar1) * 4) +
                      *(int *)(param_1 + 0x94);
              iVar2 = 0;
              if (iVar16 <= iVar1) {
                iVar2 = iVar16;
              }
              if (*(long *)(*(long *)(param_1 + 0x88) + (long)(iVar1 - iVar2) * 200) == *plVar11)
              goto LAB_01d85598;
              iVar24 = iVar24 + 1;
            } while (iVar18 != iVar24);
            if (iVar18 < iVar12) {
LAB_01d85570:
              iVar16 = iVar12;
              if (0 < iVar21) {
                iVar16 = iVar21;
              }
            }
            else {
              if (0 < iVar18) {
                *(int *)(param_1 + 0xb0) = iVar18 + -1;
                iVar18 = iVar18 + -1;
              }
              if (iVar12 <= iVar18) goto LAB_01d85598;
LAB_01d85650:
              iVar16 = iVar12;
              if (0 < *(int *)(param_1 + 0xac)) {
                iVar16 = *(int *)(param_1 + 0xac);
              }
            }
            *(int *)(param_1 + 0xac) = iVar16 + -1;
            *(int *)(param_1 + 0xb0) = iVar18 + 1;
            if (iVar16 <= iVar12) {
              iVar12 = 0;
            }
            *(int *)(*(long *)(param_1 + 0xa0) + (long)((iVar16 + -1) - iVar12) * 4) = iVar10;
          }
        }
LAB_01d85598:
        iVar10 = iVar10 + 1;
      } while (iVar15 != iVar10);
    }
  }
  return;
}

