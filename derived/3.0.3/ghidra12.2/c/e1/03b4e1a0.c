
void FUN_03b4e1a0(long param_1,undefined8 *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long lVar13;
  undefined *puVar14;
  undefined4 uVar15;
  uint uVar16;
  long lVar17;
  long *plVar18;
  void *pvVar19;
  undefined4 *puVar20;
  ulong uVar21;
  long *plVar22;
  ulong *puVar23;
  uint *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  short *psVar27;
  ulong *puVar28;
  long lVar29;
  ulong *puVar30;
  ulong uVar31;
  undefined1 *puVar32;
  ulong uVar33;
  size_t sVar34;
  long lVar35;
  uint uVar36;
  void *pvVar37;
  void *__dest;
  undefined1 auVar38 [16];
  undefined1 local_98 [16];
  short *local_88;
  uint *puStack_80;
  undefined1 local_78 [16];
  int local_68;
  char local_64;
  
  puVar1 = PTR_DAT_04bb2698;
  puVar24 = (uint *)param_2[1];
  if (puVar24 == (uint *)0x0) {
    return;
  }
  if ((*puVar24 & 0xfe) != 0xc0) {
    return;
  }
  uVar8 = *puVar24 >> 8;
  if (*(short *)*param_2 == 0x5942) {
    uVar8 = uVar8 & 0xff00 | *puVar24 >> 0x18 | (uVar8 & 0xff) << 0x10;
  }
  if (uVar8 == 0) {
    return;
  }
  sVar34 = (ulong)uVar8 * 0x80 + (ulong)uVar8 * -8;
  uVar16 = uVar8 << 1;
  uVar33 = (ulong)uVar16;
  lVar35 = *(long *)PTR_DAT_04bb2698;
  if (lVar35 == 0) {
    pvVar19 = malloc(sVar34);
joined_r0x03b4e284:
    if (pvVar19 != (void *)0x0) {
      uVar36 = uVar8 - 1;
      *(void **)(param_1 + 0x18) = pvVar19;
      if (1 < uVar8) {
        if (uVar36 == 1) {
          uVar21 = 0;
        }
        else {
          uVar21 = 0;
          plVar18 = (long *)((long)pvVar19 + 0x70);
          do {
            uVar21 = uVar21 + 2;
            plVar18[-0xe] = (long)plVar18;
            *plVar18 = (long)(plVar18 + 0xe);
            plVar18 = plVar18 + 0x1c;
          } while (((ulong)uVar36 & 0xfffffffe) != uVar21);
        }
        if ((uVar36 & 1) != 0) {
          plVar18 = (long *)((long)pvVar19 + uVar21 * 0x70);
          *plVar18 = (long)(plVar18 + 0xe);
        }
      }
      *(undefined8 *)((long)pvVar19 + (long)(int)(uVar36 * 0xe) * 8) = 0;
      *(void **)(param_1 + 0x20) = pvVar19;
      if ((uVar8 != 0) &&
         (pvVar19 = (void *)((long)pvVar19 + (ulong)uVar8 * 0x70), pvVar19 != (void *)0x0)) {
        *(void **)(param_1 + 0x10) = pvVar19;
        *(undefined4 *)(param_1 + 8) = 0;
        *(uint *)(param_1 + 0xc) = uVar8;
      }
    }
    lVar35 = *(long *)puVar1;
    if (lVar35 == 0) goto LAB_03b4e378;
    if (param_3 == (long *)0x0) {
LAB_03b4e330:
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar18 = (long *)(lVar35 + 8);
      if (lVar17 != 0) {
        plVar18 = (long *)(lVar17 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
      if (plVar18 == (long *)0x0) goto LAB_03b4e3f4;
    }
    else {
      plVar18 = param_3;
    }
    puVar20 = (undefined4 *)(**(code **)(*plVar18 + 0x30))(plVar18,uVar33 << 3,8);
  }
  else {
    plVar18 = param_3;
    if (param_3 != (long *)0x0) {
LAB_03b4e260:
      pvVar19 = (void *)(**(code **)(*plVar18 + 0x30))(plVar18,sVar34,8);
      goto joined_r0x03b4e284;
    }
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar18 = (long *)(lVar35 + 8);
    if (lVar17 != 0) {
      plVar18 = (long *)(lVar17 + 0xa8);
    }
    plVar18 = (long *)*plVar18;
    if (plVar18 != (long *)0x0) goto LAB_03b4e260;
    lVar35 = *(long *)puVar1;
    if (lVar35 != 0) goto LAB_03b4e330;
LAB_03b4e378:
    puVar20 = malloc(uVar33 << 3);
  }
  if (puVar20 != (undefined4 *)0x0) {
    uVar21 = uVar33 & 7;
    puVar26 = puVar20;
    if ((uVar16 & 7) != 0) {
      puVar25 = puVar20;
      do {
        uVar21 = uVar21 - 1;
        puVar26 = puVar25 + 2;
        *puVar25 = 0;
        puVar25 = puVar26;
      } while (uVar21 != 0);
    }
    if (6 < (uVar33 - 1 & 0x1fffffffffffffff)) {
      do {
        *puVar26 = 0;
        puVar26[2] = 0;
        puVar26[4] = 0;
        puVar26[6] = 0;
        puVar26[8] = 0;
        puVar26[10] = 0;
        puVar26[0xc] = 0;
        puVar26[0xe] = 0;
        puVar26 = puVar26 + 0x10;
      } while (puVar26 != puVar20 + uVar33 * 2);
    }
    *(undefined4 **)(param_1 + 0x28) = puVar20;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(uint *)(param_1 + 0x34) = uVar16;
  }
LAB_03b4e3f4:
  uVar33 = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  do {
    auVar38 = FUN_03b36a34(param_2,uVar33 & 0xffffffff);
    auVar38._0_8_ = auVar38._0_8_;
    local_78 = auVar38;
    if (((auVar38._0_8_ != (short *)0x0) && (puVar24 = (uint *)param_2[1], puVar24 != (uint *)0x0))
       && ((char)*puVar24 == -0x3f)) {
      uVar16 = *puVar24 >> 8;
      psVar27 = (short *)*param_2;
      sVar7 = *psVar27;
      if (sVar7 == 0x5942) {
        uVar16 = uVar16 & 0xff00 | *puVar24 >> 0x18 | (uVar16 & 0xff) << 0x10;
      }
      if (uVar33 < uVar16) {
        uVar16 = *(uint *)(psVar27 + 2);
        uVar36 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
        if (sVar7 == 0x5942) {
          uVar16 = uVar36 >> 0x10 | uVar36 << 0x10;
        }
        if (uVar16 != 0) {
          lVar35 = (long)(int)uVar16;
          uVar36 = puVar24[uVar33 * 2 + 1];
          uVar16 = uVar36 & 0xffffff;
          if (sVar7 == 0x5942) {
            uVar16 = uVar36 & 0xff00 | (uVar36 & 0xff) << 0x10 | uVar36 >> 0x10 & 0xff;
          }
          uVar16 = *(uint *)((long)psVar27 + (ulong)uVar16 * 4 + lVar35 + 4);
          uVar36 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
          if (sVar7 == 0x5942) {
            uVar16 = uVar36 >> 0x10 | uVar36 << 0x10;
          }
          if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
            plVar18 = *(long **)(param_1 + 0x18);
            if (plVar18 != (long *)0x0) {
              *(long *)(param_1 + 0x18) = *plVar18;
            }
            plVar18[0xb] = 0;
            plVar18[0xc] = 0;
            plVar18[2] = 0;
            *(undefined4 *)(plVar18 + 2) = 0x40;
            plVar18[0xd] = 0;
            plVar18[9] = 0;
            plVar18[10] = 0;
            plVar18[7] = 0;
            plVar18[8] = 0;
            plVar18[5] = 0;
            plVar18[6] = 0;
            plVar18[3] = 0;
            plVar18[4] = 0;
            *(undefined1 *)((long)plVar18 + 0x14) = 0;
            plVar18[1] = (long)plVar18 + 0x14;
            *plVar18 = (long)puVar1;
            if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
              *(long **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = plVar18;
              *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
            }
          }
          else {
            plVar18 = (long *)0x0;
          }
          pvVar37 = (void *)plVar18[1];
          pvVar19 = (void *)((long)psVar27 + (ulong)uVar16 + lVar35);
          if (pvVar37 != pvVar19) {
            lVar17 = 0;
            lVar35 = lVar35 + (ulong)uVar16 + 1;
            do {
              lVar29 = lVar17 + lVar35;
              if (*(char *)((long)psVar27 + lVar29 + -1) == '\0') goto LAB_03b4e5cc;
              if (*(char *)((long)psVar27 + lVar17 + lVar35) == '\0') {
                lVar17 = lVar17 + 1;
                goto LAB_03b4e5cc;
              }
              if (*(char *)((long)psVar27 + lVar29 + 1) == '\0') {
                lVar17 = lVar17 + 2;
                goto LAB_03b4e5cc;
              }
              lVar17 = lVar17 + 3;
            } while (lVar17 != 0x80001);
            lVar17 = 0;
LAB_03b4e5cc:
            iVar3 = (int)lVar17;
            if ((int)plVar18[2] <= (int)lVar17) {
              iVar3 = (int)plVar18[2] + -1;
            }
            memcpy(pvVar37,pvVar19,(long)iVar3);
            *(undefined1 *)((long)pvVar37 + (long)iVar3) = 0;
          }
          uVar15 = FUN_006bd550(pvVar19,0);
          *(undefined4 *)(plVar18 + 0xb) = uVar15;
          local_88 = (short *)0x0;
          puStack_80 = (uint *)0x0;
          local_98._0_8_ = local_98._0_8_ & 0xffffff0000000000;
          uVar21 = FUN_03b36b40(local_78,local_98,"Targets");
          lVar35 = DAT_05ae7600;
          auVar38._8_8_ = local_98._8_8_;
          auVar38._0_8_ = local_98._0_8_;
          auVar12._8_8_ = local_98._8_8_;
          auVar12._0_8_ = local_98._0_8_;
          auVar11._8_8_ = local_98._8_8_;
          auVar11._0_8_ = local_98._0_8_;
          auVar10._8_8_ = local_98._8_8_;
          auVar10._0_8_ = local_98._0_8_;
          if ((uVar21 & 1) == 0) {
LAB_03b4e6fc:
            local_88 = (short *)0x0;
            puStack_80 = (uint *)0x0;
          }
          else {
            local_88 = auVar38._0_8_;
            if (local_98[4] - 0xc0 < 2) {
              puStack_80 = (uint *)((long)auVar38._0_8_ + (local_98._0_8_ & 0xffffffff));
              auVar38 = auVar10;
              if ((*puStack_80 & 0xfe) == 0xc0) {
                uVar16 = *puStack_80 >> 8;
                if (*auVar38._0_8_ == 0x5942) {
                  uVar16 = uVar16 & 0xff00 | *puStack_80 >> 0x18 | (uVar16 & 0xff) << 0x10;
                }
                auVar38 = auVar11;
                if (uVar16 != 0) {
                  sVar34 = (ulong)uVar16 * 0x58 + 8;
                  if (DAT_05ae7600 == 0) {
                    puVar23 = malloc(sVar34);
LAB_03b4e75c:
                    if (puVar23 != (ulong *)0x0) {
                      uVar21 = (ulong)uVar16;
                      puVar28 = puVar23 + 1;
                      *puVar23 = uVar21;
                      puVar14 = PTR_DAT_04bb2bc0;
                      uVar31 = uVar21 * 0x58 - 0x58;
                      uVar36 = ((uint)(uVar31 / 0x58) & 0xfffffff) + 1;
                      puVar30 = puVar28;
                      if ((uVar36 & 3) != 0) {
                        lVar35 = 0;
                        do {
                          lVar17 = lVar35;
                          puVar32 = (undefined1 *)((long)puVar23 + lVar17 + 0x1c);
                          *puVar32 = 0;
                          *(undefined1 **)((long)puVar23 + lVar17 + 0x10) = puVar32;
                          *(undefined4 *)((long)puVar23 + lVar17 + 0x18) = 0x40;
                          *(undefined1 *)((long)puVar23 + lVar17 + 0x5b) = 0;
                          *(undefined **)((long)puVar23 + lVar17 + 8) = puVar14 + 0x10;
                          lVar35 = lVar17 + 0x58;
                        } while (((ulong)uVar36 & 3) * 0x58 != lVar17 + 0x58);
                        puVar30 = (ulong *)((long)puVar23 + lVar17 + 0x60);
                      }
                      if (0x107 < uVar31) {
                        do {
                          puVar2 = puVar14 + 0x10;
                          *(undefined4 *)(puVar30 + 2) = 0x40;
                          *(undefined1 *)((long)puVar30 + 0x14) = 0;
                          *puVar30 = (ulong)puVar2;
                          puVar30[1] = (ulong)((long)puVar30 + 0x14);
                          *(undefined1 *)((long)puVar30 + 0x53) = 0;
                          *(undefined4 *)(puVar30 + 0xd) = 0x40;
                          *(undefined1 *)((long)puVar30 + 0xc4) = 0;
                          *(undefined1 *)((long)puVar30 + 0x6c) = 0;
                          *(undefined1 *)((long)puVar30 + 0xab) = 0;
                          *(undefined4 *)(puVar30 + 0x18) = 0x40;
                          *(undefined1 *)((long)puVar30 + 0x103) = 0;
                          *(undefined4 *)(puVar30 + 0x23) = 0x40;
                          *(undefined1 *)((long)puVar30 + 0x15b) = 0;
                          *(undefined1 *)((long)puVar30 + 0x11c) = 0;
                          puVar30[0x16] = (ulong)puVar2;
                          puVar30[0x17] = (ulong)((long)puVar30 + 0xc4);
                          puVar30[0xb] = (ulong)puVar2;
                          puVar30[0xc] = (ulong)((long)puVar30 + 0x6c);
                          puVar30[0x21] = (ulong)puVar2;
                          puVar30[0x22] = (long)puVar30 + 0x11c;
                          puVar30 = puVar30 + 0x2c;
                        } while (puVar30 != puVar28 + uVar21 * 0xb);
                      }
                      *(uint *)(plVar18 + 0xc) = uVar16;
                      plVar18[0xd] = (long)puVar28;
                    }
                  }
                  else {
                    plVar22 = param_3;
                    if (param_3 != (long *)0x0) {
LAB_03b4e6d4:
                      puVar23 = (ulong *)(**(code **)(*plVar22 + 0x30))(plVar22,sVar34,8);
                      goto LAB_03b4e75c;
                    }
                    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                    plVar22 = (long *)(lVar35 + 8);
                    if (lVar17 != 0) {
                      plVar22 = (long *)(lVar17 + 0xa8);
                    }
                    plVar22 = (long *)*plVar22;
                    if (plVar22 != (long *)0x0) goto LAB_03b4e6d4;
                  }
                  uVar36 = 0;
                  do {
                    auVar38 = FUN_03b36a34(&local_88,uVar36);
                    auVar38._0_8_ = auVar38._0_8_;
                    local_98 = auVar38;
                    if (auVar38._0_8_ != (short *)0x0) {
                      local_68 = 0;
                      local_64 = '\0';
                      uVar21 = FUN_03b36b40(local_98,&local_68,"TargetGroupName");
                      if (((uVar21 & 1) != 0) && (local_64 == -0x60)) {
                        uVar5 = *(uint *)(auVar38._0_8_ + 4);
                        uVar9 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
                        uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
                        if (*auVar38._0_8_ != 0x5942) {
                          uVar9 = uVar5;
                        }
                        if (uVar9 != 0) {
                          lVar35 = (long)(int)uVar9;
                          uVar5 = *(uint *)((long)auVar38._0_8_ + (long)local_68 * 4 + lVar35 + 4);
                          uVar9 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
                          uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
                          if (*auVar38._0_8_ != 0x5942) {
                            uVar9 = uVar5;
                          }
                          pvVar37 = (void *)((long)auVar38._0_8_ + (ulong)uVar9 + lVar35);
                          uVar5 = uVar36;
                          if (*(uint *)(plVar18 + 0xc) <= uVar36) {
                            uVar5 = 0;
                          }
                          lVar17 = plVar18[0xd] + (ulong)uVar5 * 0x58;
                          __dest = *(void **)(lVar17 + 8);
                          if (__dest != pvVar37) {
                            lVar29 = 0;
                            lVar35 = lVar35 + (ulong)uVar9 + 1;
                            do {
                              lVar13 = lVar29 + lVar35;
                              if (*(char *)((long)auVar38._0_8_ + lVar13 + -1) == '\0')
                              goto LAB_03b4e874;
                              if (*(char *)((long)auVar38._0_8_ + lVar29 + lVar35) == '\0') {
                                lVar29 = lVar29 + 1;
                                goto LAB_03b4e874;
                              }
                              if (*(char *)((long)auVar38._0_8_ + lVar13 + 1) == '\0') {
                                lVar29 = lVar29 + 2;
                                goto LAB_03b4e874;
                              }
                              lVar29 = lVar29 + 3;
                            } while (lVar29 != 0x80001);
                            lVar29 = 0;
LAB_03b4e874:
                            iVar4 = *(int *)(lVar17 + 0x10);
                            iVar3 = (int)lVar29;
                            if (iVar4 <= (int)lVar29) {
                              iVar3 = iVar4 + -1;
                            }
                            memcpy(__dest,pvVar37,(long)iVar3);
                            *(undefined1 *)((long)__dest + (long)iVar3) = 0;
                          }
                        }
                      }
                    }
                    uVar36 = uVar36 + 1;
                    auVar38 = local_98;
                  } while (uVar36 != uVar16);
                }
              }
            }
            else {
              if (local_98[4] != 0xff) goto LAB_03b4e6fc;
              puStack_80 = (uint *)0x0;
              auVar38 = auVar12;
            }
          }
          local_98 = auVar38;
          uVar16 = FUN_006bd550(pvVar19,0);
          if (uVar16 != 0) {
            uVar36 = *(uint *)(param_1 + 0x34);
            uVar9 = 0;
            if (uVar36 != 0) {
              uVar9 = uVar16 / uVar36;
            }
            uVar9 = uVar16 - uVar9 * uVar36;
            uVar5 = uVar9;
            do {
              uVar6 = *(uint *)(*(long *)(param_1 + 0x28) +
                               (-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3));
              if (uVar6 == 0) {
                puVar24 = (uint *)(*(long *)(param_1 + 0x28) + (long)(int)uVar5 * 8);
                *puVar24 = uVar16;
                puVar24[1] = (uint)uVar33;
                *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
                break;
              }
              if (uVar6 == uVar16) break;
              uVar6 = 0;
              if ((int)(uVar5 + 1) < (int)uVar36) {
                uVar6 = uVar5 + 1;
              }
              uVar5 = uVar6;
            } while (uVar6 != uVar9);
          }
        }
      }
    }
    uVar33 = uVar33 + 1;
    if (uVar33 == uVar8) {
      return;
    }
  } while( true );
}

