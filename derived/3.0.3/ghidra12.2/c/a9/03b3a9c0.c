
/* WARNING: Removing unreachable block (ram,0x03b3bd58) */

int * FUN_03b3a9c0(long param_1,long *param_2,undefined1 (*param_3) [16])

{
  undefined *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  bool bVar14;
  byte bVar15;
  long lVar16;
  long *plVar17;
  int *piVar18;
  void *pvVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 *puVar22;
  short *psVar23;
  ulong uVar24;
  long *plVar25;
  int iVar26;
  long lVar27;
  uint uVar28;
  void *__src;
  char *pcVar29;
  size_t sVar30;
  char *pcVar31;
  ulong uVar32;
  uint uVar33;
  ulong uVar34;
  undefined8 *puVar35;
  undefined1 auVar36 [16];
  char *local_108;
  ulong local_d0;
  undefined1 local_b0 [16];
  short *local_a0;
  uint *puStack_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  uint *local_78;
  uint local_70;
  byte local_6c;
  
  local_80 = (short *)((ulong)local_80 & 0xffffff0000000000);
  bVar15 = FUN_03b36b40(param_3,&local_80,"BusGraphPresetCount");
  lVar27 = DAT_05ae7600;
  uVar4 = (uint)local_80;
  if ((bVar15 & local_80._4_1_ == -0x2f) == 0) {
    uVar4 = 1;
  }
  if (DAT_05ae7600 == 0) {
    piVar18 = malloc(0x20);
  }
  else {
    plVar17 = param_2;
    if (param_2 == (long *)0x0) {
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar17 = (long *)(lVar27 + 8);
      if (lVar16 != 0) {
        plVar17 = (long *)(lVar16 + 0xa8);
      }
      plVar17 = (long *)*plVar17;
      if (plVar17 == (long *)0x0) {
        piVar18 = (int *)0x0;
        goto LAB_03b3aa88;
      }
    }
    piVar18 = (int *)(**(code **)(*plVar17 + 0x30))(plVar17,0x20,8);
  }
LAB_03b3aa88:
  piVar18[4] = 0;
  piVar18[5] = 0;
  piVar18[6] = 0;
  piVar18[7] = 0;
  piVar18[0] = 0;
  piVar18[1] = 0;
  piVar18[2] = 0;
  lVar27 = DAT_05ae7600;
  piVar18[3] = 0;
  if ((int)uVar4 < 1) {
    return piVar18;
  }
  __src = (void *)((ulong)uVar4 * 0x130);
  if (DAT_05ae7600 == 0) {
    pvVar19 = malloc((size_t)__src);
  }
  else {
    plVar17 = param_2;
    if (param_2 == (long *)0x0) {
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar17 = (long *)(lVar27 + 8);
      if (lVar16 != 0) {
        plVar17 = (long *)(lVar16 + 0xa8);
      }
      plVar17 = (long *)*plVar17;
      if (plVar17 == (long *)0x0) goto LAB_03b3ab98;
    }
    pvVar19 = (void *)(**(code **)(*plVar17 + 0x30))(plVar17,__src,8);
  }
  if (pvVar19 != (void *)0x0) {
    uVar28 = uVar4 - 1;
    *(void **)(piVar18 + 4) = pvVar19;
    if (1 < uVar4) {
      if (uVar28 == 1) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        plVar17 = (long *)((long)pvVar19 + 0x128);
        do {
          uVar20 = uVar20 + 2;
          plVar17[-0x25] = (long)plVar17;
          *plVar17 = (long)(plVar17 + 0x25);
          plVar17 = plVar17 + 0x4a;
        } while (((ulong)uVar28 & 0xfffffffe) != uVar20);
      }
      if ((uVar28 & 1) != 0) {
        plVar17 = (long *)((long)pvVar19 + uVar20 * 0x128);
        *plVar17 = (long)(plVar17 + 0x25);
      }
    }
    *(undefined8 *)((long)pvVar19 + (long)(int)(uVar28 * 0x25) * 8) = 0;
    *(void **)(piVar18 + 6) = pvVar19;
    pvVar19 = (void *)((long)pvVar19 + (ulong)uVar4 * 0x128);
    if (pvVar19 != (void *)0x0) {
      *(void **)(piVar18 + 2) = pvVar19;
      *piVar18 = 0;
      piVar18[1] = uVar4;
    }
  }
LAB_03b3ab98:
  local_80 = (short *)0x0;
  local_78 = (uint *)0x0;
  if ((int)uVar4 < 2) {
    if (uVar4 != 1) {
      return piVar18;
    }
  }
  else {
    local_90._0_8_ = local_90._0_8_ & 0xffffff0000000000;
    uVar20 = FUN_03b36b40(param_3,local_90,"BusGraphPreset");
    if ((uVar20 & 1) == 0) {
      return piVar18;
    }
    if (local_90[4] - 0xc0 < 2) {
      local_80 = *(short **)*param_3;
      local_78 = (uint *)((long)local_80 + (local_90._0_8_ & 0xffffffff));
    }
    else {
      if (local_90[4] != 0xff) {
        return piVar18;
      }
      local_80 = *(short **)*param_3;
      local_78 = (uint *)0x0;
    }
    if (local_80 == (short *)0x0) {
      return piVar18;
    }
  }
  auVar36._8_8_ = local_b0._8_8_;
  auVar36._0_8_ = local_b0._0_8_;
  local_d0 = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  do {
    local_b0 = auVar36;
    if (*piVar18 < piVar18[1]) {
      plVar17 = *(long **)(piVar18 + 4);
      if (plVar17 != (long *)0x0) {
        *(long *)(piVar18 + 4) = *plVar17;
      }
      memset(plVar17 + 2,0,0x118);
      *(undefined1 *)((long)plVar17 + 0x14) = 0;
      *(undefined4 *)(plVar17 + 2) = 0x40;
      plVar17[0xb] = 0;
      plVar17[0xc] = 0;
      *(undefined4 *)(plVar17 + 0x11) = 0x40;
      *(undefined1 *)(plVar17 + 0x24) = 0;
      *plVar17 = (long)puVar1;
      plVar17[1] = (long)plVar17 + 0x14;
      *(undefined1 *)((long)plVar17 + 0x8c) = 0;
      plVar17[0xf] = (long)puVar1;
      plVar17[0x10] = (long)plVar17 + 0x8c;
      plVar17[0x1a] = 0x60000bb80;
      *(undefined4 *)(plVar17 + 0x1b) = 0x3f800000;
      plVar17[0xd] = 0;
      plVar17[0xe] = 0;
      plVar17[0x1c] = 0;
      plVar17[0x1d] = 0;
      plVar17[0x1e] = 0;
      plVar17[0x1f] = 0;
      plVar17[0x20] = 0;
      plVar17[0x21] = 0;
      plVar17[0x22] = 0;
      plVar17[0x23] = 0;
      if (*piVar18 < piVar18[1]) {
        *(long **)(*(long *)(piVar18 + 2) + (long)*piVar18 * 8) = plVar17;
        *piVar18 = *piVar18 + 1;
      }
      auVar36 = local_b0;
      if ((int)uVar4 < 2) goto LAB_03b3addc;
LAB_03b3acfc:
      local_b0 = auVar36;
      auVar36 = FUN_03b36a34(&local_80,local_d0);
      if ((local_78 != (uint *)0x0) && ((char)*local_78 == -0x3f)) {
        uVar28 = *local_78 >> 8;
        sVar8 = *local_80;
        if (sVar8 == 0x5942) {
          uVar28 = uVar28 & 0xff00 | *local_78 >> 0x18 | (uVar28 & 0xff) << 0x10;
        }
        if (local_d0 < uVar28) {
          uVar28 = *(uint *)(local_80 + 2);
          uVar33 = (uVar28 & 0xff00ff00) >> 8 | (uVar28 & 0xff00ff) << 8;
          if (sVar8 == 0x5942) {
            uVar28 = uVar33 >> 0x10 | uVar33 << 0x10;
          }
          if (uVar28 != 0) {
            uVar5 = local_78[local_d0 * 2 + 1];
            uVar33 = uVar5 & 0xffffff;
            if (sVar8 == 0x5942) {
              uVar33 = uVar5 & 0xff00 | (uVar5 & 0xff) << 0x10 | uVar5 >> 0x10 & 0xff;
            }
            uVar33 = *(uint *)((long)local_80 + (ulong)uVar33 * 4 + (long)(int)uVar28 + 4);
            uVar5 = (uVar33 & 0xff00ff00) >> 8 | (uVar33 & 0xff00ff) << 8;
            if (sVar8 == 0x5942) {
              uVar33 = uVar5 >> 0x10 | uVar5 << 0x10;
            }
            local_108 = (char *)((long)local_80 + (ulong)uVar33 + (long)(int)uVar28);
          }
        }
      }
      pcVar29 = (char *)plVar17[1];
      local_90 = auVar36;
      if (pcVar29 != local_108) {
        lVar27 = 0;
        do {
          if (local_108[lVar27] == '\0') goto LAB_03b3ae6c;
          if (local_108[lVar27 + 1] == '\0') {
            lVar27 = lVar27 + 1;
            goto LAB_03b3ae6c;
          }
          if (local_108[lVar27 + 2] == '\0') {
            lVar27 = lVar27 + 2;
            goto LAB_03b3ae6c;
          }
          lVar27 = lVar27 + 3;
        } while (lVar27 != 0x80001);
        lVar27 = 0;
LAB_03b3ae6c:
        iVar26 = (int)lVar27;
        if ((int)plVar17[2] <= (int)lVar27) {
          iVar26 = (int)plVar17[2] + -1;
        }
        pcVar31 = local_108;
LAB_03b3ae7c:
        local_90 = auVar36;
        memcpy(pcVar29,pcVar31,(long)iVar26);
        pcVar29[iVar26] = '\0';
      }
    }
    else {
      plVar17 = (long *)0x0;
      if (1 < (int)uVar4) goto LAB_03b3acfc;
LAB_03b3addc:
      pcVar31 = "Default";
      auVar36 = *param_3;
      local_90 = *param_3;
      pcVar29 = (char *)plVar17[1];
      if (pcVar29 != "Default") {
        iVar26 = 7;
        if ((int)plVar17[2] < 8) {
          iVar26 = (int)plVar17[2] + -1;
        }
        goto LAB_03b3ae7c;
      }
    }
    local_b0._0_8_ = local_b0._0_8_ & 0xffffff0000000000;
    uVar20 = FUN_03b36b40(local_90,local_b0,&DAT_040d1c83);
    uVar13 = local_90._0_8_;
    if ((uVar20 & 1) == 0) {
      return piVar18;
    }
    if (local_b0[4] - 0xc0 < 2) {
      puVar2 = (uint *)(local_90._0_8_ + (local_b0._0_8_ & 0xffffffff));
    }
    else {
      if (local_b0[4] != 0xff) {
        return piVar18;
      }
      puStack_98 = (uint *)0x0;
      puVar2 = puStack_98;
    }
    if ((short *)local_90._0_8_ == (short *)0x0) {
      return piVar18;
    }
    local_a0 = (short *)local_90._0_8_;
    local_b0._0_8_ = local_b0._0_8_ & 0xffffff0000000000;
    puStack_98 = puVar2;
    uVar20 = FUN_03b36b40(local_90,local_b0,&DAT_040d1c83);
    lVar27 = DAT_05ae7600;
    auVar10._8_8_ = local_b0._8_8_;
    auVar10._0_8_ = local_b0._0_8_;
    auVar9._8_8_ = local_b0._8_8_;
    auVar9._0_8_ = local_b0._0_8_;
    if ((uVar20 & 1) == 0) {
LAB_03b3b010:
      if (*(int *)(param_1 + 4) < 0) {
        return piVar18;
      }
    }
    else {
      if (local_b0[4] - 0xc0 < 2) {
        if ((*(byte *)(uVar13 + (local_b0._0_8_ & 0xffffffff)) & 0xfe) != 0xc0) goto LAB_03b3af78;
        uVar33 = *(uint *)(uVar13 + (local_b0._0_8_ & 0xffffffff));
        uVar28 = uVar33 >> 8;
        if (*(short *)uVar13 == 0x5942) {
          uVar28 = uVar28 & 0xff00 | uVar33 >> 0x18 | (uVar28 & 0xff) << 0x10;
        }
      }
      else {
        if (local_b0[4] != 0xff) goto LAB_03b3b010;
LAB_03b3af78:
        uVar28 = 0;
      }
      if (*(int *)(param_1 + 4) < (int)uVar28) {
        return piVar18;
      }
      auVar10 = auVar9;
      if (uVar28 != 0) {
        uVar20 = (ulong)uVar28;
        sVar30 = (uVar20 + (ulong)uVar28 * 8) * 0x10;
        if (DAT_05ae7600 == 0) {
          puVar22 = malloc(sVar30);
joined_r0x03b3b2ac:
          if (puVar22 != (undefined8 *)0x0) {
            uVar33 = uVar28 - 1;
            uVar34 = (ulong)uVar33;
            plVar17[0xd] = (long)puVar22;
            if (1 < uVar28) {
              if (uVar34 - 1 < 3) {
                lVar27 = 0;
              }
              else {
                lVar27 = 0;
                puVar35 = puVar22;
                do {
                  puVar35[0x11] = puVar35 + 0x22;
                  puVar35[0x22] = puVar35 + 0x33;
                  *puVar35 = puVar35 + 0x11;
                  lVar27 = lVar27 + -4;
                  puVar35[0x33] = puVar35 + 0x44;
                  puVar35 = puVar35 + 0x44;
                } while (-lVar27 != (uVar34 & 0xfffffffc));
                lVar27 = -lVar27;
              }
              uVar34 = uVar34 & 3;
              if ((uVar33 & 3) != 0) {
                puVar35 = puVar22 + lVar27 * 0x11;
                do {
                  *puVar35 = puVar35 + 0x11;
                  uVar34 = uVar34 - 1;
                  puVar35 = puVar35 + 0x11;
                } while (uVar34 != 0);
              }
            }
            puVar22[(int)(uVar33 * 0x11)] = 0;
            plVar17[0xe] = (long)puVar22;
            if (puVar22 + uVar20 * 0x11 != (undefined8 *)0x0) {
              plVar17[0xc] = (long)(puVar22 + uVar20 * 0x11);
              *(undefined4 *)(plVar17 + 0xb) = 0;
              *(uint *)((long)plVar17 + 0x5c) = uVar28;
            }
          }
        }
        else {
          plVar21 = param_2;
          if (param_2 != (long *)0x0) {
LAB_03b3afec:
            puVar22 = (undefined8 *)(**(code **)(*plVar21 + 0x30))(plVar21,sVar30,8);
            goto joined_r0x03b3b2ac;
          }
          lVar16 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar21 = (long *)(lVar27 + 8);
          if (lVar16 != 0) {
            plVar21 = (long *)(lVar16 + 0xa8);
          }
          plVar21 = (long *)*plVar21;
          if (plVar21 != (long *)0x0) goto LAB_03b3afec;
        }
        uVar34 = 0;
        do {
          if ((int)plVar17[0xb] < *(int *)((long)plVar17 + 0x5c)) {
            plVar21 = (long *)plVar17[0xd];
            if (plVar21 != (long *)0x0) {
              plVar17[0xd] = *plVar21;
            }
            plVar21[0xc] = 0;
            plVar21[9] = 0;
            plVar21[10] = 0;
            plVar21[2] = 0;
            *(undefined4 *)(plVar21 + 2) = 0x40;
            plVar21[7] = 0;
            plVar21[8] = 0;
            plVar21[5] = 0;
            plVar21[6] = 0;
            plVar21[3] = 0;
            plVar21[4] = 0;
            *(undefined1 *)((long)plVar21 + 0x14) = 0;
            *plVar21 = (long)(PTR_DAT_04bb2bc0 + 0x10);
            plVar21[1] = (long)plVar21 + 0x14;
            plVar21[0xb] = 0x60000bb80;
            *(undefined4 *)(plVar21 + 0xc) = 0x3f800000;
            plVar21[0xd] = 0;
            plVar21[0xe] = 0;
            plVar21[0xf] = 0;
            plVar21[0x10] = 0;
            if ((int)plVar17[0xb] < *(int *)((long)plVar17 + 0x5c)) {
              *(long **)(plVar17[0xc] + (long)(int)plVar17[0xb] * 8) = plVar21;
              *(int *)(plVar17 + 0xb) = (int)plVar17[0xb] + 1;
            }
          }
          else {
            plVar21 = (long *)0x0;
          }
          if ((puVar2 != (uint *)0x0) && ((char)*puVar2 == -0x3f)) {
            sVar8 = *(short *)uVar13;
            uVar28 = *puVar2 >> 8;
            if (sVar8 == 0x5942) {
              uVar28 = uVar28 & 0xff00 | *puVar2 >> 0x18 | (uVar28 & 0xff) << 0x10;
            }
            if (uVar34 < uVar28) {
              uVar28 = *(uint *)(uVar13 + 4);
              uVar33 = (uVar28 & 0xff00ff00) >> 8 | (uVar28 & 0xff00ff) << 8;
              if (sVar8 == 0x5942) {
                uVar28 = uVar33 >> 0x10 | uVar33 << 0x10;
              }
              if (uVar28 != 0) {
                uVar5 = puVar2[uVar34 * 2 + 1];
                uVar33 = uVar5 & 0xffffff;
                if (sVar8 == 0x5942) {
                  uVar33 = uVar5 & 0xff00 | (uVar5 & 0xff) << 0x10 | uVar5 >> 0x10 & 0xff;
                }
                uVar33 = *(uint *)(uVar13 + (ulong)uVar33 * 4 + (long)(int)uVar28 + 4);
                uVar5 = (uVar33 & 0xff00ff00) >> 8 | (uVar33 & 0xff00ff) << 8;
                if (sVar8 == 0x5942) {
                  uVar33 = uVar5 >> 0x10 | uVar5 << 0x10;
                }
                __src = (void *)(uVar13 + (ulong)uVar33 + (long)(int)uVar28);
              }
            }
          }
          pvVar19 = (void *)plVar21[1];
          if (pvVar19 != __src) {
            lVar27 = 0;
            do {
              if (*(char *)((long)__src + lVar27) == '\0') goto LAB_03b3b55c;
              if (*(char *)((long)__src + lVar27 + 1) == '\0') {
                lVar27 = lVar27 + 1;
                goto LAB_03b3b55c;
              }
              if (*(char *)((long)__src + lVar27 + 2) == '\0') {
                lVar27 = lVar27 + 2;
                goto LAB_03b3b55c;
              }
              lVar27 = lVar27 + 3;
            } while (lVar27 != 0x80001);
            lVar27 = 0;
LAB_03b3b55c:
            iVar26 = (int)lVar27;
            if ((int)plVar21[2] <= (int)lVar27) {
              iVar26 = (int)plVar21[2] + -1;
            }
            memcpy(pvVar19,__src,(long)iVar26);
            *(undefined1 *)((long)pvVar19 + (long)iVar26) = 0;
          }
          auVar36 = FUN_03b36a34(&local_a0,uVar34 & 0xffffffff);
          psVar23 = auVar36._0_8_;
          local_70 = 0;
          local_6c = '\0';
          local_b0 = auVar36;
          uVar24 = FUN_03b36b40(local_b0,&local_70,"Channel");
          if (((uVar24 & 1) != 0) && (local_6c != -1)) {
            if (local_6c != -0x2d) {
              if (local_6c != -0x2f) goto LAB_03b3b5e0;
              local_70 = local_70 & ((int)local_70 >> 0x1f ^ 0xffffffffU);
            }
            *(uint *)((long)plVar21 + 0x5c) = local_70;
          }
LAB_03b3b5e0:
          local_70 = 0;
          local_6c = '\0';
          uVar24 = FUN_03b36b40(local_b0,&local_70,"Volume");
          if (((uVar24 & 1) != 0) && (local_6c == -0x2e)) {
            *(uint *)(plVar21 + 0xc) = local_70;
          }
          local_70 = 0;
          local_6c = 0;
          uVar24 = FUN_03b36b40(local_b0,&local_70,"Effects");
          lVar27 = DAT_05ae7600;
          if (((((uVar24 & 1) != 0) && (local_6c - 0xc0 < 2)) && (psVar23 != (short *)0x0)) &&
             (puVar3 = (uint *)((long)psVar23 + (ulong)local_70), (*puVar3 & 0xfe) == 0xc0)) {
            uVar28 = *puVar3 >> 8;
            if (*psVar23 == 0x5942) {
              uVar28 = uVar28 & 0xff00 | *puVar3 >> 0x18 | (uVar28 & 0xff) << 0x10;
            }
            if (uVar28 != 0) {
              uVar24 = (ulong)uVar28;
              sVar30 = (uVar24 + (ulong)uVar28 * 2) * 0x20;
              if (DAT_05ae7600 == 0) {
                pvVar19 = malloc(sVar30);
joined_r0x03b3b704:
                if (pvVar19 != (void *)0x0) {
                  uVar33 = uVar28 - 1;
                  uVar32 = (ulong)uVar33;
                  plVar21[0xf] = (long)pvVar19;
                  if (1 < uVar28) {
                    if (uVar32 - 1 < 3) {
                      lVar27 = 0;
                    }
                    else {
                      lVar27 = 0;
                      puVar22 = (undefined8 *)((long)pvVar19 + 0xb0);
                      do {
                        puVar22[-0xb] = puVar22;
                        puVar22[0xb] = puVar22 + 0x16;
                        lVar27 = lVar27 + -4;
                        puVar22[-0x16] = puVar22 + -0xb;
                        *puVar22 = puVar22 + 0xb;
                        puVar22 = puVar22 + 0x2c;
                      } while (-lVar27 != (uVar32 & 0xfffffffc));
                      lVar27 = -lVar27;
                    }
                    if ((uVar33 & 3) != 0) {
                      uVar32 = uVar32 & 3;
                      puVar22 = (undefined8 *)((long)pvVar19 + lVar27 * 0x58);
                      do {
                        *puVar22 = puVar22 + 0xb;
                        uVar32 = uVar32 - 1;
                        puVar22 = puVar22 + 0xb;
                      } while (uVar32 != 0);
                    }
                  }
                  *(undefined8 *)((long)pvVar19 + (long)(int)(uVar33 * 0xb) * 8) = 0;
                  plVar21[0x10] = (long)pvVar19;
                  pvVar19 = (void *)((long)pvVar19 + uVar24 * 0x58);
                  if (pvVar19 != (void *)0x0) {
                    plVar21[0xe] = (long)pvVar19;
                    *(undefined4 *)(plVar21 + 0xd) = 0;
                    *(uint *)((long)plVar21 + 0x6c) = uVar28;
                  }
                }
              }
              else {
                plVar25 = param_2;
                if (param_2 != (long *)0x0) {
LAB_03b3b6e0:
                  pvVar19 = (void *)(**(code **)(*plVar25 + 0x30))(plVar25,sVar30,8);
                  goto joined_r0x03b3b704;
                }
                lVar16 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                plVar25 = (long *)(lVar27 + 8);
                if (lVar16 != 0) {
                  plVar25 = (long *)(lVar16 + 0xa8);
                }
                plVar25 = (long *)*plVar25;
                if (plVar25 != (long *)0x0) goto LAB_03b3b6e0;
              }
              uVar32 = 0;
              do {
                puVar22 = &DAT_0407ebb1;
                if ((char)*puVar3 == -0x3f) {
                  uVar28 = *puVar3 >> 8;
                  sVar8 = *psVar23;
                  if (sVar8 == 0x5942) {
                    uVar28 = uVar28 & 0xff00 | *puVar3 >> 0x18 | (uVar28 & 0xff) << 0x10;
                  }
                  if (uVar32 < uVar28) {
                    uVar28 = *(uint *)(psVar23 + 2);
                    uVar33 = (uVar28 & 0xff00ff00) >> 8 | (uVar28 & 0xff00ff) << 8;
                    if (sVar8 == 0x5942) {
                      uVar28 = uVar33 >> 0x10 | uVar33 << 0x10;
                    }
                    if (uVar28 != 0) {
                      uVar5 = puVar3[uVar32 * 2 + 1];
                      uVar33 = uVar5 & 0xffffff;
                      if (sVar8 == 0x5942) {
                        uVar33 = uVar5 & 0xff00 | (uVar5 & 0xff) << 0x10 | uVar5 >> 0x10 & 0xff;
                      }
                      uVar33 = *(uint *)((long)psVar23 + (ulong)uVar33 * 4 + (long)(int)uVar28 + 4);
                      uVar5 = (uVar33 & 0xff00ff00) >> 8 | (uVar33 & 0xff00ff) << 8;
                      if (sVar8 == 0x5942) {
                        uVar33 = uVar5 >> 0x10 | uVar5 << 0x10;
                      }
                      puVar22 = (undefined8 *)((long)psVar23 + (ulong)uVar33 + (long)(int)uVar28);
                    }
                  }
                }
                if ((int)plVar21[0xd] < *(int *)((long)plVar21 + 0x6c)) {
                  plVar25 = (long *)plVar21[0xf];
                  if (plVar25 != (long *)0x0) {
                    plVar21[0xf] = *plVar25;
                  }
                  *(undefined1 *)((long)plVar25 + 0x53) = 0;
                  *(undefined1 *)((long)plVar25 + 0x14) = 0;
                  *(undefined4 *)(plVar25 + 2) = 0x40;
                  *plVar25 = (long)&PTR_LAB_048fb9f8;
                  plVar25[1] = (long)plVar25 + 0x14;
                  if ((int)plVar21[0xd] < *(int *)((long)plVar21 + 0x6c)) {
                    *(long **)(plVar21[0xe] + (long)(int)plVar21[0xd] * 8) = plVar25;
                    *(int *)(plVar21 + 0xd) = (int)plVar21[0xd] + 1;
                  }
                }
                else {
                  plVar25 = (long *)0x0;
                }
                puVar35 = (undefined8 *)plVar25[1];
                if (puVar35 != puVar22) {
                  lVar27 = 0;
                  do {
                    if (*(char *)((long)puVar22 + lVar27) == '\0') goto LAB_03b3b7e0;
                    if (*(char *)((long)puVar22 + lVar27 + 1) == '\0') {
                      lVar27 = lVar27 + 1;
                      goto LAB_03b3b7e0;
                    }
                    if (*(char *)((long)puVar22 + lVar27 + 2) == '\0') {
                      lVar27 = lVar27 + 2;
                      goto LAB_03b3b7e0;
                    }
                    lVar27 = lVar27 + 3;
                  } while (lVar27 != 0x80001);
                  lVar27 = 0;
LAB_03b3b7e0:
                  iVar26 = (int)lVar27;
                  if ((int)plVar25[2] <= (int)lVar27) {
                    iVar26 = (int)plVar25[2] + -1;
                  }
                  memcpy(puVar35,puVar22,(long)iVar26);
                  *(undefined1 *)((long)puVar35 + (long)iVar26) = 0;
                }
                uVar32 = uVar32 + 1;
              } while (uVar32 != uVar24);
            }
          }
          uVar34 = uVar34 + 1;
          auVar10 = local_b0;
        } while (uVar34 != uVar20);
      }
    }
    local_b0._8_8_ = auVar10._8_8_;
    local_b0._0_8_ = auVar10._0_8_;
    local_b0._0_8_ = local_b0._0_8_ & 0xffffff0000000000;
    uVar20 = FUN_03b36b40(local_90,local_b0,"FinalMix");
    if ((uVar20 & 1) == 0) {
      return piVar18;
    }
    if (local_b0[4] - 0xc0 < 2) {
      puStack_98 = (uint *)(uVar13 + (local_b0._0_8_ & 0xffffffff));
    }
    else {
      if (local_b0[4] != 0xff) {
        return piVar18;
      }
      puStack_98 = (uint *)0x0;
    }
    pcVar31 = (char *)plVar17[0x10];
    local_a0 = (short *)uVar13;
    if (pcVar31 != "FinalMix") {
      iVar26 = 8;
      if ((int)plVar17[0x11] < 9) {
        iVar26 = (int)plVar17[0x11] + -1;
      }
      memcpy(pcVar31,"FinalMix",(long)iVar26);
      pcVar31[iVar26] = '\0';
    }
    local_b0._0_8_ = local_b0._0_8_ & 0xffffff0000000000;
    uVar20 = FUN_03b36b40(&local_a0,local_b0,"Volume");
    if (((uVar20 & 1) != 0) && (local_b0[4] == -0x2e)) {
      *(undefined4 *)(plVar17 + 0x1b) = local_b0._0_4_;
    }
    local_b0._0_8_ = local_b0._0_8_ & 0xffffff0000000000;
    uVar20 = FUN_03b36b40(&local_a0,local_b0,"Effects");
    lVar27 = DAT_05ae7600;
    if ((((uVar20 & 1) != 0) && (local_b0[4] - 0xc0 < 2)) &&
       (puVar2 = (uint *)(uVar13 + (local_b0._0_8_ & 0xffffffff)), (*puVar2 & 0xfe) == 0xc0)) {
      uVar28 = *puVar2 >> 8;
      if (*(short *)uVar13 == 0x5942) {
        uVar28 = uVar28 & 0xff00 | *puVar2 >> 0x18 | (uVar28 & 0xff) << 0x10;
      }
      if (uVar28 != 0) {
        uVar20 = (ulong)uVar28;
        sVar30 = (uVar20 + (ulong)uVar28 * 2) * 0x20;
        if (DAT_05ae7600 == 0) {
          pvVar19 = malloc(sVar30);
joined_r0x03b3b984:
          if (pvVar19 != (void *)0x0) {
            uVar33 = uVar28 - 1;
            uVar34 = (ulong)uVar33;
            plVar17[0x1e] = (long)pvVar19;
            if (1 < uVar28) {
              if (uVar34 - 1 < 3) {
                lVar27 = 0;
              }
              else {
                lVar27 = 0;
                puVar22 = (undefined8 *)((long)pvVar19 + 0xb0);
                do {
                  puVar22[-0xb] = puVar22;
                  puVar22[0xb] = puVar22 + 0x16;
                  lVar27 = lVar27 + -4;
                  puVar22[-0x16] = puVar22 + -0xb;
                  *puVar22 = puVar22 + 0xb;
                  puVar22 = puVar22 + 0x2c;
                } while (-lVar27 != (uVar34 & 0xfffffffc));
                lVar27 = -lVar27;
              }
              uVar34 = uVar34 & 3;
              if ((uVar33 & 3) != 0) {
                puVar22 = (undefined8 *)((long)pvVar19 + lVar27 * 0x58);
                do {
                  *puVar22 = puVar22 + 0xb;
                  uVar34 = uVar34 - 1;
                  puVar22 = puVar22 + 0xb;
                } while (uVar34 != 0);
              }
            }
            *(undefined8 *)((long)pvVar19 + (long)(int)(uVar33 * 0xb) * 8) = 0;
            plVar17[0x1f] = (long)pvVar19;
            pvVar19 = (void *)((long)pvVar19 + uVar20 * 0x58);
            if (pvVar19 != (void *)0x0) {
              plVar17[0x1d] = (long)pvVar19;
              *(undefined4 *)(plVar17 + 0x1c) = 0;
              *(uint *)((long)plVar17 + 0xe4) = uVar28;
            }
          }
        }
        else {
          plVar21 = param_2;
          if (param_2 != (long *)0x0) {
LAB_03b3b1a4:
            pvVar19 = (void *)(**(code **)(*plVar21 + 0x30))(plVar21,sVar30,8);
            goto joined_r0x03b3b984;
          }
          lVar16 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar21 = (long *)(lVar27 + 8);
          if (lVar16 != 0) {
            plVar21 = (long *)(lVar16 + 0xa8);
          }
          plVar21 = (long *)*plVar21;
          if (plVar21 != (long *)0x0) goto LAB_03b3b1a4;
        }
        uVar34 = 0;
        do {
          puVar22 = &DAT_0407ebb1;
          if ((char)*puVar2 == -0x3f) {
            uVar28 = *puVar2 >> 8;
            sVar8 = *(short *)uVar13;
            if (sVar8 == 0x5942) {
              uVar28 = uVar28 & 0xff00 | *puVar2 >> 0x18 | (uVar28 & 0xff) << 0x10;
            }
            if (uVar34 < uVar28) {
              uVar28 = *(uint *)(uVar13 + 4);
              uVar33 = (uVar28 & 0xff00ff00) >> 8 | (uVar28 & 0xff00ff) << 8;
              if (sVar8 == 0x5942) {
                uVar28 = uVar33 >> 0x10 | uVar33 << 0x10;
              }
              if (uVar28 != 0) {
                uVar5 = puVar2[uVar34 * 2 + 1];
                uVar33 = uVar5 & 0xffffff;
                if (sVar8 == 0x5942) {
                  uVar33 = uVar5 & 0xff00 | (uVar5 & 0xff) << 0x10 | uVar5 >> 0x10 & 0xff;
                }
                uVar33 = *(uint *)(uVar13 + (ulong)uVar33 * 4 + (long)(int)uVar28 + 4);
                uVar5 = (uVar33 & 0xff00ff00) >> 8 | (uVar33 & 0xff00ff) << 8;
                if (sVar8 == 0x5942) {
                  uVar33 = uVar5 >> 0x10 | uVar5 << 0x10;
                }
                puVar22 = (undefined8 *)(uVar13 + (ulong)uVar33 + (long)(int)uVar28);
              }
            }
          }
          if ((int)plVar17[0x1c] < *(int *)((long)plVar17 + 0xe4)) {
            plVar21 = (long *)plVar17[0x1e];
            if (plVar21 != (long *)0x0) {
              plVar17[0x1e] = *plVar21;
            }
            *(undefined1 *)((long)plVar21 + 0x53) = 0;
            *(undefined1 *)((long)plVar21 + 0x14) = 0;
            *(undefined4 *)(plVar21 + 2) = 0x40;
            *plVar21 = (long)&PTR_LAB_048fb9f8;
            plVar21[1] = (long)plVar21 + 0x14;
            if ((int)plVar17[0x1c] < *(int *)((long)plVar17 + 0xe4)) {
              *(long **)(plVar17[0x1d] + (long)(int)plVar17[0x1c] * 8) = plVar21;
              *(int *)(plVar17 + 0x1c) = (int)plVar17[0x1c] + 1;
            }
          }
          else {
            plVar21 = (long *)0x0;
          }
          puVar35 = (undefined8 *)plVar21[1];
          if (puVar35 != puVar22) {
            lVar27 = 0;
            do {
              if (*(char *)((long)puVar22 + lVar27) == '\0') goto LAB_03b3bf38;
              if (*(char *)((long)puVar22 + lVar27 + 1) == '\0') {
                lVar27 = lVar27 + 1;
                goto LAB_03b3bf38;
              }
              if (*(char *)((long)puVar22 + lVar27 + 2) == '\0') {
                lVar27 = lVar27 + 2;
                goto LAB_03b3bf38;
              }
              lVar27 = lVar27 + 3;
            } while (lVar27 != 0x80001);
            lVar27 = 0;
LAB_03b3bf38:
            iVar26 = (int)lVar27;
            if ((int)plVar21[2] <= (int)lVar27) {
              iVar26 = (int)plVar21[2] + -1;
            }
            memcpy(puVar35,puVar22,(long)iVar26);
            *(undefined1 *)((long)puVar35 + (long)iVar26) = 0;
          }
          uVar34 = uVar34 + 1;
        } while (uVar34 != uVar20);
      }
    }
    local_b0._0_8_ = local_b0._0_8_ & 0xffffff0000000000;
    uVar20 = FUN_03b36b40(local_90,local_b0,"BusGraph");
    auVar36._8_8_ = local_b0._8_8_;
    auVar36._0_8_ = local_b0._0_8_;
    auVar12._8_8_ = local_b0._8_8_;
    auVar12._0_8_ = local_b0._0_8_;
    auVar11._8_8_ = local_b0._8_8_;
    auVar11._0_8_ = local_b0._0_8_;
    if ((uVar20 & 1) == 0) {
      return piVar18;
    }
    if (local_b0[4] - 0xc0 < 2) {
      puStack_98 = (uint *)(uVar13 + (local_b0._0_8_ & 0xffffffff));
      local_a0 = (short *)uVar13;
      auVar36 = auVar11;
      if ((*puStack_98 & 0xfe) == 0xc0) {
        uVar28 = *puStack_98 >> 8;
        if (*(short *)uVar13 == 0x5942) {
          uVar28 = uVar28 & 0xff00 | *puStack_98 >> 0x18 | (uVar28 & 0xff) << 0x10;
        }
        auVar36 = auVar12;
        if (uVar28 != 0) {
          sVar30 = (ulong)uVar28 << 5;
          lVar27 = *(long *)PTR_DAT_04bb2698;
          if (lVar27 == 0) {
            pvVar19 = malloc(sVar30);
          }
          else {
            plVar21 = param_2;
            if (param_2 == (long *)0x0) {
              lVar16 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
              plVar21 = (long *)(lVar27 + 8);
              if (lVar16 != 0) {
                plVar21 = (long *)(lVar16 + 0xa8);
              }
              plVar21 = (long *)*plVar21;
              if (plVar21 == (long *)0x0) goto LAB_03b3ba38;
            }
            pvVar19 = (void *)(**(code **)(*plVar21 + 0x30))(plVar21,sVar30,8);
          }
          if (pvVar19 != (void *)0x0) {
            uVar33 = uVar28 - 1;
            uVar20 = (ulong)uVar33;
            plVar17[0x22] = (long)pvVar19;
            if (1 < uVar28) {
              if (uVar20 - 1 < 3) {
                lVar27 = 0;
              }
              else {
                lVar27 = 0;
                puVar22 = (undefined8 *)((long)pvVar19 + 0x30);
                do {
                  puVar22[-3] = puVar22;
                  puVar22[3] = puVar22 + 6;
                  lVar27 = lVar27 + -4;
                  puVar22[-6] = puVar22 + -3;
                  *puVar22 = puVar22 + 3;
                  puVar22 = puVar22 + 0xc;
                } while (-lVar27 != (uVar20 & 0xfffffffc));
                lVar27 = -lVar27;
              }
              uVar20 = uVar20 & 3;
              if ((uVar33 & 3) != 0) {
                puVar22 = (undefined8 *)((long)pvVar19 + lVar27 * 0x18);
                do {
                  *puVar22 = puVar22 + 3;
                  uVar20 = uVar20 - 1;
                  puVar22 = puVar22 + 3;
                } while (uVar20 != 0);
              }
            }
            *(undefined8 *)((long)pvVar19 + (long)(int)(uVar33 * 3) * 8) = 0;
            plVar17[0x23] = (long)pvVar19;
            pvVar19 = (void *)((long)pvVar19 + (ulong)uVar28 * 0x18);
            if (pvVar19 != (void *)0x0) {
              plVar17[0x21] = (long)pvVar19;
              *(undefined4 *)(plVar17 + 0x20) = 0;
              *(uint *)((long)plVar17 + 0x104) = uVar28;
            }
          }
LAB_03b3ba38:
          uVar33 = 0;
LAB_03b3ba68:
          if ((int)plVar17[0x20] < *(int *)((long)plVar17 + 0x104)) {
            plVar21 = (long *)plVar17[0x22];
            if (plVar21 != (long *)0x0) {
              plVar17[0x22] = *plVar21;
            }
            plVar21[1] = 0;
            plVar21[2] = 0;
            *plVar21 = 0;
            *(undefined4 *)(plVar21 + 2) = 0x3f800000;
            if ((int)plVar17[0x20] < *(int *)((long)plVar17 + 0x104)) {
              *(long **)(plVar17[0x21] + (long)(int)plVar17[0x20] * 8) = plVar21;
              *(int *)(plVar17 + 0x20) = (int)plVar17[0x20] + 1;
            }
          }
          else {
            plVar21 = (long *)0x0;
          }
          auVar36 = FUN_03b36a34(&local_a0,uVar33);
          psVar23 = auVar36._0_8_;
          local_70 = 0;
          local_6c = 0;
          local_b0 = auVar36;
          uVar20 = FUN_03b36b40(local_b0,&local_70,"Source");
          if ((uVar20 & 1) == 0) {
            pcVar31 = "";
          }
          else {
            pcVar31 = "";
            if (local_6c == 0xa0) {
              uVar6 = *(uint *)(psVar23 + 4);
              uVar5 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
              uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
              if (*psVar23 != 0x5942) {
                uVar5 = uVar6;
              }
              if (uVar5 != 0) {
                uVar7 = *(uint *)((long)psVar23 + (long)(int)local_70 * 4 + (long)(int)uVar5 + 4);
                uVar6 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
                uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
                if (*psVar23 != 0x5942) {
                  uVar6 = uVar7;
                }
                pcVar31 = (char *)((long)psVar23 + (ulong)uVar6 + (long)(int)uVar5);
              }
            }
          }
          if (0 < (int)plVar17[0xb]) {
            lVar27 = 0;
            do {
              plVar25 = *(long **)(plVar17[0xc] + lVar27 * 8);
              (**(code **)(*plVar25 + 0x18))(plVar25);
              (**(code **)(*plVar25 + 0x18))(plVar25);
              pcVar29 = (char *)plVar25[1];
              if (pcVar29 == pcVar31) {
LAB_03b3bc40:
                lVar27 = *(long *)(plVar17[0xc] + lVar27 * 8);
                *plVar21 = lVar27;
                if (lVar27 == 0) goto LAB_03b3ba54;
                local_70 = 0;
                local_6c = 0;
                uVar20 = FUN_03b36b40(local_b0,&local_70,"Destination");
                if ((uVar20 & 1) == 0) {
                  pcVar31 = "";
                }
                else {
                  pcVar31 = "";
                  if (local_6c == 0xa0) {
                    uVar6 = *(uint *)(psVar23 + 4);
                    uVar5 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
                    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
                    if (*psVar23 != 0x5942) {
                      uVar5 = uVar6;
                    }
                    if (uVar5 != 0) {
                      uVar7 = *(uint *)((long)psVar23 +
                                       (long)(int)local_70 * 4 + (long)(int)uVar5 + 4);
                      uVar6 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
                      uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
                      if (*psVar23 != 0x5942) {
                        uVar6 = uVar7;
                      }
                      pcVar31 = (char *)((long)psVar23 + (ulong)uVar6 + (long)(int)uVar5);
                    }
                  }
                  if (pcVar31 == "FinalMix") goto LAB_03b3bd60;
                }
                uVar20 = 0;
                bVar14 = true;
                goto LAB_03b3bce0;
              }
              if (*pcVar29 == *pcVar31) {
                if (*pcVar29 != '\0') {
                  uVar20 = 0;
                  do {
                    uVar34 = uVar20;
                    if (pcVar29[uVar34 + 1] != pcVar31[uVar34 + 1]) goto LAB_03b3bb7c;
                    if (pcVar29[uVar34 + 1] == '\0') goto LAB_03b3bb74;
                    if (pcVar29[uVar34 + 2] != pcVar31[uVar34 + 2]) goto LAB_03b3bb7c;
                    if (pcVar29[uVar34 + 2] == '\0') {
                      uVar34 = uVar34 + 1;
                      goto LAB_03b3bb74;
                    }
                    if ((uVar34 == 0x7fffe) || (pcVar29[uVar34 + 3] != pcVar31[uVar34 + 3]))
                    goto LAB_03b3bb7c;
                    uVar20 = uVar34 + 3;
                  } while (pcVar29[uVar34 + 3] != '\0');
                  uVar34 = uVar34 + 2;
LAB_03b3bb74:
                  if (0x7ffff < uVar34) goto LAB_03b3bb7c;
                }
                goto LAB_03b3bc40;
              }
LAB_03b3bb7c:
              lVar27 = lVar27 + 1;
            } while (lVar27 < (int)plVar17[0xb]);
          }
          *plVar21 = 0;
          goto LAB_03b3ba54;
        }
      }
    }
    else if (local_b0[4] != 0xff) {
      return piVar18;
    }
LAB_03b3ac28:
    *(undefined1 *)(plVar17 + 0x24) = 1;
    local_d0 = local_d0 + 1;
    if (local_d0 == uVar4) {
      return piVar18;
    }
  } while( true );
  while( true ) {
    if (pcVar31[uVar20] == '\0') {
      if (bVar14) goto LAB_03b3bd60;
      break;
    }
    if (pcVar31[uVar20 + 1] != "FinalMix"[uVar20 + 1]) break;
    if (pcVar31[uVar20 + 1] == '\0') goto LAB_03b3bd60;
    if (pcVar31[uVar20 + 2] != "FinalMix"[uVar20 + 2]) break;
    if (pcVar31[uVar20 + 2] == '\0') goto LAB_03b3bd60;
    bVar14 = uVar20 < 0x7fffe;
    uVar20 = uVar20 + 3;
    if (uVar20 == 0x80001) break;
LAB_03b3bce0:
    if (pcVar31[uVar20] != "FinalMix"[uVar20]) break;
  }
  if (0 < (int)plVar17[0xb]) {
    lVar27 = 0;
    do {
      plVar25 = *(long **)(plVar17[0xc] + lVar27 * 8);
      (**(code **)(*plVar25 + 0x18))(plVar25);
      (**(code **)(*plVar25 + 0x18))(plVar25);
      pcVar29 = (char *)plVar25[1];
      if (pcVar29 == pcVar31) {
LAB_03b3be88:
        lVar27 = *(long *)(plVar17[0xc] + lVar27 * 8);
        plVar21[1] = lVar27;
        if (lVar27 == 0) goto LAB_03b3ba54;
        goto LAB_03b3bd68;
      }
      if (*pcVar29 == *pcVar31) {
        if (*pcVar29 != '\0') {
          uVar20 = 0;
          do {
            uVar34 = uVar20;
            if (pcVar29[uVar34 + 1] != pcVar31[uVar34 + 1]) goto LAB_03b3bdc4;
            if (pcVar29[uVar34 + 1] == '\0') goto LAB_03b3bdbc;
            if (pcVar29[uVar34 + 2] != pcVar31[uVar34 + 2]) goto LAB_03b3bdc4;
            if (pcVar29[uVar34 + 2] == '\0') {
              uVar34 = uVar34 + 1;
              goto LAB_03b3bdbc;
            }
            if ((uVar34 == 0x7fffe) || (pcVar29[uVar34 + 3] != pcVar31[uVar34 + 3]))
            goto LAB_03b3bdc4;
            uVar20 = uVar34 + 3;
          } while (pcVar29[uVar34 + 3] != '\0');
          uVar34 = uVar34 + 2;
LAB_03b3bdbc:
          if (0x7ffff < uVar34) goto LAB_03b3bdc4;
        }
        goto LAB_03b3be88;
      }
LAB_03b3bdc4:
      lVar27 = lVar27 + 1;
    } while (lVar27 < (int)plVar17[0xb]);
  }
  plVar21[1] = 0;
LAB_03b3ba54:
  uVar33 = uVar33 + 1;
  auVar36 = local_b0;
  if (uVar33 == uVar28) goto LAB_03b3ac28;
  goto LAB_03b3ba68;
LAB_03b3bd60:
  plVar21[1] = (long)(plVar17 + 0xf);
LAB_03b3bd68:
  local_70 = 0;
  local_6c = 0;
  uVar20 = FUN_03b36b40(local_b0,&local_70,"SendVolume");
  if (((uVar20 & 1) != 0) && (local_6c == 0xd2)) {
    *(uint *)(plVar21 + 2) = local_70;
  }
  goto LAB_03b3ba54;
}

