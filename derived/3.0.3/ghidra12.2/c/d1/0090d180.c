
void FUN_0090d180(undefined8 *param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined2 uVar10;
  uint *puVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  puVar3 = PTR_PTR_04bb2238;
  puVar1 = PTR_DAT_04bb2020;
  lVar6 = *(long *)(param_2 + 0x10);
  if (lVar6 != 0) {
    if ((int)*(uint *)(lVar6 + 0x1c0) < 1) {
      if ((((*(long *)(lVar6 + 0xb0) != 0) &&
           (puVar5 = *(uint **)(*(long *)(lVar6 + 0xb0) + 8), puVar5 != (uint *)0x0)) &&
          ((*(uint *)(lVar6 + 200) <= param_3 ||
           (*(char *)(*(long *)(lVar6 + 0xd0) + (long)(int)param_3) != '\0')))) &&
         (((param_3 < *puVar5 && (puVar5[1] != 0)) && ((ushort)puVar5[2] != 0)))) {
        iVar9 = 0xc;
        if (*(char *)((long)puVar5 + 10) != '\0') {
          iVar9 = 0x1c;
        }
        puVar5 = (uint *)((ulong)(puVar5[1] * param_3 + (uint)(ushort)puVar5[2] * 8 + iVar9) +
                         (long)puVar5);
        goto joined_r0x0090d27c;
      }
    }
    else if (param_3 < *(uint *)(lVar6 + 0x1c0)) {
      if (*(uint *)(lVar6 + 0x1b0) <= param_3) {
        param_3 = 0;
      }
      puVar5 = *(uint **)(*(long *)(lVar6 + 0x1b8) + (ulong)param_3 * 8);
joined_r0x0090d27c:
      if (puVar5 != (uint *)0x0) {
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        uVar7 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
        uVar16 = *puVar5;
        puVar11 = (uint *)(ulong)uVar16;
        param_1[3] = 0;
        param_1[4] = 0x3f80000000000000;
        param_1[5] = 0;
        param_1[6] = 0x3f80000000000000;
        param_1[1] = puVar1;
        param_1[2] = uVar7;
        if (uVar16 == 0) {
          *(undefined2 *)param_1 = 0;
LAB_0090d31c:
          param_1[2] = &DAT_0407ebb1;
LAB_0090d320:
          uVar17 = 0;
LAB_0090d324:
          puVar11 = (uint *)(ulong)*puVar5;
          if (*puVar5 == 0) goto LAB_0090d504;
          if ((DAT_04cf0178 & 1) == 0) {
            DAT_04cf0178 = 1;
            DAT_04cf019c = 0xffffffff;
            DAT_04cf017c = -1;
            DAT_04cf0184 = -1;
            DAT_04cf017c._4_4_ = 0xffffffff;
            DAT_04cf018c = 0xffffffffffffffff;
            DAT_04cf0194 = 0xffffffffffffffff;
LAB_0090d374:
            uVar18 = 0;
            uVar16 = DAT_04cf017c._4_4_;
            if (puVar5 != puVar11) {
              do {
                if (uVar16 != 0xffffffff) goto LAB_0090d410;
                lVar6 = 0xc;
                if (*(char *)((long)puVar5 + (10 - (long)puVar11)) != '\0') {
                  lVar6 = 0x1c;
                }
                lVar6 = (long)puVar5 + (lVar6 - (long)puVar11);
                if (lVar6 == 0) goto LAB_0090d410;
                uVar14 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar11));
                DAT_04cf017c = CONCAT44(0xfffffffe,(uint)DAT_04cf017c);
                if (uVar14 == 0) goto LAB_0090d410;
                puVar4 = (uint *)(lVar6 + 4);
                while (puVar4[-1] != 0xa05e5f9f) {
                  puVar4 = puVar4 + 2;
                  uVar14 = uVar14 - 1;
                  if (uVar14 == 0) goto LAB_0090d410;
                }
                uVar16 = *puVar4;
                uVar15 = 0;
                if (uVar16 != 0xffffffff) {
                  uVar15 = uVar16;
                }
                DAT_04cf017c = CONCAT44(uVar15,(uint)DAT_04cf017c);
              } while ((int)uVar15 < 0);
              puVar8 = (undefined4 *)((long)puVar5 + (ulong)uVar15);
              if (puVar8 != (undefined4 *)0x0) goto LAB_0090d348;
LAB_0090d40c:
              uVar18 = 0;
            }
          }
          else {
            if (DAT_04cf017c < 0) goto LAB_0090d374;
            puVar8 = (undefined4 *)((long)puVar5 + (ulong)DAT_04cf017c._4_4_);
            if (puVar8 == (undefined4 *)0x0) goto LAB_0090d40c;
LAB_0090d348:
            uVar18 = *puVar8;
          }
LAB_0090d410:
          puVar11 = (uint *)(ulong)*puVar5;
          if (*puVar5 == 0) goto LAB_0090d508;
          if ((int)(uint)DAT_04cf017c < 0) {
            uVar19 = 0;
            uVar16 = (uint)DAT_04cf017c;
            if (puVar5 != puVar11) {
              do {
                if (uVar16 != 0xffffffff) goto LAB_0090d7bc;
                lVar6 = 0xc;
                if (*(char *)((long)puVar5 + (10 - (long)puVar11)) != '\0') {
                  lVar6 = 0x1c;
                }
                lVar6 = (long)puVar5 + (lVar6 - (long)puVar11);
                if (lVar6 == 0) goto LAB_0090d7bc;
                uVar14 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar11));
                DAT_04cf017c = CONCAT44(DAT_04cf017c._4_4_,0xfffffffe);
                if (uVar14 == 0) goto LAB_0090d7bc;
                puVar4 = (uint *)(lVar6 + 4);
                while (puVar4[-1] != 0x68bed0ef) {
                  puVar4 = puVar4 + 2;
                  uVar14 = uVar14 - 1;
                  if (uVar14 == 0) goto LAB_0090d7bc;
                }
                uVar16 = *puVar4;
                uVar15 = 0;
                if (uVar16 != 0xffffffff) {
                  uVar15 = uVar16;
                }
                DAT_04cf017c = CONCAT44(DAT_04cf017c._4_4_,uVar15);
              } while ((int)uVar15 < 0);
              goto LAB_0090d428;
            }
          }
          else {
            uVar15 = (uint)DAT_04cf017c;
LAB_0090d428:
            if ((undefined4 *)((long)puVar5 + (ulong)uVar15) == (undefined4 *)0x0) {
              uVar19 = 0;
            }
            else {
              uVar19 = *(undefined4 *)((long)puVar5 + (ulong)uVar15);
            }
          }
LAB_0090d7bc:
          uVar16 = *puVar5;
          puVar11 = (uint *)(ulong)uVar16;
          *(undefined4 *)(param_1 + 3) = uVar17;
          uVar17 = 0;
          *(undefined4 *)((long)param_1 + 0x1c) = uVar18;
          *(undefined4 *)(param_1 + 4) = uVar19;
          *(undefined4 *)((long)param_1 + 0x24) = 0x3f800000;
          if (uVar16 != 0) {
            if ((long)DAT_04cf018c < 0) {
              uVar16 = DAT_04cf018c._4_4_;
              if (puVar5 == puVar11) goto LAB_0090d518;
              do {
                if (uVar16 != 0xffffffff) goto LAB_0090d518;
                lVar6 = 0xc;
                if (*(char *)((long)puVar5 + (10 - (long)puVar11)) != '\0') {
                  lVar6 = 0x1c;
                }
                lVar6 = (long)puVar5 + (lVar6 - (long)puVar11);
                if (lVar6 == 0) goto LAB_0090d518;
                uVar14 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar11));
                DAT_04cf018c = CONCAT44(0xfffffffe,(uint)DAT_04cf018c);
                if (uVar14 == 0) goto LAB_0090d518;
                puVar4 = (uint *)(lVar6 + 4);
                while (puVar4[-1] != 0x7629cd4e) {
                  puVar4 = puVar4 + 2;
                  uVar14 = uVar14 - 1;
                  if (uVar14 == 0) goto LAB_0090d518;
                }
                uVar16 = *puVar4;
                uVar15 = 0;
                if (uVar16 != 0xffffffff) {
                  uVar15 = uVar16;
                }
                DAT_04cf018c = CONCAT44(uVar15,(uint)DAT_04cf018c);
              } while ((int)uVar15 < 0);
            }
            else {
              uVar15 = DAT_04cf018c._4_4_;
            }
            if ((undefined4 *)((long)puVar5 + (ulong)uVar15) != (undefined4 *)0x0) {
              uVar17 = *(undefined4 *)((long)puVar5 + (ulong)uVar15);
            }
          }
        }
        else {
          if ((DAT_04cf0178 & 1) == 0) {
            DAT_04cf0178 = 1;
            DAT_04cf019c = 0xffffffff;
            DAT_04cf017c = -1;
            DAT_04cf0184 = -1;
            DAT_04cf0194._0_4_ = 0xffffffff;
            DAT_04cf018c = 0xffffffffffffffff;
            DAT_04cf0194 = 0xffffffffffffffff;
LAB_0090d2ec:
            uVar16 = (uint)DAT_04cf0194;
            if (puVar5 == puVar11) {
LAB_0090d2f4:
              uVar10 = 0;
            }
            else {
              do {
                if (uVar16 != 0xffffffff) goto LAB_0090d2f4;
                lVar6 = 0xc;
                if (*(char *)((long)puVar5 + (10 - (long)puVar11)) != '\0') {
                  lVar6 = 0x1c;
                }
                lVar6 = (long)puVar5 + (lVar6 - (long)puVar11);
                if (lVar6 == 0) goto LAB_0090d2f4;
                uVar14 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar11));
                DAT_04cf0194 = CONCAT44(DAT_04cf0194._4_4_,0xfffffffe);
                if (uVar14 == 0) goto LAB_0090d2f4;
                puVar4 = (uint *)(lVar6 + 4);
                while (puVar4[-1] != 0x54706054) {
                  puVar4 = puVar4 + 2;
                  uVar14 = uVar14 - 1;
                  if (uVar14 == 0) goto LAB_0090d2f4;
                }
                uVar16 = *puVar4;
                uVar15 = 0;
                if (uVar16 != 0xffffffff) {
                  uVar15 = uVar16;
                }
                DAT_04cf0194 = CONCAT44(DAT_04cf0194._4_4_,uVar15);
              } while ((int)uVar15 < 0);
              puVar12 = (undefined2 *)((long)puVar5 + (ulong)uVar15);
              if (puVar12 != (undefined2 *)0x0) goto LAB_0090d20c;
              uVar10 = 0;
            }
          }
          else {
            if ((int)(uint)DAT_04cf0194 < 0) goto LAB_0090d2ec;
            puVar12 = (undefined2 *)((long)puVar5 + (DAT_04cf0194 & 0xffffffff));
            uVar10 = 0;
            if (puVar12 != (undefined2 *)0x0) {
LAB_0090d20c:
              uVar10 = *puVar12;
            }
          }
          uVar16 = *puVar5;
          puVar11 = (uint *)(ulong)uVar16;
          *(undefined2 *)param_1 = uVar10;
          if (uVar16 == 0) goto LAB_0090d31c;
          if ((int)DAT_04cf019c < 0) {
            uVar16 = DAT_04cf019c;
            if (puVar5 != puVar11) {
              do {
                if (uVar16 != 0xffffffff) goto LAB_0090d4c8;
                lVar6 = 0xc;
                if (*(char *)((long)puVar5 + (10 - (long)puVar11)) != '\0') {
                  lVar6 = 0x1c;
                }
                lVar6 = (long)puVar5 + (lVar6 - (long)puVar11);
                if (lVar6 == 0) goto LAB_0090d4c8;
                uVar14 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar11));
                DAT_04cf019c = 0xfffffffe;
                if (uVar14 == 0) goto LAB_0090d4c8;
                puVar4 = (uint *)(lVar6 + 4);
                while (puVar4[-1] != 0x977adfce) {
                  puVar4 = puVar4 + 2;
                  uVar14 = uVar14 - 1;
                  if (uVar14 == 0) goto LAB_0090d4c8;
                }
                uVar16 = *puVar4;
                DAT_04cf019c = 0;
                if (uVar16 != 0xffffffff) {
                  DAT_04cf019c = uVar16;
                }
              } while ((int)DAT_04cf019c < 0);
              goto LAB_0090d314;
            }
LAB_0090d4c8:
            puVar13 = (undefined8 *)0x0;
          }
          else {
LAB_0090d314:
            puVar13 = (undefined8 *)((long)puVar5 + (ulong)DAT_04cf019c);
          }
          uVar16 = *puVar5;
          puVar11 = (uint *)(ulong)uVar16;
          puVar2 = &DAT_0407ebb1;
          if (puVar13 != (undefined8 *)0x0) {
            puVar2 = puVar13;
          }
          param_1[2] = puVar2;
          if (uVar16 != 0) {
            if (-1 < (int)(uint)DAT_04cf0184) {
              uVar16 = (uint)DAT_04cf0184;
LAB_0090d4f0:
              if ((undefined4 *)((long)puVar5 + (ulong)uVar16) != (undefined4 *)0x0) {
                uVar17 = *(undefined4 *)((long)puVar5 + (ulong)uVar16);
                goto LAB_0090d324;
              }
              goto LAB_0090d320;
            }
            uVar17 = 0;
            uVar15 = (uint)DAT_04cf0184;
            if (puVar5 != puVar11) {
              do {
                if (uVar15 != 0xffffffff) goto LAB_0090d324;
                lVar6 = 0xc;
                if (*(char *)((long)puVar5 + (10 - (long)puVar11)) != '\0') {
                  lVar6 = 0x1c;
                }
                lVar6 = (long)puVar5 + (lVar6 - (long)puVar11);
                if (lVar6 == 0) goto LAB_0090d324;
                uVar14 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar11));
                DAT_04cf0184 = CONCAT44(DAT_04cf0184._4_4_,0xfffffffe);
                if (uVar14 == 0) goto LAB_0090d324;
                puVar4 = (uint *)(lVar6 + 4);
                while (puVar4[-1] != 0x85e476d) {
                  puVar4 = puVar4 + 2;
                  uVar14 = uVar14 - 1;
                  if (uVar14 == 0) goto LAB_0090d324;
                }
                uVar15 = *puVar4;
                uVar16 = 0;
                if (uVar15 != 0xffffffff) {
                  uVar16 = uVar15;
                }
                DAT_04cf0184 = CONCAT44(DAT_04cf0184._4_4_,uVar16);
              } while ((int)uVar16 < 0);
              goto LAB_0090d4f0;
            }
            goto LAB_0090d324;
          }
          uVar17 = 0;
LAB_0090d504:
          uVar18 = 0;
LAB_0090d508:
          *(undefined4 *)(param_1 + 3) = uVar17;
          *(undefined4 *)((long)param_1 + 0x1c) = uVar18;
          uVar17 = 0;
          param_1[4] = 0x3f80000000000000;
        }
LAB_0090d518:
        puVar11 = (uint *)(ulong)*puVar5;
        uVar18 = 0;
        if (*puVar5 == 0) {
          uVar19 = 0;
        }
        else {
          if ((DAT_04cf0178 & 1) == 0) {
            DAT_04cf018c._0_4_ = 0xffffffff;
            DAT_04cf0178 = 1;
            DAT_04cf017c = -1;
            DAT_04cf0184 = -1;
            DAT_04cf019c = 0xffffffff;
            DAT_04cf018c = 0xffffffffffffffff;
            DAT_04cf0194 = 0xffffffffffffffff;
LAB_0090d578:
            uVar19 = 0;
            uVar16 = (uint)DAT_04cf018c;
            if (puVar5 != puVar11) {
              do {
                if (uVar16 != 0xffffffff) goto LAB_0090d610;
                lVar6 = 0xc;
                if (*(char *)((long)puVar5 + (10 - (long)puVar11)) != '\0') {
                  lVar6 = 0x1c;
                }
                lVar6 = (long)puVar5 + (lVar6 - (long)puVar11);
                if (lVar6 == 0) goto LAB_0090d610;
                uVar14 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar11));
                DAT_04cf018c = CONCAT44(DAT_04cf018c._4_4_,0xfffffffe);
                if (uVar14 == 0) goto LAB_0090d610;
                puVar4 = (uint *)(lVar6 + 4);
                while (puVar4[-1] != 0xde29d5bc) {
                  puVar4 = puVar4 + 2;
                  uVar14 = uVar14 - 1;
                  if (uVar14 == 0) goto LAB_0090d610;
                }
                uVar16 = *puVar4;
                uVar15 = 0;
                if (uVar16 != 0xffffffff) {
                  uVar15 = uVar16;
                }
                DAT_04cf018c = CONCAT44(DAT_04cf018c._4_4_,uVar15);
              } while ((int)uVar15 < 0);
              puVar8 = (undefined4 *)((long)puVar5 + (ulong)uVar15);
              if (puVar8 != (undefined4 *)0x0) goto LAB_0090d544;
LAB_0090d60c:
              uVar19 = 0;
            }
          }
          else {
            if ((int)(uint)DAT_04cf018c < 0) goto LAB_0090d578;
            puVar8 = (undefined4 *)((long)puVar5 + (DAT_04cf018c & 0xffffffff));
            if (puVar8 == (undefined4 *)0x0) goto LAB_0090d60c;
LAB_0090d544:
            uVar19 = *puVar8;
          }
LAB_0090d610:
          puVar11 = (uint *)(ulong)*puVar5;
          if (*puVar5 != 0) {
            uVar16 = DAT_04cf0184._4_4_;
            if (DAT_04cf0184 < 0) {
              if ((DAT_04cf0184._4_4_ == 0xffffffff) && (puVar5 != puVar11)) {
                lVar6 = 0xc;
                if (*(char *)((long)puVar5 + (10 - (long)puVar11)) != '\0') {
                  lVar6 = 0x1c;
                }
                lVar6 = (long)puVar5 + (lVar6 - (long)puVar11);
                if (lVar6 != 0) {
                  uVar14 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar11));
                  DAT_04cf0184 = CONCAT44(0xfffffffe,(uint)DAT_04cf0184);
                  if (uVar14 != 0) {
                    puVar11 = (uint *)(lVar6 + 4);
                    do {
                      if (puVar11[-1] == 0x16c95acc) {
                        uVar16 = 0;
                        if (*puVar11 != 0xffffffff) {
                          uVar16 = *puVar11;
                        }
                        DAT_04cf0184 = CONCAT44(uVar16,(uint)DAT_04cf0184);
                        if (-1 < (int)uVar16) goto LAB_0090d624;
                        break;
                      }
                      puVar11 = puVar11 + 2;
                      uVar14 = uVar14 - 1;
                    } while (uVar14 != 0);
                  }
                }
              }
            }
            else {
LAB_0090d624:
              if ((undefined4 *)((long)puVar5 + (ulong)uVar16) != (undefined4 *)0x0) {
                uVar18 = *(undefined4 *)((long)puVar5 + (ulong)uVar16);
              }
            }
          }
        }
        *(undefined4 *)(param_1 + 5) = uVar17;
        *(undefined4 *)((long)param_1 + 0x2c) = uVar19;
        *(undefined4 *)(param_1 + 6) = uVar18;
        goto LAB_0090d2b4;
      }
    }
  }
  *(undefined4 *)(param_1 + 6) = 0;
  uVar7 = *(undefined8 *)(puVar3 + 8);
  *param_1 = 0xffff;
  param_1[1] = puVar1 + 0x10;
  param_1[2] = uVar7;
  param_1[3] = 0;
  param_1[4] = 0x3f80000000000000;
  param_1[5] = 0;
LAB_0090d2b4:
  *(undefined4 *)((long)param_1 + 0x34) = 0x3f800000;
  return;
}

