
void FUN_03b80450(long param_1,long *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  int iVar9;
  undefined4 uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  void *pvVar16;
  undefined8 *puVar17;
  size_t __size;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  short *psVar21;
  long lVar22;
  void *__dest;
  undefined1 local_a0 [16];
  undefined8 local_90;
  uint *puStack_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  uint *puStack_68;
  
  if (*param_5 != 0) {
    local_70 = (short *)((ulong)local_70 & 0xffffff0000000000);
    uVar11 = FUN_03b36b40(param_5,&local_70,"Effect");
    auVar6._8_8_ = local_a0._8_8_;
    auVar6._0_8_ = local_a0._0_8_;
    if (((uVar11 & 1) != 0) && (local_70._4_1_ - 0xc0 < 2)) {
      psVar21 = (short *)*param_5;
      puVar1 = (uint *)((long)psVar21 + ((ulong)local_70 & 0xffffffff));
      if (psVar21 != (short *)0x0) {
        uVar11 = 0;
        local_70 = psVar21;
        puStack_68 = puVar1;
LAB_03b80548:
        if ((*puVar1 & 0xfe) == 0xc0) {
          uVar3 = *puVar1;
          uVar20 = uVar3 >> 8;
          if (*psVar21 == 0x5942) {
            uVar20 = uVar20 & 0xff00 | uVar3 >> 0x18 | (uVar20 & 0xff) << 0x10;
          }
          if (uVar11 < uVar20) {
            if ((uVar3 & 0xff) == 0xc1) {
              sVar5 = *psVar21;
              uVar20 = *puVar1 >> 8;
              if (sVar5 == 0x5942) {
                uVar20 = uVar20 & 0xff00 | *puVar1 >> 0x18 | (uVar20 & 0xff) << 0x10;
              }
              if (uVar20 <= uVar11) goto LAB_03b80634;
              uVar20 = *(uint *)(psVar21 + 2);
              uVar3 = (uVar20 & 0xff00ff00) >> 8 | (uVar20 & 0xff00ff) << 8;
              if (sVar5 == 0x5942) {
                uVar20 = uVar3 >> 0x10 | uVar3 << 0x10;
              }
              if (uVar20 == 0) goto LAB_03b80634;
              uVar4 = puVar1[uVar11 * 2 + 1];
              uVar3 = uVar4 & 0xffffff;
              if (sVar5 == 0x5942) {
                uVar3 = uVar4 & 0xff00 | (uVar4 & 0xff) << 0x10 | uVar4 >> 0x10 & 0xff;
              }
              uVar3 = *(uint *)((long)psVar21 + (ulong)uVar3 * 4 + (long)(int)uVar20 + 4);
              uVar4 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
              if (sVar5 == 0x5942) {
                uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
              }
              pvVar16 = (void *)((long)psVar21 + (ulong)uVar3 + (long)(int)uVar20);
            }
            else {
LAB_03b80634:
              pvVar16 = (void *)0x0;
            }
            local_80._0_8_ = 0;
            local_80._8_8_ = 0;
            local_a0 = auVar6;
            local_80 = FUN_03b36a34(&local_70,uVar11 & 0xffffffff);
            auVar6 = local_a0;
            if ((local_80._0_8_ != 0) && (DAT_05aebc88 != 0)) {
              lVar22 = (long)DAT_05aebc88 << 3;
              puVar17 = DAT_05aebc90;
              do {
                plVar12 = (long *)(**(code **)*puVar17)(param_2,param_3,param_4 & 1,local_80);
                if (plVar12 != (long *)0x0) {
                  __dest = (void *)plVar12[2];
                  if (__dest == pvVar16) goto LAB_03b80724;
                  lVar22 = 0;
                  goto LAB_03b806c0;
                }
                puVar17 = puVar17 + 1;
                lVar22 = lVar22 + -8;
                auVar6 = local_a0;
              } while (lVar22 != 0);
            }
            goto LAB_03b80540;
          }
        }
      }
    }
  }
  return;
  while( true ) {
    if (*(char *)((long)pvVar16 + lVar22 + 1) == '\0') {
      lVar22 = lVar22 + 1;
      goto LAB_03b806fc;
    }
    if (*(char *)((long)pvVar16 + lVar22 + 2) == '\0') {
      lVar22 = lVar22 + 2;
      goto LAB_03b806fc;
    }
    lVar22 = lVar22 + 3;
    if (lVar22 == 0x80001) break;
LAB_03b806c0:
    if (*(char *)((long)pvVar16 + lVar22) == '\0') goto LAB_03b806fc;
  }
  lVar22 = 0;
LAB_03b806fc:
  iVar9 = (int)lVar22;
  if ((int)plVar12[3] <= (int)lVar22) {
    iVar9 = (int)plVar12[3] + -1;
  }
  memcpy(__dest,pvVar16,(long)iVar9);
  *(undefined1 *)((long)__dest + (long)iVar9) = 0;
LAB_03b80724:
  *(undefined1 *)(plVar12 + 0xc) = 1;
  lVar22 = *(long *)(param_1 + 8);
  plVar15 = (long *)((long)*(int *)(param_1 + 0x1c) + (long)plVar12);
  *(long **)(param_1 + 8) = plVar15;
  *plVar15 = lVar22;
  plVar15[1] = param_1 + 8;
  if (lVar22 != 0) {
    *(long **)(lVar22 + 8) = plVar15;
  }
  local_90 = (short *)((ulong)local_90 & 0xffffff0000000000);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  uVar13 = FUN_03b36b40(local_80,&local_90,"Parameters");
  lVar22 = DAT_05ae7600;
  uVar8 = local_80._0_8_;
  if ((uVar13 & 1) == 0) {
LAB_03b80878:
    local_90 = (short *)0x0;
    puStack_88 = (uint *)0x0;
  }
  else if (local_90._4_1_ - 0xc0 < 2) {
    uVar13 = (ulong)local_90 & 0xffffffff;
    puVar2 = (uint *)(local_80._0_8_ + uVar13);
    local_90 = (short *)local_80._0_8_;
    puStack_88 = puVar2;
    if (((short *)local_80._0_8_ != (short *)0x0) && ((*puVar2 & 0xfe) == 0xc0)) {
      uVar20 = *puVar2 >> 8;
      if (*(short *)local_80._0_8_ == 0x5942) {
        uVar20 = uVar20 & 0xff00 | *puVar2 >> 0x18 | (uVar20 & 0xff) << 0x10;
      }
      if (uVar20 != 0) {
        uVar18 = (ulong)uVar20;
        __size = (uVar18 + (ulong)uVar20 * 2) * 8;
        if (DAT_05ae7600 == 0) {
          pvVar16 = malloc(__size);
LAB_03b80958:
          if (pvVar16 != (void *)0x0) {
            uVar3 = uVar20 - 1;
            uVar19 = (ulong)uVar3;
            plVar12[0x1f] = (long)pvVar16;
            if (1 < uVar20) {
              if (uVar19 - 1 < 3) {
                lVar22 = 0;
              }
              else {
                lVar22 = 0;
                puVar17 = (undefined8 *)((long)pvVar16 + 0x20);
                do {
                  puVar17[-2] = puVar17;
                  puVar17[2] = puVar17 + 4;
                  lVar22 = lVar22 + -4;
                  puVar17[-4] = puVar17 + -2;
                  *puVar17 = puVar17 + 2;
                  puVar17 = puVar17 + 8;
                } while (-lVar22 != (uVar19 & 0xfffffffc));
                lVar22 = -lVar22;
              }
              uVar19 = uVar19 & 3;
              if ((uVar3 & 3) != 0) {
                puVar17 = (void *)((long)pvVar16 + lVar22 * 0x10);
                do {
                  *puVar17 = puVar17 + 2;
                  uVar19 = uVar19 - 1;
                  puVar17 = puVar17 + 2;
                } while (uVar19 != 0);
              }
            }
            *(undefined8 *)((long)pvVar16 + (ulong)(uVar3 * 2) * 8) = 0;
            plVar12[0x20] = (long)pvVar16;
            pvVar16 = (void *)((long)pvVar16 + uVar18 * 0x10);
            if (pvVar16 != (void *)0x0) {
              plVar12[0x1e] = (long)pvVar16;
              *(undefined4 *)(plVar12 + 0x1d) = 0;
              *(uint *)((long)plVar12 + 0xec) = uVar20;
            }
          }
        }
        else {
          plVar15 = param_2;
          if (param_2 != (long *)0x0) {
LAB_03b80850:
            pvVar16 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,__size,8);
            goto LAB_03b80958;
          }
          lVar14 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar15 = (long *)(lVar22 + 8);
          if (lVar14 != 0) {
            plVar15 = (long *)(lVar14 + 0xa8);
          }
          plVar15 = (long *)*plVar15;
          if (plVar15 != (long *)0x0) goto LAB_03b80850;
        }
        uVar19 = 0;
        lVar22 = uVar13 + 4;
        do {
          local_a0._0_8_ = 0;
          local_a0._8_8_ = 0;
          local_a0 = FUN_03b36a34(&local_90,uVar19 & 0xffffffff);
          if (local_a0._0_8_ != 0) {
            puVar17 = &DAT_0407ebb1;
            if ((char)*puVar2 == -0x3f) {
              sVar5 = *(short *)uVar8;
              uVar20 = *puVar2 >> 8;
              if (sVar5 == 0x5942) {
                uVar20 = uVar20 & 0xff00 | *puVar2 >> 0x18 | (uVar20 & 0xff) << 0x10;
              }
              if (uVar19 < uVar20) {
                uVar20 = *(uint *)(uVar8 + 4);
                uVar3 = (uVar20 & 0xff00ff00) >> 8 | (uVar20 & 0xff00ff) << 8;
                if (sVar5 == 0x5942) {
                  uVar20 = uVar3 >> 0x10 | uVar3 << 0x10;
                }
                if (uVar20 != 0) {
                  uVar4 = *(uint *)(uVar8 + lVar22);
                  uVar3 = uVar4 & 0xffffff;
                  if (sVar5 == 0x5942) {
                    uVar3 = uVar4 & 0xff00 | (uVar4 & 0xff) << 0x10 | uVar4 >> 0x10 & 0xff;
                  }
                  uVar3 = *(uint *)(uVar8 + (ulong)uVar3 * 4 + (long)(int)uVar20 + 4);
                  uVar4 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                  if (sVar5 == 0x5942) {
                    uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
                  }
                  puVar17 = (undefined8 *)(uVar8 + (ulong)uVar3 + (long)(int)uVar20);
                }
              }
            }
            if ((int)plVar12[0x1d] < *(int *)((long)plVar12 + 0xec)) {
              plVar15 = (long *)plVar12[0x1f];
              if (plVar15 != (long *)0x0) {
                plVar12[0x1f] = *plVar15;
              }
              *plVar15 = 0;
              plVar15[1] = 0;
              if ((int)plVar12[0x1d] < *(int *)((long)plVar12 + 0xec)) {
                *(long **)(plVar12[0x1e] + (long)(int)plVar12[0x1d] * 8) = plVar15;
                *(int *)(plVar12 + 0x1d) = (int)plVar12[0x1d] + 1;
              }
            }
            else {
              plVar15 = (long *)0x0;
            }
            uVar10 = FUN_006bd550(puVar17,0);
            *(undefined4 *)plVar15 = uVar10;
            lVar14 = (**(code **)(*plVar12 + 0x30))(plVar12,param_2,local_a0);
            plVar15[1] = lVar14;
          }
          uVar19 = uVar19 + 1;
          lVar22 = lVar22 + 8;
        } while (uVar18 != uVar19);
      }
    }
  }
  else {
    if (local_90._4_1_ != 0xff) goto LAB_03b80878;
    local_90 = (short *)local_80._0_8_;
    puStack_88 = (uint *)0x0;
  }
  plVar15 = (long *)plVar12[0x1e];
  auVar6 = local_a0;
  if (plVar15 != (long *)0x0) {
    if ((int)plVar12[0x1d] != 1) {
      local_a0._0_8_ = local_a0._0_8_ & 0xffffff0000000000;
      uVar13 = FUN_03b36b40(local_80,local_a0,"DefaultParameter");
      auVar6._8_8_ = local_a0._8_8_;
      auVar6._0_8_ = local_a0._0_8_;
      if (((uVar13 & 1) != 0) && (local_a0[4] == -0x60)) {
        uVar3 = *(uint *)(local_80._0_8_ + 8);
        uVar20 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
        if (*(short *)local_80._0_8_ != 0x5942) {
          uVar20 = uVar3;
        }
        if (uVar20 != 0) {
          if (plVar12[0x1e] != 0) {
            uVar4 = *(uint *)(local_80._0_8_ + (long)(int)local_a0._0_4_ * 4 + (long)(int)uVar20 + 4
                             );
            uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
            uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
            if (*(short *)local_80._0_8_ != 0x5942) {
              uVar3 = uVar4;
            }
            iVar9 = FUN_006bd550(local_80._0_8_ + (ulong)uVar3 + (long)(int)uVar20,0);
            auVar7._8_8_ = local_a0._8_8_;
            auVar7._0_8_ = local_a0._0_8_;
            auVar6._8_8_ = local_a0._8_8_;
            auVar6._0_8_ = local_a0._0_8_;
            if ((int)plVar12[0x1d] != 0) {
              puVar17 = (undefined8 *)plVar12[0x1e];
              lVar22 = (long)(int)plVar12[0x1d] << 3;
              do {
                if (*(int *)*puVar17 == iVar9) {
                  lVar22 = *(long *)((int *)*puVar17 + 2);
                  goto joined_r0x03b80948;
                }
                puVar17 = puVar17 + 1;
                lVar22 = lVar22 + -8;
                auVar6 = auVar7;
              } while (lVar22 != 0);
            }
          }
          goto LAB_03b80540;
        }
      }
      plVar15 = (long *)plVar12[0x1e];
    }
    lVar22 = *(long *)(*plVar15 + 8);
    local_a0 = auVar6;
joined_r0x03b80948:
    auVar6 = local_a0;
    if (lVar22 != 0) {
      (**(code **)(*plVar12 + 0x38))(plVar12);
      auVar6 = local_a0;
    }
  }
LAB_03b80540:
  uVar11 = uVar11 + 1;
  goto LAB_03b80548;
}

