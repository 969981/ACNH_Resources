
void FUN_029c9450(long param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  char cVar8;
  long *plVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  long lVar18;
  char cVar19;
  long lVar20;
  char *pcVar21;
  long *plVar22;
  undefined4 uVar23;
  undefined8 *puVar24;
  byte *pbVar25;
  uint uVar26;
  undefined8 *puVar27;
  long *plVar28;
  long *plVar29;
  char *pcVar30;
  int iVar31;
  byte *pbVar32;
  long *plVar33;
  void *__dest;
  void *__src;
  int iVar34;
  uint uVar35;
  long *plVar36;
  uint uVar37;
  long lVar38;
  float fVar39;
  float fVar40;
  undefined8 local_d8;
  byte *local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  
  plVar1 = (long *)(param_1 + 0x24f18);
  iVar34 = 0;
  plVar2 = (long *)(param_1 + 0x24a38);
  puVar27 = (undefined8 *)((ulong)&local_d8 | 4);
  do {
    lVar20 = param_1 + 0x48 + (long)iVar34 * 3000;
    iVar5 = *(int *)(lVar20 + 0xa8);
    plVar33 = (long *)(lVar20 + 0x98);
    if (1 < iVar5) {
      plVar36 = *(long **)(*(long *)(lVar20 + 0xa0) + 8);
      while (plVar29 = plVar36, plVar29 != plVar33) {
        plVar36 = (long *)plVar29[1];
        plVar22 = (long *)*plVar29;
        fVar40 = *(float *)((long)plVar29 + -0x24);
        bVar7 = *(byte *)((long)plVar29 + -0x27);
        fVar39 = *(float *)((long)plVar22 + -0x24);
        bVar11 = false;
        bVar13 = false;
        bVar15 = false;
        if (fVar40 <= fVar39) {
          uVar26 = (uint)*(byte *)((long)plVar22 + -0x27);
          uVar35 = (uint)bVar7;
          bVar15 = SBORROW4(uVar35,uVar26);
          bVar11 = (int)(uVar35 - uVar26) < 0;
          bVar13 = uVar35 == uVar26;
        }
        uVar26 = (uint)bVar7;
        bVar12 = false;
        bVar14 = false;
        bVar16 = false;
        if (*(byte *)((long)plVar22 + -0x27) <= uVar26) {
          bVar12 = false;
          bVar14 = false;
          bVar16 = true;
          if (!NAN(fVar39) && !NAN(fVar40)) {
            bVar12 = fVar39 < fVar40;
            bVar14 = fVar39 == fVar40;
            bVar16 = false;
          }
        }
        if ((bVar14 || bVar12 != bVar16) && (!bVar13 && bVar11 == bVar15)) {
          plVar28 = plVar22;
          do {
            plVar28 = (long *)*plVar28;
            plVar9 = plVar33;
            if (plVar28 == plVar33) break;
            fVar39 = *(float *)((long)plVar28 + -0x24);
            bVar11 = false;
            bVar13 = false;
            bVar15 = false;
            if (fVar40 <= fVar39) {
              uVar35 = (uint)*(byte *)((long)plVar28 + -0x27);
              bVar15 = SBORROW4(uVar26,uVar35);
              bVar11 = (int)(uVar26 - uVar35) < 0;
              bVar13 = uVar26 == uVar35;
            }
            bVar12 = false;
            bVar14 = false;
            bVar16 = false;
            if (*(byte *)((long)plVar28 + -0x27) <= bVar7) {
              bVar12 = false;
              bVar14 = false;
              bVar16 = true;
              if (!NAN(fVar39) && !NAN(fVar40)) {
                bVar12 = fVar39 < fVar40;
                bVar14 = fVar39 == fVar40;
                bVar16 = false;
              }
            }
            plVar9 = plVar28;
          } while ((bVar14 || bVar12 != bVar16) && (!bVar13 && bVar11 == bVar15));
          plVar28 = plVar36;
          if (plVar22 != (long *)0x0) {
            plVar22[1] = (long)plVar36;
            plVar28 = (long *)plVar29[1];
          }
          if (plVar28 != (long *)0x0) {
            *plVar28 = *plVar29;
          }
          *plVar29 = 0;
          plVar29[1] = 0;
          puVar24 = (undefined8 *)plVar9[1];
          plVar9[1] = (long)plVar29;
          *plVar29 = (long)plVar9;
          plVar29[1] = (long)puVar24;
          if (puVar24 != (undefined8 *)0x0) {
            *puVar24 = plVar29;
          }
        }
      }
    }
    plVar36 = *(long **)(lVar20 + 0xa0);
    if (plVar36 != plVar33) {
      uVar23 = 0;
      fVar40 = 0.0;
      uVar26 = 0;
      pcVar30 = (char *)0x0;
      plVar33 = plVar36 + -5;
      uVar35 = 0xffffffff;
      do {
        cVar19 = *(char *)((long)plVar33 + 1);
        plVar29 = (long *)plVar36[1];
        if (cVar19 < 'd') {
          cVar19 = cVar19 + '\x01';
          *(char *)((long)plVar33 + 1) = cVar19;
        }
        lVar38 = plVar33[2];
        if ((((lVar38 == 0) || ((int)plVar33[3] != *(int *)(lVar38 + 0x10))) ||
            (*(int *)(lVar38 + 0xc) == 0)) || (*(int *)(lVar38 + 0xc) == 7)) {
LAB_029c9594:
          pcVar21 = (char *)plVar33[4];
          if (pcVar21 != (char *)0x0) {
            cVar19 = *pcVar21;
            *pcVar21 = cVar19 + -1;
            if ((char)(cVar19 + -1) == '\0') {
              iVar31 = *(int *)(param_1 + 0x25bd8);
              iVar6 = *(int *)(param_1 + 0x25bd0);
              if (iVar31 < iVar6) {
                *(int *)(param_1 + 0x25bd8) = iVar31 + 1;
                iVar31 = *(int *)(param_1 + 0x25bd4) + iVar31;
                iVar3 = 0;
                if (iVar6 <= iVar31) {
                  iVar3 = iVar6;
                }
                *(char **)(*(long *)(param_1 + 0x25bc8) + (long)(iVar31 - iVar3) * 8) = pcVar21;
              }
            }
            plVar33[4] = 0;
          }
          plVar22 = (long *)plVar36[1];
          if (*plVar36 != 0) {
            *(long **)(*plVar36 + 8) = plVar22;
            plVar22 = (long *)plVar36[1];
          }
          if (plVar22 != (long *)0x0) {
            *plVar22 = *plVar36;
          }
          *plVar36 = 0;
          plVar36[1] = 0;
          *(int *)(lVar20 + 0xa8) = *(int *)(lVar20 + 0xa8) + -1;
          *plVar33 = *(long *)(lVar20 + 0xb0);
          *(long **)(lVar20 + 0xb0) = plVar33;
        }
        else {
          cVar8 = (char)*plVar33;
          if ((cVar8 == '\0') || (pcVar30 == (char *)0x0)) {
            if (pcVar30 != (char *)0x0) goto LAB_029c9674;
LAB_029c96ac:
            if (uVar35 < 2) {
              uVar26 = uVar26 + 1;
            }
            if (cVar8 == '\0') {
              pcVar30 = (char *)0x0;
            }
            else {
              pcVar30 = (char *)plVar33[4];
              if (pcVar30 != (char *)0x0) {
LAB_029c96c0:
                local_d8._0_4_ = CONCAT22(*(undefined2 *)(lVar38 + 0x1d2),(undefined2)local_d8);
                local_d8 = (undefined **)
                           (ulong)(CONCAT24(*(undefined2 *)(lVar38 + 0xe8),
                                            CONCAT31((int3)((uint)(undefined4)local_d8 >> 8),
                                                     *(byte *)(lVar38 + 0x1d0) >> 5)) &
                                  0xffffffffff01);
                local_c8 = *(long *)(lVar38 + 0x1b8);
                local_d0 = (byte *)CONCAT44(local_d0._4_4_,
                                            *(undefined4 *)(*(long *)(lVar38 + 0xd8) + 0x38));
                local_c0 = 0;
                FUN_02a06880(pcVar30 + 8,&local_d8);
                bVar11 = true;
                goto LAB_029c970c;
              }
              iVar31 = *(int *)(param_1 + 0x25bd8);
              if (iVar31 != 0) {
                puVar24 = *(undefined8 **)(param_1 + 0x25bc8);
                if (iVar31 < 1) {
                  pcVar30 = (char *)*puVar24;
                }
                else {
                  iVar3 = *(int *)(param_1 + 0x25bd0);
                  iVar4 = *(int *)(param_1 + 0x25bd4);
                  iVar6 = 0;
                  if (iVar3 <= iVar4) {
                    iVar6 = iVar3;
                  }
                  pcVar30 = (char *)puVar24[iVar4 - iVar6];
                  iVar6 = 0;
                  if (iVar4 + 1 < iVar3) {
                    iVar6 = iVar4 + 1;
                  }
                  *(int *)(param_1 + 0x25bd4) = iVar6;
                  *(int *)(param_1 + 0x25bd8) = iVar31 + -1;
                }
                if (pcVar30 != (char *)0x0) goto LAB_029c96c0;
              }
              pcVar30 = (char *)0x0;
              *(undefined1 *)plVar33 = 0;
            }
LAB_029c9914:
            cVar19 = *(char *)((long)plVar33 + 1);
            if ('\x01' < cVar19) {
              fVar40 = *(float *)((long)plVar33 + 0xc);
              if (*(float *)(lVar38 + 0x90) != fVar40) {
                fVar40 = *(float *)(lVar38 + 0x90) * *(float *)(plVar33 + 1);
                lVar38 = plVar33[2];
                *(float *)((long)plVar33 + 0xc) = fVar40;
                if (((lVar38 != 0) && (0.0 <= fVar40)) &&
                   ((int)plVar33[3] == *(int *)(lVar38 + 0x10))) {
                  *(float *)(lVar38 + 0x90) = fVar40;
                  fVar40 = *(float *)((long)plVar33 + 0xc);
                  cVar19 = *(char *)((long)plVar33 + 1);
                }
              }
              uVar23 = (undefined4)plVar33[1];
              uVar35 = (uint)cVar19;
              goto LAB_029c9620;
            }
            if (2 < (int)uVar26) {
              if ((plVar33[2] != 0) && ((int)plVar33[3] == *(int *)(plVar33[2] + 0x10))) {
                FUN_03b45ec0(0,0);
              }
              goto LAB_029c9594;
            }
            if (cVar19 == '\0') {
              fVar40 = 1.0;
              if (0 < (int)uVar26) {
                lVar18 = plVar33[2];
                if ((lVar18 != 0) && ((int)plVar33[3] == *(int *)(lVar18 + 0x10))) {
                  fVar40 = (float)(int)uVar26 * 0.06333333;
                  if ((0.0 <= fVar40) && (*(int *)(lVar18 + 0xc) < 3)) {
                    *(float *)(lVar18 + 0x2c) = fVar40;
                    uVar23 = 2;
                    if (0.0 < fVar40) {
                      uVar23 = 1;
                    }
                    *(undefined4 *)(lVar18 + 0xc) = uVar23;
                  }
                }
                fVar40 = 1.0;
                if (7 < uVar26) {
                  fVar40 = 1.0;
                  uVar35 = uVar26 & 0xfffffff8;
                  do {
                    uVar35 = uVar35 - 8;
                    fVar40 = fVar40 * 0.7 * 0.7 * 0.7 * 0.7 * 0.7 * 0.7 * 0.7 * 0.7;
                  } while (uVar35 != 0);
                }
                for (uVar35 = uVar26 & 7; uVar35 != 0; uVar35 = uVar35 - 1) {
                  fVar40 = fVar40 * 0.7;
                }
              }
              *(float *)(plVar33 + 1) = fVar40;
              fVar39 = *(float *)(lVar38 + 0x90);
            }
            else {
              if ((cVar19 != '\x01') ||
                 (fVar40 = *(float *)(lVar38 + 0x90), fVar40 == *(float *)((long)plVar33 + 0xc)))
              goto LAB_029c98b4;
              fVar39 = *(float *)(plVar33 + 1);
            }
            fVar40 = fVar40 * fVar39;
            lVar38 = plVar33[2];
            *(float *)((long)plVar33 + 0xc) = fVar40;
            if ((lVar38 != 0) && (0.0 <= fVar40 && (int)plVar33[3] == *(int *)(lVar38 + 0x10))) {
              *(float *)(lVar38 + 0x90) = fVar40;
            }
          }
          else {
            if (1 < (int)(uVar35 - (int)cVar19)) {
LAB_029c9674:
              local_c8 = (ulong)DAT_055ea064 << 0x20;
              local_d0 = (byte *)((ulong)DAT_055ea064 << 0x20);
              local_d8 = (undefined **)((ulong)DAT_055ea064 << 0x20);
              FUN_02a069d0(pcVar30 + 8,&local_d8);
              cVar8 = (char)*plVar33;
              goto LAB_029c96ac;
            }
            bVar11 = false;
            if (((char *)plVar33[4] != (char *)0x0) && ((char *)plVar33[4] != pcVar30))
            goto LAB_029c9674;
LAB_029c970c:
            local_a0 = *(undefined4 *)(lVar38 + 0x174);
            uStack_9c = *(undefined4 *)(lVar38 + 0x184);
            local_98 = *(undefined4 *)(lVar38 + 0x194);
            lVar18 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0xb4510);
            local_d8 = *(undefined ***)(lVar18 + 0x130);
            local_d0 = (byte *)CONCAT44(local_d0._4_4_,(int)*(undefined8 *)(lVar18 + 0x138));
            local_94 = local_a0;
            uStack_90 = uStack_9c;
            local_8c = local_98;
            FUN_02a1e144(lVar18,&local_a0,&local_94,&local_d8,0);
            if (0 < *(int *)(pcVar30 + 0x20)) {
              iVar31 = 0;
              uVar37 = 0;
              do {
                local_d8 = (undefined **)CONCAT44(local_d8._4_4_,0x3f800000);
                local_b8 = CONCAT44(uStack_9c,local_a0);
                *puVar27 = 0;
                puVar27[1] = 0;
                *(undefined4 *)(puVar27 + 2) = 0;
                local_c0 = 0;
                local_b0 = local_98;
                local_ac = CONCAT44(uStack_90,local_94);
                local_a4 = local_8c;
                uVar17 = FUN_02a08450(pcVar30 + 0x28,&local_d8);
                iVar31 = iVar31 + 1;
                uVar37 = uVar17 | uVar37;
              } while (iVar31 < *(int *)(pcVar30 + 0x20));
              if ((uVar37 & 1) != 0) {
                *(int *)(pcVar30 + 0x16a4) = *(int *)(pcVar30 + 0x16a4) + 1;
              }
            }
            if (*(char *)((long)plVar33 + 1) == '\0') {
              plVar33[4] = (long)pcVar30;
              *pcVar30 = *pcVar30 + '\x01';
              if ((*(int *)(lVar38 + 0xc) < 3) && (*(long *)(lVar38 + 0x118) == 0)) {
                *(char **)(lVar38 + 0x118) = pcVar30 + 8;
                FUN_03b46430();
              }
            }
            if ((char)*plVar33 == '\0') {
              bVar11 = true;
            }
            if (bVar11) goto LAB_029c9914;
            lVar18 = plVar33[2];
            *(undefined4 *)(plVar33 + 1) = uVar23;
            *(float *)((long)plVar33 + 0xc) = fVar40;
            if ((lVar18 != 0) && ((int)plVar33[3] == *(int *)(lVar18 + 0x10))) {
              *(undefined4 *)(lVar18 + 0x90) = 0;
            }
            *(undefined4 *)(lVar38 + 0xf4) = 0;
          }
LAB_029c98b4:
          uVar23 = (undefined4)plVar33[1];
          fVar40 = *(float *)((long)plVar33 + 0xc);
          uVar35 = (uint)*(char *)((long)plVar33 + 1);
        }
LAB_029c9620:
        plVar33 = plVar29 + -5;
        plVar36 = plVar29;
      } while (plVar33 != (long *)(lVar20 + 0x70));
      if (pcVar30 != (char *)0x0) {
        local_c8 = (ulong)DAT_055ea064 << 0x20;
        local_d0 = (byte *)((ulong)DAT_055ea064 << 0x20);
        local_d8 = (undefined **)((ulong)DAT_055ea064 << 0x20);
        FUN_02a069d0(pcVar30 + 8,&local_d8);
      }
    }
    if ((iVar5 != 0) && (*(int *)(lVar20 + 0xa8) == 0)) {
      local_d0 = *(byte **)(lVar20 + 8);
      local_d8 = &PTR_LAB_048f9770;
      plVar33 = plVar1;
LAB_029c9b3c:
      lVar38 = *plVar33;
      if (lVar38 != 0) {
        (*(code *)local_d8[3])(&local_d8);
        (*(code *)local_d8[3])(&local_d8);
        pbVar32 = local_d0;
        plVar33 = (long *)(lVar38 + 0x20);
        (**(code **)(*plVar33 + 0x18))(plVar33);
        if (pbVar32 != *(byte **)(lVar38 + 0x28)) {
          pbVar32 = *(byte **)(lVar38 + 0x28);
          pbVar25 = local_d0;
          lVar18 = 0x7ffff;
          do {
            bVar7 = *pbVar25;
            if (bVar7 != *pbVar32) {
              if (bVar7 < *pbVar32) {
                plVar33 = (long *)(lVar38 + 8);
                goto LAB_029c9b3c;
              }
              break;
            }
            if (bVar7 == 0) break;
            bVar11 = lVar18 != 0;
            pbVar32 = pbVar32 + 1;
            pbVar25 = pbVar25 + 1;
            lVar18 = lVar18 + -1;
          } while (bVar11);
        }
        (**(code **)(*(long *)(lVar38 + 0x20) + 0x18))(plVar33);
        (**(code **)(*(long *)(lVar38 + 0x20) + 0x18))(plVar33);
        pbVar32 = *(byte **)(lVar38 + 0x28);
        (*(code *)local_d8[3])(&local_d8);
        if (pbVar32 != local_d0) {
          pbVar32 = local_d0;
          pbVar25 = *(byte **)(lVar38 + 0x28);
          lVar18 = 0x7ffff;
          while( true ) {
            bVar7 = *pbVar25;
            if (bVar7 != *pbVar32) break;
            if (bVar7 == 0) goto LAB_029c9d10;
            bVar11 = lVar18 == 0;
            pbVar32 = pbVar32 + 1;
            pbVar25 = pbVar25 + 1;
            lVar18 = lVar18 + -1;
            if (bVar11) goto LAB_029c9d10;
          }
          if (bVar7 < *pbVar32) {
            plVar33 = (long *)(lVar38 + 0x10);
            goto LAB_029c9b3c;
          }
        }
LAB_029c9d10:
        local_d8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_d0 = *(byte **)(lVar20 + 8);
        lVar38 = FUN_029ca380(*plVar1,&local_d8);
        *plVar1 = lVar38;
        if (lVar38 != 0) {
          *(undefined8 *)(lVar38 + 0x18) = 1;
        }
      }
      puVar10 = PTR_PTR_04bb2238;
      __dest = *(void **)(lVar20 + 8);
      (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
      __src = *(void **)(puVar10 + 8);
      if (__dest != __src) {
        (**(code **)(*(long *)puVar10 + 0x18))(puVar10);
        lVar38 = 0;
        do {
          if (*(char *)(*(long *)(puVar10 + 8) + lVar38) == '\0') goto LAB_029c9dd0;
          lVar18 = *(long *)(puVar10 + 8) + lVar38;
          if (*(char *)(lVar18 + 1) == '\0') {
            lVar38 = lVar38 + 1;
            goto LAB_029c9dd0;
          }
          if (*(char *)(lVar18 + 2) == '\0') {
            lVar38 = lVar38 + 2;
            goto LAB_029c9dd0;
          }
          lVar38 = lVar38 + 3;
        } while (lVar38 != 0x80001);
        lVar38 = 0;
LAB_029c9dd0:
        iVar5 = (int)lVar38;
        if (*(int *)(lVar20 + 0x10) <= (int)lVar38) {
          iVar5 = *(int *)(lVar20 + 0x10) + -1;
        }
        memcpy(__dest,__src,(long)iVar5);
        *(undefined1 *)((long)__dest + (long)iVar5) = 0;
      }
      if (*(int *)(param_1 + 0x24a48) < *(int *)(param_1 + 0x24a60)) {
        plVar33 = *(long **)(param_1 + 0x24a50);
        if (plVar33 != (long *)0x0) {
          *(long *)(param_1 + 0x24a50) = *plVar33;
        }
        plVar33[2] = 0;
        plVar36 = plVar33 + 1;
        *plVar36 = 0;
        *plVar33 = lVar20;
        lVar20 = *plVar2;
        *plVar2 = (long)plVar36;
        plVar33[2] = (long)plVar2;
        *plVar36 = lVar20;
        if (lVar20 != 0) {
          *(long **)(lVar20 + 8) = plVar36;
        }
        *(int *)(param_1 + 0x24a48) = *(int *)(param_1 + 0x24a48) + 1;
      }
    }
    iVar34 = iVar34 + 1;
    if (iVar34 == 0x32) {
      return;
    }
  } while( true );
}

