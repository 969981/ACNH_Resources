
/* WARNING: Removing unreachable block (ram,0x03fe8814) */
/* WARNING: Removing unreachable block (ram,0x03fe882c) */
/* WARNING: Removing unreachable block (ram,0x03fe8838) */
/* WARNING: Removing unreachable block (ram,0x03fe8840) */
/* WARNING: Removing unreachable block (ram,0x03fe8850) */

void FUN_03fe86d0(long *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  byte bVar19;
  uint uVar20;
  ushort uVar21;
  long lVar22;
  short sVar23;
  int iVar24;
  undefined4 uVar25;
  long lVar26;
  uint uVar27;
  uint uVar28;
  byte local_34 [4];
  
  bVar19 = (byte)param_3;
  uVar21 = (ushort)param_3;
  if ((param_2 & 0xff80) != 0x4300) {
    param_2 = param_2 & 0xffff;
    piVar1 = (int *)((long)param_1 + 0x34e0bc);
    local_34[0] = bVar19;
    if (0x47ff < param_2) {
      switch(param_2) {
      case 0x4800:
        *(byte *)(param_1 + 0x69c2b) = bVar19;
        break;
      case 0x4801:
        *(byte *)((long)param_1 + 0x34e159) = bVar19;
        break;
      case 0x4804:
        *(byte *)((long)param_1 + 0x34e15a) = bVar19;
        if (*(char *)((long)param_1 + 0x34e15e) != '\0') {
          lVar26 = param_1[0x69c2c];
          uVar27 = (param_3 & 0xf) << 0x14;
          uVar4 = *(uint *)(param_1 + 0x69c2d);
          lVar22 = 0;
          uVar28 = 0;
          if ((char)bVar19 < '\0') {
            uVar28 = uVar27;
          }
          do {
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar24 = uVar28 - uVar20 * uVar4;
            uVar28 = iVar24 + 0x1000;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar2 = uVar28 - uVar20 * uVar4;
            uVar28 = iVar2 + 0x1000;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar5 = uVar28 - uVar20 * uVar4;
            uVar28 = iVar5 + 0x1000;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar18 = uVar28 - uVar20 * uVar4;
            uVar28 = iVar18 + 0x1000;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar7 = uVar28 - uVar20 * uVar4;
            uVar28 = iVar7 + 0x1000;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar8 = uVar28 - uVar20 * uVar4;
            uVar28 = iVar8 + 0x1000;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar9 = uVar28 - uVar20 * uVar4;
            plVar3 = (long *)((long)param_1 + lVar22 + 0x376218);
            lVar22 = lVar22 + 0x80;
            plVar3[-4] = lVar26 + iVar24;
            plVar3[-3] = lVar26 + iVar2;
            uVar28 = iVar9 + 0x1000;
            plVar3[-2] = lVar26 + iVar5;
            plVar3[-1] = lVar26 + iVar18;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar24 = uVar28 - uVar20 * uVar4;
            *plVar3 = lVar26 + iVar7;
            plVar3[1] = lVar26 + iVar8;
            uVar28 = iVar24 + 0x1000;
            plVar3[2] = lVar26 + iVar9;
            plVar3[3] = lVar26 + iVar24;
          } while (lVar22 != 0x1000);
          lVar22 = 0;
          do {
            uVar28 = 0;
            if (uVar4 != 0) {
              uVar28 = uVar27 / uVar4;
            }
            iVar24 = uVar27 - uVar28 * uVar4;
            uVar28 = iVar24 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar2 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar2 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar5 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar5 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar18 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar18 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar7 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar7 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar8 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar8 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar9 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar9 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar10 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar10 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar11 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar11 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar12 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar12 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar13 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar13 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar14 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar14 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar15 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar15 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar16 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar16 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar17 = uVar28 - uVar27 * uVar4;
            plVar3 = (long *)((long)param_1 + lVar22 + 0x37c1f8);
            lVar22 = lVar22 + 0x80;
            plVar3[-8] = lVar26 + iVar24;
            plVar3[-7] = lVar26 + iVar2;
            plVar3[-6] = lVar26 + iVar5;
            plVar3[-5] = lVar26 + iVar18;
            plVar3[-4] = lVar26 + iVar7;
            plVar3[-3] = lVar26 + iVar8;
            plVar3[-2] = lVar26 + iVar9;
            plVar3[-1] = lVar26 + iVar10;
            *plVar3 = lVar26 + iVar11;
            plVar3[1] = lVar26 + iVar12;
            uVar28 = iVar17 + 0x1000;
            plVar3[2] = lVar26 + iVar13;
            plVar3[3] = lVar26 + iVar14;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar24 = uVar28 - uVar27 * uVar4;
            plVar3[4] = lVar26 + iVar15;
            plVar3[5] = lVar26 + iVar16;
            uVar27 = iVar24 + 0x1000;
            plVar3[6] = lVar26 + iVar17;
            plVar3[7] = lVar26 + iVar24;
          } while (lVar22 != 0x800);
        }
        break;
      case 0x4805:
        *(byte *)((long)param_1 + 0x34e15b) = bVar19;
        if (*(char *)((long)param_1 + 0x34e15e) != '\0') {
          uVar27 = (param_3 & 0xf) << 0x14;
          lVar22 = param_1[0x69c2c];
          uVar28 = 0x100000;
          if ((char)bVar19 < '\0') {
            uVar28 = uVar27;
          }
          uVar4 = *(uint *)(param_1 + 0x69c2d);
          lVar26 = 0;
          do {
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar24 = uVar28 - uVar20 * uVar4;
            uVar28 = iVar24 + 0x1000;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar2 = uVar28 - uVar20 * uVar4;
            uVar28 = iVar2 + 0x1000;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar5 = uVar28 - uVar20 * uVar4;
            uVar28 = iVar5 + 0x1000;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar18 = uVar28 - uVar20 * uVar4;
            uVar28 = iVar18 + 0x1000;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar7 = uVar28 - uVar20 * uVar4;
            uVar28 = iVar7 + 0x1000;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar8 = uVar28 - uVar20 * uVar4;
            uVar28 = iVar8 + 0x1000;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar9 = uVar28 - uVar20 * uVar4;
            plVar3 = (long *)((long)param_1 + lVar26 + 0x377218);
            lVar26 = lVar26 + 0x80;
            plVar3[-4] = lVar22 + iVar24;
            plVar3[-3] = lVar22 + iVar2;
            uVar28 = iVar9 + 0x1000;
            plVar3[-2] = lVar22 + iVar5;
            plVar3[-1] = lVar22 + iVar18;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar24 = uVar28 - uVar20 * uVar4;
            *plVar3 = lVar22 + iVar7;
            plVar3[1] = lVar22 + iVar8;
            uVar28 = iVar24 + 0x1000;
            plVar3[2] = lVar22 + iVar9;
            plVar3[3] = lVar22 + iVar24;
          } while (lVar26 != 0x1000);
          lVar26 = 0;
          do {
            uVar28 = 0;
            if (uVar4 != 0) {
              uVar28 = uVar27 / uVar4;
            }
            iVar24 = uVar27 - uVar28 * uVar4;
            uVar28 = iVar24 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar2 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar2 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar5 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar5 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar18 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar18 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar7 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar7 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar8 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar8 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar9 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar9 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar10 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar10 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar11 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar11 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar12 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar12 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar13 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar13 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar14 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar14 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar15 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar15 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar16 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar16 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar17 = uVar28 - uVar27 * uVar4;
            plVar3 = (long *)((long)param_1 + lVar26 + 0x37c9f8);
            lVar26 = lVar26 + 0x80;
            plVar3[-8] = lVar22 + iVar24;
            plVar3[-7] = lVar22 + iVar2;
            plVar3[-6] = lVar22 + iVar5;
            plVar3[-5] = lVar22 + iVar18;
            plVar3[-4] = lVar22 + iVar7;
            plVar3[-3] = lVar22 + iVar8;
            plVar3[-2] = lVar22 + iVar9;
            plVar3[-1] = lVar22 + iVar10;
            *plVar3 = lVar22 + iVar11;
            plVar3[1] = lVar22 + iVar12;
            uVar28 = iVar17 + 0x1000;
            plVar3[2] = lVar22 + iVar13;
            plVar3[3] = lVar22 + iVar14;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar24 = uVar28 - uVar27 * uVar4;
            plVar3[4] = lVar22 + iVar15;
            plVar3[5] = lVar22 + iVar16;
            uVar27 = iVar24 + 0x1000;
            plVar3[6] = lVar22 + iVar17;
            plVar3[7] = lVar22 + iVar24;
          } while (lVar26 != 0x800);
        }
        break;
      case 0x4806:
        *(byte *)((long)param_1 + 0x34e15c) = bVar19;
        if (*(char *)((long)param_1 + 0x34e15e) != '\0') {
          lVar26 = param_1[0x69c2c];
          uVar27 = (param_3 & 0xf) << 0x14;
          uVar4 = *(uint *)(param_1 + 0x69c2d);
          lVar22 = 0;
          uVar28 = 0;
          if ((char)bVar19 < '\0') {
            uVar28 = uVar27;
          }
          do {
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar24 = uVar28 - uVar20 * uVar4;
            uVar28 = iVar24 + 0x1000;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar2 = uVar28 - uVar20 * uVar4;
            uVar28 = iVar2 + 0x1000;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar5 = uVar28 - uVar20 * uVar4;
            uVar28 = iVar5 + 0x1000;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar18 = uVar28 - uVar20 * uVar4;
            uVar28 = iVar18 + 0x1000;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar7 = uVar28 - uVar20 * uVar4;
            uVar28 = iVar7 + 0x1000;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar8 = uVar28 - uVar20 * uVar4;
            uVar28 = iVar8 + 0x1000;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar9 = uVar28 - uVar20 * uVar4;
            plVar3 = (long *)((long)param_1 + lVar22 + 0x37a218);
            lVar22 = lVar22 + 0x80;
            plVar3[-4] = lVar26 + iVar24;
            plVar3[-3] = lVar26 + iVar2;
            uVar28 = iVar9 + 0x1000;
            plVar3[-2] = lVar26 + iVar5;
            plVar3[-1] = lVar26 + iVar18;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar24 = uVar28 - uVar20 * uVar4;
            *plVar3 = lVar26 + iVar7;
            plVar3[1] = lVar26 + iVar8;
            uVar28 = iVar24 + 0x1000;
            plVar3[2] = lVar26 + iVar9;
            plVar3[3] = lVar26 + iVar24;
          } while (lVar22 != 0x1000);
          lVar22 = 0;
          do {
            uVar28 = 0;
            if (uVar4 != 0) {
              uVar28 = uVar27 / uVar4;
            }
            iVar24 = uVar27 - uVar28 * uVar4;
            uVar28 = iVar24 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar2 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar2 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar5 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar5 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar18 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar18 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar7 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar7 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar8 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar8 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar9 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar9 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar10 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar10 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar11 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar11 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar12 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar12 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar13 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar13 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar14 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar14 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar15 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar15 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar16 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar16 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar17 = uVar28 - uVar27 * uVar4;
            plVar3 = (long *)((long)param_1 + (long)(&LAB_0037d1f8 + lVar22));
            lVar22 = lVar22 + 0x80;
            plVar3[-8] = lVar26 + iVar24;
            plVar3[-7] = lVar26 + iVar2;
            plVar3[-6] = lVar26 + iVar5;
            plVar3[-5] = lVar26 + iVar18;
            plVar3[-4] = lVar26 + iVar7;
            plVar3[-3] = lVar26 + iVar8;
            plVar3[-2] = lVar26 + iVar9;
            plVar3[-1] = lVar26 + iVar10;
            *plVar3 = lVar26 + iVar11;
            plVar3[1] = lVar26 + iVar12;
            uVar28 = iVar17 + 0x1000;
            plVar3[2] = lVar26 + iVar13;
            plVar3[3] = lVar26 + iVar14;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar24 = uVar28 - uVar27 * uVar4;
            plVar3[4] = lVar26 + iVar15;
            plVar3[5] = lVar26 + iVar16;
            uVar27 = iVar24 + 0x1000;
            plVar3[6] = lVar26 + iVar17;
            plVar3[7] = lVar26 + iVar24;
          } while (lVar22 != 0x800);
        }
        break;
      case 0x4807:
        *(byte *)((long)param_1 + 0x34e15d) = bVar19;
        if (*(char *)((long)param_1 + 0x34e15e) != '\0') {
          uVar27 = (param_3 & 0xf) << 0x14;
          lVar22 = param_1[0x69c2c];
          uVar28 = 0x100000;
          if ((char)bVar19 < '\0') {
            uVar28 = uVar27;
          }
          uVar4 = *(uint *)(param_1 + 0x69c2d);
          lVar26 = 0;
          do {
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar24 = uVar28 - uVar20 * uVar4;
            uVar28 = iVar24 + 0x1000;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar2 = uVar28 - uVar20 * uVar4;
            uVar28 = iVar2 + 0x1000;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar5 = uVar28 - uVar20 * uVar4;
            uVar28 = iVar5 + 0x1000;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar18 = uVar28 - uVar20 * uVar4;
            uVar28 = iVar18 + 0x1000;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar7 = uVar28 - uVar20 * uVar4;
            uVar28 = iVar7 + 0x1000;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar8 = uVar28 - uVar20 * uVar4;
            uVar28 = iVar8 + 0x1000;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar9 = uVar28 - uVar20 * uVar4;
            plVar3 = (long *)((long)param_1 + lVar26 + 0x37b218);
            lVar26 = lVar26 + 0x80;
            plVar3[-4] = lVar22 + iVar24;
            plVar3[-3] = lVar22 + iVar2;
            uVar28 = iVar9 + 0x1000;
            plVar3[-2] = lVar22 + iVar5;
            plVar3[-1] = lVar22 + iVar18;
            uVar20 = 0;
            if (uVar4 != 0) {
              uVar20 = uVar28 / uVar4;
            }
            iVar24 = uVar28 - uVar20 * uVar4;
            *plVar3 = lVar22 + iVar7;
            plVar3[1] = lVar22 + iVar8;
            uVar28 = iVar24 + 0x1000;
            plVar3[2] = lVar22 + iVar9;
            plVar3[3] = lVar22 + iVar24;
          } while (lVar26 != 0x1000);
          lVar26 = 0;
          do {
            uVar28 = 0;
            if (uVar4 != 0) {
              uVar28 = uVar27 / uVar4;
            }
            iVar24 = uVar27 - uVar28 * uVar4;
            uVar28 = iVar24 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar2 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar2 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar5 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar5 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar18 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar18 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar7 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar7 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar8 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar8 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar9 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar9 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar10 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar10 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar11 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar11 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar12 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar12 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar13 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar13 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar14 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar14 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar15 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar15 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar16 = uVar28 - uVar27 * uVar4;
            uVar28 = iVar16 + 0x1000;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar17 = uVar28 - uVar27 * uVar4;
            plVar3 = (long *)((long)param_1 + lVar26 + 0x37d9f8);
            lVar26 = lVar26 + 0x80;
            plVar3[-8] = lVar22 + iVar24;
            plVar3[-7] = lVar22 + iVar2;
            plVar3[-6] = lVar22 + iVar5;
            plVar3[-5] = lVar22 + iVar18;
            plVar3[-4] = lVar22 + iVar7;
            plVar3[-3] = lVar22 + iVar8;
            plVar3[-2] = lVar22 + iVar9;
            plVar3[-1] = lVar22 + iVar10;
            *plVar3 = lVar22 + iVar11;
            plVar3[1] = lVar22 + iVar12;
            uVar28 = iVar17 + 0x1000;
            plVar3[2] = lVar22 + iVar13;
            plVar3[3] = lVar22 + iVar14;
            uVar27 = 0;
            if (uVar4 != 0) {
              uVar27 = uVar28 / uVar4;
            }
            iVar24 = uVar28 - uVar27 * uVar4;
            plVar3[4] = lVar22 + iVar15;
            plVar3[5] = lVar22 + iVar16;
            uVar27 = iVar24 + 0x1000;
            plVar3[6] = lVar22 + iVar17;
            plVar3[7] = lVar22 + iVar24;
          } while (lVar26 != 0x800);
        }
      }
      goto switchD_03fe87c0_caseD_420e;
    }
    switch(param_2) {
    case 0x4200:
      *(byte *)((long)param_1 + 0x34e0f7) = bVar19;
      *(byte *)((long)param_1 + 0x34e10c) = bVar19;
      (**(code **)(**(long **)(*param_1 + 0x78) + 0x68))(*(long **)(*param_1 + 0x78),local_34);
      *(byte *)((long)param_1 + 0x34e12b) = local_34[0] >> 7;
      *(byte *)((long)param_1 + 0x34e12c) = local_34[0] >> 5 & 1;
      *(byte *)((long)param_1 + 0x34e12d) = local_34[0] >> 4 & 1;
      *(byte *)((long)param_1 + 0x34e12e) = local_34[0] & 1;
      goto LAB_03fe9348;
    case 0x4201:
      *(byte *)(param_1 + 0x69c1f) = bVar19;
      *(byte *)((long)param_1 + 0x34e10d) = bVar19;
      if (((param_3 >> 7 & 1) == 0) && (*(char *)((long)param_1 + 0x34e12a) < '\0')) {
        FUN_03fc13f4(param_1,1);
      }
      *(byte *)((long)param_1 + 0x34e12a) = bVar19;
      break;
    case 0x4202:
      *(byte *)((long)param_1 + 0x34e136) = bVar19;
      break;
    case 0x4203:
      *(byte *)((long)param_1 + 0x34e137) = bVar19;
      *(ushort *)(param_1 + 0x69c27) = (ushort)*(byte *)((long)param_1 + 0x34e136) * (uVar21 & 0xff)
      ;
      break;
    case 0x4204:
      *(byte *)(param_1 + 0x69c26) = bVar19;
      break;
    case 0x4205:
      *(byte *)((long)param_1 + 0x34e131) = bVar19;
      break;
    case 0x4206:
      uVar21 = *(ushort *)(param_1 + 0x69c26);
      *(byte *)((long)param_1 + 0x34e132) = bVar19;
      if ((param_3 & 0xff) == 0) {
        sVar23 = -1;
      }
      else {
        sVar23 = 0;
        if ((param_3 & 0xff) != 0) {
          sVar23 = (short)((uint)uVar21 / (param_3 & 0xff));
        }
        uVar21 = uVar21 - sVar23 * (short)(param_3 & 0xff);
      }
      *(short *)((long)param_1 + 0x34e134) = sVar23;
      *(ushort *)(param_1 + 0x69c27) = uVar21;
      break;
    case 0x4207:
      *(byte *)((long)param_1 + 0x34e13a) = bVar19;
      goto LAB_03fe9274;
    case 0x4208:
      *(byte *)((long)param_1 + 0x34e13b) = bVar19 & 1;
LAB_03fe9274:
      lVar22 = param_1[0x69c2a];
      iVar24 = (*(int *)(lVar22 + 0x28) * (uint)*(ushort *)((long)param_1 + 0x34e13a)) / 0x155 -
               *(int *)(lVar22 + 0x18);
      uVar21 = *(ushort *)((long)param_1 + 0x34e13c);
      *(int *)(param_1 + 0x69c28) = iVar24;
      *(uint *)((long)param_1 + 0x34e144) = (uint)uVar21;
      if (iVar24 < 0) {
        iVar24 = *(int *)(lVar22 + 0x28) + iVar24;
        *(int *)(param_1 + 0x69c28) = iVar24;
        *(uint *)((long)param_1 + 0x34e144) = uVar21 - 1;
        if (uVar21 == 0) {
          *(int *)((long)param_1 + 0x34e144) = *(int *)(lVar22 + 8) + -1;
        }
      }
      if ((iVar24 == *(int *)(lVar22 + 0x28)) || (iVar24 == *(int *)(lVar22 + 0x20))) {
        *(int *)(param_1 + 0x69c28) = iVar24 + -1;
      }
LAB_03fe9348:
      FUN_03fe9444(param_1);
      break;
    case 0x4209:
      iVar24 = *(int *)((long)param_1 + 0x34e144);
      uVar21 = *(ushort *)((long)param_1 + 0x34e13c);
      *(byte *)((long)param_1 + 0x34e13c) = bVar19;
      goto LAB_03fe9318;
    case 0x420a:
      iVar24 = *(int *)((long)param_1 + 0x34e144);
      uVar21 = *(ushort *)((long)param_1 + 0x34e13c);
      *(byte *)((long)param_1 + 0x34e13d) = bVar19 & 1;
LAB_03fe9318:
      iVar2 = (iVar24 - (uint)uVar21) + (uint)*(ushort *)((long)param_1 + 0x34e13c);
      *(int *)((long)param_1 + 0x34e144) = iVar2;
      iVar5 = *(int *)(param_1[0x69c2a] + 8);
      iVar2 = iVar5 + iVar2;
      iVar18 = 0;
      if (iVar5 != 0) {
        iVar18 = iVar2 / iVar5;
      }
      iVar2 = iVar2 - iVar18 * iVar5;
      *(int *)((long)param_1 + 0x34e144) = iVar2;
      if (iVar24 == iVar2) break;
      goto LAB_03fe9348;
    case 0x420b:
      if (*(int *)(*param_1 + 0x14) == 1) {
        FUN_03fe95e0();
      }
      else {
        FUN_03fe980c(param_1,param_3);
      }
      break;
    case 0x420c:
      if (*(char *)((long)param_1 + 0x34e0f5) == '\0') {
        *(byte *)((long)param_1 + 0x34e127) = bVar19;
        *(byte *)(param_1 + 0x69c25) = bVar19 & (*(byte *)((long)param_1 + 0x34e129) ^ 0xff);
      }
      break;
    case 0x420d:
      if ((char)param_1[0x68e2] == '\0') {
        FUN_03fe6c00(param_1 + 0x6ec37,param_3 & 1);
      }
      break;
    case 0x420e:
    case 0x420f:
      break;
    case 0x4210:
      *(undefined1 *)(param_1 + 0x69c29) = 0;
      break;
    default:
      if (param_2 == 0x4016) {
        *(byte *)((long)param_1 + 0x34e0f6) = bVar19;
        *piVar1 = *piVar1 + 0x600;
        bVar6 = *(byte *)((long)param_1 + 0x34e10b);
        *(byte *)((long)param_1 + 0x34e10b) = bVar19;
        if (((param_3 & 1) != 0) && ((bVar6 & 1) == 0)) {
          *(undefined2 *)(param_1 + 0x69c21) = 0;
          *(undefined1 *)((long)param_1 + 0x34e10a) = 0;
        }
      }
      else if (param_2 == 0x4017) {
        *piVar1 = *piVar1 + 0x600;
      }
    }
switchD_03fe87c0_caseD_420e:
    *(byte *)((long)param_1 + (ulong)param_2 + 0x36e1a8) = local_34[0];
    return;
  }
  if (10 < (param_2 & 0xf)) {
    return;
  }
  uVar28 = param_2 >> 4 & 0xf;
  switch(param_2 & 0xf) {
  case 0:
    *(byte *)((long)param_1 + (ulong)uVar28 * 0x50 + 0x38a1ee) = bVar19 & 0x80;
    *(byte *)(param_1 + (ulong)uVar28 * 10 + 0x71441) = bVar19 & 0x40;
    *(byte *)((long)param_1 + (ulong)uVar28 * 0x50 + 0x38a1ef) = bVar19 & 7;
    if ((param_3 >> 3 & 1) == 0) {
      if (((param_3 & 0xff) >> 4 & 1) == 0) {
        uVar25 = 1;
      }
      else {
        uVar25 = 0xffffffff;
      }
      *(undefined4 *)((long)param_1 + (ulong)uVar28 * 0x50 + 0x38a1dc) = uVar25;
    }
    else {
      *(undefined4 *)((long)param_1 + (ulong)uVar28 * 0x50 + 0x38a1dc) = 0;
    }
    param_1 = param_1 + (ulong)uVar28 * 10;
    uVar28 = 0xa1f0;
    goto LAB_03fe9410;
  case 1:
    param_1 = param_1 + (ulong)uVar28 * 10;
    uVar28 = 0xa1e0;
    goto LAB_03fe9410;
  case 2:
    param_1 = param_1 + (ulong)uVar28 * 10;
    uVar28 = 0xa1d0;
    goto LAB_03fe9410;
  case 3:
    *(byte *)((long)param_1 + (ulong)uVar28 * 0x50 + 0x38a1d1) = bVar19;
    break;
  case 4:
    *(ushort *)((long)param_1 + (ulong)uVar28 * 0x50 + 0x38a1d2) = uVar21 & 0xff;
    break;
  case 5:
    *(byte *)((long)param_1 + (ulong)uVar28 * 0x50 + 0x38a1d4) = bVar19;
    *(byte *)((long)param_1 + (ulong)uVar28 * 0x50 + 0x38a1ec) = bVar19;
    break;
  case 6:
    *(byte *)((long)param_1 + (ulong)uVar28 * 0x50 + 0x38a1d5) = bVar19;
    *(byte *)((long)param_1 + (ulong)uVar28 * 0x50 + 0x38a1ed) = bVar19;
    break;
  case 7:
    *(ushort *)((long)param_1 + (ulong)uVar28 * 0x50 + 0x38a1d6) = uVar21 & 0xff;
    break;
  case 8:
    param_1 = param_1 + (ulong)uVar28 * 10;
    uVar28 = 0xa1d8;
LAB_03fe9410:
    *(byte *)((long)param_1 + (ulong)(uVar28 | 0x380000)) = bVar19;
    break;
  case 9:
    *(byte *)((long)param_1 + (ulong)uVar28 * 0x50 + 0x38a1d9) = bVar19;
    break;
  case 10:
    *(byte *)((long)param_1 + (ulong)uVar28 * 0x50 + 0x38a20a) = bVar19 & 0x7f;
    *(byte *)((long)param_1 + (ulong)uVar28 * 0x50 + 0x38a209) = bVar19 & 0x80;
  }
  return;
}

