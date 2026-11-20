
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_03efdf30(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  long *plVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  long lVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  uint uVar23;
  char *pcVar24;
  undefined8 *puVar25;
  uint uVar26;
  long lVar27;
  size_t __size;
  ulong uVar28;
  long lVar29;
  char *pcVar30;
  ulong uVar31;
  undefined8 uVar32;
  long lVar33;
  ulong uVar34;
  undefined4 uVar35;
  float fVar36;
  int iVar37;
  float fVar38;
  int iVar39;
  int iVar40;
  long lVar41;
  long lVar42;
  undefined4 uVar43;
  int iVar44;
  undefined *puVar45;
  long lVar46;
  undefined *puVar47;
  int iVar48;
  int iVar49;
  long lVar50;
  long lVar51;
  long local_158;
  undefined8 uStack_150;
  float local_144;
  undefined *local_140;
  char *pcStack_138;
  undefined8 local_130;
  long lStack_128;
  long local_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 local_ad;
  undefined *local_a0;
  char *pcStack_98;
  long local_90;
  long *plStack_88;
  undefined1 *local_80;
  undefined1 auStack_74 [20];
  
  puVar47 = PTR_DAT_04bb2698;
  if ((*(byte *)(*(long *)(param_1 + 8) + 0xd8) & 1) != 0) {
    lVar27 = *(long *)PTR_DAT_04bb2698;
    if (lVar27 == 0) {
      plVar7 = malloc(0x68);
    }
    else {
      plVar7 = param_4;
      if (param_4 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar7 = (long *)(lVar27 + 8);
        if (lVar6 != 0) {
          plVar7 = (long *)(lVar6 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
      }
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x68,8);
    }
    *(undefined4 *)(plVar7 + 1) = 0;
    *(undefined1 *)((long)plVar7 + 0x44) = 0;
    puVar1 = PTR_DAT_04bdefb0;
    plVar7[2] = 0;
    *(undefined4 *)(plVar7 + 3) = 0;
    plVar7[4] = 0;
    plVar7[5] = 0;
    *(undefined1 *)((long)plVar7 + 99) = 0;
    *plVar7 = (long)(puVar1 + 0x10);
    *(undefined4 *)(plVar7 + 8) = 0x20;
    plVar7[6] = (long)(PTR_DAT_04bb2028 + 0x10);
    plVar7[7] = (long)plVar7 + 0x44;
    *(long **)(param_1 + 0x50) = plVar7;
    pcStack_138 = (char *)((long)&local_130 + 4);
    local_ad = 0;
    local_130 = CONCAT35(local_130._5_3_,0x80);
    local_140 = PTR_DAT_04bb2d88 + 0x10;
    uVar8 = FUN_03f048a0(plVar7,param_2,param_3,*(undefined8 *)(param_1 + 8),param_4);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    uVar2 = **(uint **)(*(long *)(param_1 + 8) + 0xd0);
    if (0 < (int)uVar2) {
      lVar27 = *(long *)puVar47;
      __size = (ulong)uVar2 * 0x48;
      if (lVar27 == 0) {
        puVar9 = malloc(__size);
        if (puVar9 == (undefined8 *)0x0) {
          return 0;
        }
      }
      else {
        plVar7 = param_4;
        if (param_4 == (long *)0x0) {
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar7 = (long *)(lVar27 + 8);
          if (lVar6 != 0) {
            plVar7 = (long *)(lVar6 + 0xa8);
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) {
            return 0;
          }
        }
        puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,__size,8);
        if (puVar9 == (undefined8 *)0x0) {
          return 0;
        }
      }
      puVar25 = puVar9;
      do {
        *puVar25 = 0;
        *(undefined4 *)(puVar25 + 1) = 0;
        *(undefined4 *)(puVar25 + 4) = 0;
        puVar25[7] = 0x4334000000000000;
        *(undefined4 *)(puVar25 + 8) = 1;
        puVar25[2] = 0;
        puVar25[3] = 0x3f80000000000803;
        puVar25[5] = 0;
        puVar25[6] = 0xffffffff;
        puVar1 = PTR_PTR_04bd4d20;
        puVar47 = PTR_DAT_04bd4c80;
        puVar25 = puVar25 + 9;
      } while (puVar25 != puVar9 + (ulong)uVar2 * 9);
      *(uint *)(param_1 + 0x10) = uVar2;
      *(undefined8 **)(param_1 + 0x18) = puVar9;
      uVar26 = 0;
      lVar50 = *(long *)(puVar47 + 0x208);
      puVar45 = *(undefined **)(puVar47 + 0x200);
      lVar41 = *(long *)(puVar47 + 0x218);
      lVar27 = *(long *)(puVar47 + 0x210);
      uVar32 = *(undefined8 *)puVar1;
      lVar51 = *(long *)(puVar47 + 0x228);
      lVar46 = *(long *)(puVar47 + 0x220);
      lVar42 = *(long *)(puVar47 + 0x238);
      lVar6 = *(long *)(puVar47 + 0x230);
      puVar47 = PTR_DAT_04bdefb8 + 0x10;
      puVar1 = PTR_DAT_04bdc050 + 0x10;
      do {
        if ((*(byte *)(*(long *)(param_1 + 8) + 0xd8) & 1) == 0) {
LAB_03efe1f8:
          lVar29 = 0;
        }
        else {
          puVar16 = *(uint **)(*(long *)(param_1 + 8) + 0xd0);
          uVar15 = *puVar16;
          if ((int)uVar15 < (int)uVar26) goto LAB_03efe1f8;
          uVar23 = uVar26;
          if (uVar15 <= uVar26) {
            uVar23 = 0;
          }
          lVar29 = *(long *)(*(long *)(puVar16 + 2) + (ulong)uVar23 * 0x20);
        }
        FUN_0053a310(&local_140);
        lVar10 = FUN_0053a360(lVar29,&local_140);
        if (lVar10 == 0) {
LAB_03efe730:
          FUN_004385e0(&local_130);
          return 0;
        }
        if ((*(byte *)(*(long *)(param_1 + 8) + 0xd8) & 1) == 0) {
LAB_03efe25c:
          uVar15 = uVar26;
          if (*(uint *)(param_1 + 0x10) <= uVar26) {
            uVar15 = 0;
          }
          lVar17 = *(long *)(param_1 + 0x18) + (ulong)uVar15 * 0x48;
          *(uint *)(lVar17 + 0x18) = *(uint *)(lVar17 + 0x18) | 0x80000;
        }
        else {
          puVar16 = *(uint **)(*(long *)(param_1 + 8) + 0xd0);
          uVar15 = *puVar16;
          if ((int)uVar15 < (int)uVar26) goto LAB_03efe25c;
          uVar23 = uVar26;
          if (uVar15 <= uVar26) {
            uVar23 = 0;
          }
          if (*(char *)(*(long *)(puVar16 + 2) + (ulong)uVar23 * 0x20 + 0x18) != '\0')
          goto LAB_03efe25c;
        }
        uVar23 = *(uint *)(lVar10 + 0x48);
        uVar8 = (ulong)uVar23;
        uVar15 = uVar26;
        if (*(uint *)(param_1 + 0x10) <= uVar26) {
          uVar15 = 0;
        }
        if (0 < (int)uVar23) {
          lVar33 = *(long *)(param_1 + 0x18);
          lVar17 = *(long *)PTR_DAT_04bb2698;
          if (lVar17 == 0) {
            puVar12 = malloc(uVar8 << 5);
joined_r0x03efe320:
            if (puVar12 != (undefined4 *)0x0) {
              uVar34 = uVar8 & 7;
              puVar19 = puVar12;
              if ((uVar23 & 7) != 0) {
                puVar18 = puVar12;
                do {
                  puVar18[6] = 0;
                  uVar34 = uVar34 - 1;
                  *(undefined8 *)(puVar18 + 2) = 0;
                  *(undefined8 *)(puVar18 + 4) = 0;
                  puVar19 = puVar18 + 8;
                  *puVar18 = 0xffffffff;
                  puVar18 = puVar19;
                } while (uVar34 != 0);
              }
              if (6 < (uVar8 - 1 & 0x7ffffffffffffff)) {
                do {
                  puVar19[6] = 0;
                  *puVar19 = 0xffffffff;
                  puVar19[0xe] = 0;
                  puVar19[8] = 0xffffffff;
                  puVar19[0x16] = 0;
                  puVar19[0x10] = 0xffffffff;
                  puVar19[0x1e] = 0;
                  puVar19[0x18] = 0xffffffff;
                  puVar19[0x26] = 0;
                  puVar19[0x20] = 0xffffffff;
                  puVar19[0x2e] = 0;
                  puVar19[0x28] = 0xffffffff;
                  puVar19[0x36] = 0;
                  puVar19[0x30] = 0xffffffff;
                  puVar19[0x3e] = 0;
                  puVar19[0x38] = 0xffffffff;
                  *(undefined8 *)(puVar19 + 2) = 0;
                  *(undefined8 *)(puVar19 + 4) = 0;
                  *(undefined8 *)(puVar19 + 10) = 0;
                  *(undefined8 *)(puVar19 + 0xc) = 0;
                  *(undefined8 *)(puVar19 + 0x12) = 0;
                  *(undefined8 *)(puVar19 + 0x14) = 0;
                  *(undefined8 *)(puVar19 + 0x1a) = 0;
                  *(undefined8 *)(puVar19 + 0x1c) = 0;
                  *(undefined8 *)(puVar19 + 0x22) = 0;
                  *(undefined8 *)(puVar19 + 0x24) = 0;
                  *(undefined8 *)(puVar19 + 0x2a) = 0;
                  *(undefined8 *)(puVar19 + 0x2c) = 0;
                  *(undefined8 *)(puVar19 + 0x32) = 0;
                  *(undefined8 *)(puVar19 + 0x34) = 0;
                  *(undefined8 *)(puVar19 + 0x3a) = 0;
                  *(undefined8 *)(puVar19 + 0x3c) = 0;
                  puVar19 = puVar19 + 0x40;
                } while (puVar19 != puVar12 + uVar8 * 8);
              }
              *(uint *)(lVar33 + (ulong)uVar15 * 0x48 + 8) = uVar23;
              *(undefined4 **)(lVar33 + (ulong)uVar15 * 0x48 + 0x10) = puVar12;
            }
          }
          else {
            plVar7 = param_4;
            if (param_4 != (long *)0x0) {
LAB_03efe2f8:
              puVar12 = (undefined4 *)(**(code **)(*plVar7 + 0x30))(plVar7,uVar8 << 5,8);
              goto joined_r0x03efe320;
            }
            lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar7 = (long *)(lVar17 + 8);
            if (lVar11 != 0) {
              plVar7 = (long *)(lVar11 + 0xa8);
            }
            plVar7 = (long *)*plVar7;
            if (plVar7 != (long *)0x0) goto LAB_03efe2f8;
          }
          uVar34 = 0;
          do {
            lVar17 = *(long *)(*(long *)(lVar10 + 0x40) + uVar34 * 8);
            lVar33 = *(long *)(lVar17 + 0x18);
            uVar15 = *(uint *)(lVar33 + 0x90);
            if ((int)uVar15 < 1) goto LAB_03efe730;
            uVar28 = 0;
            iVar37 = 0;
            uVar31 = uVar34 & 0xffffffff;
            do {
              iVar39 = *(int *)(*(long *)(*(long *)(lVar33 + 0x88) + uVar28 * 8) + 0x24);
              if (iVar39 == 5) {
                uVar23 = uVar26;
                if (*(uint *)(param_1 + 0x10) <= uVar26) {
                  uVar23 = 0;
                }
                lVar11 = *(long *)(param_1 + 0x18) + (ulong)uVar23 * 0x48;
                lVar20 = *(long *)(lVar11 + 0x10);
                uVar21 = uVar31;
                if (*(uint *)(lVar11 + 8) <= uVar34) {
                  uVar21 = 0;
                }
                *(uint *)(lVar20 + uVar21 * 0x20) =
                     *(uint *)(lVar20 + uVar21 * 0x20) &
                     (1 << (ulong)((uint)uVar28 & 0x1f) ^ 0xffffffffU);
              }
              else if (iVar39 == 8) {
                uVar21 = (ulong)*(uint *)(lVar17 + 0x160);
                if ((int)*(uint *)(lVar17 + 0x160) < 1) {
                  uVar22 = 0;
                }
                else {
                  puVar9 = (undefined8 *)(*(long *)(lVar17 + 0x158) + 8);
                  do {
                    if (uVar28 == *(uint *)(puVar9 + -1)) {
                      uVar22 = *puVar9;
                      goto LAB_03efe4c8;
                    }
                    puVar9 = puVar9 + 2;
                    uVar21 = uVar21 - 1;
                  } while (uVar21 != 0);
                  uVar22 = 0;
                }
LAB_03efe4c8:
                uVar23 = uVar26;
                if (*(uint *)(param_1 + 0x10) <= uVar26) {
                  uVar23 = 0;
                }
                lVar11 = *(long *)(param_1 + 0x18) + (ulong)uVar23 * 0x48;
                uVar21 = uVar31;
                if (*(uint *)(lVar11 + 8) <= uVar34) {
                  uVar21 = 0;
                }
                *(undefined8 *)(*(long *)(lVar11 + 0x10) + uVar21 * 0x20 + 8) = uVar22;
                uVar23 = uVar26;
                if (*(uint *)(param_1 + 0x10) <= uVar26) {
                  uVar23 = 0;
                }
                lVar11 = *(long *)(param_1 + 0x18) + (ulong)uVar23 * 0x48;
                uVar21 = uVar31;
                if (*(uint *)(lVar11 + 8) <= uVar34) {
                  uVar21 = 0;
                }
                FUN_0054e750(*(undefined8 *)(*(long *)(lVar11 + 0x10) + uVar21 * 0x20 + 8));
                iVar37 = iVar37 + 1;
              }
              uVar28 = uVar28 + 1;
            } while (uVar28 != uVar15);
            if (iVar37 != 1) goto LAB_03efe730;
            uVar15 = uVar26;
            if (*(uint *)(param_1 + 0x10) <= uVar26) {
              uVar15 = 0;
            }
            lVar11 = *(long *)(param_1 + 0x18) + (ulong)uVar15 * 0x48;
            uVar28 = uVar31;
            if (*(uint *)(lVar11 + 8) <= uVar34) {
              uVar28 = 0;
            }
            *(long *)(*(long *)(lVar11 + 0x10) + uVar28 * 0x20 + 0x10) = lVar33 + 0xa8;
            lVar17 = FUN_0053b360(lVar17);
            uVar15 = uVar26;
            if (*(uint *)(param_1 + 0x10) <= uVar26) {
              uVar15 = 0;
            }
            lVar33 = *(long *)(param_1 + 0x18) + (ulong)uVar15 * 0x48;
            bVar5 = *(uint *)(lVar33 + 8) <= uVar34;
            uVar34 = uVar34 + 1;
            if (bVar5) {
              uVar31 = 0;
            }
            *(undefined4 *)(*(long *)(lVar33 + 0x10) + uVar31 * 0x20 + 0x18) =
                 *(undefined4 *)(lVar17 + 0x10);
          } while (uVar34 != uVar8);
        }
        uStack_150 = 0;
        plStack_88 = &local_158;
        local_90 = 1;
        local_80 = auStack_74;
        pcStack_98 = (char *)0xffffffff;
        local_158 = lVar10;
        local_a0 = puVar47;
        FUN_005d3430(&local_a0);
        uVar15 = *(uint *)(lVar29 + 0x48);
        if (0 < (int)uVar15) {
          uVar8 = 0;
          do {
            uVar23 = *(uint *)(*(long *)(*(long *)(lVar29 + 0x40) + uVar8 * 8) + 0x24);
            plVar7 = (long *)FUN_00438810(0x38);
            *plVar7 = (long)puVar1;
            plVar7[1] = 0xffffffff;
            plVar7[2] = 1;
            plVar7[3] = 0;
            plVar7[4] = -0x8000000000000000;
            plVar7[5] = 0;
            plVar7[6] = -0x8000000000000000;
            if ((int)uVar23 < 1) {
              if (uVar23 != 0) goto LAB_03efe694;
            }
            else {
              lVar17 = FUN_00426720(uVar32,uVar23,0x40,0,0,(long)plVar7 + 0x24);
              plVar7[3] = lVar17;
              if (*(uint *)(plVar7 + 4) != uVar23) {
LAB_03efe694:
                *(uint *)(plVar7 + 4) = uVar23;
              }
            }
            uVar14 = *(uint *)(plVar7 + 6);
            if ((int)(*(uint *)((long)plVar7 + 0x34) & 0x3fffffff) < (int)uVar23) {
              lVar17 = FUN_00426720(uVar32,uVar23,0x40,plVar7[5],uVar14,(long)plVar7 + 0x34);
              uVar14 = *(uint *)(plVar7 + 6);
              plVar7[5] = lVar17;
            }
            if (uVar14 != uVar23) {
              *(uint *)(plVar7 + 6) = uVar23;
            }
            if (0 < (int)uVar23) {
              lVar17 = 0;
              do {
                plVar13 = (long *)(plVar7[3] + lVar17);
                plVar13[1] = lVar50;
                *plVar13 = (long)puVar45;
                plVar13[3] = lVar41;
                plVar13[2] = lVar27;
                plVar13[5] = lVar51;
                plVar13[4] = lVar46;
                plVar13[7] = lVar42;
                plVar13[6] = lVar6;
                plVar13 = (long *)(plVar7[5] + lVar17);
                lVar17 = lVar17 + 0x40;
                plVar13[1] = lVar50;
                *plVar13 = (long)puVar45;
                plVar13[3] = lVar41;
                plVar13[2] = lVar27;
                plVar13[5] = lVar51;
                plVar13[4] = lVar46;
                plVar13[7] = lVar42;
                plVar13[6] = lVar6;
              } while ((ulong)uVar23 * 0x40 != lVar17);
            }
            FUN_005d3d40(plVar7);
            FUN_00514500(lVar10,uVar8 & 0xffffffff,plVar7);
            FUN_004435c0(plVar7);
            uVar8 = uVar8 + 1;
          } while (uVar8 != uVar15);
        }
        uVar15 = uVar26;
        if (*(uint *)(param_1 + 0x10) <= uVar26) {
          uVar15 = 0;
        }
        *(long *)(*(long *)(param_1 + 0x18) + (ulong)uVar15 * 0x48) = lVar10;
        FUN_004385e0(&local_130);
        puVar4 = PTR_DAT_04bd60b0;
        uVar26 = uVar26 + 1;
      } while (uVar26 != uVar2);
      (**(code **)(**(long **)PTR_DAT_04bd60b0 + 0x28))(*(long **)PTR_DAT_04bd60b0,0xabba079b,0);
      (**(code **)(**(long **)puVar4 + 0x28))(*(long **)puVar4,0xabbad4dc,0);
      uVar32 = FUN_00438810(0x128);
      FUN_00511d70(&local_140);
      FUN_00511d80(uVar32,&local_140);
      *(undefined8 *)(param_1 + 0x28) = uVar32;
      uVar26 = 0;
      puVar47 = PTR_DAT_04bb2020 + 0x10;
      do {
        uVar23 = *(uint *)(param_1 + 0x10);
        lVar29 = *(long *)(param_1 + 0x18);
        uVar15 = uVar26;
        if (uVar23 <= uVar26) {
          uVar15 = 0;
        }
        lVar10 = *(long *)(lVar29 + (ulong)uVar15 * 0x48);
        if (*(int *)(*(long *)(lVar10 + 0x18) + 0x68) == 3) {
          FUN_00514260(lVar10,2);
          uVar23 = *(uint *)(param_1 + 0x10);
          lVar29 = *(long *)(param_1 + 0x18);
        }
        uVar15 = uVar26;
        if (uVar23 <= uVar26) {
          uVar15 = 0;
        }
        lVar29 = lVar29 + (ulong)uVar15 * 0x48;
        *(uint *)(lVar29 + 0x18) = *(uint *)(lVar29 + 0x18) | 2;
        uVar15 = uVar26;
        if (*(uint *)(param_1 + 0x10) <= uVar26) {
          uVar15 = 0;
        }
        FUN_00512bd0(*(undefined8 *)(param_1 + 0x28),
                     *(undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar15 * 0x48));
        uVar15 = *(uint *)(*(long *)(param_1 + 8) + 0x20);
        if ((int)uVar26 < (int)uVar15) {
          uVar23 = uVar26;
          if (uVar15 <= uVar26) {
            uVar23 = 0;
          }
          lVar29 = *(long *)(*(long *)(param_1 + 8) + 0x28) + (ulong)uVar23 * 0x1a0;
          cVar3 = *(char *)(lVar29 + 0x130);
          uVar43 = *(undefined4 *)(lVar29 + 0x178);
          uVar35 = *(undefined4 *)(lVar29 + 0x198);
          bVar5 = cVar3 != '\0';
          uVar15 = uVar26;
          if (*(uint *)(param_1 + 0x10) <= uVar26) {
            uVar15 = 0;
          }
          puVar16 = (uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar15 * 0x48 + 0x18);
          if (*(char *)(lVar29 + 0xe8) != '\0') goto LAB_03efe8f0;
          *puVar16 = *puVar16 & 0xfffff7ff;
          uVar15 = uVar26;
          if (*(uint *)(param_1 + 0x10) <= uVar26) {
            uVar15 = 0;
          }
          puVar16 = (uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar15 * 0x48 + 0x18);
          if (cVar3 == '\0') goto LAB_03efe918;
LAB_03efe8c0:
          uVar15 = *puVar16 | 0x8000000;
        }
        else {
          uVar43 = 0;
          bVar5 = false;
          uVar35 = 0x43340000;
          uVar15 = uVar26;
          if (*(uint *)(param_1 + 0x10) <= uVar26) {
            uVar15 = 0;
          }
          puVar16 = (uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar15 * 0x48 + 0x18);
LAB_03efe8f0:
          *puVar16 = *puVar16 | 0x800;
          uVar15 = uVar26;
          if (*(uint *)(param_1 + 0x10) <= uVar26) {
            uVar15 = 0;
          }
          puVar16 = (uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar15 * 0x48 + 0x18);
          if (bVar5) goto LAB_03efe8c0;
LAB_03efe918:
          uVar15 = *puVar16 & 0xf7ffffff;
        }
        *puVar16 = uVar15;
        uVar15 = uVar26;
        if (*(uint *)(param_1 + 0x10) <= uVar26) {
          uVar15 = 0;
        }
        *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)uVar15 * 0x48 + 0x38) = uVar43;
        uVar15 = uVar26;
        if (*(uint *)(param_1 + 0x10) <= uVar26) {
          uVar15 = 0;
        }
        *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)uVar15 * 0x48 + 0x3c) = uVar35;
        if ((int)uVar26 < *(int *)(*(long *)(param_1 + 8) + 0x20)) {
          lVar29 = 0;
          do {
            uVar15 = *(uint *)(*(long *)(param_1 + 8) + 0x20);
            if ((int)uVar26 < (int)uVar15) {
              uVar23 = uVar26;
              if (uVar15 <= uVar26) {
                uVar23 = 0;
              }
              lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x28) + (ulong)uVar23 * 0x1a0;
              pcStack_138 = (char *)((long)&DAT_041e94d4 + (long)(int)(&DAT_041e94d4)[lVar29]);
              local_140 = puVar47;
              (**(code **)(*(long *)(lVar10 + 0x108) + 0x18))(lVar10 + 0x108);
              (**(code **)(*(long *)(lVar10 + 0x108) + 0x18))(lVar10 + 0x108);
              pcVar30 = *(char **)(lVar10 + 0x110);
              (**(code **)(local_140 + 0x18))(&local_140);
              if (pcVar30 != pcStack_138) {
                cVar3 = **(char **)(lVar10 + 0x110);
                if (cVar3 != *pcStack_138) goto LAB_03efe970;
                if (cVar3 != '\0') {
                  lVar17 = 0x7fffe;
                  pcVar30 = pcStack_138;
                  pcVar24 = *(char **)(lVar10 + 0x110);
                  do {
                    if (pcVar24[1] != pcVar30[1]) goto LAB_03efe970;
                    if (pcVar24[1] == '\0') break;
                    if (pcVar24[2] != pcVar30[2]) goto LAB_03efe970;
                    if (pcVar24[2] == '\0') break;
                    if ((lVar17 == 0) || (cVar3 = pcVar24[3], cVar3 != pcVar30[3]))
                    goto LAB_03efe970;
                    lVar17 = lVar17 + -3;
                    pcVar30 = pcVar30 + 3;
                    pcVar24 = pcVar24 + 3;
                  } while (cVar3 != '\0');
                }
              }
              uVar15 = uVar26;
              if (*(uint *)(param_1 + 0x10) <= uVar26) {
                uVar15 = 0;
              }
              *(int *)(*(long *)(param_1 + 0x18) + (ulong)uVar15 * 0x48 + 0x34) = (int)lVar29;
              uVar15 = uVar26;
              if (*(uint *)(param_1 + 0x10) <= uVar26) {
                uVar15 = 0;
              }
              iVar37 = *(int *)(*(long *)(param_1 + 0x18) + (ulong)uVar15 * 0x48 + 0x34);
              if (iVar37 != 0) {
                if (iVar37 < 0) {
                  iVar37 = iVar37 + 1;
                }
                FUN_03f049f0(*(undefined8 *)(param_1 + 0x50),uVar26,iVar37 >> 1);
              }
            }
LAB_03efe970:
            lVar29 = lVar29 + 1;
          } while (lVar29 != 6);
        }
        uVar26 = uVar26 + 1;
        if (uVar26 == uVar2) {
          uVar32 = FUN_00438810(0x30);
          local_140 = (undefined *)0x0;
          pcStack_138 = (char *)0x3f0000a800000000;
          FUN_0053da70(uVar32,&local_140);
          *(undefined8 *)(param_1 + 0x38) = uVar32;
          plVar7 = (long *)FUN_00438810(0xa0);
          lVar29 = *(long *)(param_1 + 0x38);
          plVar7[2] = 1;
          *plVar7 = (long)(PTR_DAT_04bddcb8 + 0x10);
          plVar7[1] = 0xffffffff;
          FUN_004385d0(plVar7 + 4);
          plVar7[0x11] = lVar29;
          plVar7[0x12] = 0;
          FUN_004435a0(lVar29);
          plVar7[0xc] = 0;
          plVar7[0xd] = 0;
          plVar7[0xe] = 0;
          plVar7[0xf] = 0;
          plVar7[5] = lVar50;
          plVar7[4] = (long)puVar45;
          plVar7[7] = lVar41;
          plVar7[6] = lVar27;
          plVar7[9] = lVar51;
          plVar7[8] = lVar46;
          plVar7[0xb] = lVar42;
          plVar7[10] = lVar6;
          FUN_0043be70(plVar7 + 0x12,0);
          *(undefined2 *)((long)plVar7 + 0x9c) = 0;
          *(undefined4 *)(plVar7 + 0x13) = 0x3c23d70a;
          *(undefined1 *)((long)plVar7 + 0x9e) = 0;
          plVar7[0x10] = 0;
          *(long **)(param_1 + 0x30) = plVar7;
          *(undefined1 *)((long)plVar7 + 0x9f) = 0;
          uVar32 = FUN_00438810(0x30);
          pcStack_138 = (char *)_UNK_04102888;
          local_140 = _DAT_04102880;
          FUN_0053da30(uVar32,&local_140);
          *(undefined8 *)(param_1 + 0xf0) = uVar32;
          FUN_004385d0(&local_140);
          local_140 = puVar45;
          pcStack_138 = (char *)lVar50;
          local_130 = lVar27;
          lStack_128 = lVar41;
          local_120 = lVar46;
          lStack_118 = lVar51;
          lStack_110 = lVar6;
          lStack_108 = lVar42;
          uVar32 = FUN_00438810(0x50);
          FUN_005d2c20();
          *(undefined8 *)(param_1 + 0xe8) = uVar32;
          FUN_005d2e00(uVar32,*(undefined8 *)(param_1 + 0xf0),&local_140);
          FUN_0053c920(&local_158);
          uVar26 = 0;
          local_144 = DAT_04c4bac0 * 0.1;
          local_158 = CONCAT44(local_158._4_4_,DAT_04c4bac0 * 0.05);
          do {
            uVar32 = FUN_03f0aa9c(*(undefined8 *)(param_1 + 8),param_1,param_4);
            uVar15 = uVar26;
            if (*(uint *)(param_1 + 0x10) <= uVar26) {
              uVar15 = 0;
            }
            *(undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar15 * 0x48 + 0x28) = uVar32;
            uVar23 = *(uint *)(param_1 + 0x10);
            lVar27 = *(long *)(param_1 + 0x18);
            uVar15 = uVar26;
            if (uVar23 <= uVar26) {
              uVar15 = 0;
            }
            lVar6 = *(long *)(lVar27 + (ulong)uVar15 * 0x48 + 0x28);
            if ((lVar6 != 0) && (*(long *)(lVar6 + 8) != 0)) {
              FUN_00514550(*(undefined8 *)(lVar27 + (ulong)uVar15 * 0x48));
              uVar23 = *(uint *)(param_1 + 0x10);
              lVar27 = *(long *)(param_1 + 0x18);
            }
            uVar15 = uVar26;
            if (uVar23 <= uVar26) {
              uVar15 = 0;
            }
            uVar15 = *(uint *)(*(long *)(lVar27 + (ulong)uVar15 * 0x48) + 0x48);
            if (0 < (int)uVar15) {
              lVar27 = 0;
              do {
                uVar23 = uVar26;
                if (*(uint *)(param_1 + 0x10) <= uVar26) {
                  uVar23 = 0;
                }
                lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) +
                                                     (ulong)uVar23 * 0x48) + 0x40) + lVar27);
                if (*(char *)(*(long *)(lVar6 + 0x18) + 0x13d) != '\0') {
                  FUN_0053b740(lVar6,&local_158);
                  FUN_0053afd0(lVar6,0,*(undefined8 *)(param_1 + 0xe8));
                  FUN_0053c640(lVar6,0);
                }
                lVar27 = lVar27 + 8;
              } while ((ulong)uVar15 * 8 != lVar27);
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 != uVar2);
          uVar35 = FUN_00512450(*(undefined8 *)(param_1 + 0x28),1);
          *(undefined4 *)(param_1 + 0x20) = uVar35;
          local_a0 = PTR_DAT_04bb2020 + 0x10;
          pcStack_98 = "Collidable_Ground";
          FUN_03f00090(param_1,&local_a0,0);
          uVar2 = *(uint *)(param_1 + 0x10);
          if (0 < (int)uVar2) {
            uVar26 = 0;
            fVar36 = DAT_04c4bac0 * -9.81;
            puVar47 = (undefined *)((ulong)(uint)fVar36 << 0x20);
            do {
              uVar15 = uVar26;
              if (*(uint *)(param_1 + 0x10) <= uVar26) {
                uVar15 = 0;
              }
              plVar7 = (long *)(*(long *)(param_1 + 0x18) + (ulong)uVar15 * 0x48);
              if (**(long **)(*plVar7 + 0x40) != 0) {
                plVar13 = (long *)FUN_0053b360();
                pcStack_98 = (char *)plVar13[1];
                plStack_88 = (long *)plVar13[3];
                local_90 = plVar13[2];
                local_a0 = (undefined *)*plVar13;
                fVar38 = (float)((ulong)local_a0 >> 0x20);
                iVar44 = -(uint)(ABS(SUB84(local_a0,0)) <= 1.1920929e-07);
                iVar48 = -(uint)(ABS(fVar38) <= 1.1920929e-07);
                iVar49 = -(uint)(ABS(SUB84(pcStack_98,0)) <= 1.1920929e-07);
                iVar37 = -(uint)(ABS(SUB84(local_a0,0) - 0.0) <= 1.1920929e-07);
                iVar39 = -(uint)(ABS(fVar38 - fVar36) <= 1.1920929e-07);
                iVar40 = -(uint)(ABS(SUB84(pcStack_98,0) - 0.0) <= 1.1920929e-07);
                if (CONCAT13((byte)((uint)iVar48 >> 0x18) & (byte)((uint)iVar49 >> 0x18) &
                             (byte)((uint)iVar44 >> 0x18),
                             CONCAT12((byte)((uint)iVar48 >> 0x10) & (byte)((uint)iVar49 >> 0x10) &
                                      (byte)((uint)iVar44 >> 0x10),
                                      CONCAT11((byte)((uint)iVar48 >> 8) & (byte)((uint)iVar49 >> 8)
                                               & (byte)((uint)iVar44 >> 8),
                                               (byte)iVar48 & (byte)iVar49 & (byte)iVar44))) == 0 &&
                    CONCAT13((byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar40 >> 0x18) &
                             (byte)((uint)iVar37 >> 0x18),
                             CONCAT12((byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar40 >> 0x10) &
                                      (byte)((uint)iVar37 >> 0x10),
                                      CONCAT11((byte)((uint)iVar39 >> 8) & (byte)((uint)iVar40 >> 8)
                                               & (byte)((uint)iVar37 >> 8),
                                               (byte)iVar39 & (byte)iVar40 & (byte)iVar37))) == 0) {
                  pcStack_98 = (char *)0x0;
                  uVar15 = *(uint *)(*plVar7 + 0x48);
                  local_a0 = puVar47;
                  if (0 < (int)uVar15) {
                    lVar27 = 0;
                    do {
                      FUN_0053b120(*(undefined8 *)(*(long *)(*plVar7 + 0x40) + lVar27),&local_a0);
                      lVar27 = lVar27 + 8;
                    } while ((ulong)uVar15 * 8 != lVar27);
                  }
                }
              }
              uVar26 = uVar26 + 1;
            } while (uVar26 != uVar2);
          }
          FUN_004385e0(&local_140);
          return 1;
        }
      } while( true );
    }
  }
  return 0;
}

