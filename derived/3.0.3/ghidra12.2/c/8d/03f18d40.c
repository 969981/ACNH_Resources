
void FUN_03f18d40(long *param_1,long *param_2,undefined8 *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  char cVar16;
  bool bVar17;
  byte bVar18;
  byte bVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  ulong *puVar23;
  void *pvVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined1 uVar27;
  uint uVar28;
  size_t sVar29;
  char *pcVar30;
  ulong *puVar31;
  short *psVar32;
  byte *pbVar33;
  char *pcVar34;
  uint uVar35;
  ulong *puVar36;
  uint *puVar37;
  ulong uVar38;
  long lVar39;
  short *psVar40;
  size_t sVar41;
  long *plVar42;
  undefined *puVar43;
  undefined4 uVar44;
  float fVar45;
  undefined1 auVar46 [16];
  long *local_c8;
  undefined8 local_c0;
  long lStack_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [8];
  uint *puStack_88;
  undefined8 local_80;
  uint *local_78;
  undefined4 local_64;
  
  local_80 = (undefined **)0x0;
  local_78 = (uint *)0x0;
  local_90 = (undefined1  [8])((ulong)local_90 & 0xffffff0000000000);
  uVar20 = FUN_03b36b40(param_3,local_90,"Property");
  auVar9._8_8_ = puStack_88;
  auVar9._0_8_ = local_90;
  auVar8._8_8_ = puStack_88;
  auVar8._0_8_ = local_90;
  auVar46._8_8_ = puStack_88;
  auVar46._0_8_ = local_90;
  if ((uVar20 & 1) != 0) {
    uVar28 = (uint)local_90[4];
    if (uVar28 - 0xc0 < 2) {
      local_80 = (undefined **)*param_3;
      local_78 = (uint *)((long)local_80 + ((ulong)local_90 & 0xffffffff));
      _local_90 = auVar46;
      if (local_80 != (undefined **)0x0) {
        if ((*local_78 & 0xfe) != 0xc0) goto LAB_03f18e0c;
        uVar28 = *local_78 >> 8;
        sVar29 = (size_t)uVar28;
        if (*(short *)local_80 == 0x5942) {
          sVar29 = (size_t)(uVar28 & 0xff00 | *local_78 >> 0x18 | (uVar28 & 0xff) << 0x10);
        }
LAB_03f18e10:
        *(int *)(param_1 + 0xc) = (int)sVar29;
        puVar2 = PTR_DAT_04bb2698;
        lVar39 = *(long *)PTR_DAT_04bb2698;
        if (lVar39 == 0) {
          pvVar24 = malloc(sVar29 << 3);
          param_1[0xd] = (long)pvVar24;
LAB_03f18eac:
          pvVar24 = malloc(sVar29);
          param_1[0xe] = (long)pvVar24;
LAB_03f18eb8:
          pvVar24 = malloc(sVar29);
          param_1[0xf] = (long)pvVar24;
LAB_03f18ec8:
          pvVar24 = malloc(sVar29 << 2);
        }
        else {
          plVar22 = param_2;
          if (param_2 == (long *)0x0) {
            lVar21 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar22 = (long *)(lVar39 + 8);
            if (lVar21 != 0) {
              plVar22 = (long *)(lVar21 + 0xa8);
            }
            plVar22 = (long *)*plVar22;
            if (plVar22 != (long *)0x0) goto LAB_03f18e64;
            lVar21 = *(long *)puVar2;
            param_1[0xd] = 0;
            if (lVar21 == 0) goto LAB_03f18eac;
LAB_03f19410:
            lVar39 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar22 = (long *)(lVar21 + 8);
            if (lVar39 != 0) {
              plVar22 = (long *)(lVar39 + 0xa8);
            }
            plVar22 = (long *)*plVar22;
            if (plVar22 != (long *)0x0) goto LAB_03f1943c;
            lVar21 = *(long *)puVar2;
            param_1[0xe] = 0;
            if (lVar21 == 0) goto LAB_03f18eb8;
LAB_03f19474:
            lVar39 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar22 = (long *)(lVar21 + 8);
            if (lVar39 != 0) {
              plVar22 = (long *)(lVar39 + 0xa8);
            }
            plVar22 = (long *)*plVar22;
            if (plVar22 != (long *)0x0) goto LAB_03f194a0;
            lVar21 = *(long *)puVar2;
            param_1[0xf] = 0;
            if (lVar21 == 0) goto LAB_03f18ec8;
LAB_03f194e0:
            lVar39 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar22 = (long *)(lVar21 + 8);
            if (lVar39 != 0) {
              plVar22 = (long *)(lVar39 + 0xa8);
            }
            plVar22 = (long *)*plVar22;
            if (plVar22 == (long *)0x0) {
              pvVar24 = (void *)0x0;
              goto joined_r0x03f18ed4;
            }
          }
          else {
LAB_03f18e64:
            lVar39 = (**(code **)(*plVar22 + 0x30))(plVar22,sVar29 << 3,8);
            lVar21 = *(long *)puVar2;
            param_1[0xd] = lVar39;
            if (lVar21 == 0) goto LAB_03f18eac;
            if (param_2 == (long *)0x0) goto LAB_03f19410;
            plVar22 = param_2;
LAB_03f1943c:
            lVar39 = (**(code **)(*plVar22 + 0x30))(plVar22,sVar29,8);
            lVar21 = *(long *)puVar2;
            param_1[0xe] = lVar39;
            if (lVar21 == 0) goto LAB_03f18eb8;
            if (param_2 == (long *)0x0) goto LAB_03f19474;
            plVar22 = param_2;
LAB_03f194a0:
            lVar39 = (**(code **)(*plVar22 + 0x30))(plVar22,sVar29,8);
            lVar21 = *(long *)puVar2;
            param_1[0xf] = lVar39;
            if (lVar21 == 0) goto LAB_03f18ec8;
            if (param_2 == (long *)0x0) goto LAB_03f194e0;
            plVar22 = param_2;
          }
          pvVar24 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,sVar29 << 2,8);
        }
joined_r0x03f18ed4:
        if ((int)sVar29 == 0) {
          param_1[0x10] = (long)pvVar24;
        }
        else {
          local_c8 = param_1 + 0xd;
          memset(pvVar24,0,sVar29 << 2);
          sVar41 = 0;
          uVar28 = 0;
          param_1[0x10] = (long)pvVar24;
          do {
            auVar46 = FUN_03b36a34(&local_80,sVar41 & 0xffffffff);
            psVar32 = auVar46._0_8_;
            local_a0._0_8_ = local_a0._0_8_ & 0xffffff0000000000;
            _local_90 = auVar46;
            uVar20 = FUN_03b36b40(local_90,local_a0,&DAT_040a1c2c);
            lVar39 = 0;
            if (((uVar20 & 1) != 0) && (local_a0[4] == -0x60)) {
              uVar4 = *(uint *)(psVar32 + 4);
              uVar35 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
              uVar35 = uVar35 >> 0x10 | uVar35 << 0x10;
              if (*psVar32 != 0x5942) {
                uVar35 = uVar4;
              }
              if (uVar35 == 0) {
                lVar39 = 0;
              }
              else {
                uVar5 = *(uint *)((long)psVar32 +
                                 (long)(int)local_a0._0_4_ * 4 + (long)(int)uVar35 + 4);
                uVar4 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
                uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
                if (*psVar32 != 0x5942) {
                  uVar4 = uVar5;
                }
                lVar39 = (long)psVar32 + (ulong)uVar4 + (long)(int)uVar35;
              }
            }
            *(long *)(*local_c8 + sVar41 * 8) = lVar39;
            local_a0._0_8_ = local_a0._0_8_ & 0xffffff0000000000;
            uVar20 = FUN_03b36b40(local_90,local_a0,&DAT_040fe5ab);
            if (((uVar20 & 1) == 0) || (local_a0[4] != -0x60)) {
LAB_03f19044:
              pcVar30 = (char *)0x0;
LAB_03f19048:
              uVar20 = 0;
              bVar17 = true;
              do {
                if (pcVar30[uVar20] != (&DAT_040ae865)[uVar20]) break;
                if (pcVar30[uVar20] == '\0') {
                  if (bVar17) goto LAB_03f19244;
                  break;
                }
                if (pcVar30[uVar20 + 1] != (&DAT_040ae866)[uVar20]) break;
                if (pcVar30[uVar20 + 1] == '\0') goto LAB_03f19244;
                if (pcVar30[uVar20 + 2] != (&DAT_040ae867)[uVar20]) break;
                if (pcVar30[uVar20 + 2] == '\0') goto LAB_03f19244;
                bVar17 = uVar20 < 0x7fffe;
                uVar20 = uVar20 + 3;
              } while (uVar20 != 0x80001);
              if (pcVar30 == "Float") {
LAB_03f19250:
                uVar27 = 1;
              }
              else {
                uVar20 = 0;
                bVar17 = true;
                do {
                  if (pcVar30[uVar20] != "Float"[uVar20]) break;
                  if (pcVar30[uVar20] == '\0') {
                    if (bVar17) goto LAB_03f19250;
                    break;
                  }
                  if (pcVar30[uVar20 + 1] != "Float"[uVar20 + 1]) break;
                  if (pcVar30[uVar20 + 1] == '\0') goto LAB_03f19250;
                  if (pcVar30[uVar20 + 2] != "Float"[uVar20 + 2]) break;
                  if (pcVar30[uVar20 + 2] == '\0') goto LAB_03f19250;
                  bVar17 = uVar20 < 0x7fffe;
                  uVar20 = uVar20 + 3;
                } while (uVar20 != 0x80001);
                if (pcVar30 == "String") {
LAB_03f191b0:
                  uVar27 = 2;
                }
                else {
                  uVar20 = 0;
                  bVar17 = true;
                  do {
                    if (pcVar30[uVar20] != "String"[uVar20]) break;
                    if (pcVar30[uVar20] == '\0') {
                      if (bVar17) goto LAB_03f191b0;
                      break;
                    }
                    if (pcVar30[uVar20 + 1] != "String"[uVar20 + 1]) break;
                    if (pcVar30[uVar20 + 1] == '\0') goto LAB_03f191b0;
                    if (pcVar30[uVar20 + 2] != "String"[uVar20 + 2]) break;
                    if (pcVar30[uVar20 + 2] == '\0') goto LAB_03f191b0;
                    bVar17 = uVar20 < 0x7fffe;
                    uVar20 = uVar20 + 3;
                  } while (uVar20 != 0x80001);
                  if (pcVar30 != "Bool") {
                    uVar20 = 0;
                    bVar17 = true;
                    do {
                      if (pcVar30[uVar20] != (&DAT_040656e4)[uVar20]) break;
                      if (pcVar30[uVar20] == '\0') {
                        if (bVar17) goto LAB_03f19244;
                        break;
                      }
                      if (pcVar30[uVar20 + 1] != (&DAT_040656e5)[uVar20]) break;
                      if (pcVar30[uVar20 + 1] == '\0') goto LAB_03f19244;
                      if (pcVar30[uVar20 + 2] != (&DAT_040656e6)[uVar20]) break;
                      if (pcVar30[uVar20 + 2] == '\0') goto LAB_03f19244;
                      bVar17 = uVar20 < 0x7fffe;
                      uVar20 = uVar20 + 3;
                    } while (uVar20 != 0x80001);
                    goto LAB_03f19250;
                  }
LAB_03f19244:
                  uVar27 = 0;
                }
              }
            }
            else {
              uVar4 = *(uint *)(psVar32 + 4);
              uVar35 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
              uVar35 = uVar35 >> 0x10 | uVar35 << 0x10;
              if (*psVar32 != 0x5942) {
                uVar35 = uVar4;
              }
              if (uVar35 == 0) goto LAB_03f19044;
              uVar5 = *(uint *)((long)psVar32 +
                               (long)(int)local_a0._0_4_ * 4 + (long)(int)uVar35 + 4);
              uVar4 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
              uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
              if (*psVar32 != 0x5942) {
                uVar4 = uVar5;
              }
              pcVar30 = (char *)((long)psVar32 + (ulong)uVar4 + (long)(int)uVar35);
              if (pcVar30 != "Int") goto LAB_03f19048;
              uVar27 = 0;
            }
            *(undefined1 *)(param_1[0xe] + sVar41) = uVar27;
            *(undefined1 *)(param_1[0xf] + sVar41) = 0;
            *(undefined4 *)(param_1[0x10] + sVar41 * 4) = 0;
            if (*(char *)(param_1[0xe] + sVar41) == '\x02') {
              *(uint *)(param_1[0x10] + sVar41 * 4) = uVar28;
              uVar28 = uVar28 + 1;
            }
            lVar39 = DAT_05ae7600;
            sVar41 = sVar41 + 1;
          } while (sVar41 != sVar29);
          if (0 < (int)uVar28) {
            sVar29 = (ulong)uVar28 * 0x58 + 8;
            if (DAT_05ae7600 == 0) {
              puVar23 = malloc(sVar29);
joined_r0x03f19310:
              if (puVar23 != (ulong *)0x0) {
                uVar20 = (ulong)uVar28;
                uVar26 = uVar20 * 0x58 - 0x58;
                puVar31 = puVar23 + 1;
                *puVar23 = uVar20;
                auVar7._8_8_ = 0;
                auVar7._0_8_ = uVar26;
                puVar36 = puVar31;
                if ((SUB164(auVar7 * ZEXT816(0x2e8ba2e8ba2e8ba3),8) >> 4 & 1) == 0) {
                  *(undefined1 *)((long)puVar23 + 0x1c) = 0;
                  puVar23[2] = (ulong)((long)puVar23 + 0x1c);
                  *(undefined4 *)(puVar23 + 3) = 0x40;
                  *(undefined1 *)((long)puVar23 + 0x5b) = 0;
                  puVar23[1] = (ulong)(PTR_DAT_04bb2bc0 + 0x10);
                  puVar36 = puVar23 + 0xc;
                }
                if (0x57 < uVar26) {
                  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
                  do {
                    *(undefined4 *)(puVar36 + 2) = 0x40;
                    *(undefined1 *)((long)puVar36 + 0x53) = 0;
                    *(undefined1 *)((long)puVar36 + 0x14) = 0;
                    *(undefined4 *)(puVar36 + 0xd) = 0x40;
                    *(undefined1 *)((long)puVar36 + 0xab) = 0;
                    *puVar36 = (ulong)puVar2;
                    puVar36[1] = (ulong)((long)puVar36 + 0x14);
                    *(undefined1 *)((long)puVar36 + 0x6c) = 0;
                    puVar36[0xb] = (ulong)puVar2;
                    puVar36[0xc] = (ulong)((long)puVar36 + 0x6c);
                    puVar36 = puVar36 + 0x16;
                  } while (puVar36 != puVar31 + uVar20 * 0xb);
                }
                *(uint *)(param_1 + 0x11) = uVar28;
                param_1[0x12] = (long)puVar31;
              }
            }
            else {
              plVar22 = param_2;
              if (param_2 != (long *)0x0) {
LAB_03f192ec:
                puVar23 = (ulong *)(**(code **)(*plVar22 + 0x30))(plVar22,sVar29,8);
                goto joined_r0x03f19310;
              }
              lVar21 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
              plVar22 = (long *)(lVar39 + 8);
              if (lVar21 != 0) {
                plVar22 = (long *)(lVar21 + 0xa8);
              }
              plVar22 = (long *)*plVar22;
              if (plVar22 != (long *)0x0) goto LAB_03f192ec;
            }
            uVar35 = 0;
            do {
              uVar4 = uVar35;
              if (*(uint *)(param_1 + 0x11) <= uVar35) {
                uVar4 = 0;
              }
              uVar35 = uVar35 + 1;
              **(undefined1 **)(param_1[0x12] + (ulong)uVar4 * 0x58 + 8) = 0;
            } while (uVar28 != uVar35);
          }
        }
      }
    }
    else {
      _local_90 = auVar8;
      if (uVar28 == 0xff) {
        local_80 = (undefined **)*param_3;
        local_78 = (uint *)0x0;
        _local_90 = auVar9;
        if (local_80 != (undefined **)0x0) {
LAB_03f18e0c:
          sVar29 = 0;
          goto LAB_03f18e10;
        }
      }
    }
  }
  local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
  uVar20 = FUN_03b36b40(param_3,&local_80,&DAT_040c4c2c);
  puVar2 = PTR_DAT_04bb2698;
  auVar14._8_8_ = local_a0._8_8_;
  auVar14._0_8_ = local_a0._0_8_;
  auVar13._8_8_ = local_a0._8_8_;
  auVar13._0_8_ = local_a0._0_8_;
  auVar12._8_8_ = local_a0._8_8_;
  auVar12._0_8_ = local_a0._0_8_;
  auVar11._8_8_ = local_a0._8_8_;
  auVar11._0_8_ = local_a0._0_8_;
  auVar10._8_8_ = local_a0._8_8_;
  auVar10._0_8_ = local_a0._0_8_;
  if ((uVar20 & 1) != 0) {
    if (local_80._4_1_ - 0xc0 < 2) {
      psVar32 = (short *)*param_3;
      local_78 = (uint *)((long)psVar32 + ((ulong)local_80 & 0xffffffff));
      local_80 = (undefined **)psVar32;
      local_a0 = auVar10;
      if ((psVar32 != (short *)0x0) && (local_a0 = auVar11, (*local_78 & 0xfe) == 0xc0)) {
        uVar28 = *local_78 >> 8;
        if (*psVar32 == 0x5942) {
          uVar28 = uVar28 & 0xff00 | *local_78 >> 0x18 | (uVar28 & 0xff) << 0x10;
        }
        local_a0 = auVar12;
        if (uVar28 != 0) {
          lVar39 = *(long *)PTR_DAT_04bb2698;
          if (lVar39 == 0) {
            pvVar24 = malloc((ulong)uVar28 << 3);
LAB_03f19634:
            if (pvVar24 != (void *)0x0) {
              *(uint *)(param_1 + 10) = uVar28;
              param_1[0xb] = (long)pvVar24;
            }
          }
          else {
            plVar22 = param_2;
            if (param_2 != (long *)0x0) {
LAB_03f19600:
              pvVar24 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,(ulong)uVar28 << 3,8);
              goto LAB_03f19634;
            }
            lVar21 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar22 = (long *)(lVar39 + 8);
            if (lVar21 != 0) {
              plVar22 = (long *)(lVar21 + 0xa8);
            }
            plVar22 = (long *)*plVar22;
            if (plVar22 != (long *)0x0) goto LAB_03f19600;
          }
          uVar35 = 0;
          puVar1 = PTR_DAT_04bb2020 + 0x10;
          do {
            local_90 = (undefined1  [8])0x0;
            puStack_88 = (uint *)0x0;
            _local_90 = FUN_03b36a34(&local_80,uVar35);
            lVar39 = *(long *)puVar2;
            if (lVar39 == 0) {
              plVar22 = malloc(0xb0);
            }
            else {
              plVar22 = param_2;
              if (param_2 == (long *)0x0) {
                lVar21 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                plVar22 = (long *)(lVar39 + 8);
                if (lVar21 != 0) {
                  plVar22 = (long *)(lVar21 + 0xa8);
                }
                plVar22 = (long *)*plVar22;
                if (plVar22 == (long *)0x0) {
                  plVar22 = (long *)0x0;
                  goto LAB_03f196ec;
                }
              }
              plVar22 = (long *)(**(code **)(*plVar22 + 0x30))(plVar22,0xb0,8);
            }
LAB_03f196ec:
            plVar22[10] = 0;
            *plVar22 = (long)puVar1;
            plVar22[1] = (long)&DAT_0419b684;
            *(undefined4 *)(plVar22 + 0xb) = 0;
            *(undefined4 *)(plVar22 + 0xe) = 0;
            *(undefined4 *)(plVar22 + 0x13) = 0;
            *(undefined4 *)((long)plVar22 + 0x9c) = 0xffffffff;
            plVar22[4] = (long)puVar1;
            plVar22[5] = (long)&DAT_0419b684;
            plVar22[6] = 0;
            plVar22[7] = 0;
            plVar22[8] = 0;
            plVar22[9] = 0;
            plVar22[0xc] = 0;
            plVar22[0xd] = 0;
            plVar22[0xf] = 0;
            plVar22[0x10] = 0;
            plVar22[0x11] = 0;
            plVar22[0x12] = 0;
            plVar22[0x14] = 0;
            plVar22[0x15] = 0;
            FUN_03f1f4c0(plVar22,param_2,local_90,param_1,param_4);
            uVar4 = uVar35;
            if (*(uint *)(param_1 + 10) <= uVar35) {
              uVar4 = 0;
            }
            uVar35 = uVar35 + 1;
            *(long **)(param_1[0xb] + (ulong)uVar4 * 8) = plVar22;
            puVar43 = PTR_DAT_04bb2020;
          } while (uVar28 != uVar35);
          uVar35 = 0;
          do {
            auVar46 = FUN_03b36a34(&local_80,uVar35);
            local_a0._0_8_ = 0;
            local_a0._8_8_ = 0;
            local_b0 = (short *)((ulong)local_b0 & 0xffffff0000000000);
            _local_90 = auVar46;
            uVar20 = FUN_03b36b40(local_90,&local_b0,"Transition");
            local_a0._8_8_ = 0;
            local_a0._0_8_ = 0;
            if ((uVar20 & 1) != 0) {
              if (local_b0._4_1_ - 0xc0 < 2) {
                local_a0._8_8_ = auVar46._0_8_ + ((ulong)local_b0 & 0xffffffff);
              }
              else {
                if (local_b0._4_1_ != 0xff) {
                  local_a0._0_8_ = 0;
                  local_a0._8_8_ = 0;
                  goto LAB_03f1978c;
                }
                local_a0._8_8_ = 0;
              }
              local_a0._0_8_ = auVar46._0_8_;
            }
LAB_03f1978c:
            uVar4 = uVar35;
            if (*(uint *)(param_1 + 10) <= uVar35) {
              uVar4 = 0;
            }
            FUN_03f206e0(*(undefined8 *)(param_1[0xb] + (ulong)uVar4 * 8),param_2,local_a0,param_1);
            uVar35 = uVar35 + 1;
          } while (uVar28 != uVar35);
          local_90 = (undefined1  [8])((ulong)local_90 & 0xffffff0000000000);
          uVar20 = FUN_03b36b40(param_3,local_90,"TransitionParam");
          if ((uVar20 & 1) == 0) {
LAB_03f19930:
            local_90 = (undefined1  [8])0x0;
            puStack_88 = (uint *)0x0;
LAB_03f19934:
            lVar39 = *(long *)puVar2;
            if (lVar39 == 0) {
              puVar25 = malloc(0x48);
            }
            else {
              plVar22 = param_2;
              if (param_2 == (long *)0x0) {
                lVar21 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                plVar22 = (long *)(lVar39 + 8);
                if (lVar21 != 0) {
                  plVar22 = (long *)(lVar21 + 0xa8);
                }
                plVar22 = (long *)*plVar22;
              }
              puVar25 = (undefined8 *)(**(code **)(*plVar22 + 0x30))(plVar22,0x48,8);
            }
            puVar25[7] = 0;
            puVar25[8] = 0;
            puVar25[2] = 0;
            puVar25[5] = 0;
            puVar25[6] = 0;
            puVar25[3] = 0;
            puVar25[4] = 0;
            puVar2 = PTR_DAT_04bdf018;
            *puVar25 = 0;
            puVar25[1] = 0;
            uVar3 = *(undefined8 *)(puVar2 + 8);
            *puVar25 = *(undefined8 *)puVar2;
            puVar25[1] = uVar3;
            *(undefined4 *)(puVar25 + 2) = *(undefined4 *)(puVar2 + 0x10);
            puVar25[3] = *(undefined8 *)(puVar2 + 0x18);
            puVar25[4] = *(undefined8 *)(puVar2 + 0x20);
            *(undefined4 *)(puVar25 + 5) = *(undefined4 *)(puVar2 + 0x28);
            *(undefined4 *)(puVar25 + 6) = *(undefined4 *)(puVar2 + 0x30);
            *(undefined4 *)((long)puVar25 + 0x34) = *(undefined4 *)(puVar2 + 0x34);
            *(undefined4 *)(puVar25 + 7) = *(undefined4 *)(puVar2 + 0x38);
            *(undefined8 *)((long)puVar25 + 0x3c) = *(undefined8 *)(puVar2 + 0x3c);
            *(undefined4 *)((long)puVar25 + 0x44) = *(undefined4 *)(puVar2 + 0x44);
            uVar28 = 1;
          }
          else {
            if (1 < local_90[4] - 0xc0) {
              if (local_90[4] != 0xff) goto LAB_03f19930;
              local_90 = (undefined1  [8])*param_3;
              puStack_88 = (uint *)0x0;
              goto LAB_03f19934;
            }
            psVar32 = (short *)*param_3;
            puStack_88 = (uint *)((long)psVar32 + ((ulong)local_90 & 0xffffffff));
            local_90 = (undefined1  [8])psVar32;
            if ((psVar32 == (short *)0x0) || ((*puStack_88 & 0xfe) != 0xc0)) goto LAB_03f19934;
            uVar28 = *puStack_88 >> 8;
            if (*psVar32 == 0x5942) {
              uVar28 = uVar28 & 0xff00 | *puStack_88 >> 0x18 | (uVar28 & 0xff) << 0x10;
            }
            if (uVar28 == 0) goto LAB_03f19934;
            lVar39 = *(long *)puVar2;
            sVar29 = ((ulong)uVar28 + (ulong)uVar28 * 8) * 8;
            if (lVar39 == 0) {
              puVar25 = malloc(sVar29);
            }
            else {
              plVar22 = param_2;
              if (param_2 == (long *)0x0) {
                lVar21 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                plVar22 = (long *)(lVar39 + 8);
                if (lVar21 != 0) {
                  plVar22 = (long *)(lVar21 + 0xa8);
                }
                plVar22 = (long *)*plVar22;
                if (plVar22 == (long *)0x0) {
                  puVar25 = (undefined8 *)0x0;
                  goto LAB_03f1a310;
                }
              }
              puVar25 = (undefined8 *)(**(code **)(*plVar22 + 0x30))(plVar22,sVar29,8);
            }
LAB_03f1a310:
            memset(puVar25,0,((sVar29 - 0x48) / 0x48) * 0x48 + 0x48);
            uVar20 = 0;
            puVar2 = puVar43 + 0x10;
            do {
              auVar46 = FUN_03b36a34(local_90,uVar20 & 0xffffffff);
              psVar32 = auVar46._0_8_;
              puVar25[uVar20 * 9] = 0;
              local_b0 = (short *)((ulong)local_b0 & 0xffffff0000000000);
              local_a0 = auVar46;
              uVar26 = FUN_03b36b40(local_a0,&local_b0,&DAT_040b3366);
              if (((uVar26 & 1) != 0) && (local_b0._4_1_ == -0x60)) {
                uVar4 = *(uint *)(psVar32 + 4);
                uVar35 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
                uVar35 = uVar35 >> 0x10 | uVar35 << 0x10;
                if (*psVar32 != 0x5942) {
                  uVar35 = uVar4;
                }
                if (uVar35 != 0) {
                  uVar5 = *(uint *)((long)psVar32 + (long)(int)local_b0 * 4 + (long)(int)uVar35 + 4)
                  ;
                  uVar4 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
                  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
                  if (*psVar32 != 0x5942) {
                    uVar4 = uVar5;
                  }
                  pcVar30 = (char *)((long)psVar32 + (ulong)uVar4 + (long)(int)uVar35);
                  if (*pcVar30 == '\0') {
                    plVar22 = (long *)0x0;
                  }
                  else {
                    lVar39 = param_1[10];
                    local_b0 = (short *)puVar2;
                    local_a8 = pcVar30;
                    if ((int)lVar39 != 0) {
                      lVar21 = param_1[0xb];
                      uVar26 = 0;
                      do {
                        plVar42 = *(long **)(lVar21 + (-(uVar26 >> 0x1f) & 0xfffffff800000000 |
                                                      uVar26 << 3));
                        (**(code **)((long)local_b0 + 0x18))(&local_b0);
                        (**(code **)((long)local_b0 + 0x18))(&local_b0);
                        pcVar30 = local_a8;
                        (**(code **)(*plVar42 + 0x18))(plVar42);
                        pcVar34 = (char *)plVar42[1];
                        if (pcVar30 == pcVar34) goto LAB_03f1a4fc;
                        uVar38 = 0;
                        bVar17 = true;
                        do {
                          if (local_a8[uVar38] != pcVar34[uVar38]) break;
                          if (local_a8[uVar38] == '\0') {
                            if (bVar17) goto LAB_03f1a4fc;
                            break;
                          }
                          if (local_a8[uVar38 + 1] != pcVar34[uVar38 + 1]) break;
                          if (local_a8[uVar38 + 1] == '\0') goto LAB_03f1a4fc;
                          if (local_a8[uVar38 + 2] != pcVar34[uVar38 + 2]) break;
                          if (local_a8[uVar38 + 2] == '\0') goto LAB_03f1a4fc;
                          bVar17 = uVar38 < 0x7fffe;
                          uVar38 = uVar38 + 3;
                        } while (uVar38 != 0x80001);
                        uVar38 = uVar26 + 1;
                        uVar26 = uVar38 & 0xffffffff;
                      } while ((int)lVar39 != (int)uVar38);
                    }
                    plVar42 = (long *)0x0;
LAB_03f1a4fc:
                    plVar22 = param_1;
                    if (plVar42 != (long *)0x0) {
                      plVar22 = plVar42;
                    }
                    puVar43 = PTR_DAT_04bb2020;
                  }
                  puVar25[uVar20 * 9] = plVar22;
                }
              }
              puVar25[uVar20 * 9 + 1] = 0;
              local_b0 = (short *)((ulong)local_b0 & 0xffffff0000000000);
              uVar26 = FUN_03b36b40(local_a0,&local_b0,&DAT_04079e31);
              if (((uVar26 & 1) != 0) && (local_b0._4_1_ == -0x60)) {
                uVar4 = *(uint *)(psVar32 + 4);
                uVar35 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
                uVar35 = uVar35 >> 0x10 | uVar35 << 0x10;
                if (*psVar32 != 0x5942) {
                  uVar35 = uVar4;
                }
                if (uVar35 != 0) {
                  uVar5 = *(uint *)((long)psVar32 + (long)(int)local_b0 * 4 + (long)(int)uVar35 + 4)
                  ;
                  uVar4 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
                  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
                  if (*psVar32 != 0x5942) {
                    uVar4 = uVar5;
                  }
                  pcVar30 = (char *)((long)psVar32 + (ulong)uVar4 + (long)(int)uVar35);
                  if (*pcVar30 == '\0') {
                    plVar22 = (long *)0x0;
                  }
                  else {
                    lVar39 = param_1[10];
                    local_b0 = (short *)(puVar43 + 0x10);
                    local_a8 = pcVar30;
                    if ((int)lVar39 != 0) {
                      lVar21 = param_1[0xb];
                      uVar26 = 0;
                      do {
                        plVar42 = *(long **)(lVar21 + (-(uVar26 >> 0x1f) & 0xfffffff800000000 |
                                                      uVar26 << 3));
                        (**(code **)((long)local_b0 + 0x18))(&local_b0);
                        (**(code **)((long)local_b0 + 0x18))(&local_b0);
                        pcVar30 = local_a8;
                        (**(code **)(*plVar42 + 0x18))(plVar42);
                        pcVar34 = (char *)plVar42[1];
                        if (pcVar30 == pcVar34) goto LAB_03f1a698;
                        uVar38 = 0;
                        bVar17 = true;
                        do {
                          if (local_a8[uVar38] != pcVar34[uVar38]) break;
                          if (local_a8[uVar38] == '\0') {
                            if (bVar17) goto LAB_03f1a698;
                            break;
                          }
                          if (local_a8[uVar38 + 1] != pcVar34[uVar38 + 1]) break;
                          if (local_a8[uVar38 + 1] == '\0') goto LAB_03f1a698;
                          if (local_a8[uVar38 + 2] != pcVar34[uVar38 + 2]) break;
                          if (local_a8[uVar38 + 2] == '\0') goto LAB_03f1a698;
                          bVar17 = uVar38 < 0x7fffe;
                          uVar38 = uVar38 + 3;
                        } while (uVar38 != 0x80001);
                        uVar38 = uVar26 + 1;
                        uVar26 = uVar38 & 0xffffffff;
                      } while ((int)lVar39 != (int)uVar38);
                    }
                    plVar42 = (long *)0x0;
LAB_03f1a698:
                    plVar22 = param_1;
                    if (plVar42 != (long *)0x0) {
                      plVar22 = plVar42;
                    }
                    puVar43 = PTR_DAT_04bb2020;
                  }
                  puVar25[uVar20 * 9 + 1] = plVar22;
                }
              }
              local_b0 = (short *)((ulong)local_b0 & 0xffffff0000000000);
              uVar26 = FUN_03b36b40(local_a0,&local_b0,"SourceEndType");
              local_a8 = (char *)0x0;
              if (((uVar26 & 1) != 0) && (local_b0._4_1_ == -0x60)) {
                uVar4 = *(uint *)(psVar32 + 4);
                uVar35 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
                uVar35 = uVar35 >> 0x10 | uVar35 << 0x10;
                if (*psVar32 != 0x5942) {
                  uVar35 = uVar4;
                }
                if (uVar35 == 0) {
                  local_a8 = (char *)0x0;
                }
                else {
                  uVar5 = *(uint *)((long)psVar32 + (long)(int)local_b0 * 4 + (long)(int)uVar35 + 4)
                  ;
                  uVar4 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
                  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
                  if (*psVar32 != 0x5942) {
                    uVar4 = uVar5;
                  }
                  local_a8 = (char *)((long)psVar32 + (ulong)uVar4 + (long)(int)uVar35);
                }
              }
              local_b0 = (short *)(puVar43 + 0x10);
              local_64 = 0;
              FUN_03f158dc(&local_64,&local_b0);
              *(undefined4 *)(puVar25 + uVar20 * 9 + 2) = local_64;
              local_b0 = (short *)((ulong)local_b0 & 0xffffff0000000000);
              uVar26 = FUN_03b36b40(local_a0,&local_b0,"SourceEndMarker");
              lVar39 = 0;
              if (((uVar26 & 1) != 0) && (local_b0._4_1_ == -0x60)) {
                uVar4 = *(uint *)(psVar32 + 4);
                uVar35 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
                uVar35 = uVar35 >> 0x10 | uVar35 << 0x10;
                if (*psVar32 != 0x5942) {
                  uVar35 = uVar4;
                }
                if (uVar35 == 0) {
                  lVar39 = 0;
                }
                else {
                  uVar5 = *(uint *)((long)psVar32 + (long)(int)local_b0 * 4 + (long)(int)uVar35 + 4)
                  ;
                  uVar4 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
                  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
                  if (*psVar32 != 0x5942) {
                    uVar4 = uVar5;
                  }
                  lVar39 = (long)psVar32 + (ulong)uVar4 + (long)(int)uVar35;
                }
              }
              puVar25[uVar20 * 9 + 3] = lVar39;
              local_b0 = (short *)((ulong)local_b0 & 0xffffff0000000000);
              bVar19 = FUN_03b36b40(local_a0,&local_b0,"SourceEndOffset");
              uVar44 = (int)local_b0;
              if ((bVar19 & local_b0._4_1_ == -0x2e) == 0) {
                uVar44 = 0;
              }
              *(undefined4 *)(puVar25 + uVar20 * 9 + 4) = uVar44;
              local_b0 = (short *)((ulong)local_b0 & 0xffffff0000000000);
              uVar26 = FUN_03b36b40(local_a0,&local_b0,"SourceFadeOut");
              if ((uVar26 & 1) == 0) {
LAB_03f1a850:
                psVar40 = (short *)0x0;
                local_a8 = (char *)0x0;
              }
              else {
                if (local_b0._4_1_ - 0xc0 < 2) {
                  local_a8 = (char *)((long)psVar32 + ((ulong)local_b0 & 0xffffffff));
                }
                else {
                  if (local_b0._4_1_ != 0xff) goto LAB_03f1a850;
                  local_a8 = (char *)0x0;
                }
                psVar40 = psVar32;
              }
              local_c0 = (undefined *)((ulong)local_c0 & 0xffffff0000000000);
              local_b0 = psVar40;
              bVar19 = FUN_03b36b40(&local_b0,&local_c0,"FadeTime");
              uVar44 = (int)local_c0;
              if ((bVar19 & local_c0._4_1_ == -0x2e) == 0) {
                uVar44 = 0;
              }
              *(undefined4 *)((long)puVar25 + uVar20 * 0x48 + 0x24) = uVar44;
              local_c0 = (undefined *)((ulong)local_c0 & 0xffffff0000000000);
              uVar26 = FUN_03b36b40(&local_b0,&local_c0,"FadeCurveType");
              if (((uVar26 & 1) != 0) && (local_c0._4_1_ == -0x60)) {
                uVar4 = *(uint *)(psVar40 + 4);
                uVar35 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
                uVar35 = uVar35 >> 0x10 | uVar35 << 0x10;
                if (*psVar40 != 0x5942) {
                  uVar35 = uVar4;
                }
                if (uVar35 != 0) {
                  uVar5 = *(uint *)((long)psVar40 + (long)(int)local_c0 * 4 + (long)(int)uVar35 + 4)
                  ;
                  uVar4 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
                  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
                  if (*psVar40 != 0x5942) {
                    uVar4 = uVar5;
                  }
                  lStack_b8 = (long)psVar40 + (ulong)uVar4 + (long)(int)uVar35;
                  local_c0 = puVar43 + 0x10;
                  FUN_03f15c38(puVar25 + uVar20 * 9 + 5,&local_c0);
                }
              }
              local_b0 = (short *)((ulong)local_b0 & 0xffffff0000000000);
              uVar26 = FUN_03b36b40(local_a0,&local_b0,"DestinationStart");
              if (((uVar26 & 1) != 0) && (local_b0._4_1_ == -0x60)) {
                uVar4 = *(uint *)(psVar32 + 4);
                uVar35 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
                uVar35 = uVar35 >> 0x10 | uVar35 << 0x10;
                if (*psVar32 != 0x5942) {
                  uVar35 = uVar4;
                }
                if (uVar35 != 0) {
                  uVar5 = *(uint *)((long)psVar32 + (long)(int)local_b0 * 4 + (long)(int)uVar35 + 4)
                  ;
                  uVar4 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
                  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
                  if (*psVar32 != 0x5942) {
                    uVar4 = uVar5;
                  }
                  pcVar30 = (char *)((long)psVar32 + (ulong)uVar4 + (long)(int)uVar35);
                  if (pcVar30 == s_SourceEnd_04ba7fc0) {
LAB_03f1aadc:
                    uVar35 = 0;
                  }
                  else if ((*pcVar30 == 'S') && (pcVar30[1] == 'o')) {
                    if (((pcVar30[2] == 'u') &&
                        ((((pcVar30[3] == 'r' && (pcVar30[4] == 'c')) && (pcVar30[5] == 'e')) &&
                         ((pcVar30[6] == 'E' && (pcVar30[7] == 'n')))))) && (pcVar30[8] == 'd')) {
                      uVar35 = (uint)(byte)pcVar30[9];
                      if (pcVar30[9] == 0) goto LAB_03f1aae0;
                    }
                    uVar35 = (uint)(pcVar30 == s_SourceFinished_04ba7fcb);
                    if (pcVar30 != s_SourceFinished_04ba7fcb) {
                      if (((pcVar30[2] != 'u') || (pcVar30[3] != 'r')) ||
                         ((pcVar30[4] != 'c' || ((pcVar30[5] != 'e' || (pcVar30[6] != 'F'))))))
                      goto LAB_03f1aadc;
                      if (((((pcVar30[7] == 'i') && (pcVar30[8] == 'n')) && (pcVar30[9] == 'i')) &&
                          ((pcVar30[10] == 's' && (pcVar30[0xb] == 'h')))) &&
                         ((pcVar30[0xc] == 'e' && (pcVar30[0xd] == 'd')))) {
                        uVar35 = (uint)(pcVar30[0xe] == '\0');
                      }
                      else {
                        uVar35 = 0;
                      }
                      puVar43 = PTR_DAT_04bb2020;
                    }
                  }
                  else {
                    uVar35 = (uint)(pcVar30 == s_SourceFinished_04ba7fcb);
                  }
LAB_03f1aae0:
                  *(uint *)(puVar25 + uVar20 * 9 + 6) = uVar35;
                }
              }
              local_b0 = (short *)((ulong)local_b0 & 0xffffff0000000000);
              bVar19 = FUN_03b36b40(local_a0,&local_b0,"DestinationStartOffset");
              uVar44 = (int)local_b0;
              if ((bVar19 & local_b0._4_1_ == -0x2e) == 0) {
                uVar44 = 0;
              }
              *(undefined4 *)((long)puVar25 + uVar20 * 0x48 + 0x3c) = uVar44;
              local_b0 = (short *)((ulong)local_b0 & 0xffffff0000000000);
              uVar26 = FUN_03b36b40(local_a0,&local_b0,"DestinationStartPositionType");
              local_a8 = (char *)0x0;
              if (((uVar26 & 1) != 0) && (local_b0._4_1_ == -0x60)) {
                uVar4 = *(uint *)(psVar32 + 4);
                uVar35 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
                uVar35 = uVar35 >> 0x10 | uVar35 << 0x10;
                if (*psVar32 != 0x5942) {
                  uVar35 = uVar4;
                }
                if (uVar35 == 0) {
                  local_a8 = (char *)0x0;
                }
                else {
                  uVar5 = *(uint *)((long)psVar32 + (long)(int)local_b0 * 4 + (long)(int)uVar35 + 4)
                  ;
                  uVar4 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
                  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
                  if (*psVar32 != 0x5942) {
                    uVar4 = uVar5;
                  }
                  local_a8 = (char *)((long)psVar32 + (ulong)uVar4 + (long)(int)uVar35);
                }
              }
              local_b0 = (short *)(puVar43 + 0x10);
              local_64 = 0;
              FUN_03f15e74(&local_64,&local_b0);
              *(undefined4 *)((long)puVar25 + uVar20 * 0x48 + 0x34) = local_64;
              local_b0 = (short *)((ulong)local_b0 & 0xffffff0000000000);
              bVar19 = FUN_03b36b40(local_a0,&local_b0,"DestinationStartPosition");
              uVar44 = (int)local_b0;
              if ((bVar19 & local_b0._4_1_ == -0x2e) == 0) {
                uVar44 = 0;
              }
              *(undefined4 *)(puVar25 + uVar20 * 9 + 7) = uVar44;
              local_b0 = (short *)((ulong)local_b0 & 0xffffff0000000000);
              uVar26 = FUN_03b36b40(local_a0,&local_b0,"DestinationFadeIn");
              if ((uVar26 & 1) == 0) {
LAB_03f1ac40:
                psVar32 = (short *)0x0;
LAB_03f1ac44:
                local_a8 = (char *)0x0;
              }
              else {
                if (1 < local_b0._4_1_ - 0xc0) {
                  if (local_b0._4_1_ != 0xff) goto LAB_03f1ac40;
                  goto LAB_03f1ac44;
                }
                local_a8 = (char *)((long)psVar32 + ((ulong)local_b0 & 0xffffffff));
              }
              local_c0 = (undefined *)((ulong)local_c0 & 0xffffff0000000000);
              local_b0 = psVar32;
              bVar19 = FUN_03b36b40(&local_b0,&local_c0,"FadeTime");
              uVar44 = (int)local_c0;
              if ((bVar19 & local_c0._4_1_ == -0x2e) == 0) {
                uVar44 = 0;
              }
              *(undefined4 *)(puVar25 + uVar20 * 9 + 8) = uVar44;
              local_c0 = (undefined *)((ulong)local_c0 & 0xffffff0000000000);
              uVar26 = FUN_03b36b40(&local_b0,&local_c0,"FadeCurveType");
              if (((uVar26 & 1) != 0) && (local_c0._4_1_ == -0x60)) {
                uVar4 = *(uint *)(psVar32 + 4);
                uVar35 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
                uVar35 = uVar35 >> 0x10 | uVar35 << 0x10;
                if (*psVar32 != 0x5942) {
                  uVar35 = uVar4;
                }
                if (uVar35 != 0) {
                  uVar5 = *(uint *)((long)psVar32 + (long)(int)local_c0 * 4 + (long)(int)uVar35 + 4)
                  ;
                  uVar4 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
                  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
                  if (*psVar32 != 0x5942) {
                    uVar4 = uVar5;
                  }
                  lStack_b8 = (long)psVar32 + (ulong)uVar4 + (long)(int)uVar35;
                  local_c0 = puVar43 + 0x10;
                  FUN_03f15c38((long)puVar25 + uVar20 * 0x48 + 0x44,&local_c0);
                }
              }
              uVar20 = uVar20 + 1;
            } while (uVar20 != uVar28);
          }
          *(uint *)(param_1 + 0x13) = uVar28;
          param_1[0x14] = (long)puVar25;
        }
      }
    }
    else {
      local_a0 = auVar13;
      if (local_80._4_1_ == 0xff) {
        local_80 = (undefined **)*param_3;
        local_a0 = auVar14;
      }
    }
  }
  local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
  uVar20 = FUN_03b36b40(param_3,&local_80,"StartConditionBin");
  if ((uVar20 & 1) != 0) {
    if (local_80._4_1_ == -0x5e) {
      psVar32 = (short *)*param_3;
      uVar35 = *(uint *)((long)psVar32 + ((ulong)local_80 & 0xffffffff));
      sVar6 = *psVar32;
      uVar28 = (int)(float)local_80 + 8;
    }
    else {
      if (local_80._4_1_ != -0x5f) goto LAB_03f19c64;
      psVar32 = (short *)*param_3;
      uVar35 = *(uint *)((long)psVar32 + ((ulong)local_80 & 0xffffffff));
      sVar6 = *psVar32;
      uVar28 = (int)(float)local_80 + 4;
    }
    uVar4 = (uVar35 & 0xff00ff00) >> 8 | (uVar35 & 0xff00ff) << 8;
    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
    if (sVar6 != 0x5942) {
      uVar4 = uVar35;
    }
    if (*(short *)((long)psVar32 + (ulong)uVar28) == 0x3143) {
      uVar20 = (ulong)uVar4;
      lVar39 = *(long *)PTR_DAT_04bb2698;
      if (lVar39 == 0) {
        pvVar24 = malloc(uVar20);
      }
      else {
        plVar22 = param_2;
        if (param_2 == (long *)0x0) {
          lVar21 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar22 = (long *)(lVar39 + 8);
          if (lVar21 != 0) {
            plVar22 = (long *)(lVar21 + 0xa8);
          }
          plVar22 = (long *)*plVar22;
          if (plVar22 == (long *)0x0) {
            pvVar24 = (void *)0x0;
            goto LAB_03f19b08;
          }
        }
        pvVar24 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,uVar20,8);
      }
LAB_03f19b08:
      memcpy(pvVar24,(short *)((long)psVar32 + (ulong)uVar28),uVar20);
    }
    else {
      pvVar24 = (void *)0x0;
    }
    local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
    bVar19 = FUN_03b36b40(param_3,&local_80,"StartTimeFulfillCondition");
    lVar39 = DAT_05ae7600;
    bVar17 = local_80._4_1_ == -0x2e;
    fVar45 = (float)local_80 * 1000.0;
    if (DAT_05ae7600 == 0) {
      puVar25 = malloc(0x28);
    }
    else {
      plVar22 = param_2;
      if (param_2 == (long *)0x0) {
        lVar21 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar22 = (long *)(lVar39 + 8);
        if (lVar21 != 0) {
          plVar22 = (long *)(lVar21 + 0xa8);
        }
        plVar22 = (long *)*plVar22;
        puVar25 = (undefined8 *)0x0;
        if (plVar22 == (long *)0x0) goto LAB_03f19bbc;
      }
      puVar25 = (undefined8 *)(**(code **)(*plVar22 + 0x30))(plVar22,0x28,8);
    }
LAB_03f19bbc:
    lVar39 = (long)fVar45;
    *puVar25 = pvVar24;
    *(undefined1 *)(puVar25 + 2) = 0;
    if ((bVar19 & bVar17) == 0) {
      lVar39 = 0;
    }
    puVar25[1] = (DAT_05ae7888 * lVar39) / 1000;
    if (param_4 == 0) {
      lVar39 = 0;
    }
    else if (*(char *)(param_4 + 0x15) == '\0') {
      lVar39 = *(long *)(param_4 + 0x18);
    }
    else {
      lVar39 = (long)(DAT_05ae7888 *
                      (*(long *)(DAT_05aebb88 + 8) + (ulong)*(uint *)(DAT_05aebb88 + 4)) * 5) / 1000
               + *(long *)(param_4 + 0x18);
    }
    puVar25[3] = lVar39;
    puVar25[4] = param_4;
    param_1[5] = (long)puVar25;
  }
LAB_03f19c64:
  local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
  uVar20 = FUN_03b36b40(param_3,&local_80,"StopConditionBin");
  if ((uVar20 & 1) != 0) {
    if (local_80._4_1_ == -0x5e) {
      psVar32 = (short *)*param_3;
      uVar35 = *(uint *)((long)psVar32 + ((ulong)local_80 & 0xffffffff));
      sVar6 = *psVar32;
      uVar28 = (int)(float)local_80 + 8;
    }
    else {
      if (local_80._4_1_ != -0x5f) goto LAB_03f19ec0;
      psVar32 = (short *)*param_3;
      uVar35 = *(uint *)((long)psVar32 + ((ulong)local_80 & 0xffffffff));
      sVar6 = *psVar32;
      uVar28 = (int)(float)local_80 + 4;
    }
    uVar4 = (uVar35 & 0xff00ff00) >> 8 | (uVar35 & 0xff00ff) << 8;
    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
    if (sVar6 != 0x5942) {
      uVar4 = uVar35;
    }
    if (*(short *)((long)psVar32 + (ulong)uVar28) == 0x3143) {
      uVar20 = (ulong)uVar4;
      lVar39 = *(long *)PTR_DAT_04bb2698;
      if (lVar39 == 0) {
        pvVar24 = malloc(uVar20);
      }
      else {
        plVar22 = param_2;
        if (param_2 == (long *)0x0) {
          lVar21 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar22 = (long *)(lVar39 + 8);
          if (lVar21 != 0) {
            plVar22 = (long *)(lVar21 + 0xa8);
          }
          plVar22 = (long *)*plVar22;
          if (plVar22 == (long *)0x0) {
            pvVar24 = (void *)0x0;
            goto LAB_03f19d64;
          }
        }
        pvVar24 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,uVar20,8);
      }
LAB_03f19d64:
      memcpy(pvVar24,(short *)((long)psVar32 + (ulong)uVar28),uVar20);
    }
    else {
      pvVar24 = (void *)0x0;
    }
    local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
    bVar19 = FUN_03b36b40(param_3,&local_80,"StopTimeFulfillCondition");
    lVar39 = DAT_05ae7600;
    bVar17 = local_80._4_1_ == -0x2e;
    fVar45 = (float)local_80 * 1000.0;
    if (DAT_05ae7600 == 0) {
      puVar25 = malloc(0x28);
    }
    else {
      plVar22 = param_2;
      if (param_2 == (long *)0x0) {
        lVar21 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar22 = (long *)(lVar39 + 8);
        if (lVar21 != 0) {
          plVar22 = (long *)(lVar21 + 0xa8);
        }
        plVar22 = (long *)*plVar22;
        puVar25 = (undefined8 *)0x0;
        if (plVar22 == (long *)0x0) goto LAB_03f19e18;
      }
      puVar25 = (undefined8 *)(**(code **)(*plVar22 + 0x30))(plVar22,0x28,8);
    }
LAB_03f19e18:
    lVar39 = (long)fVar45;
    *puVar25 = pvVar24;
    *(undefined1 *)(puVar25 + 2) = 0;
    if ((bVar19 & bVar17) == 0) {
      lVar39 = 0;
    }
    puVar25[1] = (DAT_05ae7888 * lVar39) / 1000;
    if (param_4 == 0) {
      lVar39 = 0;
    }
    else if (*(char *)(param_4 + 0x15) == '\0') {
      lVar39 = *(long *)(param_4 + 0x18);
    }
    else {
      lVar39 = (long)(DAT_05ae7888 *
                      (*(long *)(DAT_05aebb88 + 8) + (ulong)*(uint *)(DAT_05aebb88 + 4)) * 5) / 1000
               + *(long *)(param_4 + 0x18);
    }
    puVar25[3] = lVar39;
    puVar25[4] = param_4;
    param_1[6] = (long)puVar25;
  }
LAB_03f19ec0:
  local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
  bVar19 = FUN_03b36b40(param_3,&local_80,"StopFadeTime");
  cVar16 = local_80._4_1_;
  uVar44 = (float)local_80;
  local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
  if ((bVar19 & cVar16 == -0x2e) == 0) {
    uVar44 = 0;
  }
  *(undefined4 *)((long)param_1 + 0x3c) = uVar44;
  bVar18 = FUN_03b36b40(param_3,&local_80,"IsHold");
  cVar16 = local_80._4_1_;
  iVar15 = (int)(float)local_80;
  local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
  bVar19 = 0;
  if (iVar15 != 0) {
    bVar19 = bVar18 & cVar16 == -0x30;
  }
  *(byte *)((long)param_1 + 0x44) = bVar19;
  uVar20 = FUN_03b36b40(param_3,&local_80,"SpatializerHash");
  lVar39 = DAT_05ae7600;
  if (((uVar20 & 1) == 0) || (local_80._4_1_ == -1)) {
LAB_03f19fd8:
    local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
    uVar20 = FUN_03b36b40(param_3,&local_80,"SpeakerBalance");
    if (((uVar20 & 1) != 0) && (local_80._4_1_ == -0x60)) {
      psVar32 = (short *)*param_3;
      sVar6 = *psVar32;
      uVar35 = *(uint *)(psVar32 + 4);
      uVar28 = (uVar35 & 0xff00ff00) >> 8 | (uVar35 & 0xff00ff) << 8;
      uVar28 = uVar28 >> 0x10 | uVar28 << 0x10;
      if (sVar6 != 0x5942) {
        uVar28 = uVar35;
      }
      if (uVar28 != 0) {
        uVar4 = *(uint *)((long)psVar32 + (long)(int)(float)local_80 * 4 + (long)(int)uVar28 + 4);
        *(byte *)((long)param_1 + 0x14c) = *(byte *)((long)param_1 + 0x14c) & 0xef;
        uVar35 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
        uVar35 = uVar35 >> 0x10 | uVar35 << 0x10;
        if (sVar6 != 0x5942) {
          uVar35 = uVar4;
        }
        local_78 = (uint *)((long)psVar32 + (ulong)uVar35 + (long)(int)uVar28);
        lVar39 = *(long *)(param_1[1] + 0x158);
        local_80 = &PTR_LAB_048f9770;
        while( true ) {
          if (lVar39 == 0) {
            param_1[0x16] = 0;
            return;
          }
          (*(code *)local_80[3])(&local_80);
          (*(code *)local_80[3])(&local_80);
          puVar37 = local_78;
          (**(code **)(*(long *)(lVar39 + 0x20) + 0x18))((long *)(lVar39 + 0x20));
          if (puVar37 == (uint *)*(byte **)(lVar39 + 0x28)) break;
          pbVar33 = *(byte **)(lVar39 + 0x28);
          puVar37 = local_78;
          lVar21 = 0x7ffff;
          while( true ) {
            bVar19 = *(byte *)puVar37;
            if (bVar19 != *pbVar33) break;
            if (bVar19 == 0) goto LAB_03f1a144;
            bVar17 = lVar21 == 0;
            pbVar33 = pbVar33 + 1;
            puVar37 = (uint *)((long)puVar37 + 1);
            lVar21 = lVar21 + -1;
            if (bVar17) goto LAB_03f1a144;
          }
          lVar21 = 8;
          if (*pbVar33 <= bVar19) {
            lVar21 = 0x10;
          }
          lVar39 = *(long *)(lVar39 + lVar21);
        }
LAB_03f1a144:
        lVar39 = *(long *)(lVar39 + 0x30);
        goto LAB_03f1a2c8;
      }
    }
    local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
    uVar20 = FUN_03b36b40(param_3,&local_80,"SpeakerBalance");
    if ((uVar20 & 1) != 0) {
      if (local_80._4_1_ - 0xc0 < 2) {
        psVar32 = (short *)*param_3;
        puStack_88 = (uint *)((long)psVar32 + ((ulong)local_80 & 0xffffffff));
      }
      else {
        if (local_80._4_1_ != 0xff) {
          return;
        }
        psVar32 = (short *)*param_3;
        puStack_88 = (uint *)0x0;
      }
      if (psVar32 != (short *)0x0) {
        local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
        local_90 = (undefined1  [8])psVar32;
        uVar20 = FUN_03b36b40(local_90,&local_80,&DAT_040fe5ab);
        if (((uVar20 & 1) != 0) && (local_80._4_1_ == -0x60)) {
          uVar35 = *(uint *)(psVar32 + 4);
          uVar28 = (uVar35 & 0xff00ff00) >> 8 | (uVar35 & 0xff00ff) << 8;
          uVar28 = uVar28 >> 0x10 | uVar28 << 0x10;
          if (*psVar32 != 0x5942) {
            uVar28 = uVar35;
          }
          if (uVar28 != 0) {
            uVar4 = *(uint *)((long)psVar32 + (long)(int)(float)local_80 * 4 + (long)(int)uVar28 + 4
                             );
            uVar35 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
            local_80 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
            uVar35 = uVar35 >> 0x10 | uVar35 << 0x10;
            if (*psVar32 != 0x5942) {
              uVar35 = uVar4;
            }
            local_78 = (uint *)((long)psVar32 + (ulong)uVar35 + (long)(int)uVar28);
            lVar39 = FUN_03f22830(param_2,&local_80,local_90);
            if (lVar39 != 0) {
              param_1[0x16] = lVar39;
              *(byte *)((long)param_1 + 0x14c) = *(byte *)((long)param_1 + 0x14c) | 0x10;
            }
          }
        }
      }
    }
  }
  else {
    iVar15 = (int)(float)local_80;
    if (((local_80._4_1_ != -0x2d) && ((local_80._4_1_ != -0x2f || ((int)(float)local_80 < 0)))) ||
       ((float)local_80 == 0.0)) goto LAB_03f19fd8;
    if (DAT_05ae7600 == 0) {
      puVar25 = malloc(0xf8);
    }
    else {
      plVar22 = param_2;
      if (param_2 == (long *)0x0) {
        lVar21 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar22 = (long *)(lVar39 + 8);
        if (lVar21 != 0) {
          plVar22 = (long *)(lVar21 + 0xa8);
        }
        plVar22 = (long *)*plVar22;
      }
      puVar25 = (undefined8 *)(**(code **)(*plVar22 + 0x30))(plVar22,0xf8,8);
    }
    lVar39 = param_1[1];
    *(undefined1 *)(puVar25 + 1) = 0;
    *(undefined4 *)(puVar25 + 2) = 0;
    puVar25[3] = 0;
    *(undefined4 *)(puVar25 + 4) = 0;
    puVar25[5] = 0;
    puVar25[6] = 0;
    *(undefined4 *)(puVar25 + 7) = 0x3f800000;
    *(undefined8 *)((long)puVar25 + 0x3c) = 0;
    *puVar25 = &PTR_LAB_04ba84a8;
    *(undefined4 *)((long)puVar25 + 0x44) = 0;
    *(undefined4 *)(puVar25 + 0xf) = 0x3f800000;
    puVar25[0xe] = &DAT_3f8000003f800000;
    puVar25[0x12] = 0;
    puVar25[0x16] = 0;
    *(undefined1 *)(puVar25 + 0x17) = 0;
    *(undefined4 *)(puVar25 + 0x1a) = 0;
    *(undefined8 *)((long)puVar25 + 0x7c) = 0;
    *(undefined8 *)((long)puVar25 + 0x84) = 0;
    *(undefined1 *)((long)puVar25 + 0x8c) = 0;
    *(int *)(puVar25 + 0x1d) = iVar15;
    puVar25[0x1e] = lVar39;
    puVar25[0x13] = 0;
    puVar25[0x14] = 0;
    puVar25[10] = &PTR_LAB_04b78128;
    puVar25[0xb] = &DAT_3f8000003f800000;
    puVar25[0xc] = 0x3f800000;
    puVar25[0xd] = &PTR_LAB_04b78128;
    *(undefined2 *)(puVar25 + 9) = 0xffff;
    puVar25[0x18] = 0;
    puVar25[0x19] = 0;
    puVar25[0x1b] = 0;
    puVar25[0x1c] = 0;
    local_78 = (uint *)param_1[2];
    param_1[0x15] = (long)puVar25;
    local_80 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    FUN_03f238a0(puVar25,&local_80,0x40,param_2);
    lVar39 = param_1[0x15];
LAB_03f1a2c8:
    param_1[0x16] = lVar39;
  }
  return;
}

