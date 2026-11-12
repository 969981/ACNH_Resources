
void FUN_0090d910(undefined8 *param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  long lVar8;
  uint *puVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  lVar8 = *(long *)(param_2 + 0x18);
  if (lVar8 != 0) {
    if ((int)*(uint *)(lVar8 + 0x1c0) < 1) {
      if ((((*(long *)(lVar8 + 0xb0) != 0) &&
           (puVar4 = *(uint **)(*(long *)(lVar8 + 0xb0) + 8), puVar4 != (uint *)0x0)) &&
          ((*(uint *)(lVar8 + 200) <= param_3 ||
           (*(char *)(*(long *)(lVar8 + 0xd0) + (long)(int)param_3) != '\0')))) &&
         (((param_3 < *puVar4 && (puVar4[1] != 0)) && ((ushort)puVar4[2] != 0)))) {
        iVar13 = 0xc;
        if (*(char *)((long)puVar4 + 10) != '\0') {
          iVar13 = 0x1c;
        }
        puVar4 = (uint *)((ulong)(puVar4[1] * param_3 + (uint)(ushort)puVar4[2] * 8 + iVar13) +
                         (long)puVar4);
        goto joined_r0x0090da1c;
      }
    }
    else if (param_3 < *(uint *)(lVar8 + 0x1c0)) {
      if (*(uint *)(lVar8 + 0x1b0) <= param_3) {
        param_3 = 0;
      }
      puVar4 = *(uint **)(*(long *)(lVar8 + 0x1b8) + (ulong)param_3 * 8);
joined_r0x0090da1c:
      if (puVar4 != (uint *)0x0) {
        uVar5 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        *(undefined2 *)param_1 = 0xffff;
        param_1[1] = puVar1;
        param_1[2] = uVar5;
        param_1[3] = 0;
        param_1[4] = 0x3f80000000000000;
        param_1[5] = 0;
        param_1[6] = 0x3f80000000000000;
        param_1[7] = 0;
        param_1[8] = 0x3f80000000000000;
        param_1[9] = 0;
        param_1[10] = 0x3f80000000000000;
        puVar9 = (uint *)(ulong)*puVar4;
        if (*puVar4 == 0) {
          *(undefined2 *)param_1 = 0;
LAB_0090dabc:
          param_1[2] = &DAT_0407ebb1;
          uVar16 = 0;
        }
        else {
          if ((DAT_04cf01a0 & 1) == 0) {
            DAT_04cf01a0 = 1;
            DAT_04cf01d4 = 0xffffffffffffffff;
            DAT_04cf01a4 = -1;
            DAT_04cf01ac = 0xffffffffffffffff;
            DAT_04cf01d4._0_4_ = 0xffffffff;
            DAT_04cf01dc = 0xffffffff;
            DAT_04cf01b4 = -1;
            DAT_04cf01bc = -1;
            DAT_04cf01c4 = -1;
            DAT_04cf01cc = 0xffffffffffffffff;
LAB_0090da8c:
            uVar15 = (uint)DAT_04cf01d4;
            if (puVar4 == puVar9) {
LAB_0090da94:
              uVar7 = 0;
            }
            else {
              do {
                if (uVar15 != 0xffffffff) goto LAB_0090da94;
                lVar8 = 0xc;
                if (*(char *)((long)puVar4 + (10 - (long)puVar9)) != '\0') {
                  lVar8 = 0x1c;
                }
                lVar8 = (long)puVar4 + (lVar8 - (long)puVar9);
                if (lVar8 == 0) goto LAB_0090da94;
                uVar12 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar9));
                DAT_04cf01d4 = CONCAT44(DAT_04cf01d4._4_4_,0xfffffffe);
                if (uVar12 == 0) goto LAB_0090da94;
                puVar3 = (uint *)(lVar8 + 4);
                while (puVar3[-1] != 0x54706054) {
                  puVar3 = puVar3 + 2;
                  uVar12 = uVar12 - 1;
                  if (uVar12 == 0) goto LAB_0090da94;
                }
                uVar15 = *puVar3;
                uVar14 = 0;
                if (uVar15 != 0xffffffff) {
                  uVar14 = uVar15;
                }
                DAT_04cf01d4 = CONCAT44(DAT_04cf01d4._4_4_,uVar14);
              } while ((int)uVar14 < 0);
              puVar10 = (undefined2 *)((long)puVar4 + (ulong)uVar14);
              if (puVar10 != (undefined2 *)0x0) goto LAB_0090d9ac;
              uVar7 = 0;
            }
          }
          else {
            if ((int)(uint)DAT_04cf01d4 < 0) goto LAB_0090da8c;
            puVar10 = (undefined2 *)((long)puVar4 + (DAT_04cf01d4 & 0xffffffff));
            uVar7 = 0;
            if (puVar10 != (undefined2 *)0x0) {
LAB_0090d9ac:
              uVar7 = *puVar10;
            }
          }
          uVar15 = *puVar4;
          puVar9 = (uint *)(ulong)uVar15;
          *(undefined2 *)param_1 = uVar7;
          if (uVar15 == 0) goto LAB_0090dabc;
          if ((int)DAT_04cf01dc < 0) {
            uVar15 = DAT_04cf01dc;
            if (puVar4 != puVar9) {
              do {
                if (uVar15 != 0xffffffff) goto LAB_0090dd98;
                lVar8 = 0xc;
                if (*(char *)((long)puVar4 + (10 - (long)puVar9)) != '\0') {
                  lVar8 = 0x1c;
                }
                lVar8 = (long)puVar4 + (lVar8 - (long)puVar9);
                if (lVar8 == 0) goto LAB_0090dd98;
                uVar12 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar9));
                DAT_04cf01dc = 0xfffffffe;
                if (uVar12 == 0) goto LAB_0090dd98;
                puVar3 = (uint *)(lVar8 + 4);
                while (puVar3[-1] != 0x977adfce) {
                  puVar3 = puVar3 + 2;
                  uVar12 = uVar12 - 1;
                  if (uVar12 == 0) goto LAB_0090dd98;
                }
                uVar15 = *puVar3;
                DAT_04cf01dc = 0;
                if (uVar15 != 0xffffffff) {
                  DAT_04cf01dc = uVar15;
                }
              } while ((int)DAT_04cf01dc < 0);
              goto LAB_0090dab4;
            }
LAB_0090dd98:
            puVar11 = (undefined8 *)0x0;
          }
          else {
LAB_0090dab4:
            puVar11 = (undefined8 *)((long)puVar4 + (ulong)DAT_04cf01dc);
          }
          uVar15 = *puVar4;
          puVar9 = (uint *)(ulong)uVar15;
          uVar16 = 0;
          puVar2 = &DAT_0407ebb1;
          if (puVar11 != (undefined8 *)0x0) {
            puVar2 = puVar11;
          }
          param_1[2] = puVar2;
          if (uVar15 != 0) {
            if ((int)(uint)DAT_04cf01c4 < 0) {
              uVar15 = (uint)DAT_04cf01c4;
              if (puVar4 == puVar9) goto LAB_0090dac4;
              do {
                if (uVar15 != 0xffffffff) goto LAB_0090dac4;
                lVar8 = 0xc;
                if (*(char *)((long)puVar4 + (10 - (long)puVar9)) != '\0') {
                  lVar8 = 0x1c;
                }
                lVar8 = (long)puVar4 + (lVar8 - (long)puVar9);
                if (lVar8 == 0) goto LAB_0090dac4;
                uVar12 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar9));
                DAT_04cf01c4 = CONCAT44(DAT_04cf01c4._4_4_,0xfffffffe);
                if (uVar12 == 0) goto LAB_0090dac4;
                puVar3 = (uint *)(lVar8 + 4);
                while (puVar3[-1] != 0x4d4e9d26) {
                  puVar3 = puVar3 + 2;
                  uVar12 = uVar12 - 1;
                  if (uVar12 == 0) goto LAB_0090dac4;
                }
                uVar15 = *puVar3;
                uVar14 = 0;
                if (uVar15 != 0xffffffff) {
                  uVar14 = uVar15;
                }
                DAT_04cf01c4 = CONCAT44(DAT_04cf01c4._4_4_,uVar14);
              } while ((int)uVar14 < 0);
            }
            else {
              uVar14 = (uint)DAT_04cf01c4;
            }
            if ((undefined4 *)((long)puVar4 + (ulong)uVar14) != (undefined4 *)0x0) {
              uVar16 = *(undefined4 *)((long)puVar4 + (ulong)uVar14);
            }
          }
        }
LAB_0090dac4:
        puVar9 = (uint *)(ulong)*puVar4;
        uVar18 = 0;
        uVar19 = 0;
        uVar17 = 0;
        if (*puVar4 == 0) {
LAB_0090dbdc:
          *(undefined4 *)(param_1 + 3) = uVar16;
          *(undefined4 *)((long)param_1 + 0x1c) = uVar17;
          param_1[4] = 0x3f80000000000000;
        }
        else {
          if ((DAT_04cf01a0 & 1) == 0) {
            DAT_04cf01a0 = 1;
            DAT_04cf01d4 = 0xffffffffffffffff;
            DAT_04cf01a4 = -1;
            DAT_04cf01ac = 0xffffffffffffffff;
            DAT_04cf01bc._4_4_ = 0xffffffff;
            DAT_04cf01dc = 0xffffffff;
            DAT_04cf01b4 = -1;
            DAT_04cf01bc = -1;
            DAT_04cf01c4 = -1;
            DAT_04cf01cc = 0xffffffffffffffff;
LAB_0090db24:
            uVar15 = DAT_04cf01bc._4_4_;
            uVar17 = uVar19;
            if (puVar4 != puVar9) {
              do {
                if (uVar15 != 0xffffffff) goto LAB_0090dbb4;
                lVar8 = 0xc;
                if (*(char *)((long)puVar4 + (10 - (long)puVar9)) != '\0') {
                  lVar8 = 0x1c;
                }
                lVar8 = (long)puVar4 + (lVar8 - (long)puVar9);
                if (lVar8 == 0) goto LAB_0090dbb4;
                uVar12 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar9));
                DAT_04cf01bc = CONCAT44(0xfffffffe,(uint)DAT_04cf01bc);
                if (uVar12 == 0) goto LAB_0090dbb4;
                puVar3 = (uint *)(lVar8 + 4);
                while (puVar3[-1] != 0xe54e85d4) {
                  puVar3 = puVar3 + 2;
                  uVar12 = uVar12 - 1;
                  if (uVar12 == 0) goto LAB_0090dbb4;
                }
                uVar15 = *puVar3;
                uVar14 = 0;
                if (uVar15 != 0xffffffff) {
                  uVar14 = uVar15;
                }
                DAT_04cf01bc = CONCAT44(uVar14,(uint)DAT_04cf01bc);
              } while ((int)uVar14 < 0);
              puVar6 = (undefined4 *)((long)puVar4 + (ulong)uVar14);
              if (puVar6 != (undefined4 *)0x0) goto LAB_0090daf0;
LAB_0090dbb0:
              uVar17 = 0;
            }
          }
          else {
            if (DAT_04cf01bc < 0) goto LAB_0090db24;
            puVar6 = (undefined4 *)((long)puVar4 + (ulong)DAT_04cf01bc._4_4_);
            if (puVar6 == (undefined4 *)0x0) goto LAB_0090dbb0;
LAB_0090daf0:
            uVar17 = *puVar6;
          }
LAB_0090dbb4:
          puVar9 = (uint *)(ulong)*puVar4;
          if (*puVar4 == 0) goto LAB_0090dbdc;
          if ((int)(uint)DAT_04cf01bc < 0) {
            uVar18 = 0;
            uVar15 = (uint)DAT_04cf01bc;
            if (puVar4 != puVar9) {
              do {
                if (uVar15 != 0xffffffff) goto LAB_0090e028;
                lVar8 = 0xc;
                if (*(char *)((long)puVar4 + (10 - (long)puVar9)) != '\0') {
                  lVar8 = 0x1c;
                }
                lVar8 = (long)puVar4 + (lVar8 - (long)puVar9);
                if (lVar8 == 0) goto LAB_0090e028;
                uVar12 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar9));
                DAT_04cf01bc = CONCAT44(DAT_04cf01bc._4_4_,0xfffffffe);
                if (uVar12 == 0) goto LAB_0090e028;
                puVar3 = (uint *)(lVar8 + 4);
                while (puVar3[-1] != 0x2dae0aa4) {
                  puVar3 = puVar3 + 2;
                  uVar12 = uVar12 - 1;
                  if (uVar12 == 0) goto LAB_0090e028;
                }
                uVar15 = *puVar3;
                uVar14 = 0;
                if (uVar15 != 0xffffffff) {
                  uVar14 = uVar15;
                }
                DAT_04cf01bc = CONCAT44(DAT_04cf01bc._4_4_,uVar14);
              } while ((int)uVar14 < 0);
              goto LAB_0090dbcc;
            }
          }
          else {
            uVar14 = (uint)DAT_04cf01bc;
LAB_0090dbcc:
            if ((undefined4 *)((long)puVar4 + (ulong)uVar14) == (undefined4 *)0x0) {
              uVar18 = 0;
            }
            else {
              uVar18 = *(undefined4 *)((long)puVar4 + (ulong)uVar14);
            }
          }
LAB_0090e028:
          uVar15 = *puVar4;
          puVar9 = (uint *)(ulong)uVar15;
          *(undefined4 *)(param_1 + 4) = uVar18;
          uVar18 = 0;
          *(undefined4 *)(param_1 + 3) = uVar16;
          *(undefined4 *)((long)param_1 + 0x1c) = uVar17;
          *(undefined4 *)((long)param_1 + 0x24) = 0x3f800000;
          if (uVar15 != 0) {
            if ((long)DAT_04cf01cc < 0) {
              uVar15 = DAT_04cf01cc._4_4_;
              if (puVar4 == puVar9) goto LAB_0090dbec;
              do {
                if (uVar15 != 0xffffffff) goto LAB_0090dbec;
                lVar8 = 0xc;
                if (*(char *)((long)puVar4 + (10 - (long)puVar9)) != '\0') {
                  lVar8 = 0x1c;
                }
                lVar8 = (long)puVar4 + (lVar8 - (long)puVar9);
                if (lVar8 == 0) goto LAB_0090dbec;
                uVar12 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar9));
                DAT_04cf01cc = CONCAT44(0xfffffffe,(uint)DAT_04cf01cc);
                if (uVar12 == 0) goto LAB_0090dbec;
                puVar3 = (uint *)(lVar8 + 4);
                while (puVar3[-1] != 0x3ab25276) {
                  puVar3 = puVar3 + 2;
                  uVar12 = uVar12 - 1;
                  if (uVar12 == 0) goto LAB_0090dbec;
                }
                uVar15 = *puVar3;
                uVar14 = 0;
                if (uVar15 != 0xffffffff) {
                  uVar14 = uVar15;
                }
                DAT_04cf01cc = CONCAT44(uVar14,(uint)DAT_04cf01cc);
              } while ((int)uVar14 < 0);
            }
            else {
              uVar14 = DAT_04cf01cc._4_4_;
            }
            if ((undefined4 *)((long)puVar4 + (ulong)uVar14) != (undefined4 *)0x0) {
              uVar18 = *(undefined4 *)((long)puVar4 + (ulong)uVar14);
            }
          }
        }
LAB_0090dbec:
        puVar9 = (uint *)(ulong)*puVar4;
        uVar17 = 0;
        uVar19 = 0;
        uVar16 = 0;
        uVar20 = 0;
        if (*puVar4 != 0) {
          if ((DAT_04cf01a0 & 1) == 0) {
            DAT_04cf01a0 = 1;
            DAT_04cf01d4 = 0xffffffffffffffff;
            DAT_04cf01a4 = -1;
            DAT_04cf01ac = 0xffffffffffffffff;
            DAT_04cf01cc._0_4_ = 0xffffffff;
            DAT_04cf01dc = 0xffffffff;
            DAT_04cf01b4 = -1;
            DAT_04cf01bc = -1;
            DAT_04cf01c4 = -1;
            DAT_04cf01cc = 0xffffffffffffffff;
LAB_0090dc50:
            uVar15 = (uint)DAT_04cf01cc;
            uVar16 = uVar19;
            if (puVar4 != puVar9) {
              do {
                if (uVar15 != 0xffffffff) goto LAB_0090dce0;
                lVar8 = 0xc;
                if (*(char *)((long)puVar4 + (10 - (long)puVar9)) != '\0') {
                  lVar8 = 0x1c;
                }
                lVar8 = (long)puVar4 + (lVar8 - (long)puVar9);
                if (lVar8 == 0) goto LAB_0090dce0;
                uVar12 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar9));
                DAT_04cf01cc = CONCAT44(DAT_04cf01cc._4_4_,0xfffffffe);
                if (uVar12 == 0) goto LAB_0090dce0;
                puVar3 = (uint *)(lVar8 + 4);
                while (puVar3[-1] != 0x92b24a84) {
                  puVar3 = puVar3 + 2;
                  uVar12 = uVar12 - 1;
                  if (uVar12 == 0) goto LAB_0090dce0;
                }
                uVar15 = *puVar3;
                uVar14 = 0;
                if (uVar15 != 0xffffffff) {
                  uVar14 = uVar15;
                }
                DAT_04cf01cc = CONCAT44(DAT_04cf01cc._4_4_,uVar14);
              } while ((int)uVar14 < 0);
              puVar6 = (undefined4 *)((long)puVar4 + (ulong)uVar14);
              if (puVar6 != (undefined4 *)0x0) goto LAB_0090dc1c;
LAB_0090dcdc:
              uVar16 = 0;
            }
          }
          else {
            if ((int)(uint)DAT_04cf01cc < 0) goto LAB_0090dc50;
            puVar6 = (undefined4 *)((long)puVar4 + (DAT_04cf01cc & 0xffffffff));
            if (puVar6 == (undefined4 *)0x0) goto LAB_0090dcdc;
LAB_0090dc1c:
            uVar16 = *puVar6;
          }
LAB_0090dce0:
          puVar9 = (uint *)(ulong)*puVar4;
          if (*puVar4 != 0) {
            if (DAT_04cf01c4 < 0) {
              uVar15 = DAT_04cf01c4._4_4_;
              if (puVar4 == puVar9) goto LAB_0090de60;
              do {
                if (uVar15 != 0xffffffff) goto LAB_0090de60;
                lVar8 = 0xc;
                if (*(char *)((long)puVar4 + (10 - (long)puVar9)) != '\0') {
                  lVar8 = 0x1c;
                }
                lVar8 = (long)puVar4 + (lVar8 - (long)puVar9);
                if (lVar8 == 0) goto LAB_0090de60;
                uVar12 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar9));
                DAT_04cf01c4 = CONCAT44(0xfffffffe,(uint)DAT_04cf01c4);
                if (uVar12 == 0) goto LAB_0090de60;
                puVar3 = (uint *)(lVar8 + 4);
                while (puVar3[-1] != 0x5a52c5f4) {
                  puVar3 = puVar3 + 2;
                  uVar12 = uVar12 - 1;
                  if (uVar12 == 0) goto LAB_0090de60;
                }
                uVar15 = *puVar3;
                uVar14 = 0;
                if (uVar15 != 0xffffffff) {
                  uVar14 = uVar15;
                }
                DAT_04cf01c4 = CONCAT44(uVar14,(uint)DAT_04cf01c4);
              } while ((int)uVar14 < 0);
            }
            else {
              uVar14 = DAT_04cf01c4._4_4_;
            }
            if ((undefined4 *)((long)puVar4 + (ulong)uVar14) != (undefined4 *)0x0) {
              uVar20 = *(undefined4 *)((long)puVar4 + (ulong)uVar14);
              goto LAB_0090de64;
            }
          }
LAB_0090de60:
          uVar20 = 0;
        }
LAB_0090de64:
        *(undefined4 *)(param_1 + 5) = uVar18;
        *(undefined4 *)((long)param_1 + 0x2c) = uVar16;
        *(undefined4 *)(param_1 + 6) = uVar20;
        *(undefined4 *)((long)param_1 + 0x34) = 0x3f800000;
        puVar9 = (uint *)(ulong)*puVar4;
        if (*puVar4 == 0) {
          uVar18 = 0;
          uVar16 = 0;
        }
        else {
          if ((DAT_04cf01a0 & 1) == 0) {
            DAT_04cf01a0 = 1;
            DAT_04cf01d4 = 0xffffffffffffffff;
            DAT_04cf01a4 = -1;
            DAT_04cf01ac = 0xffffffffffffffff;
            DAT_04cf01b4._4_4_ = 0xffffffff;
            DAT_04cf01dc = 0xffffffff;
            DAT_04cf01b4 = -1;
            DAT_04cf01bc = -1;
            DAT_04cf01c4 = -1;
            DAT_04cf01cc = 0xffffffffffffffff;
LAB_0090dedc:
            uVar16 = 0;
            uVar15 = DAT_04cf01b4._4_4_;
            if (puVar4 != puVar9) {
              do {
                if (uVar15 != 0xffffffff) goto LAB_0090df70;
                lVar8 = 0xc;
                if (*(char *)((long)puVar4 + (10 - (long)puVar9)) != '\0') {
                  lVar8 = 0x1c;
                }
                lVar8 = (long)puVar4 + (lVar8 - (long)puVar9);
                if (lVar8 == 0) goto LAB_0090df70;
                uVar12 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar9));
                DAT_04cf01b4 = CONCAT44(0xfffffffe,(uint)DAT_04cf01b4);
                if (uVar12 == 0) goto LAB_0090df70;
                puVar3 = (uint *)(lVar8 + 4);
                while (puVar3[-1] != 0x58ae1fae) {
                  puVar3 = puVar3 + 2;
                  uVar12 = uVar12 - 1;
                  if (uVar12 == 0) goto LAB_0090df70;
                }
                uVar15 = *puVar3;
                uVar14 = 0;
                if (uVar15 != 0xffffffff) {
                  uVar14 = uVar15;
                }
                DAT_04cf01b4 = CONCAT44(uVar14,(uint)DAT_04cf01b4);
              } while ((int)uVar14 < 0);
              puVar6 = (undefined4 *)((long)puVar4 + (ulong)uVar14);
              if (puVar6 != (undefined4 *)0x0) goto LAB_0090de9c;
LAB_0090df6c:
              uVar16 = 0;
            }
          }
          else {
            if (DAT_04cf01b4 < 0) goto LAB_0090dedc;
            puVar6 = (undefined4 *)((long)puVar4 + (ulong)DAT_04cf01b4._4_4_);
            if (puVar6 == (undefined4 *)0x0) goto LAB_0090df6c;
LAB_0090de9c:
            uVar16 = *puVar6;
          }
LAB_0090df70:
          puVar9 = (uint *)(ulong)*puVar4;
          if (*puVar4 == 0) {
            uVar18 = 0;
          }
          else {
            if ((int)(uint)DAT_04cf01b4 < 0) {
              uVar18 = 0;
              uVar15 = (uint)DAT_04cf01b4;
              if (puVar4 != puVar9) {
                do {
                  if (uVar15 != 0xffffffff) goto LAB_0090e06c;
                  lVar8 = 0xc;
                  if (*(char *)((long)puVar4 + (10 - (long)puVar9)) != '\0') {
                    lVar8 = 0x1c;
                  }
                  lVar8 = (long)puVar4 + (lVar8 - (long)puVar9);
                  if (lVar8 == 0) goto LAB_0090e06c;
                  uVar12 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar9));
                  DAT_04cf01b4 = CONCAT44(DAT_04cf01b4._4_4_,0xfffffffe);
                  if (uVar12 == 0) goto LAB_0090e06c;
                  puVar3 = (uint *)(lVar8 + 4);
                  while (puVar3[-1] != 0xf0ae075c) {
                    puVar3 = puVar3 + 2;
                    uVar12 = uVar12 - 1;
                    if (uVar12 == 0) goto LAB_0090e06c;
                  }
                  uVar15 = *puVar3;
                  uVar14 = 0;
                  if (uVar15 != 0xffffffff) {
                    uVar14 = uVar15;
                  }
                  DAT_04cf01b4 = CONCAT44(DAT_04cf01b4._4_4_,uVar14);
                } while ((int)uVar14 < 0);
                goto LAB_0090df88;
              }
            }
            else {
              uVar14 = (uint)DAT_04cf01b4;
LAB_0090df88:
              if ((undefined4 *)((long)puVar4 + (ulong)uVar14) == (undefined4 *)0x0) {
                uVar18 = 0;
              }
              else {
                uVar18 = *(undefined4 *)((long)puVar4 + (ulong)uVar14);
              }
            }
LAB_0090e06c:
            puVar9 = (uint *)(ulong)*puVar4;
            if (*puVar4 != 0) {
              if ((long)DAT_04cf01ac < 0) {
                uVar15 = DAT_04cf01ac._4_4_;
                if (puVar4 == puVar9) goto LAB_0090e19c;
                do {
                  if (uVar15 != 0xffffffff) goto LAB_0090e19c;
                  lVar8 = 0xc;
                  if (*(char *)((long)puVar4 + (10 - (long)puVar9)) != '\0') {
                    lVar8 = 0x1c;
                  }
                  lVar8 = (long)puVar4 + (lVar8 - (long)puVar9);
                  if (lVar8 == 0) goto LAB_0090e19c;
                  uVar12 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar9));
                  DAT_04cf01ac = CONCAT44(0xfffffffe,(uint)DAT_04cf01ac);
                  if (uVar12 == 0) goto LAB_0090e19c;
                  puVar3 = (uint *)(lVar8 + 4);
                  while (puVar3[-1] != 0x384e882c) {
                    puVar3 = puVar3 + 2;
                    uVar12 = uVar12 - 1;
                    if (uVar12 == 0) goto LAB_0090e19c;
                  }
                  uVar15 = *puVar3;
                  uVar14 = 0;
                  if (uVar15 != 0xffffffff) {
                    uVar14 = uVar15;
                  }
                  DAT_04cf01ac = CONCAT44(uVar14,(uint)DAT_04cf01ac);
                } while ((int)uVar14 < 0);
              }
              else {
                uVar14 = DAT_04cf01ac._4_4_;
              }
              if ((undefined4 *)((long)puVar4 + (ulong)uVar14) != (undefined4 *)0x0) {
                uVar17 = *(undefined4 *)((long)puVar4 + (ulong)uVar14);
              }
            }
          }
        }
LAB_0090e19c:
        *(undefined4 *)(param_1 + 7) = uVar16;
        *(undefined4 *)((long)param_1 + 0x3c) = uVar18;
        *(undefined4 *)(param_1 + 8) = uVar17;
        uVar16 = 0;
        *(undefined4 *)((long)param_1 + 0x44) = 0x3f800000;
        puVar9 = (uint *)(ulong)*puVar4;
        if (*puVar4 == 0) {
          uVar18 = 0;
          uVar17 = 0;
        }
        else {
          if ((DAT_04cf01a0 & 1) == 0) {
            DAT_04cf01ac._0_4_ = 0xffffffff;
            DAT_04cf01a0 = 1;
            DAT_04cf01a4 = -1;
            DAT_04cf01ac = 0xffffffffffffffff;
            DAT_04cf01d4 = 0xffffffffffffffff;
            DAT_04cf01dc = 0xffffffff;
            DAT_04cf01b4 = -1;
            DAT_04cf01bc = -1;
            DAT_04cf01c4 = -1;
            DAT_04cf01cc = 0xffffffffffffffff;
LAB_0090e218:
            uVar17 = 0;
            uVar15 = (uint)DAT_04cf01ac;
            if (puVar4 != puVar9) {
              do {
                if (uVar15 != 0xffffffff) goto LAB_0090e2b0;
                lVar8 = 0xc;
                if (*(char *)((long)puVar4 + (10 - (long)puVar9)) != '\0') {
                  lVar8 = 0x1c;
                }
                lVar8 = (long)puVar4 + (lVar8 - (long)puVar9);
                if (lVar8 == 0) goto LAB_0090e2b0;
                uVar12 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar9));
                DAT_04cf01ac = CONCAT44(DAT_04cf01ac._4_4_,0xfffffffe);
                if (uVar12 == 0) goto LAB_0090e2b0;
                puVar3 = (uint *)(lVar8 + 4);
                while (puVar3[-1] != 0xa2bc4bf1) {
                  puVar3 = puVar3 + 2;
                  uVar12 = uVar12 - 1;
                  if (uVar12 == 0) goto LAB_0090e2b0;
                }
                uVar15 = *puVar3;
                uVar14 = 0;
                if (uVar15 != 0xffffffff) {
                  uVar14 = uVar15;
                }
                DAT_04cf01ac = CONCAT44(DAT_04cf01ac._4_4_,uVar14);
              } while ((int)uVar14 < 0);
              puVar6 = (undefined4 *)((long)puVar4 + (ulong)uVar14);
              if (puVar6 != (undefined4 *)0x0) goto LAB_0090e1d8;
LAB_0090e2ac:
              uVar17 = 0;
            }
          }
          else {
            if ((int)(uint)DAT_04cf01ac < 0) goto LAB_0090e218;
            puVar6 = (undefined4 *)((long)puVar4 + (DAT_04cf01ac & 0xffffffff));
            if (puVar6 == (undefined4 *)0x0) goto LAB_0090e2ac;
LAB_0090e1d8:
            uVar17 = *puVar6;
          }
LAB_0090e2b0:
          puVar9 = (uint *)(ulong)*puVar4;
          if (*puVar4 == 0) {
            uVar18 = 0;
          }
          else {
            if (DAT_04cf01a4 < 0) {
              uVar18 = 0;
              uVar15 = DAT_04cf01a4._4_4_;
              if (puVar4 != puVar9) {
                do {
                  if (uVar15 != 0xffffffff) goto LAB_0090e368;
                  lVar8 = 0xc;
                  if (*(char *)((long)puVar4 + (10 - (long)puVar9)) != '\0') {
                    lVar8 = 0x1c;
                  }
                  lVar8 = (long)puVar4 + (lVar8 - (long)puVar9);
                  if (lVar8 == 0) goto LAB_0090e368;
                  uVar12 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar9));
                  DAT_04cf01a4 = CONCAT44(0xfffffffe,(uint)DAT_04cf01a4);
                  if (uVar12 == 0) goto LAB_0090e368;
                  puVar3 = (uint *)(lVar8 + 4);
                  while (puVar3[-1] != 0xabc5303) {
                    puVar3 = puVar3 + 2;
                    uVar12 = uVar12 - 1;
                    if (uVar12 == 0) goto LAB_0090e368;
                  }
                  uVar15 = *puVar3;
                  uVar14 = 0;
                  if (uVar15 != 0xffffffff) {
                    uVar14 = uVar15;
                  }
                  DAT_04cf01a4 = CONCAT44(uVar14,(uint)DAT_04cf01a4);
                } while ((int)uVar14 < 0);
                goto LAB_0090e2c8;
              }
            }
            else {
              uVar14 = DAT_04cf01a4._4_4_;
LAB_0090e2c8:
              if ((undefined4 *)((long)puVar4 + (ulong)uVar14) == (undefined4 *)0x0) {
                uVar18 = 0;
              }
              else {
                uVar18 = *(undefined4 *)((long)puVar4 + (ulong)uVar14);
              }
            }
LAB_0090e368:
            puVar9 = (uint *)(ulong)*puVar4;
            if (*puVar4 != 0) {
              uVar15 = (uint)DAT_04cf01a4;
              if ((int)(uint)DAT_04cf01a4 < 0) {
                if (((uint)DAT_04cf01a4 == 0xffffffff) && (puVar4 != puVar9)) {
                  lVar8 = 0xc;
                  if (*(char *)((long)puVar4 + (10 - (long)puVar9)) != '\0') {
                    lVar8 = 0x1c;
                  }
                  lVar8 = (long)puVar4 + (lVar8 - (long)puVar9);
                  if (lVar8 != 0) {
                    uVar12 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar9));
                    DAT_04cf01a4 = CONCAT44(DAT_04cf01a4._4_4_,0xfffffffe);
                    if (uVar12 != 0) {
                      puVar9 = (uint *)(lVar8 + 4);
                      do {
                        if (puVar9[-1] == 0xc25cdc73) {
                          uVar15 = 0;
                          if (*puVar9 != 0xffffffff) {
                            uVar15 = *puVar9;
                          }
                          DAT_04cf01a4 = CONCAT44(DAT_04cf01a4._4_4_,uVar15);
                          if (-1 < (int)uVar15) goto LAB_0090e37c;
                          break;
                        }
                        puVar9 = puVar9 + 2;
                        uVar12 = uVar12 - 1;
                      } while (uVar12 != 0);
                    }
                  }
                }
              }
              else {
LAB_0090e37c:
                if ((undefined4 *)((long)puVar4 + (ulong)uVar15) != (undefined4 *)0x0) {
                  uVar16 = *(undefined4 *)((long)puVar4 + (ulong)uVar15);
                }
              }
            }
          }
        }
        *(undefined4 *)(param_1 + 9) = uVar17;
        *(undefined4 *)((long)param_1 + 0x4c) = uVar18;
        *(undefined4 *)(param_1 + 10) = uVar16;
        goto LAB_0090da4c;
      }
    }
  }
  uVar5 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  *param_1 = 0xffff;
  param_1[1] = puVar1;
  param_1[4] = 0x3f80000000000000;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[6] = 0x3f80000000000000;
  param_1[7] = 0;
  param_1[2] = uVar5;
  param_1[3] = 0;
  param_1[8] = 0x3f80000000000000;
  param_1[9] = 0;
LAB_0090da4c:
  *(undefined4 *)((long)param_1 + 0x54) = 0x3f800000;
  return;
}

