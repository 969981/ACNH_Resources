
void FUN_02628c90(long param_1,long param_2,byte *param_3,ulong param_4)

{
  bool bVar1;
  int *piVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  short sVar10;
  undefined *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  uint *puVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  byte bVar23;
  uint uVar24;
  undefined8 *puVar25;
  long *plVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  uint uVar30;
  uint uVar31;
  long lVar32;
  undefined4 *puVar33;
  ulong uVar34;
  uint uVar35;
  float fVar36;
  float fVar37;
  undefined *local_a8;
  undefined8 local_a0;
  long local_98;
  uint local_90;
  uint local_8c;
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  undefined2 local_68 [2];
  uint local_64;
  
  puVar11 = PTR_DAT_04bc0510;
  puVar3 = PTR_DAT_04bb43c0;
  puVar33 = (undefined4 *)(param_2 + 0x2c + (param_4 & 0xff) * 0x18);
  uVar7 = *(ushort *)(puVar33 + 2);
  uVar35 = (uint)uVar7;
  if (uVar7 == 0) {
    return;
  }
  lVar21 = param_2 + 0x2c + (param_4 & 0xff) * 0x18;
  local_78 = 0;
  piVar2 = (int *)(param_1 + 0x77510);
  uVar8 = *(ushort *)(lVar21 + 0x10);
  uVar9 = *(ushort *)(lVar21 + 0x12);
  sVar10 = *(short *)(lVar21 + 0xc);
  local_88 = PTR_DAT_04bc0510 + 0x10;
  local_80 = *puVar33;
  uStack_7c = puVar33[1];
  lVar21 = *(long *)PTR_DAT_04bb43c0;
  uVar15 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar3 != 0) {
    lVar21 = *(long *)(lVar21 + 0x57e58);
    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
    if ((uVar15 < *(uint *)(lVar21 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
      lVar21 = *(long *)PTR_DAT_04bc0428;
      uVar15 = FUN_0277d6c4(puVar33);
      uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if (uVar15 < *(uint *)(lVar21 + 0x1d8)) {
        lVar21 = *(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8);
        if (lVar21 != 0) {
          local_78 = lVar21;
        }
      }
    }
  }
  uVar15 = (uint)uVar9 + (uint)uVar8;
  uVar18 = FUN_02555fe0(param_3);
  local_68[0] = 0;
  FUN_01adab50(&local_88,local_68);
  uVar17 = 0;
LAB_02628dcc:
  local_64 = uVar17;
  if ((local_64 != 0) && (local_90 = local_64, local_64 < 0xe)) {
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,local_64);
    uVar17 = local_64 + 7;
    if (-1 < (int)local_64) {
      uVar17 = local_64;
    }
    if (((uint)((int)uVar17 >> 3) < 2) &&
       (local_a8 = (undefined *)CONCAT44(local_a8._4_4_,local_64),
       (*(byte *)((long)local_68 + (ulong)(uint)((int)uVar17 >> 3)) >> (ulong)(local_64 & 7) & 1) !=
       0)) {
      if (local_64 != 9) goto LAB_02628ecc;
      if (0 < *piVar2) {
        lVar21 = 0;
        puVar22 = *(undefined8 **)(param_1 + 0x77520);
        do {
          puVar25 = *(undefined8 **)(*(long *)(param_1 + 0x77518) + lVar21 * 8);
          lVar21 = lVar21 + 1;
          *puVar25 = puVar22;
          *(undefined8 **)(param_1 + 0x77520) = puVar25;
          puVar22 = puVar25;
        } while (lVar21 < *piVar2);
      }
      *piVar2 = 0;
      bVar23 = *param_3;
      if (7 < bVar23) {
        bVar23 = 0xff;
      }
      local_90 = (uint)bVar23;
      lVar21 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_90,1);
      if (lVar21 == 0) {
        uVar17 = 0;
      }
      else {
        puVar3 = PTR_DAT_04bb2020 + 0x10;
        local_a0 = "UpgradePocket40";
        local_a8 = puVar3;
        iVar16 = FUN_0274b8d0(lVar21,&local_a8);
        if (iVar16 == 0) {
          local_a0 = "UpgradePocket30";
          local_a8 = puVar3;
          iVar16 = FUN_0274b8d0(lVar21,&local_a8);
          uVar17 = (uint)(iVar16 != 0);
        }
        else {
          uVar17 = 2;
        }
      }
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar17);
      uVar34 = 0;
      uVar20 = 0x1e;
      if (uVar17 != 1) {
        uVar20 = 0x14;
      }
      uVar6 = 0x28;
      if (uVar17 != 2) {
        uVar6 = uVar20;
      }
      do {
        puVar19 = (uint *)FUN_02677ea0(param_3,uVar34);
        local_90 = *puVar19;
        local_8c = puVar19[1];
        uVar20 = FUN_0277d7b4(puVar33,&local_90);
        puVar3 = PTR_DAT_04bb43c0;
        if ((uVar20 & 1) != 0) {
          local_98 = 0;
          local_a0 = (char *)CONCAT44(local_8c,local_90);
          lVar21 = *(long *)PTR_DAT_04bb43c0;
          local_a8 = puVar11 + 0x10;
          uVar17 = FUN_0277d6c4(&local_a0);
          if (*(long *)puVar3 != 0) {
            lVar21 = *(long *)(lVar21 + 0x57e58);
            uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
            if ((uVar17 < *(uint *)(lVar21 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
              lVar21 = *(long *)PTR_DAT_04bc0428;
              uVar17 = FUN_0277d6c4(&local_90);
              uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
              if (uVar17 < *(uint *)(lVar21 + 0x1d8)) {
                lVar21 = *(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar17 * 8);
                if (lVar21 != 0) {
                  local_98 = lVar21;
                }
              }
            }
          }
          uVar17 = FUN_01ae5538(&local_a8);
          fVar36 = (float)uVar17 + 0.5;
          if ((uVar18 & 0xffffffff) != uVar34) {
            fVar36 = (float)uVar17;
          }
          if (*piVar2 < *(int *)(param_1 + 0x77514)) {
            puVar22 = *(undefined8 **)(param_1 + 0x77520);
            if (puVar22 != (undefined8 *)0x0) {
              *(undefined8 *)(param_1 + 0x77520) = *puVar22;
            }
            *(int *)puVar22 = (int)uVar34;
            *(float *)((long)puVar22 + 4) = fVar36;
            if (*piVar2 < *(int *)(param_1 + 0x77514)) {
              *(undefined8 **)(*(long *)(param_1 + 0x77518) + (long)*piVar2 * 8) = puVar22;
              *piVar2 = *piVar2 + 1;
            }
          }
        }
        uVar34 = uVar34 + 1;
      } while (uVar6 != uVar34);
      if (1 < *piVar2) {
        lVar21 = *(long *)(param_1 + 0x77518);
        uVar28 = 0;
        uVar17 = *piVar2 - 1;
        do {
          if ((int)uVar17 <= (int)uVar28) break;
          lVar29 = *(long *)(lVar21 + (ulong)uVar28 * 8);
          uVar34 = (ulong)uVar28;
          uVar20 = (ulong)uVar17;
          uVar18 = uVar34;
          uVar17 = uVar28;
          do {
            lVar4 = lVar21 + uVar18 * 8;
            lVar32 = *(long *)(lVar4 + 8);
            fVar37 = *(float *)(lVar29 + 4) - *(float *)(lVar32 + 4);
            fVar36 = -fVar37;
            if (0.0 <= fVar37) {
              fVar36 = fVar37;
            }
            bVar12 = false;
            bVar13 = true;
            bVar14 = false;
            if (fVar36 < 1.0) {
              bVar12 = false;
              bVar13 = false;
              bVar14 = true;
              if (!NAN(fVar36)) {
                bVar12 = fVar36 < 0.0;
                bVar13 = fVar36 == 0.0;
                bVar14 = false;
              }
            }
            bVar1 = 0.0 < fVar37;
            if (bVar13 || bVar12 != bVar14) {
              bVar1 = 0 < (int)fVar37;
            }
            if (bVar1) {
              uVar17 = (uint)uVar18;
              *(long *)(lVar4 + 8) = lVar29;
              *(long *)(lVar21 + uVar18 * 8) = lVar32;
            }
            else {
              lVar29 = lVar32;
            }
            uVar18 = uVar18 + 1;
          } while (uVar20 != uVar18);
          if ((int)uVar17 <= (int)uVar28) break;
          lVar29 = *(long *)(lVar21 + (ulong)uVar17 * 8);
          uVar18 = (ulong)uVar17;
          uVar28 = uVar17;
          do {
            lVar4 = lVar21 + uVar18 * 8;
            lVar32 = *(long *)(lVar4 + -8);
            fVar37 = *(float *)(lVar29 + 4) - *(float *)(lVar32 + 4);
            fVar36 = -fVar37;
            if (0.0 <= fVar37) {
              fVar36 = fVar37;
            }
            bVar12 = false;
            bVar13 = true;
            bVar14 = false;
            if (fVar36 < 1.0) {
              bVar12 = false;
              bVar13 = false;
              bVar14 = true;
              if (!NAN(fVar36)) {
                bVar12 = fVar36 < 0.0;
                bVar13 = fVar36 == 0.0;
                bVar14 = false;
              }
            }
            bVar1 = fVar37 <= 0.0;
            if (bVar13 || bVar12 != bVar14) {
              bVar1 = (int)fVar37 < 0;
            }
            if (bVar1) {
              uVar28 = (uint)uVar18;
              *(long *)(lVar4 + -8) = lVar29;
              *(long *)(lVar21 + uVar18 * 8) = lVar32;
            }
            else {
              lVar29 = lVar32;
            }
            uVar18 = uVar18 - 1;
          } while ((long)uVar34 < (long)uVar18);
        } while (uVar28 != uVar17);
      }
      puVar3 = PTR_DAT_04bb4e20;
      if (uVar35 <= (uVar15 & 0xffff)) {
        uVar15 = 0;
        if (uVar35 < 2) {
          uVar35 = 1;
        }
        do {
          plVar26 = *(long **)(param_1 + 0x77518);
          uVar17 = *(uint *)puVar3;
          fVar36 = *(float *)(*plVar26 + 4);
          uVar34 = (long)*piVar2 - 1U & 0x1fffffffffffffff;
          uVar18 = uVar34 + 1;
          if (uVar34 == 0) {
            uVar28 = 0xffffffff;
            uVar27 = 0xffffffff;
          }
          else {
            uVar34 = uVar18 & 0x3ffffffffffffffe;
            uVar28 = 0xffffffff;
            uVar27 = 0xffffffff;
            do {
              if ((float)((uint *)*plVar26)[1] == fVar36) {
                uVar30 = *(uint *)*plVar26;
                uVar31 = uVar17;
                if ((int)uVar17 <= (int)uVar30) {
                  uVar31 = uVar30;
                }
                uVar24 = uVar28 + 1;
                if ((int)uVar30 <= (int)uVar17) {
                  uVar24 = uVar27;
                }
                if (uVar17 < 0x28) {
                  uVar30 = uVar31;
                }
                else {
                  uVar24 = uVar28 + 1;
                }
              }
              else {
                uVar30 = uVar17;
                uVar24 = uVar27;
              }
              uVar28 = uVar28 + 2;
              if ((float)((uint *)plVar26[1])[1] == fVar36) {
                uVar17 = *(uint *)plVar26[1];
                uVar27 = uVar28;
                if (uVar30 < 0x28) {
                  uVar31 = uVar30;
                  if ((int)uVar30 <= (int)uVar17) {
                    uVar31 = uVar17;
                  }
                  if ((int)uVar17 <= (int)uVar30) {
                    uVar27 = uVar24;
                  }
                  uVar17 = uVar31;
                }
              }
              else {
                uVar17 = uVar30;
                uVar27 = uVar24;
              }
              plVar26 = plVar26 + 2;
              uVar34 = uVar34 - 2;
            } while (uVar34 != 0);
          }
          uVar30 = uVar17;
          uVar24 = uVar27;
          if (((uVar18 & 1) != 0) && ((float)((uint *)*plVar26)[1] == fVar36)) {
            uVar30 = *(uint *)*plVar26;
            uVar24 = uVar28 + 1;
            if (uVar17 < 0x28) {
              uVar28 = uVar17;
              if ((int)uVar17 <= (int)uVar30) {
                uVar28 = uVar30;
              }
              bVar12 = (int)uVar30 <= (int)uVar17;
              uVar30 = uVar28;
              if (bVar12) {
                uVar24 = uVar27;
              }
            }
          }
          if (uVar24 != 0xffffffff) {
            if ((int)uVar24 < *piVar2) {
              lVar21 = (long)(int)uVar24;
              puVar22 = *(undefined8 **)(param_1 + 0x77520);
              do {
                puVar25 = *(undefined8 **)(*(long *)(param_1 + 0x77518) + lVar21 * 8);
                lVar21 = lVar21 + 1;
                *puVar25 = puVar22;
                *(undefined8 **)(param_1 + 0x77520) = puVar25;
                puVar22 = puVar25;
              } while (lVar21 < (int)(uVar24 + 1));
            }
            if ((-1 < (int)uVar24) && (iVar16 = *piVar2, (int)uVar24 < iVar16)) {
              uVar17 = uVar24 + 1;
              uVar28 = iVar16 - uVar17;
              if (uVar28 != 0 && (int)uVar17 <= iVar16) {
                memmove((void *)(*(long *)(param_1 + 0x77518) + (ulong)uVar24 * 8),
                        (void *)(*(long *)(param_1 + 0x77518) + (ulong)uVar17 * 8),
                        -(ulong)(uVar28 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar28 << 3);
                iVar16 = *piVar2;
              }
              *piVar2 = iVar16 + -1;
            }
            if (uVar30 < 0x28) {
              FUN_026776a0(param_3,uVar30,1);
            }
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar35);
        return;
      }
      if ((uVar15 & 0xffff) != 0) {
        uVar17 = 0;
        puVar19 = (uint *)PTR_DAT_04bb4e20;
        do {
          plVar26 = *(long **)(param_1 + 0x77518);
          uVar28 = *puVar19;
          fVar36 = *(float *)(*plVar26 + 4);
          uVar34 = (long)*piVar2 - 1U & 0x1fffffffffffffff;
          uVar18 = uVar34 + 1;
          if (uVar34 == 0) {
            uVar27 = 0xffffffff;
            uVar24 = 0xffffffff;
          }
          else {
            uVar34 = uVar18 & 0x3ffffffffffffffe;
            uVar27 = 0xffffffff;
            uVar24 = 0xffffffff;
            do {
              if ((float)((uint *)*plVar26)[1] == fVar36) {
                uVar31 = *(uint *)*plVar26;
                uVar5 = uVar28;
                if ((int)uVar28 <= (int)uVar31) {
                  uVar5 = uVar31;
                }
                uVar30 = uVar27 + 1;
                if ((int)uVar31 <= (int)uVar28) {
                  uVar30 = uVar24;
                }
                if (uVar28 < 0x28) {
                  uVar31 = uVar5;
                }
                else {
                  uVar30 = uVar27 + 1;
                }
              }
              else {
                uVar31 = uVar28;
                uVar30 = uVar24;
              }
              uVar27 = uVar27 + 2;
              if ((float)((uint *)plVar26[1])[1] == fVar36) {
                uVar28 = *(uint *)plVar26[1];
                uVar24 = uVar27;
                if (uVar31 < 0x28) {
                  uVar5 = uVar31;
                  if ((int)uVar31 <= (int)uVar28) {
                    uVar5 = uVar28;
                  }
                  if ((int)uVar28 <= (int)uVar31) {
                    uVar24 = uVar30;
                  }
                  uVar28 = uVar5;
                }
              }
              else {
                uVar28 = uVar31;
                uVar24 = uVar30;
              }
              plVar26 = plVar26 + 2;
              uVar34 = uVar34 - 2;
            } while (uVar34 != 0);
          }
          uVar31 = uVar28;
          uVar30 = uVar24;
          if (((uVar18 & 1) != 0) && ((float)((uint *)*plVar26)[1] == fVar36)) {
            uVar31 = *(uint *)*plVar26;
            uVar30 = uVar27 + 1;
            if (uVar28 < 0x28) {
              uVar27 = uVar28;
              if ((int)uVar28 <= (int)uVar31) {
                uVar27 = uVar31;
              }
              bVar12 = (int)uVar31 <= (int)uVar28;
              uVar31 = uVar27;
              if (bVar12) {
                uVar30 = uVar24;
              }
            }
          }
          if (uVar30 != 0xffffffff) {
            if ((int)uVar30 < *piVar2) {
              lVar21 = (long)(int)uVar30;
              puVar22 = *(undefined8 **)(param_1 + 0x77520);
              do {
                puVar25 = *(undefined8 **)(*(long *)(param_1 + 0x77518) + lVar21 * 8);
                lVar21 = lVar21 + 1;
                *puVar25 = puVar22;
                *(undefined8 **)(param_1 + 0x77520) = puVar25;
                puVar22 = puVar25;
              } while (lVar21 < (int)(uVar30 + 1));
            }
            if ((-1 < (int)uVar30) && (iVar16 = *piVar2, (int)uVar30 < iVar16)) {
              uVar28 = uVar30 + 1;
              uVar27 = iVar16 - uVar28;
              if (uVar27 != 0 && (int)uVar28 <= iVar16) {
                memmove((void *)(*(long *)(param_1 + 0x77518) + (ulong)uVar30 * 8),
                        (void *)(*(long *)(param_1 + 0x77518) + (ulong)uVar28 * 8),
                        -(ulong)(uVar27 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar27 << 3);
                iVar16 = *piVar2;
                puVar19 = (uint *)PTR_DAT_04bb4e20;
              }
              *piVar2 = iVar16 + -1;
            }
            if (uVar31 < 0x28) {
              FUN_026776a0(param_3,uVar31,1);
              puVar19 = (uint *)PTR_DAT_04bb4e20;
            }
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 != (uVar15 & 0xffff));
      }
      goto LAB_02628ef4;
    }
  }
  uVar17 = local_64 + 1;
  if (local_64 + 1 == 0xe) {
LAB_02628ecc:
    uVar17 = (uint)uVar7;
    if ((uint)uVar7 < (uVar15 & 0xffff) || uVar17 == (uVar15 & 0xffff)) {
      if (uVar17 < 2) {
        uVar17 = 1;
      }
      do {
        FUN_026774c0(param_3,puVar33);
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
      return;
    }
    for (uVar17 = uVar15 & 0xffff; uVar17 != 0; uVar17 = uVar17 - 1) {
      FUN_026774c0(param_3,puVar33);
    }
LAB_02628ef4:
    if (sVar10 == 0) {
      return;
    }
    if (uVar35 == (uVar15 & 0xffff)) {
      return;
    }
    uVar17 = uVar35 - uVar15 & 0xffff;
    if ((uVar35 - uVar15 & 0xfffe) == 0) {
      uVar17 = 1;
    }
    do {
      FUN_0267dbb0(param_3,puVar33);
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
    return;
  }
  goto LAB_02628dcc;
}

