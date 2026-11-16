
void FUN_02997a60(long param_1,char *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  byte bVar14;
  long lVar15;
  long lVar16;
  long **pplVar17;
  undefined **ppuVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  undefined *puVar22;
  undefined2 uVar23;
  int iVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  uint uVar30;
  int *piVar31;
  undefined8 *puVar32;
  long lVar33;
  undefined1 *puVar34;
  undefined *puVar35;
  ulong uVar36;
  ulong uVar37;
  byte *pbVar38;
  uint uVar39;
  uint uVar40;
  int iVar41;
  long *plVar42;
  char *pcVar43;
  int iVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  uint local_250c;
  undefined *local_24d0;
  long **local_24c8;
  undefined8 local_24c0;
  undefined8 local_24b8;
  long *local_24b0 [9];
  long local_2468 [21];
  undefined1 local_23bd;
  undefined8 local_f8;
  undefined **local_b0;
  undefined **ppuStack_a8;
  undefined1 *local_a0;
  undefined8 uStack_98;
  long local_90 [2];
  
  lVar19 = *(long *)PTR_DAT_04bb26a8;
  nn::os::LockMutex((MutexType *)(lVar19 + 0x896c8));
  cVar12 = *(char *)(lVar19 + 0x89692);
  cVar13 = *(char *)(lVar19 + 0x89693);
  nn::os::UnlockMutex((MutexType *)(lVar19 + 0x896c8));
  local_24c8 = local_24b0;
  local_24b0[0] = local_2468;
  local_24b8 = 0x8000000000;
  lVar19 = 0x7e;
  local_24d0 = (undefined *)0x0;
  plVar20 = local_24b0[0];
  do {
    lVar19 = lVar19 + -2;
    *plVar20 = (long)(plVar20 + 9);
    plVar20[9] = (long)(plVar20 + 0x12);
    plVar20 = plVar20 + 0x12;
  } while (lVar19 != 0);
  local_f8 = 0;
  if (DAT_04c487d4 == 0xffff) {
    lVar19 = 1;
  }
  else {
    local_b0 = (undefined **)CONCAT44(local_b0._4_4_,0x20);
    puVar22 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)(short)DAT_04c487d4) {
      puVar22 = PTR_DAT_04bc39f8;
    }
    lVar19 = 0x32;
    if ((*(uint *)(puVar22 + 4) & 1) == 0) {
      lVar19 = 1;
    }
  }
  local_24c0 = local_24c8;
  FUN_017baf44((&DAT_0516b108)[lVar19]);
  puVar22 = PTR_DAT_04bc39f8;
  iVar25 = *(int *)(param_1 + 0x188);
  if (iVar25 != 0) {
    lVar19 = *(long *)(param_1 + 400);
    iVar41 = 0;
    pbVar1 = (byte *)(param_1 + 0x274);
    do {
      pplVar17 = local_24c8;
      plVar42 = (long *)(lVar19 + (long)iVar41 * 0x50 + 0x18);
      lVar33 = *plVar42;
      uVar3 = *(undefined4 *)(lVar33 + 300);
      uVar4 = *(undefined4 *)(lVar33 + 0x128);
      uVar5 = *(undefined4 *)(lVar33 + 0x124);
      plVar20 = *(long **)(lVar33 + 0x20);
      if ((int)local_24b8 < local_24b8._4_4_) {
        if (local_24c8 != (long **)0x0) {
          local_24c8 = (long **)*local_24c8;
        }
        pplVar17[7] = plVar20;
        *(undefined4 *)(pplVar17 + 4) = 0xffffffff;
        pplVar17[2] = (long *)0x0;
        pplVar17[3] = (long *)0x0;
        *(undefined4 *)(pplVar17 + 5) = uVar3;
        *(undefined4 *)((long)pplVar17 + 0x2c) = uVar4;
        *(undefined4 *)(pplVar17 + 6) = uVar5;
        pplVar17[8] = (long *)&local_24d0;
        *pplVar17 = (long *)&PTR_LAB_04a975f8;
        pplVar17[1] = (long *)0x0;
        *(undefined4 *)(pplVar17 + 4) = *(undefined4 *)(lVar33 + 0xc);
        local_24b8 = CONCAT44(local_24b8._4_4_,(int)local_24b8 + 1);
        local_24d0 = (undefined *)FUN_0299c8e4(local_24d0);
        *(undefined8 *)(local_24d0 + 0x18) = 1;
      }
      else if (local_24d0 != (undefined *)0x0) {
        puVar35 = local_24d0;
        do {
          while (*(int *)(lVar33 + 0xc) < *(int *)(puVar35 + 0x20)) {
            puVar35 = *(undefined **)(puVar35 + 8);
            if (puVar35 == (undefined *)0x0) goto LAB_02997cc0;
          }
          if (*(int *)(lVar33 + 0xc) <= *(int *)(puVar35 + 0x20)) {
            *(undefined4 *)(puVar35 + 0x28) = uVar3;
            *(undefined4 *)(puVar35 + 0x2c) = uVar4;
            *(undefined4 *)(puVar35 + 0x30) = uVar5;
            *(long **)(puVar35 + 0x38) = plVar20;
            break;
          }
          puVar35 = *(undefined **)(puVar35 + 0x10);
        } while (puVar35 != (undefined *)0x0);
      }
LAB_02997cc0:
      lVar26 = lVar19 + (long)iVar41 * 0x50;
      lVar33 = *(long *)(lVar26 + 0x28);
      if (lVar33 != lVar26 + 0x20) {
        do {
          puVar34 = *(undefined1 **)(lVar33 + -8);
          lVar33 = *(long *)(lVar33 + 8);
          iVar24 = *(int *)(*plVar42 + 0xc);
          if (iVar24 < 1) {
            iVar24 = *(int *)(lVar19 + (long)iVar41 * 0x50 + 4);
          }
          if (*(int *)(puVar34 + 0xc) != iVar24) {
            if ((long)(short)DAT_04c487d4 == 0xffffffffffffffff) {
LAB_02997d70:
              *(int *)(puVar34 + 0xc) = iVar24;
              *puVar34 = 1;
              if (cVar12 == '\0') goto LAB_02997cf0;
            }
            else {
              local_b0 = (undefined **)CONCAT44(local_b0._4_4_,0x20);
              puVar35 = puVar22 + ((long)(short)DAT_04c487d4 & 0xffffffffU) * 8;
              if (0xff < DAT_04c487d4) {
                puVar35 = puVar22;
              }
              if ((*(uint *)(puVar35 + 4) & 1) == 0) goto LAB_02997d70;
              if (cVar12 == '\0') goto LAB_02997cf0;
              *(int *)(puVar34 + 0xc) = iVar24;
              *puVar34 = 1;
            }
            uVar39 = *(uint *)(puVar34 + 4);
            bVar14 = *(byte *)(param_1 + 0x1f8);
            uVar36 = (ulong)bVar14;
            if (bVar14 == 0) {
              uVar36 = 0;
            }
            else {
              uVar37 = 0;
              pbVar38 = pbVar1;
              do {
                pbVar2 = pbVar38;
                if (0xf1 < uVar37) {
                  pbVar2 = pbVar1;
                }
                if ((uint)*pbVar2 == (uVar39 & 0xff)) {
                  *(short *)(pbVar2 + 8) = (short)iVar24;
                  goto LAB_02997cf0;
                }
                uVar37 = uVar37 + 1;
                pbVar38 = pbVar38 + 0x24;
              } while (uVar36 != uVar37);
            }
            pbVar38 = pbVar1 + uVar36 * 0x24;
            if (0xf1 < bVar14) {
              pbVar38 = pbVar1;
            }
            *(short *)(pbVar38 + 8) = (short)iVar24;
            *pbVar38 = (byte)uVar39;
            *(char *)(param_1 + 0x1f8) = *(char *)(param_1 + 0x1f8) + '\x01';
          }
LAB_02997cf0:
        } while (lVar33 + -8 != lVar26 + 0x18);
      }
      iVar41 = iVar41 + 1;
    } while (iVar25 != iVar41);
  }
  iVar25 = *(int *)(param_1 + 0x1a8);
  if (iVar25 != 0) {
    lVar19 = *(long *)(param_1 + 0x1b0);
    iVar41 = 0;
    pbVar1 = (byte *)(param_1 + 0x274);
    do {
      pplVar17 = local_24c8;
      plVar42 = (long *)(lVar19 + (long)iVar41 * 0x50 + 0x18);
      lVar33 = *plVar42;
      uVar3 = *(undefined4 *)(lVar33 + 300);
      uVar4 = *(undefined4 *)(lVar33 + 0x128);
      uVar5 = *(undefined4 *)(lVar33 + 0x124);
      plVar20 = *(long **)(lVar33 + 0x20);
      if ((int)local_24b8 < local_24b8._4_4_) {
        if (local_24c8 != (long **)0x0) {
          local_24c8 = (long **)*local_24c8;
        }
        *(undefined4 *)(pplVar17 + 4) = 0xffffffff;
        pplVar17[2] = (long *)0x0;
        pplVar17[3] = (long *)0x0;
        *(undefined4 *)(pplVar17 + 5) = uVar3;
        *(undefined4 *)((long)pplVar17 + 0x2c) = uVar4;
        *(undefined4 *)(pplVar17 + 6) = uVar5;
        *pplVar17 = (long *)&PTR_LAB_04a975f8;
        pplVar17[1] = (long *)0x0;
        pplVar17[7] = plVar20;
        pplVar17[8] = (long *)&local_24d0;
        *(undefined4 *)(pplVar17 + 4) = *(undefined4 *)(lVar33 + 0xc);
        local_24b8 = CONCAT44(local_24b8._4_4_,(int)local_24b8 + 1);
        local_24d0 = (undefined *)FUN_0299c8e4(local_24d0);
        *(undefined8 *)(local_24d0 + 0x18) = 1;
      }
      else if (local_24d0 != (undefined *)0x0) {
        puVar22 = local_24d0;
        do {
          while (*(int *)(lVar33 + 0xc) < *(int *)(puVar22 + 0x20)) {
            puVar22 = *(undefined **)(puVar22 + 8);
            if (puVar22 == (undefined *)0x0) goto LAB_02997ef0;
          }
          if (*(int *)(lVar33 + 0xc) <= *(int *)(puVar22 + 0x20)) {
            *(undefined4 *)(puVar22 + 0x28) = uVar3;
            *(undefined4 *)(puVar22 + 0x2c) = uVar4;
            *(undefined4 *)(puVar22 + 0x30) = uVar5;
            *(long **)(puVar22 + 0x38) = plVar20;
            break;
          }
          puVar22 = *(undefined **)(puVar22 + 0x10);
        } while (puVar22 != (undefined *)0x0);
      }
LAB_02997ef0:
      lVar33 = lVar19 + (long)iVar41 * 0x50;
      lVar26 = *(long *)(lVar33 + 0x28);
      if (lVar26 != lVar33 + 0x20) {
        puVar32 = (undefined8 *)(lVar26 + -8);
        lVar26 = *(long *)(lVar26 + 8);
        piVar31 = (int *)(lVar19 + (long)iVar41 * 0x50 + 4);
        if (cVar12 == '\0') {
          do {
            puVar34 = (undefined1 *)*puVar32;
            iVar24 = *(int *)(*plVar42 + 0xc);
            if (*(int *)(*plVar42 + 0xc) < 1) {
              iVar24 = *piVar31;
            }
            if (*(int *)(puVar34 + 0xc) != iVar24) {
              *(int *)(puVar34 + 0xc) = iVar24;
              *puVar34 = 1;
            }
            puVar32 = (undefined8 *)(lVar26 + -8);
            lVar26 = *(long *)(lVar26 + 8);
          } while (puVar32 != (undefined8 *)(lVar33 + 0x18));
        }
        else {
          do {
            puVar34 = (undefined1 *)*puVar32;
            iVar24 = *(int *)(*plVar42 + 0xc);
            if (*(int *)(*plVar42 + 0xc) < 1) {
              iVar24 = *piVar31;
            }
            if (*(int *)(puVar34 + 0xc) != iVar24) {
              *(int *)(puVar34 + 0xc) = iVar24;
              *puVar34 = 1;
              uVar39 = *(uint *)(puVar34 + 4);
              bVar14 = *(byte *)(param_1 + 0x1f8);
              uVar36 = (ulong)bVar14;
              if (bVar14 == 0) {
                uVar36 = 0;
              }
              else {
                uVar37 = 0;
                pbVar38 = pbVar1;
                do {
                  pbVar2 = pbVar38;
                  if (0xf1 < uVar37) {
                    pbVar2 = pbVar1;
                  }
                  if ((uint)*pbVar2 == (uVar39 & 0xff)) {
                    *(short *)(pbVar2 + 8) = (short)iVar24;
                    goto LAB_02997f70;
                  }
                  uVar37 = uVar37 + 1;
                  pbVar38 = pbVar38 + 0x24;
                } while (uVar36 != uVar37);
              }
              pbVar38 = pbVar1 + uVar36 * 0x24;
              if (0xf1 < bVar14) {
                pbVar38 = pbVar1;
              }
              *(short *)(pbVar38 + 8) = (short)iVar24;
              *pbVar38 = (byte)uVar39;
              *(char *)(param_1 + 0x1f8) = *(char *)(param_1 + 0x1f8) + '\x01';
            }
LAB_02997f70:
            puVar32 = (undefined8 *)(lVar26 + -8);
            lVar26 = *(long *)(lVar26 + 8);
          } while (puVar32 != (undefined8 *)(lVar33 + 0x18));
        }
      }
      iVar41 = iVar41 + 1;
    } while (iVar25 != iVar41);
  }
  iVar25 = *(int *)(param_1 + 0x198);
  if (iVar25 != 0) {
    lVar26 = *(long *)(param_1 + 0x1a0);
    lVar33 = *(long *)PTR_DAT_04bb29d0;
    iVar41 = 0;
    pbVar1 = (byte *)(param_1 + 0x274);
    lVar19 = (long)(lVar33 * (*(long *)(DAT_05aebb88 + 8) + (ulong)*(uint *)(DAT_05aebb88 + 4)) * 5)
             / 1000;
    do {
      pplVar17 = local_24c8;
      plVar20 = (long *)(lVar26 + (long)iVar41 * 0x50 + 0x18);
      lVar21 = *plVar20;
      iVar24 = *(int *)(lVar21 + 0x28);
      if (iVar24 < 1) {
        iVar24 = *(int *)(lVar21 + 0xc);
      }
      piVar31 = (int *)(lVar26 + (long)iVar41 * 0x50 + 0xc);
      iVar10 = *piVar31;
      puVar22 = local_24d0;
      if (iVar10 != iVar24) {
        *piVar31 = iVar24;
      }
      for (; puVar22 != (undefined *)0x0; puVar22 = *(undefined **)(puVar22 + 8)) {
        while (*(int *)(puVar22 + 0x20) <= iVar24) {
          if (iVar24 <= *(int *)(puVar22 + 0x20)) {
            lVar28 = *(long *)(puVar22 + 0x38);
            plVar42 = (long *)(lVar26 + (long)iVar41 * 0x50 + 0x10);
            if ((iVar10 != iVar24) || (*plVar42 != lVar28)) {
              iVar44 = *(int *)(puVar22 + 0x30);
              iVar24 = *(int *)(puVar22 + 0x28);
              iVar10 = *(int *)(puVar22 + 0x2c);
              *plVar42 = lVar28;
              lVar27 = lVar19 - lVar28;
              lVar15 = (lVar33 * (int)(((float)iVar10 / (float)iVar44) * 1000.0)) / 1000;
              if (lVar15 <= lVar27) {
                lVar16 = (lVar33 * (int)(((float)(iVar24 - iVar10) / (float)iVar44) * 1000.0)) /
                         1000;
                lVar28 = 0;
                if (lVar16 != 0) {
                  lVar28 = (lVar27 - lVar15) / lVar16;
                }
                lVar28 = lVar19 + (lVar28 * lVar16 - lVar27);
              }
              *(long *)(lVar21 + 0x148) = lVar28;
              *(byte *)(lVar21 + 0x130) = *(byte *)(lVar21 + 0x130) | 0x10;
              *(long *)(*plVar20 + 0x20) = lVar28;
              lVar28 = *plVar20;
              if (*(int *)(lVar21 + 0x28) < 0) {
                lVar21 = lVar28;
              }
              else {
                *(int *)(lVar28 + 0x138) = *(int *)(lVar21 + 0x28);
                *(undefined2 *)(lVar28 + 0x131) = 0x101;
                *(undefined8 *)(lVar28 + 0x140) = 0xffffffffffffffff;
                *(undefined4 *)(lVar21 + 0x28) = 0xffffffff;
                *(undefined8 *)(lVar21 + 0x30) = 0;
                lVar21 = *plVar20;
              }
            }
            goto LAB_02998230;
          }
          puVar22 = *(undefined **)(puVar22 + 0x10);
          if (puVar22 == (undefined *)0x0) goto LAB_02998230;
        }
      }
LAB_02998230:
      uVar3 = *(undefined4 *)(lVar21 + 300);
      uVar4 = *(undefined4 *)(lVar21 + 0x128);
      uVar5 = *(undefined4 *)(lVar21 + 0x124);
      plVar42 = *(long **)(lVar21 + 0x20);
      if ((int)local_24b8 < local_24b8._4_4_) {
        if (local_24c8 != (long **)0x0) {
          local_24c8 = (long **)*local_24c8;
        }
        *(undefined4 *)(pplVar17 + 6) = uVar5;
        *(undefined4 *)(pplVar17 + 4) = 0xffffffff;
        *(undefined4 *)(pplVar17 + 5) = uVar3;
        *(undefined4 *)((long)pplVar17 + 0x2c) = uVar4;
        pplVar17[2] = (long *)0x0;
        pplVar17[3] = (long *)0x0;
        *pplVar17 = (long *)&PTR_LAB_04a975f8;
        pplVar17[1] = (long *)0x0;
        pplVar17[7] = plVar42;
        pplVar17[8] = (long *)&local_24d0;
        *(undefined4 *)(pplVar17 + 4) = *(undefined4 *)(lVar21 + 0xc);
        local_24b8 = CONCAT44(local_24b8._4_4_,(int)local_24b8 + 1);
        local_24d0 = (undefined *)FUN_0299c8e4(local_24d0);
        *(undefined8 *)(local_24d0 + 0x18) = 1;
      }
      else if (local_24d0 != (undefined *)0x0) {
        puVar22 = local_24d0;
        do {
          while (*(int *)(lVar21 + 0xc) < *(int *)(puVar22 + 0x20)) {
            puVar22 = *(undefined **)(puVar22 + 8);
            if (puVar22 == (undefined *)0x0) goto LAB_02998300;
          }
          if (*(int *)(lVar21 + 0xc) <= *(int *)(puVar22 + 0x20)) {
            *(undefined4 *)(puVar22 + 0x28) = uVar3;
            *(undefined4 *)(puVar22 + 0x2c) = uVar4;
            *(undefined4 *)(puVar22 + 0x30) = uVar5;
            *(long **)(puVar22 + 0x38) = plVar42;
            break;
          }
          puVar22 = *(undefined **)(puVar22 + 0x10);
        } while (puVar22 != (undefined *)0x0);
      }
LAB_02998300:
      lVar21 = lVar26 + (long)iVar41 * 0x50;
      lVar28 = *(long *)(lVar21 + 0x28);
      if (lVar28 != lVar21 + 0x20) {
        puVar32 = (undefined8 *)(lVar28 + -8);
        lVar28 = *(long *)(lVar28 + 8);
        piVar31 = (int *)(lVar26 + (long)iVar41 * 0x50 + 4);
        if (cVar12 == '\0') {
          do {
            puVar34 = (undefined1 *)*puVar32;
            iVar24 = *(int *)(*plVar20 + 0xc);
            if (*(int *)(*plVar20 + 0xc) < 1) {
              iVar24 = *piVar31;
            }
            if (*(int *)(puVar34 + 0xc) != iVar24) {
              *(int *)(puVar34 + 0xc) = iVar24;
              *puVar34 = 1;
            }
            puVar32 = (undefined8 *)(lVar28 + -8);
            lVar28 = *(long *)(lVar28 + 8);
          } while (puVar32 != (undefined8 *)(lVar21 + 0x18));
        }
        else {
          do {
            puVar34 = (undefined1 *)*puVar32;
            iVar24 = *(int *)(*plVar20 + 0xc);
            if (*(int *)(*plVar20 + 0xc) < 1) {
              iVar24 = *piVar31;
            }
            if (*(int *)(puVar34 + 0xc) != iVar24) {
              *(int *)(puVar34 + 0xc) = iVar24;
              *puVar34 = 1;
              uVar39 = *(uint *)(puVar34 + 4);
              bVar14 = *(byte *)(param_1 + 0x1f8);
              uVar36 = (ulong)bVar14;
              if (bVar14 == 0) {
                uVar36 = 0;
              }
              else {
                uVar37 = 0;
                pbVar38 = pbVar1;
                do {
                  pbVar2 = pbVar38;
                  if (0xf1 < uVar37) {
                    pbVar2 = pbVar1;
                  }
                  if ((uint)*pbVar2 == (uVar39 & 0xff)) {
                    *(short *)(pbVar2 + 8) = (short)iVar24;
                    goto LAB_02998374;
                  }
                  uVar37 = uVar37 + 1;
                  pbVar38 = pbVar38 + 0x24;
                } while (uVar36 != uVar37);
              }
              pbVar38 = pbVar1 + uVar36 * 0x24;
              if (0xf1 < bVar14) {
                pbVar38 = pbVar1;
              }
              *(short *)(pbVar38 + 8) = (short)iVar24;
              *pbVar38 = (byte)uVar39;
              *(char *)(param_1 + 0x1f8) = *(char *)(param_1 + 0x1f8) + '\x01';
            }
LAB_02998374:
            puVar32 = (undefined8 *)(lVar28 + -8);
            lVar28 = *(long *)(lVar28 + 8);
          } while (puVar32 != (undefined8 *)(lVar21 + 0x18));
        }
      }
      iVar41 = iVar41 + 1;
    } while (iVar25 != iVar41);
  }
  ppuStack_a8 = &local_24d0;
  local_a0 = &LAB_0299c6fc;
  uStack_98 = 0;
  local_b0 = &PTR_LAB_04a975a8;
  if (local_24d0 != (undefined *)0x0) {
    FUN_0299c700(local_24d0,&local_b0);
  }
  if (*param_2 != '\0') {
    local_b0 = (undefined **)0x0;
    local_90[0] = 0;
    cVar11 = *(char *)(param_1 + 0xf0);
    lVar19 = *(long *)(param_1 + 0x100);
    iVar25 = *(int *)(param_1 + 0x70);
    if (lVar19 == param_1 + 0xf8) {
      iVar24 = 0;
      iVar41 = 0;
      uVar40 = 0;
      uVar39 = 0x3b;
      iVar10 = iVar25;
    }
    else {
      uVar40 = 0;
      iVar41 = 0;
      iVar24 = 0;
      uVar39 = 0x3b;
      do {
        pcVar43 = *(char **)(lVar19 + -8);
        iVar10 = *(int *)(param_1 + 0x70);
        iVar44 = *(int *)(pcVar43 + 4);
        if ((cVar11 != '\0') || (*pcVar43 != '\0')) {
          uVar29 = uVar40;
          if (iVar10 <= iVar44) {
            uVar29 = uVar39;
          }
          *pcVar43 = '\0';
          FUN_0299bdb0(&local_b0,local_90,uVar29);
          if (uVar29 < 0x3c) {
            ppuVar18 = local_b0 + (ulong)uVar29 * 7 + 7;
          }
          else {
            ppuVar18 = (undefined **)(local_90[0] + 0x38) + (ulong)(uVar29 - 0x3c) * 7;
            if (0x44 < uVar29 - 0x3c) {
              ppuVar18 = (undefined **)(local_90[0] + 0x38);
            }
          }
          uVar5 = *(undefined4 *)(pcVar43 + 0x14);
          uVar6 = *(undefined4 *)(pcVar43 + 0xc);
          bVar14 = pcVar43[8];
          uVar7 = *(undefined4 *)(pcVar43 + 0x18);
          uVar8 = *(undefined4 *)(pcVar43 + 0x1c);
          uVar46 = *(undefined4 *)(pcVar43 + 0x48);
          uVar47 = *(undefined4 *)(pcVar43 + 0x4c);
          uVar9 = *(undefined4 *)(pcVar43 + 0x2c);
          uVar48 = *(undefined4 *)(pcVar43 + 0x50);
          uVar45 = *(undefined4 *)(pcVar43 + 0x54);
          puVar22 = ppuVar18[5];
          uVar3 = *(undefined4 *)(pcVar43 + 0x24);
          uVar4 = *(undefined4 *)(pcVar43 + 0x28);
          if (puVar22 == (undefined *)0x0) {
            local_250c = 0;
          }
          else {
            if (*(undefined8 **)(puVar22 + 0x10) == (undefined8 *)0x0) {
              local_250c = 0;
              plVar20 = *(long **)(puVar22 + 0x20);
            }
            else {
              local_250c = (**(code **)**(undefined8 **)(puVar22 + 0x10))();
              if (ppuVar18[5] == (undefined *)0x0) goto LAB_029985fc;
              plVar20 = *(long **)(ppuVar18[5] + 0x20);
            }
            if (plVar20 != (long *)0x0) {
              local_24d0 = ppuVar18[1];
              local_24c8 = (long **)ppuVar18[2];
              local_24c0 = (long **)&SUB_00000020;
              (**(code **)(*plVar20 + 0x20))(plVar20,&local_24d0);
            }
          }
LAB_029985fc:
          (ppuVar18[2] + (long)ppuVar18[1])[2] = (char)uVar5;
          if ((ppuVar18[5] != (undefined *)0x0) &&
             (plVar20 = *(long **)(ppuVar18[5] + 0x20), plVar20 != (long *)0x0)) {
            local_24d0 = ppuVar18[1];
            local_24c8 = (long **)ppuVar18[2];
            local_24c0 = (long **)&SUB_00000020;
            (**(code **)(*plVar20 + 0x20))(plVar20,&local_24d0);
          }
          *(ushort *)(ppuVar18[2] + (long)ppuVar18[1]) =
               (ushort)uVar6 & ((ushort)((int)uVar6 >> 0x1f) ^ 0xffff);
          if ((ppuVar18[5] != (undefined *)0x0) &&
             (plVar20 = *(long **)(ppuVar18[5] + 0x20), plVar20 != (long *)0x0)) {
            local_24d0 = ppuVar18[1];
            local_24c8 = (long **)ppuVar18[2];
            local_24c0 = (long **)&SUB_00000020;
            (**(code **)(*plVar20 + 0x20))(plVar20,&local_24d0);
          }
          (ppuVar18[2] + (long)ppuVar18[1])[3] =
               (ppuVar18[2] + (long)ppuVar18[1])[3] & 0xfe | bVar14;
          if ((ppuVar18[5] != (undefined *)0x0) &&
             (plVar20 = *(long **)(ppuVar18[5] + 0x20), plVar20 != (long *)0x0)) {
            local_24d0 = ppuVar18[1];
            local_24c8 = (long **)ppuVar18[2];
            local_24c0 = (long **)&SUB_00000020;
            (**(code **)(*plVar20 + 0x20))(plVar20,&local_24d0);
          }
          (ppuVar18[2] + (long)ppuVar18[1])[0x16] = (char)uVar7;
          if ((ppuVar18[5] != (undefined *)0x0) &&
             (plVar20 = *(long **)(ppuVar18[5] + 0x20), plVar20 != (long *)0x0)) {
            local_24d0 = ppuVar18[1];
            local_24c8 = (long **)ppuVar18[2];
            local_24c0 = (long **)&SUB_00000020;
            (**(code **)(*plVar20 + 0x20))(plVar20,&local_24d0);
          }
          (ppuVar18[2] + (long)ppuVar18[1])[0x17] = (char)uVar8;
          if ((ppuVar18[5] != (undefined *)0x0) &&
             (plVar20 = *(long **)(ppuVar18[5] + 0x20), plVar20 != (long *)0x0)) {
            local_24d0 = ppuVar18[1];
            local_24c8 = (long **)ppuVar18[2];
            local_24c0 = (long **)&SUB_00000020;
            (**(code **)(*plVar20 + 0x20))(plVar20,&local_24d0);
          }
          *(short *)(ppuVar18[2] + (long)ppuVar18[1] + 0x10) = (short)uVar3;
          if ((ppuVar18[5] != (undefined *)0x0) &&
             (plVar20 = *(long **)(ppuVar18[5] + 0x20), plVar20 != (long *)0x0)) {
            local_24d0 = ppuVar18[1];
            local_24c8 = (long **)ppuVar18[2];
            local_24c0 = (long **)&SUB_00000020;
            (**(code **)(*plVar20 + 0x20))(plVar20,&local_24d0);
          }
          *(short *)(ppuVar18[2] + (long)ppuVar18[1] + 0x12) = (short)uVar4;
          if ((ppuVar18[5] != (undefined *)0x0) &&
             (plVar20 = *(long **)(ppuVar18[5] + 0x20), plVar20 != (long *)0x0)) {
            local_24d0 = ppuVar18[1];
            local_24c8 = (long **)ppuVar18[2];
            local_24c0 = (long **)&SUB_00000020;
            (**(code **)(*plVar20 + 0x20))(plVar20,&local_24d0);
          }
          *(short *)(ppuVar18[2] + (long)ppuVar18[1] + 0x14) = (short)uVar9;
          if ((ppuVar18[5] != (undefined *)0x0) &&
             (plVar20 = *(long **)(ppuVar18[5] + 0x20), plVar20 != (long *)0x0)) {
            local_24d0 = ppuVar18[1];
            local_24c8 = (long **)ppuVar18[2];
            local_24c0 = (long **)&SUB_00000020;
            (**(code **)(*plVar20 + 0x20))(plVar20,&local_24d0);
          }
          puVar22 = ppuVar18[2] + (long)ppuVar18[1];
          *(undefined4 *)(puVar22 + 4) = uVar46;
          *(undefined4 *)(puVar22 + 8) = uVar47;
          *(undefined4 *)(puVar22 + 0xc) = uVar48;
          if ((ppuVar18[5] != (undefined *)0x0) &&
             (plVar20 = *(long **)(ppuVar18[5] + 0x20), plVar20 != (long *)0x0)) {
            local_24d0 = ppuVar18[1];
            local_24c8 = (long **)ppuVar18[2];
            local_24c0 = (long **)&SUB_00000020;
            (**(code **)(*plVar20 + 0x20))(plVar20,&local_24d0);
          }
          *(undefined4 *)(ppuVar18[2] + (long)ppuVar18[1] + 0x18) = uVar45;
          if ((((local_250c & 1) != 0) && (ppuVar18[5] != (undefined *)0x0)) &&
             (puVar32 = *(undefined8 **)(ppuVar18[5] + 0x18), puVar32 != (undefined8 *)0x0)) {
            (**(code **)*puVar32)();
          }
        }
        lVar19 = *(long *)(lVar19 + 8);
        uVar29 = 0x3c;
        if (uVar40 != 0x3a) {
          uVar29 = uVar40 + 1;
        }
        uVar30 = 0x3c;
        if (uVar39 != 0x3a) {
          uVar30 = uVar39 + 1;
        }
        if (iVar44 < iVar10) {
          iVar41 = iVar41 + 1;
          uVar40 = uVar29;
        }
        else {
          iVar24 = iVar24 + 1;
          uVar39 = uVar30;
        }
      } while ((char *)(lVar19 + -8) != (char *)(param_1 + 0xf0));
      iVar10 = *(int *)(param_1 + 0x70);
    }
    if ((iVar10 != 0) && (iVar41 < iVar25)) {
      lVar19 = *(long *)(param_1 + 0x78);
      if (cVar11 == '\0') {
        iVar44 = 0;
        do {
          pcVar43 = (char *)(lVar19 + (long)iVar44 * 0xf8);
          if (*pcVar43 != '\0') {
            *pcVar43 = '\0';
            FUN_0299bdb0(&local_b0,local_90,uVar40);
            if (uVar40 < 0x3c) {
              ppuVar18 = local_b0 + (ulong)uVar40 * 7 + 7;
            }
            else {
              ppuVar18 = (undefined **)(local_90[0] + 0x38) + (ulong)(uVar40 - 0x3c) * 7;
              if (0x44 < uVar40 - 0x3c) {
                ppuVar18 = (undefined **)(local_90[0] + 0x38);
              }
            }
            FUN_0299bfc0(ppuVar18);
            iVar41 = iVar41 + 1;
            uVar29 = 0x3c;
            if (uVar40 != 0x3a) {
              uVar29 = uVar40 + 1;
            }
            uVar40 = uVar29;
          }
          iVar44 = iVar44 + 1;
        } while ((iVar10 != iVar44) && (iVar41 < iVar25));
      }
      else {
        iVar44 = 0;
        do {
          iVar41 = iVar41 + 1;
          *(undefined1 *)(lVar19 + (long)iVar44 * 0xf8) = 0;
          FUN_0299bdb0(&local_b0,local_90,uVar40);
          if (uVar40 < 0x3c) {
            ppuVar18 = local_b0 + (ulong)uVar40 * 7 + 7;
          }
          else {
            ppuVar18 = (undefined **)(local_90[0] + 0x38) + (ulong)(uVar40 - 0x3c) * 7;
            if (0x44 < uVar40 - 0x3c) {
              ppuVar18 = (undefined **)(local_90[0] + 0x38);
            }
          }
          FUN_0299bfc0(ppuVar18);
          iVar44 = iVar44 + 1;
          uVar29 = 0x3c;
          if (uVar40 != 0x3a) {
            uVar29 = uVar40 + 1;
          }
        } while ((iVar10 != iVar44) && (uVar40 = uVar29, iVar41 < iVar25));
      }
    }
    iVar25 = *(int *)(param_1 + 0xb0);
    if ((iVar25 != 0) && (iVar24 < iVar25)) {
      lVar19 = *(long *)(param_1 + 0xb8);
      iVar41 = 0;
      do {
        pcVar43 = (char *)(lVar19 + (long)iVar41 * 0xf8);
        if (cVar11 != '\0' || *pcVar43 != '\0') {
          *pcVar43 = '\0';
          FUN_0299bdb0(&local_b0,local_90,uVar39);
          if (uVar39 < 0x3c) {
            ppuVar18 = local_b0 + (ulong)uVar39 * 7 + 7;
          }
          else {
            ppuVar18 = (undefined **)(local_90[0] + 0x38) + (ulong)(uVar39 - 0x3c) * 7;
            if (0x44 < uVar39 - 0x3c) {
              ppuVar18 = (undefined **)(local_90[0] + 0x38);
            }
          }
          FUN_0299bfc0(ppuVar18);
          iVar24 = iVar24 + 1;
          uVar39 = uVar39 + 1;
        }
        iVar41 = iVar41 + 1;
      } while ((iVar25 != iVar41) && (iVar24 < iVar25));
    }
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  if (*(char *)(param_1 + 0x1f8) == '\0') {
    return;
  }
  uVar39 = *(uint *)(param_1 + 0x70);
  iVar25 = 0;
  uVar40 = *(uint *)(param_1 + 0xb0);
  lVar19 = *(long *)(param_1 + 0xb8);
  iVar41 = uVar40 + uVar39;
  do {
    bVar14 = *(byte *)(param_1 + 0x274 + (long)iVar25 * 0x24);
    uVar29 = (uint)bVar14;
    uVar30 = uVar29 - uVar39;
    if ((int)uVar29 < (int)uVar39) {
      if (uVar39 <= uVar29) {
        uVar29 = 0;
      }
      lVar33 = *(long *)(param_1 + 0x78) + (ulong)uVar29 * 0xf8;
LAB_02998a9c:
      *(short *)(param_1 + 0x274 + (long)iVar25 * 0x24 + 2) = (short)*(undefined4 *)(lVar33 + 0x10);
    }
    else if ((int)(uint)bVar14 < iVar41) {
      if (uVar40 <= uVar30) {
        uVar30 = 0;
      }
      lVar33 = lVar19 + (long)(int)uVar30 * 0xf8;
      goto LAB_02998a9c;
    }
    iVar25 = iVar25 + 1;
  } while (iVar25 != 0xf2);
  lVar19 = *(long *)(param_1 + 0x100);
  if (lVar19 == param_1 + 0xf8) {
    uVar36 = 0;
    if (iVar41 < 1) goto LAB_02998b4c;
  }
  else {
    uVar36 = 0;
    do {
      puVar34 = (undefined1 *)(param_1 + 0x1f9) + uVar36;
      if (0x78 < (uint)uVar36) {
        puVar34 = (undefined1 *)(param_1 + 0x1f9);
      }
      uVar36 = uVar36 + 1;
      *puVar34 = (char)*(undefined4 *)(*(long *)(lVar19 + -8) + 4);
      lVar19 = *(long *)(lVar19 + 8);
    } while (lVar19 + -8 != param_1 + 0xf0);
    if (iVar41 <= (int)uVar36) goto LAB_02998b4c;
  }
  puVar34 = (undefined1 *)(param_1 + 0x1f9) + (uVar36 & 0xffffffff);
  if (0x78 < (uint)uVar36) {
    puVar34 = (undefined1 *)(param_1 + 0x1f9);
  }
  *puVar34 = 0xff;
LAB_02998b4c:
  iVar25 = 0;
  local_23bd = 0;
  local_24c8 = (long **)((long)&local_24c0 + 4);
  uVar36 = (ulong)local_24c0 >> 0x20;
  local_24c0 = (long **)CONCAT44((uint)uVar36 & 0xffffff00,0x100);
  local_24d0 = PTR_DAT_04bb21f8 + 0x10;
  do {
    FUN_038d13f0(&local_24d0," , %d",(long)*(char *)(param_1 + 0x1f9 + (long)iVar25));
    iVar25 = iVar25 + 1;
  } while (iVar25 != 0x79);
  if (cVar12 == '\0') {
    if (cVar13 == '\0') {
      return;
    }
    bVar14 = *(byte *)(param_1 + 0x1f8);
    uVar23 = 0xff01;
  }
  else {
    bVar14 = *(byte *)(param_1 + 0x1f8);
    uVar23 = 0xff00;
  }
  local_24d0 = (undefined *)
               ((ulong)(CONCAT22((short)((ulong)local_24d0 >> 0x30),uVar23) & 0xff00ffff) << 0x20);
  if (-1 < *(int *)(param_1 + 0x2488)) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(param_1 + 0x2488),&local_24d0,
                 (undefined1 *)(param_1 + 0x1f8),(uint)bVar14 * 0x24 + 0x7c,0);
  }
  *(undefined1 *)(param_1 + 0x1f8) = 0;
  return;
}

