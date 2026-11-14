
void FUN_0194c370(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  undefined4 uVar4;
  uint uVar5;
  ushort uVar6;
  short sVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  void *pvVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  ushort *puVar18;
  ulong uVar19;
  uint uVar20;
  byte *pbVar21;
  long lVar22;
  undefined4 uVar23;
  uint *puVar24;
  uint *puVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  char *__dest;
  undefined2 *puVar29;
  byte bVar30;
  long lVar31;
  uint local_ec;
  undefined4 local_d8 [2];
  undefined8 local_d0;
  undefined4 local_c8 [2];
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 local_a8;
  byte local_a7;
  undefined *local_a0;
  long local_98;
  char local_90;
  byte local_8f;
  undefined8 local_88;
  undefined8 local_80;
  uint *local_78;
  byte local_68 [4];
  undefined4 local_64;
  
  puVar2 = PTR_DAT_04bb2698;
  DAT_052cadb8 = *(undefined4 *)(param_1 + 0x230);
  lVar27 = *(long *)PTR_DAT_04bb2698;
  if (lVar27 == 0) {
    plVar14 = malloc(0x2e0);
  }
  else {
    plVar14 = param_3;
    if (param_3 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar14 = (long *)(lVar27 + 8);
      if (lVar13 != 0) {
        plVar14 = (long *)(lVar13 + 0xa8);
      }
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) {
        plVar14 = (long *)0x0;
        goto LAB_0194c410;
      }
    }
    plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x2e0,8);
  }
LAB_0194c410:
  FUN_00705c50(plVar14);
  plVar14[0x4f] = 0;
  puVar8 = PTR_DAT_04bb3300;
  plVar14[0x50] = 0;
  plVar14[0x53] = -0x100000000;
  plVar14[0x52] = (long)(plVar14 + 0x51);
  plVar14[0x51] = (long)(plVar14 + 0x51);
  *plVar14 = (long)(puVar8 + 0x10);
  FUN_038e18e4(plVar14 + 0x54);
  __dest = (char *)plVar14[0xc];
  if (__dest != "Family") {
    iVar11 = 6;
    if ((int)plVar14[0xd] < 7) {
      iVar11 = (int)plVar14[0xd] + -1;
    }
    memcpy(__dest,"Family",(long)iVar11);
    __dest[iVar11] = '\0';
  }
  *(uint *)(plVar14 + 0x4c) = *(uint *)(plVar14 + 0x4c) & 0xfffffff0;
  *(undefined4 *)((long)plVar14 + 0x29c) = 0x278;
  FUN_006f9fc0(param_1,plVar14,0xffffffff);
  lVar27 = *(long *)puVar2;
  if (lVar27 == 0) {
    pvVar15 = malloc(0x8d0);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_3 = (long *)(lVar27 + 8);
      if (lVar13 != 0) {
        param_3 = (long *)(lVar13 + 0xa8);
      }
      param_3 = (long *)*param_3;
    }
    pvVar15 = (void *)(**(code **)(*param_3 + 0x30))(param_3,0x8d0,8);
  }
  FUN_0189f470();
  FUN_006f9fc0(param_1,pvVar15,0xffffffff);
  puVar8 = PTR_DAT_04bb6298;
  lVar27 = *(long *)puVar2;
  if (lVar27 == 0) {
    pvVar15 = malloc(4);
joined_r0x0194c584:
    if (pvVar15 != (void *)0x0) {
      lVar27 = *(long *)puVar2;
      *(void **)(param_1 + 0x280) = pvVar15;
      *(undefined4 *)(param_1 + 0x278) = 1;
      if (lVar27 == 0) {
        puVar16 = malloc(4);
      }
      else {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar14 = (long *)(lVar27 + 8);
        if (lVar13 != 0) {
          plVar14 = (long *)(lVar13 + 0xa8);
        }
        plVar14 = (long *)*plVar14;
        if (plVar14 == (long *)0x0) goto LAB_0194c944;
        puVar16 = (undefined4 *)(**(code **)(*plVar14 + 0x30))(plVar14,4,8);
      }
      if (puVar16 != (undefined4 *)0x0) {
        *(undefined4 **)(param_1 + 0x290) = puVar16;
        *(undefined4 *)(param_1 + 0x288) = 1;
        uVar6 = *(ushort *)puVar8;
        uVar19 = (ulong)(short)uVar6;
        if (uVar19 == 0xffffffffffffffff) {
LAB_0194c7c4:
          if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x24a26848) {
            if (*(long *)PTR_DAT_04bb46b0 == 0) {
              iVar11 = 0;
            }
            else {
              FUN_02703058(&local_88,*(long *)PTR_DAT_04bb46b0);
              puVar16 = *(undefined4 **)(param_1 + 0x290);
              iVar11 = 0;
              if (local_88._4_1_ != '\0') {
                iVar11 = (int)local_88;
              }
            }
            local_88 = (undefined *)CONCAT44(local_88._4_4_,iVar11);
            uVar23 = 7;
            if (iVar11 != 1) {
              uVar23 = 0xb;
            }
            uVar4 = 4;
            if (iVar11 != 0) {
              uVar4 = uVar23;
            }
            *puVar16 = uVar4;
          }
          else {
            *puVar16 = 0xb;
          }
          **(undefined4 **)(param_1 + 0x280) = 0xb;
        }
        else {
          local_88._4_4_ = (undefined4)((ulong)local_88 >> 0x20);
          local_88 = (undefined *)CONCAT44(local_88._4_4_,0x11);
          puVar24 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar6 * 8);
          if (0xff < (uint)(int)(short)uVar6) {
            puVar24 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar24 >> 0x11 & 1) == 0) {
            local_88 = (undefined *)CONCAT44(local_88._4_4_,0x19);
            puVar24 = (uint *)(PTR_DAT_04bc39f8 + (uVar19 & 0xffffffff) * 8);
            if (0xff < uVar6) {
              puVar24 = (uint *)PTR_DAT_04bc39f8;
            }
            if ((((*puVar24 >> 0x19 & 1) == 0) ||
                (local_88 = (undefined *)CONCAT44(local_88._4_4_,0x1a), (*puVar24 >> 0x1a & 1) != 0)
                ) || (local_88 = (undefined *)CONCAT44(local_88._4_4_,1), (*puVar24 >> 1 & 1) == 0))
            {
              local_88 = (undefined *)CONCAT44(local_88._4_4_,0x1a);
              puVar24 = (uint *)(PTR_DAT_04bc39f8 + (uVar19 & 0xffffffff) * 8);
              if (0xff < uVar6) {
                puVar24 = (uint *)PTR_DAT_04bc39f8;
              }
              if (((*puVar24 >> 0x1a & 1) == 0) ||
                 (local_88 = (undefined *)CONCAT44(local_88._4_4_,1), (*puVar24 >> 1 & 1) == 0))
              goto LAB_0194c7c4;
              uVar28 = 0xc;
              *puVar16 = 0xc;
              **(undefined4 **)(param_1 + 0x280) = 0xc;
              local_88 = PTR_DAT_04bb7648 + 0x10;
              local_80._2_6_ = (undefined6)((ulong)local_80 >> 0x10);
              local_80 = CONCAT62(local_80._2_6_,**(undefined2 **)PTR_DAT_04bb27f8);
              lVar27 = FUN_03775a30(&local_88);
              if (lVar27 == 0) {
                uVar23 = 0x43340000;
                goto LAB_0194c860;
              }
              lVar13 = *(long *)(lVar27 + 0x108);
              if (lVar13 == 0) {
                local_ec = 0;
              }
              else {
                if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
                  local_ec = 0;
                }
                else {
                  local_ec = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
                  lVar13 = *(long *)(lVar27 + 0x108);
                  if (lVar13 == 0) goto LAB_0194cbb0;
                }
                plVar14 = *(long **)(lVar13 + 0x20);
                if (plVar14 != (long *)0x0) {
                  local_88 = *(undefined **)(lVar27 + 0xe8);
                  local_80 = *(long *)(lVar27 + 0xf0);
                  local_78 = (uint *)0x48a8;
                  (**(code **)(*plVar14 + 0x20))(plVar14,&local_88);
                }
              }
LAB_0194cbb0:
              puVar1 = PTR_DAT_04bb43c0;
              puVar9 = PTR_DAT_04bb37e0;
              uVar20 = 0;
              lVar13 = *(long *)(lVar27 + 0xf0) + *(long *)(lVar27 + 0xe8) + 0x4848;
              puVar2 = PTR_DAT_04bc0510 + 0x10;
              do {
                psVar3 = (short *)(lVar13 + ((long)((ulong)uVar20 << 0x20) >> 0x1d));
                if (*psVar3 != -2) {
                  lVar26 = *(long *)puVar1;
                  uVar12 = FUN_0277d6c4(psVar3);
                  lVar31 = *(long *)puVar1;
                  lVar22 = lVar13 + (long)(int)uVar20 * 8;
                  if (lVar31 != 0) {
                    lVar26 = *(long *)(lVar26 + 0x57e58);
                    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
                    if ((uVar12 < *(uint *)(lVar26 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
                      local_78 = (uint *)0x0;
                      local_80 = CONCAT44(*(undefined4 *)(lVar22 + 4),
                                          CONCAT22(*(undefined2 *)(lVar22 + 2),*psVar3));
                      local_88 = puVar2;
                      uVar12 = FUN_0277d6c4(&local_80);
                      if (*(long *)puVar1 == 0) {
LAB_0194cdc4:
                        local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x69);
                        uVar12 = 0xbc;
                      }
                      else {
                        lVar26 = *(long *)(lVar31 + 0x57e58);
                        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
                        if ((*(uint *)(lVar26 + 0x1d8) <= uVar12) ||
                           (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar12 * 8) == 0))
                        goto LAB_0194cdc4;
                        lVar26 = *(long *)PTR_DAT_04bc0428;
                        uVar12 = FUN_0277d6c4(psVar3);
                        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
                        if ((*(uint *)(lVar26 + 0x1d8) <= uVar12) ||
                           (puVar24 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar12 * 8),
                           puVar24 == (uint *)0x0)) goto LAB_0194cdc4;
                        uVar12 = 0;
                        local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x69);
                        uVar5 = *puVar24;
                        local_78 = puVar24;
                        if ((uVar5 != 0) && (puVar24 != (uint *)(ulong)uVar5)) {
                          puVar25 = (uint *)((long)puVar24 - (long)(ulong)uVar5);
                          uVar12 = 0;
                          if (*puVar25 != 0) {
                            uVar12 = puVar25[1];
                            if ((uVar12 != 0) && ((ulong)(ushort)puVar25[2] != 0)) {
                              lVar26 = 0xc;
                              if (*(char *)((long)puVar25 + 10) != '\0') {
                                lVar26 = 0x1c;
                              }
                              lVar26 = (long)puVar25 + lVar26 + (ulong)(ushort)puVar25[2] * 8;
                              if (lVar26 != 0) {
                                uVar5 = 0;
                                if ((ulong)uVar12 != 0) {
                                  uVar5 = (uint)((ulong)((long)puVar24 - lVar26) / (ulong)uVar12);
                                }
                                if (*puVar25 <= uVar5) {
                                  uVar5 = 0xffffffff;
                                }
                                if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
                                   (uVar12 = (uint)*(ushort *)
                                                    (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                    (long)(int)uVar5 * 2), uVar12 < 0xbd))
                                goto LAB_0194cdd0;
                              }
                            }
                            uVar12 = 0;
                          }
                        }
                      }
LAB_0194cdd0:
                      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar12);
                      if (uVar12 != (uint)local_a0) {
                        *psVar3 = *(short *)puVar9;
                        *(undefined *)(lVar22 + 2) = puVar9[2];
                        *(undefined *)(lVar22 + 3) = puVar9[3];
                        *(undefined4 *)(lVar22 + 4) = *(undefined4 *)(puVar9 + 4);
                      }
                      goto LAB_0194cc18;
                    }
                  }
                  *psVar3 = *(short *)puVar9;
                  *(undefined *)(lVar22 + 2) = puVar9[2];
                  *(undefined *)(lVar22 + 3) = puVar9[3];
                  *(undefined4 *)(lVar22 + 4) = *(undefined4 *)(puVar9 + 4);
                }
LAB_0194cc18:
                uVar20 = uVar20 + 1;
              } while (uVar20 != 0xc);
              if ((((local_ec & 1) != 0) && (*(long *)(lVar27 + 0x108) != 0)) &&
                 (puVar17 = *(undefined8 **)(*(long *)(lVar27 + 0x108) + 0x18),
                 puVar17 != (undefined8 *)0x0)) {
                (**(code **)*puVar17)();
              }
              uVar28 = 0xc;
              uVar23 = 0x43340000;
              goto LAB_0194c860;
            }
            uVar23 = 8;
          }
          else {
            uVar23 = 4;
          }
          *puVar16 = uVar23;
          **(undefined4 **)(param_1 + 0x280) = uVar23;
        }
        uVar28 = 0xb;
        uVar23 = 0x42b40000;
LAB_0194c860:
        puVar9 = PTR_DAT_04bbecb0;
        puVar2 = PTR_DAT_04bbeca8;
        if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
          lVar27 = (long)*(int *)(param_1 + 0xbc);
          plVar14 = (long *)(*(long *)(param_1 + 0xb0) - lVar27);
          puVar1 = PTR_DAT_04bbecb8 + 0x10;
          do {
            if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
              *(undefined **)puVar2 = puVar1;
              __cxa_guard_release(puVar9);
            }
            if ((plVar14 != (long *)0x0) &&
               (uVar19 = (**(code **)(*plVar14 + 0x10))(plVar14,puVar2), (uVar19 & 1) != 0)) {
              local_c8[0] = *(undefined4 *)(param_1 + 0x288);
              local_c0 = *(undefined8 *)(param_1 + 0x290);
              local_d8[0] = *(undefined4 *)(param_1 + 0x278);
              *(long **)(param_1 + 0x2a0) = plVar14;
              local_d0 = *(undefined8 *)(param_1 + 0x280);
              FUN_0098ea90(uVar23,plVar14,uVar28,local_c8,local_d8,0x7d);
              goto LAB_0194c944;
            }
            plVar14 = (long *)(*(long *)((long)plVar14 + lVar27 + 8) - lVar27);
          } while (plVar14 != (long *)((param_1 + 0xa8) - lVar27));
        }
        *(undefined8 *)(param_1 + 0x2a0) = 0;
        return;
      }
    }
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar27 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 != (long *)0x0) {
      pvVar15 = (void *)(**(code **)(*plVar14 + 0x30))(plVar14,4,8);
      goto joined_r0x0194c584;
    }
  }
LAB_0194c944:
  puVar2 = PTR_DAT_04bb27f8;
  sVar7 = *(short *)puVar8;
  if (sVar7 == -1) {
    return;
  }
  puVar24 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
  if (0xff < (uint)(int)sVar7) {
    puVar24 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar24 >> 0x1a & 1) == 0) {
    return;
  }
  local_88 = (undefined *)CONCAT44(local_88._4_4_,1);
  if ((*puVar24 >> 1 & 1) == 0) {
    return;
  }
  lVar27 = *(long *)PTR_DAT_04bb27f8;
  if (lVar27 == 0) {
    return;
  }
  if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)
      ) && (*(int *)(lVar27 + 0x14) == 5)) {
    return;
  }
  if (*(int *)(lVar27 + 0x14) == 6) {
    return;
  }
  if (*(int *)(lVar27 + 0x14) == 7) {
    return;
  }
  lVar13 = *(long *)PTR_DAT_04bb39b0;
  pbVar21 = PTR_DAT_04bb32e0;
  if (lVar13 == 0) {
LAB_0194ca54:
    if (*pbVar21 < 8) goto LAB_0194cacc;
LAB_0194ca60:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0194cac4:
      pbVar21 = PTR_DAT_04bb5038;
      goto LAB_0194cacc;
    }
    lVar13 = **(long **)PTR_DAT_04bb27d0;
    bVar30 = *(byte *)(lVar13 + 0x473);
    pbVar21 = PTR_DAT_04bb5038;
    if ((long)(char)bVar30 != 0xffffffffffffffff) {
      puVar24 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar30 & 0xffffffffU) * 0x20;
      if (7 < bVar30) {
        puVar24 = (uint *)(lVar13 + 0x48);
      }
      if ((*puVar24 & 8) != 0) {
        pbVar21 = (byte *)(lVar13 + 0x471);
      }
    }
    local_68[0] = *pbVar21;
    if (7 < local_68[0]) goto LAB_0194cac4;
  }
  else {
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar21 = (byte *)(lVar13 + 0x158);
    }
    if (7 < *pbVar21) {
      if ((*(int *)(lVar13 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar21 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0194ca54;
      }
      goto LAB_0194ca60;
    }
LAB_0194cacc:
    local_68[0] = *pbVar21;
    if (7 < local_68[0]) {
      local_68[0] = 0xff;
    }
  }
  lVar13 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_68,1);
  if (lVar13 == 0) {
    return;
  }
  lVar22 = lVar13 + 0x194b0;
  if (*(long *)(lVar13 + 0x194b8) == 0) {
    lVar22 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  local_90 = '\0';
  local_98 = lVar22 + 0x2d058;
  lVar13 = *(long *)(lVar22 + 0x2d080);
  if (lVar13 == 0) {
    local_8f = 0;
    local_a0 = PTR_DAT_04bbe518 + 0x10;
    bVar30 = 0;
  }
  else {
    if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
      local_8f = 0;
      local_a0 = PTR_DAT_04bbe518 + 0x10;
    }
    else {
      local_8f = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      lVar13 = *(long *)(lVar22 + 0x2d080);
      local_8f = local_8f & 1;
      local_a0 = PTR_DAT_04bbe518 + 0x10;
      bVar30 = local_8f;
      if (lVar13 == 0) goto LAB_0194cea0;
    }
    bVar30 = local_8f;
    plVar14 = *(long **)(lVar13 + 0x20);
    if (plVar14 != (long *)0x0) {
      local_88 = *(undefined **)(lVar22 + 0x2d060);
      local_80 = *(long *)(lVar22 + 0x2d068);
      local_78 = (uint *)0x2;
      (**(code **)(*plVar14 + 0x20))(plVar14,&local_88);
    }
  }
LAB_0194cea0:
  puVar8 = PTR_DAT_04bb7648;
  if ((*(ushort *)(*(long *)(lVar22 + 0x2d068) + *(long *)(lVar22 + 0x2d060)) >> 1 & 1) == 0)
  goto LAB_0194d794;
  local_88 = PTR_DAT_04bb7648 + 0x10;
  local_80 = CONCAT62(local_80._2_6_,**(undefined2 **)puVar2);
  lVar13 = FUN_03775a30(&local_88);
  if (lVar13 == 0) goto LAB_0194d794;
  lVar22 = lVar13 + 0xe0;
  local_78 = (uint *)((ulong)local_78 & 0xffffffffffffff00);
  local_80 = lVar22;
  if (*(long *)(lVar13 + 0x108) == 0) {
    uVar10 = 0;
  }
  else {
    puVar17 = *(undefined8 **)(*(long *)(lVar13 + 0x108) + 0x10);
    uVar10 = 0;
    if (puVar17 != (undefined8 *)0x0) {
      uVar10 = (**(code **)*puVar17)();
    }
  }
  puVar9 = PTR_DAT_04bbc598;
  local_78 = (uint *)(CONCAT62(local_78._2_6_,CONCAT11(uVar10,local_78._0_1_)) & 0xffffffffffff01ff)
  ;
  local_88 = PTR_DAT_04bbc598 + 0x10;
  FUN_0194c314(&local_88);
  uVar20 = (uint)*(ushort *)(lVar27 + 0xc0);
  if ((uVar20 & 0xf) == 4) {
LAB_0194cf54:
    puVar18 = (ushort *)FUN_0194c314(&local_88);
    local_b8 = (undefined *)CONCAT44(local_b8._4_4_,1);
    *puVar18 = *puVar18 & 0xfffd;
    uVar19 = FUN_018a4bf0(*(undefined8 *)(param_1 + 0x2a0));
    if ((uVar19 & 1) == 0) {
      FUN_02640280(lVar22,0x48a8);
      puVar2 = PTR_DAT_04bb37e0;
      lVar27 = *(long *)(lVar13 + 0xf0) + *(long *)(lVar13 + 0xe8);
      uVar23 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      *(undefined4 *)(lVar27 + 0x4848) = *(undefined4 *)PTR_DAT_04bb37e0;
      *(undefined4 *)(lVar27 + 0x484c) = uVar23;
      FUN_02640280(lVar22,0x48a8);
      lVar27 = *(long *)(lVar13 + 0xf0) + *(long *)(lVar13 + 0xe8);
      uVar23 = *(undefined4 *)(puVar2 + 4);
      *(undefined4 *)(lVar27 + 0x4850) = *(undefined4 *)puVar2;
      *(undefined4 *)(lVar27 + 0x4854) = uVar23;
      FUN_02640280(lVar22,0x48a8);
      lVar27 = *(long *)(lVar13 + 0xf0) + *(long *)(lVar13 + 0xe8);
      uVar23 = *(undefined4 *)(puVar2 + 4);
      *(undefined4 *)(lVar27 + 0x4858) = *(undefined4 *)puVar2;
      *(undefined4 *)(lVar27 + 0x485c) = uVar23;
      FUN_02640280(lVar22,0x48a8);
      lVar27 = *(long *)(lVar13 + 0xf0) + *(long *)(lVar13 + 0xe8);
      uVar23 = *(undefined4 *)(puVar2 + 4);
      *(undefined4 *)(lVar27 + 0x4860) = *(undefined4 *)puVar2;
      *(undefined4 *)(lVar27 + 0x4864) = uVar23;
      FUN_02640280(lVar22,0x48a8);
      lVar27 = *(long *)(lVar13 + 0xf0) + *(long *)(lVar13 + 0xe8);
      uVar23 = *(undefined4 *)(puVar2 + 4);
      *(undefined4 *)(lVar27 + 0x4868) = *(undefined4 *)puVar2;
      *(undefined4 *)(lVar27 + 0x486c) = uVar23;
      FUN_02640280(lVar22,0x48a8);
      lVar27 = *(long *)(lVar13 + 0xf0) + *(long *)(lVar13 + 0xe8);
      uVar23 = *(undefined4 *)(puVar2 + 4);
      *(undefined4 *)(lVar27 + 0x4870) = *(undefined4 *)puVar2;
      *(undefined4 *)(lVar27 + 0x4874) = uVar23;
      FUN_02640280(lVar22,0x48a8);
      lVar27 = *(long *)(lVar13 + 0xf0) + *(long *)(lVar13 + 0xe8);
      uVar23 = *(undefined4 *)(puVar2 + 4);
      *(undefined4 *)(lVar27 + 0x4878) = *(undefined4 *)puVar2;
      *(undefined4 *)(lVar27 + 0x487c) = uVar23;
      FUN_02640280(lVar22,0x48a8);
      lVar27 = *(long *)(lVar13 + 0xf0) + *(long *)(lVar13 + 0xe8);
      uVar23 = *(undefined4 *)(puVar2 + 4);
      *(undefined4 *)(lVar27 + 0x4880) = *(undefined4 *)puVar2;
      *(undefined4 *)(lVar27 + 0x4884) = uVar23;
      FUN_02640280(lVar22,0x48a8);
      lVar27 = *(long *)(lVar13 + 0xf0) + *(long *)(lVar13 + 0xe8);
      uVar23 = *(undefined4 *)(puVar2 + 4);
      *(undefined4 *)(lVar27 + 0x4888) = *(undefined4 *)puVar2;
      *(undefined4 *)(lVar27 + 0x488c) = uVar23;
      FUN_02640280(lVar22,0x48a8);
      lVar27 = *(long *)(lVar13 + 0xf0) + *(long *)(lVar13 + 0xe8);
      uVar23 = *(undefined4 *)(puVar2 + 4);
      *(undefined4 *)(lVar27 + 0x4890) = *(undefined4 *)puVar2;
      *(undefined4 *)(lVar27 + 0x4894) = uVar23;
      FUN_02640280(lVar22,0x48a8);
      lVar27 = *(long *)(lVar13 + 0xf0) + *(long *)(lVar13 + 0xe8);
      uVar23 = *(undefined4 *)(puVar2 + 4);
      *(undefined4 *)(lVar27 + 0x4898) = *(undefined4 *)puVar2;
      *(undefined4 *)(lVar27 + 0x489c) = uVar23;
      FUN_02640280(lVar22,0x48a8);
      lVar27 = *(long *)(lVar13 + 0xf0) + *(long *)(lVar13 + 0xe8);
      uVar23 = *(undefined4 *)(puVar2 + 4);
      *(undefined4 *)(lVar27 + 0x48a0) = *(undefined4 *)puVar2;
      *(undefined4 *)(lVar27 + 0x48a4) = uVar23;
    }
LAB_0194d774:
    puVar18 = (ushort *)FUN_0194c2b8(&local_a0);
    *puVar18 = *puVar18 & 0xfffd;
    bVar30 = local_8f;
  }
  else {
    local_b8 = (undefined *)(CONCAT44(local_b8._4_4_,uVar20) & 0xffffffff0000000f);
    if (((uVar20 & 0xf0) == 0x20) && ((int)local_b8 == 1)) goto LAB_0194cf54;
    local_b8 = puVar8 + 0x10;
    local_b0 = CONCAT62(local_b0._2_6_,**(undefined2 **)puVar2);
    lVar27 = FUN_0375f980(&local_b8);
    if (lVar27 != 0) {
      local_b0 = lVar27 + 0x1848;
      local_a8 = 1;
      if (*(long **)(lVar27 + 0x1870) == (long *)0x0) {
        local_a7 = 0;
      }
      else {
        puVar17 = (undefined8 *)**(long **)(lVar27 + 0x1870);
        local_a7 = 0;
        if (puVar17 != (undefined8 *)0x0) {
          local_a7 = (**(code **)*puVar17)();
        }
      }
      local_a7 = local_a7 & 1;
      local_64 = 1;
      local_b8 = puVar9 + 0x10;
      uVar6 = *(ushort *)(*(long *)(lVar27 + 0x1858) + *(long *)(lVar27 + 0x1850));
      puVar18 = (ushort *)FUN_0194c314(&local_88);
      local_64 = 1;
      if ((uVar6 >> 1 & 1) == 0) {
        *puVar18 = *puVar18 & 0xfffd;
        uVar19 = FUN_018a4bf0(*(undefined8 *)(param_1 + 0x2a0));
        if ((uVar19 & 1) == 0) {
          lVar27 = FUN_0194c314(&local_88);
          puVar29 = (undefined2 *)PTR_DAT_04bb37e0;
          *(undefined2 *)(lVar27 + 0x4848) = *(undefined2 *)PTR_DAT_04bb37e0;
          *(undefined1 *)(lVar27 + 0x484a) = *(undefined1 *)((long)puVar29 + 2);
          *(undefined1 *)(lVar27 + 0x484b) = *(undefined1 *)((long)puVar29 + 3);
          *(undefined4 *)(lVar27 + 0x484c) = *(undefined4 *)((long)puVar29 + 4);
          lVar27 = FUN_0194c314(&local_88);
          *(undefined2 *)(lVar27 + 0x4850) = *puVar29;
          *(undefined1 *)(lVar27 + 0x4852) = *(undefined1 *)((long)puVar29 + 2);
          *(undefined1 *)(lVar27 + 0x4853) = *(undefined1 *)((long)puVar29 + 3);
          *(undefined4 *)(lVar27 + 0x4854) = *(undefined4 *)((long)puVar29 + 4);
          lVar27 = FUN_0194c314(&local_88);
          *(undefined2 *)(lVar27 + 0x4858) = *puVar29;
          *(undefined1 *)(lVar27 + 0x485a) = *(undefined1 *)((long)puVar29 + 2);
          *(undefined1 *)(lVar27 + 0x485b) = *(undefined1 *)((long)puVar29 + 3);
          *(undefined4 *)(lVar27 + 0x485c) = *(undefined4 *)((long)puVar29 + 4);
          lVar27 = FUN_0194c314(&local_88);
          *(undefined2 *)(lVar27 + 0x4860) = *puVar29;
          *(undefined1 *)(lVar27 + 0x4862) = *(undefined1 *)((long)puVar29 + 2);
          *(undefined1 *)(lVar27 + 0x4863) = *(undefined1 *)((long)puVar29 + 3);
          *(undefined4 *)(lVar27 + 0x4864) = *(undefined4 *)((long)puVar29 + 4);
          lVar27 = FUN_0194c314(&local_88);
          *(undefined2 *)(lVar27 + 0x4868) = *puVar29;
          *(undefined1 *)(lVar27 + 0x486a) = *(undefined1 *)((long)puVar29 + 2);
          *(undefined1 *)(lVar27 + 0x486b) = *(undefined1 *)((long)puVar29 + 3);
          *(undefined4 *)(lVar27 + 0x486c) = *(undefined4 *)((long)puVar29 + 4);
          lVar27 = FUN_0194c314(&local_88);
          *(undefined2 *)(lVar27 + 0x4870) = *puVar29;
          *(undefined1 *)(lVar27 + 0x4872) = *(undefined1 *)((long)puVar29 + 2);
          *(undefined1 *)(lVar27 + 0x4873) = *(undefined1 *)((long)puVar29 + 3);
          *(undefined4 *)(lVar27 + 0x4874) = *(undefined4 *)((long)puVar29 + 4);
          lVar27 = FUN_0194c314(&local_88);
          *(undefined2 *)(lVar27 + 0x4878) = *puVar29;
          *(undefined1 *)(lVar27 + 0x487a) = *(undefined1 *)((long)puVar29 + 2);
          *(undefined1 *)(lVar27 + 0x487b) = *(undefined1 *)((long)puVar29 + 3);
          *(undefined4 *)(lVar27 + 0x487c) = *(undefined4 *)((long)puVar29 + 4);
          lVar27 = FUN_0194c314(&local_88);
          *(undefined2 *)(lVar27 + 0x4880) = *puVar29;
          *(undefined1 *)(lVar27 + 0x4882) = *(undefined1 *)((long)puVar29 + 2);
          *(undefined1 *)(lVar27 + 0x4883) = *(undefined1 *)((long)puVar29 + 3);
          *(undefined4 *)(lVar27 + 0x4884) = *(undefined4 *)((long)puVar29 + 4);
          lVar27 = FUN_0194c314(&local_88);
          *(undefined2 *)(lVar27 + 0x4888) = *puVar29;
          *(undefined1 *)(lVar27 + 0x488a) = *(undefined1 *)((long)puVar29 + 2);
          *(undefined1 *)(lVar27 + 0x488b) = *(undefined1 *)((long)puVar29 + 3);
          *(undefined4 *)(lVar27 + 0x488c) = *(undefined4 *)((long)puVar29 + 4);
          lVar27 = FUN_0194c314(&local_88);
          *(undefined2 *)(lVar27 + 0x4890) = *puVar29;
          *(undefined1 *)(lVar27 + 0x4892) = *(undefined1 *)((long)puVar29 + 2);
          *(undefined1 *)(lVar27 + 0x4893) = *(undefined1 *)((long)puVar29 + 3);
          *(undefined4 *)(lVar27 + 0x4894) = *(undefined4 *)((long)puVar29 + 4);
          lVar27 = FUN_0194c314(&local_88);
          *(undefined2 *)(lVar27 + 0x4898) = *puVar29;
          *(undefined1 *)(lVar27 + 0x489a) = *(undefined1 *)((long)puVar29 + 2);
          *(undefined1 *)(lVar27 + 0x489b) = *(undefined1 *)((long)puVar29 + 3);
          *(undefined4 *)(lVar27 + 0x489c) = *(undefined4 *)((long)puVar29 + 4);
          lVar27 = FUN_0194c314(&local_88);
          goto LAB_0194d744;
        }
      }
      else {
        *puVar18 = *puVar18 | 2;
        lVar26 = *(long *)(lVar27 + 0x1858) + *(long *)(lVar27 + 0x1850);
        FUN_02640280(lVar22,0x48a8);
        lVar31 = *(long *)(lVar13 + 0xf0) + *(long *)(lVar13 + 0xe8);
        *(undefined2 *)(lVar31 + 0x4848) = *(undefined2 *)(lVar26 + 0x4848);
        *(undefined1 *)(lVar31 + 0x484a) = *(undefined1 *)(lVar26 + 0x484a);
        *(undefined1 *)(lVar31 + 0x484b) = *(undefined1 *)(lVar26 + 0x484b);
        *(undefined4 *)(lVar31 + 0x484c) = *(undefined4 *)(lVar26 + 0x484c);
        lVar26 = *(long *)(lVar27 + 0x1858) + *(long *)(lVar27 + 0x1850);
        FUN_02640280(lVar22,0x48a8);
        lVar31 = *(long *)(lVar13 + 0xf0) + *(long *)(lVar13 + 0xe8);
        *(undefined2 *)(lVar31 + 0x4850) = *(undefined2 *)(lVar26 + 0x4850);
        *(undefined1 *)(lVar31 + 0x4852) = *(undefined1 *)(lVar26 + 0x4852);
        *(undefined1 *)(lVar31 + 0x4853) = *(undefined1 *)(lVar26 + 0x4853);
        *(undefined4 *)(lVar31 + 0x4854) = *(undefined4 *)(lVar26 + 0x4854);
        lVar26 = *(long *)(lVar27 + 0x1858) + *(long *)(lVar27 + 0x1850);
        FUN_02640280(lVar22,0x48a8);
        lVar31 = *(long *)(lVar13 + 0xf0) + *(long *)(lVar13 + 0xe8);
        *(undefined2 *)(lVar31 + 0x4858) = *(undefined2 *)(lVar26 + 0x4858);
        *(undefined1 *)(lVar31 + 0x485a) = *(undefined1 *)(lVar26 + 0x485a);
        *(undefined1 *)(lVar31 + 0x485b) = *(undefined1 *)(lVar26 + 0x485b);
        *(undefined4 *)(lVar31 + 0x485c) = *(undefined4 *)(lVar26 + 0x485c);
        lVar26 = *(long *)(lVar27 + 0x1858) + *(long *)(lVar27 + 0x1850);
        FUN_02640280(lVar22,0x48a8);
        lVar31 = *(long *)(lVar13 + 0xf0) + *(long *)(lVar13 + 0xe8);
        *(undefined2 *)(lVar31 + 0x4860) = *(undefined2 *)(lVar26 + 0x4860);
        *(undefined1 *)(lVar31 + 0x4862) = *(undefined1 *)(lVar26 + 0x4862);
        *(undefined1 *)(lVar31 + 0x4863) = *(undefined1 *)(lVar26 + 0x4863);
        *(undefined4 *)(lVar31 + 0x4864) = *(undefined4 *)(lVar26 + 0x4864);
        lVar26 = *(long *)(lVar27 + 0x1858) + *(long *)(lVar27 + 0x1850);
        FUN_02640280(lVar22,0x48a8);
        lVar31 = *(long *)(lVar13 + 0xf0) + *(long *)(lVar13 + 0xe8);
        *(undefined2 *)(lVar31 + 0x4868) = *(undefined2 *)(lVar26 + 0x4868);
        *(undefined1 *)(lVar31 + 0x486a) = *(undefined1 *)(lVar26 + 0x486a);
        *(undefined1 *)(lVar31 + 0x486b) = *(undefined1 *)(lVar26 + 0x486b);
        *(undefined4 *)(lVar31 + 0x486c) = *(undefined4 *)(lVar26 + 0x486c);
        lVar26 = *(long *)(lVar27 + 0x1858) + *(long *)(lVar27 + 0x1850);
        FUN_02640280(lVar22,0x48a8);
        lVar31 = *(long *)(lVar13 + 0xf0) + *(long *)(lVar13 + 0xe8);
        *(undefined2 *)(lVar31 + 0x4870) = *(undefined2 *)(lVar26 + 0x4870);
        *(undefined1 *)(lVar31 + 0x4872) = *(undefined1 *)(lVar26 + 0x4872);
        *(undefined1 *)(lVar31 + 0x4873) = *(undefined1 *)(lVar26 + 0x4873);
        *(undefined4 *)(lVar31 + 0x4874) = *(undefined4 *)(lVar26 + 0x4874);
        lVar26 = *(long *)(lVar27 + 0x1858) + *(long *)(lVar27 + 0x1850);
        FUN_02640280(lVar22,0x48a8);
        lVar31 = *(long *)(lVar13 + 0xf0) + *(long *)(lVar13 + 0xe8);
        *(undefined2 *)(lVar31 + 0x4878) = *(undefined2 *)(lVar26 + 0x4878);
        *(undefined1 *)(lVar31 + 0x487a) = *(undefined1 *)(lVar26 + 0x487a);
        *(undefined1 *)(lVar31 + 0x487b) = *(undefined1 *)(lVar26 + 0x487b);
        *(undefined4 *)(lVar31 + 0x487c) = *(undefined4 *)(lVar26 + 0x487c);
        lVar26 = *(long *)(lVar27 + 0x1858) + *(long *)(lVar27 + 0x1850);
        FUN_02640280(lVar22,0x48a8);
        lVar31 = *(long *)(lVar13 + 0xf0) + *(long *)(lVar13 + 0xe8);
        *(undefined2 *)(lVar31 + 0x4880) = *(undefined2 *)(lVar26 + 0x4880);
        *(undefined1 *)(lVar31 + 0x4882) = *(undefined1 *)(lVar26 + 0x4882);
        *(undefined1 *)(lVar31 + 0x4883) = *(undefined1 *)(lVar26 + 0x4883);
        *(undefined4 *)(lVar31 + 0x4884) = *(undefined4 *)(lVar26 + 0x4884);
        lVar26 = *(long *)(lVar27 + 0x1858) + *(long *)(lVar27 + 0x1850);
        FUN_02640280(lVar22,0x48a8);
        lVar31 = *(long *)(lVar13 + 0xf0) + *(long *)(lVar13 + 0xe8);
        *(undefined2 *)(lVar31 + 0x4888) = *(undefined2 *)(lVar26 + 0x4888);
        *(undefined1 *)(lVar31 + 0x488a) = *(undefined1 *)(lVar26 + 0x488a);
        *(undefined1 *)(lVar31 + 0x488b) = *(undefined1 *)(lVar26 + 0x488b);
        *(undefined4 *)(lVar31 + 0x488c) = *(undefined4 *)(lVar26 + 0x488c);
        lVar26 = *(long *)(lVar27 + 0x1858) + *(long *)(lVar27 + 0x1850);
        FUN_02640280(lVar22,0x48a8);
        lVar31 = *(long *)(lVar13 + 0xf0) + *(long *)(lVar13 + 0xe8);
        *(undefined2 *)(lVar31 + 0x4890) = *(undefined2 *)(lVar26 + 0x4890);
        *(undefined1 *)(lVar31 + 0x4892) = *(undefined1 *)(lVar26 + 0x4892);
        *(undefined1 *)(lVar31 + 0x4893) = *(undefined1 *)(lVar26 + 0x4893);
        *(undefined4 *)(lVar31 + 0x4894) = *(undefined4 *)(lVar26 + 0x4894);
        lVar26 = *(long *)(lVar27 + 0x1858) + *(long *)(lVar27 + 0x1850);
        FUN_02640280(lVar22,0x48a8);
        lVar31 = *(long *)(lVar13 + 0xf0) + *(long *)(lVar13 + 0xe8);
        *(undefined2 *)(lVar31 + 0x4898) = *(undefined2 *)(lVar26 + 0x4898);
        *(undefined1 *)(lVar31 + 0x489a) = *(undefined1 *)(lVar26 + 0x489a);
        *(undefined1 *)(lVar31 + 0x489b) = *(undefined1 *)(lVar26 + 0x489b);
        *(undefined4 *)(lVar31 + 0x489c) = *(undefined4 *)(lVar26 + 0x489c);
        puVar29 = (undefined2 *)(*(long *)(lVar27 + 0x1858) + *(long *)(lVar27 + 0x1850) + 0x48a0);
        FUN_02640280(lVar22,0x48a8);
        lVar27 = *(long *)(lVar13 + 0xf0) + *(long *)(lVar13 + 0xe8);
LAB_0194d744:
        *(undefined2 *)(lVar27 + 0x48a0) = *puVar29;
        *(undefined1 *)(lVar27 + 0x48a2) = *(undefined1 *)(puVar29 + 1);
        *(undefined1 *)(lVar27 + 0x48a3) = *(undefined1 *)((long)puVar29 + 3);
        *(undefined4 *)(lVar27 + 0x48a4) = *(undefined4 *)(puVar29 + 2);
      }
      FUN_02640184(&local_b8);
      goto LAB_0194d774;
    }
  }
  FUN_02640184(&local_88);
LAB_0194d794:
  if (bVar30 != 0) {
    lVar27 = *(long *)(local_98 + 0x28);
    if (local_90 == '\0') {
      if (lVar27 == 0) {
        return;
      }
      puVar17 = *(undefined8 **)(lVar27 + 0x18);
    }
    else {
      if (lVar27 == 0) {
        return;
      }
      puVar17 = *(undefined8 **)(lVar27 + 8);
    }
    if (puVar17 != (undefined8 *)0x0) {
      (**(code **)*puVar17)();
    }
  }
  return;
}

