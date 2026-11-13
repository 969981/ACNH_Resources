
/* WARNING: Removing unreachable block (ram,0x01227b34) */
/* WARNING: Removing unreachable block (ram,0x01227b50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012279b0(long param_1)

{
  undefined *puVar1;
  uint *puVar2;
  short *psVar3;
  undefined4 uVar4;
  short sVar5;
  undefined *puVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  void *__s;
  ushort uVar18;
  long lVar19;
  long *plVar20;
  byte *pbVar21;
  long lVar22;
  undefined8 *puVar23;
  byte bVar24;
  byte *pbVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  undefined *local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  byte local_80;
  byte local_7f;
  undefined4 local_68;
  undefined4 uStack_64;
  
  puVar6 = PTR_DAT_04bb6298;
  puVar1 = PTR_DAT_04bb27d0;
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 == -1) {
LAB_01227b20:
    if ((*(byte *)(param_1 + 0x87e2) & 1) == 0) {
      *(byte *)(param_1 + 0x87e2) = *(byte *)(param_1 + 0x87e2) | 1;
    }
  }
  else {
    local_90 = (undefined *)CONCAT44(local_90._4_4_,3);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 3 & 1) != 0) {
      lVar19 = **(long **)PTR_DAT_04bb27d0;
      bVar11 = *(byte *)(lVar19 + 0x473);
      if ((long)(char)bVar11 != 0xffffffffffffffff) {
        pbVar25 = (byte *)(lVar19 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x80;
        if (7 < bVar11) {
          pbVar25 = (byte *)(lVar19 + 0x48);
        }
        if (((*pbVar25 >> 3 & 1) != 0) && (*(byte *)(lVar19 + 0x472) != bVar11)) {
          if (DAT_04c47fa4 == 0xe) {
            FUN_0252d11c(&local_a8);
            if (7 < (byte)local_a8) goto LAB_01227a7c;
            DAT_0514e3c0._0_1_ = (byte)local_a8;
            ram0x0514e3c1 = 0xe;
            uVar17 = (ulong)local_90 >> 0x30;
            local_90 = (undefined *)CONCAT26((ushort)uVar17 & 0xff00,0xff0100000000);
            if (-1 < DAT_0514e398) {
              FUN_01db1df0(**(long **)puVar1 + 0x480,DAT_0514e398,&local_90,&DAT_0514e3c0,3,0);
            }
            DAT_04c47fa4 = 0xd;
          }
          if ((byte)DAT_0514f758 < 8) {
            FUN_0252d11c(&local_90);
            bVar11 = (byte)DAT_0514f758;
            if (7 < (byte)DAT_0514f758) {
              bVar11 = 0xff;
            }
            if ((byte)local_90 < 8) {
              if ((byte)local_90 == bVar11) {
                DAT_04c47fa4 = (uint)DAT_0514f758._1_1_;
              }
              else if ((DAT_0514f75a >> 1 & 1) != 0) {
                DAT_04c47fa4 = 10;
              }
              DAT_0514f75a = 0;
              DAT_0514f758 = 0xeff;
            }
            else {
              DAT_0514f758 = CONCAT11(DAT_0514f758._1_1_,bVar11);
            }
          }
          goto LAB_01227a7c;
        }
      }
      DAT_04c47fa4 = 0xe;
    }
LAB_01227a7c:
    uVar18 = *(ushort *)puVar6;
    if (uVar18 == 0xffff) goto LAB_01227b20;
    local_90 = (undefined *)CONCAT44(local_90._4_4_,3);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar18 * 8);
    if (0xff < uVar18) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    bVar10 = (*puVar2 & 8) != 0;
    pbVar25 = (byte *)(param_1 + 0x87e2);
    if ((*pbVar25 & 1) == 0) {
      if ((*puVar2 & 8) == 0) {
        bVar10 = false;
        *(byte *)(param_1 + 0x87e2) = *pbVar25 | 1;
        goto LAB_01227c9c;
      }
      if (*(long *)PTR_DAT_04bb46b0 == 0) {
        lVar19 = 0;
        plVar20 = _DAT_00000098;
        if (_DAT_00000098 != (long *)0x0) goto LAB_01227c24;
LAB_01227c68:
        uVar12 = *(uint *)(*(long *)(lVar19 + 0x80) + *(long *)(lVar19 + 0x78) + 0x230);
      }
      else {
        lVar16 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x30))
                           ();
        lVar19 = 0;
        if (lVar16 != 0) {
          lVar19 = lVar16 + 0x276cb0;
        }
        plVar20 = *(long **)(lVar19 + 0x98);
        if (*(long **)(lVar19 + 0x98) == (long *)0x0) goto LAB_01227c68;
LAB_01227c24:
        if ((undefined8 *)*plVar20 == (undefined8 *)0x0) goto LAB_01227c68;
        uVar17 = (*(code *)**(undefined8 **)*plVar20)();
        uVar12 = *(uint *)(*(long *)(lVar19 + 0x80) + *(long *)(lVar19 + 0x78) + 0x230);
        if ((((uVar17 & 1) != 0) && (*(long *)(lVar19 + 0x98) != 0)) &&
           (puVar23 = *(undefined8 **)(*(long *)(lVar19 + 0x98) + 8), puVar23 != (undefined8 *)0x0))
        {
          (**(code **)*puVar23)();
        }
      }
      uVar18 = *(ushort *)puVar6;
      *pbVar25 = *pbVar25 | (byte)((uVar12 & 1) << 1) | 1;
      if (uVar18 != 0xffff) {
        bVar10 = true;
        goto LAB_01227c9c;
      }
    }
    else {
LAB_01227c9c:
      puVar1 = PTR_DAT_04bb39b0;
      pbVar25 = (byte *)(param_1 + 0x87e2);
      local_90 = (undefined *)CONCAT44(local_90._4_4_,1);
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar18 & 0xffffffffU) * 8);
      if (0xff < uVar18) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar2 >> 1 & 1) != 0) && (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x24a26848)) {
        bVar11 = *pbVar25;
        if ((bVar11 >> 2 & 1) == 0) {
          lVar19 = *(long *)PTR_DAT_04bb39b0;
          pbVar21 = PTR_DAT_04bb32e0;
          if (lVar19 == 0) {
LAB_01227d60:
            if (*pbVar21 < 8) goto LAB_01227ddc;
LAB_01227d6c:
            if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01227dd4:
              pbVar21 = PTR_DAT_04bb5038;
              goto LAB_01227ddc;
            }
            lVar19 = **(long **)PTR_DAT_04bb27d0;
            bVar11 = *(byte *)(lVar19 + 0x473);
            pbVar21 = PTR_DAT_04bb5038;
            if ((long)(char)bVar11 != 0xffffffffffffffff) {
              puVar2 = (uint *)(lVar19 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
              if (7 < bVar11) {
                puVar2 = (uint *)(lVar19 + 0x48);
              }
              if ((*puVar2 & 8) != 0) {
                pbVar21 = (byte *)(lVar19 + 0x471);
              }
            }
            bVar24 = *pbVar21;
            bVar9 = 7 < bVar24;
            if (bVar9) {
              bVar24 = 0xff;
            }
            local_90 = (undefined *)CONCAT71(local_90._1_7_,bVar24);
            if (bVar9) goto LAB_01227dd4;
          }
          else {
            if (*(int *)(lVar19 + 0x15c) != 0) {
              pbVar21 = (byte *)(lVar19 + 0x158);
            }
            if (7 < *pbVar21) {
              if ((*(int *)(lVar19 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
                pbVar21 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
                goto LAB_01227d60;
              }
              goto LAB_01227d6c;
            }
LAB_01227ddc:
            bVar11 = *pbVar21;
            if (7 < bVar11) {
              bVar11 = 0xff;
            }
            local_90 = (undefined *)CONCAT71(local_90._1_7_,bVar11);
            lVar19 = **(long **)PTR_DAT_04bb27d0;
            bVar11 = *(byte *)(lVar19 + 0x473);
          }
          if (bVar11 == 0xff) {
LAB_01227e38:
            uVar17 = FUN_00a738a0(&local_90,0);
            puVar6 = PTR_DAT_04bb30a0;
            if (((uVar17 & 1) == 0) &&
               ((uVar12 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0), (uVar12 & 0xfffffffe) != 4
                && (uVar12 = FUN_00a86724(*(undefined8 *)puVar6), (uVar12 & 0xfffffffe) != 6)))) {
              *pbVar25 = *pbVar25 | 4;
            }
          }
          else {
            pbVar21 = (byte *)(lVar19 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x80;
            if (7 < bVar11) {
              pbVar21 = (byte *)(lVar19 + 0x48);
            }
            if (((*pbVar21 >> 3 & 1) == 0) || (bVar11 == *(byte *)(lVar19 + 0x472)))
            goto LAB_01227e38;
          }
          bVar11 = *pbVar25;
        }
        puVar6 = PTR_DAT_04bb27d0;
        if ((bVar11 & 6) != 2) {
          lVar19 = *(long *)puVar1;
          pbVar21 = PTR_DAT_04bb32e0;
          if (lVar19 == 0) {
LAB_01227ef4:
            if (*pbVar21 < 8) goto LAB_01227f68;
LAB_01227f00:
            if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01227f60:
              pbVar21 = PTR_DAT_04bb5038;
              goto LAB_01227f68;
            }
            lVar19 = **(long **)PTR_DAT_04bb27d0;
            bVar11 = *(byte *)(lVar19 + 0x473);
            pbVar21 = PTR_DAT_04bb5038;
            if ((long)(char)bVar11 != 0xffffffffffffffff) {
              puVar2 = (uint *)(lVar19 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
              if (7 < bVar11) {
                puVar2 = (uint *)(lVar19 + 0x48);
              }
              if ((*puVar2 & 8) != 0) {
                pbVar21 = (byte *)(lVar19 + 0x471);
              }
            }
            bVar24 = *pbVar21;
            bVar9 = 7 < bVar24;
            if (bVar9) {
              bVar24 = 0xff;
            }
            local_68 = CONCAT31(local_68._1_3_,bVar24);
            if (bVar9) goto LAB_01227f60;
          }
          else {
            if (*(int *)(lVar19 + 0x15c) != 0) {
              pbVar21 = (byte *)(lVar19 + 0x158);
            }
            if (7 < *pbVar21) {
              if ((*(int *)(lVar19 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
                pbVar21 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
                goto LAB_01227ef4;
              }
              goto LAB_01227f00;
            }
LAB_01227f68:
            bVar11 = *pbVar21;
            if (7 < bVar11) {
              bVar11 = 0xff;
            }
            local_68 = CONCAT31(local_68._1_3_,bVar11);
            lVar19 = **(long **)PTR_DAT_04bb27d0;
            bVar11 = *(byte *)(lVar19 + 0x473);
          }
          if (bVar11 != 0xff) {
            pbVar21 = (byte *)(lVar19 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x80;
            if (7 < bVar11) {
              pbVar21 = (byte *)(lVar19 + 0x48);
            }
            if (((*pbVar21 >> 3 & 1) != 0) && (bVar11 != *(byte *)(lVar19 + 0x472)))
            goto LAB_012281c0;
          }
          uVar17 = FUN_00a738a0(&local_68,0);
          puVar1 = PTR_DAT_04bb30a0;
          if (((uVar17 & 1) == 0) &&
             ((uVar12 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0), (uVar12 & 0xfffffffe) == 4 ||
              (uVar12 = FUN_00a86724(*(undefined8 *)puVar1), (uVar12 & 0xfffffffe) == 6)))) {
            sVar5 = *(short *)(param_1 + 0x87e0);
            if (sVar5 == 0) {
              if (bVar10) {
                lVar16 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) +
                                     0x30))();
                local_80 = 0;
                lVar19 = 0;
                if (lVar16 != 0) {
                  lVar19 = lVar16 + 0x276cb0;
                }
                local_88 = lVar19 + 0x70;
                if (*(long *)(lVar19 + 0x98) == 0) {
                  local_7f = 0;
                }
                else {
                  puVar23 = *(undefined8 **)(*(long *)(lVar19 + 0x98) + 0x10);
                  local_7f = 0;
                  if (puVar23 != (undefined8 *)0x0) {
                    local_7f = (**(code **)*puVar23)();
                  }
                }
                local_7f = local_7f & 1;
                local_90 = PTR_DAT_04bb4bf0 + 0x10;
                lVar19 = FUN_01228ec8(&local_90);
                lVar16 = *(long *)puVar6;
                if (((lVar16 == 0) || (*(long *)(lVar16 + 0x28) == 0)) ||
                   (*(int *)(lVar16 + 0x80) != 1)) {
                  *(uint *)(lVar19 + 0x230) = *(uint *)(lVar19 + 0x230) | 1;
                }
                FUN_02640184(&local_90);
                lVar19 = FUN_0264d580();
                local_80 = 0;
                local_88 = lVar19 + 0x1c24c0;
                if (*(long *)(lVar19 + 0x1c24e8) == 0) {
                  bVar11 = 0;
                }
                else {
                  puVar23 = *(undefined8 **)(*(long *)(lVar19 + 0x1c24e8) + 0x10);
                  bVar11 = 0;
                  if (puVar23 != (undefined8 *)0x0) {
                    bVar11 = (**(code **)*puVar23)();
                  }
                }
                local_7f = bVar11 & 1;
                local_90 = PTR_DAT_04bb4bf8 + 0x10;
                __s = (void *)FUN_01228f24(&local_90);
                memset(__s,0xff,0x900);
                FUN_02640184(&local_90);
                if (1 < *(byte *)(**(long **)puVar6 + 0x476)) {
                  local_a8 = PTR_DAT_04bb2010 + 0x10;
                  local_a0 = 0xffffffffffffffff;
                  FUN_01228f80(&local_a8);
                }
              }
              else {
                memset(&DAT_0514da88,0xff,0x900);
              }
              *pbVar25 = *pbVar25 & 0xfb | 2;
              FUN_011e433c();
            }
            else {
              *(short *)(param_1 + 0x87e0) = sVar5 + -1;
            }
          }
        }
      }
    }
  }
LAB_012281c0:
  puVar1 = PTR_DAT_04bbbcc8;
  lVar19 = 0;
  do {
    if ((&DAT_0514cd00)[lVar19 * 0x79] != 0) {
      uVar12 = (&DAT_0514ccfc)[lVar19 * 0x79];
      if (uVar12 < (uint)(&DAT_0514cd00)[lVar19 * 0x79]) {
        puVar2 = &DAT_0514ccfc + lVar19 * 0x79;
        uVar17 = (ulong)(uint)(&DAT_0514ccf8)[lVar19 * 0x79];
        if ((&DAT_0514ccf8)[lVar19 * 0x79] != 0) {
          uVar26 = 0;
          lVar16 = lVar19 * 0x1e4;
          do {
            if (*puVar2 == (&DAT_0514cb68)[lVar19 * 0x79 + uVar26]) {
              local_90 = (undefined *)0xfffe;
              FUN_0277d4ac(&local_90);
              if (uVar26 < (byte)(&DAT_0514cd44)[lVar16]) {
                lVar22 = 0;
LAB_012283e0:
                plVar20 = (long *)((long)&DAT_0514cd14 + lVar19 * 0x1e4 + lVar22 * 8);
                local_90 = (undefined *)*plVar20;
                sVar5 = (short)*plVar20;
              }
              else {
                uVar17 = (ulong)(byte)(&DAT_0514cd45)[lVar16] + (ulong)(byte)(&DAT_0514cd44)[lVar16]
                ;
                if (uVar26 < uVar17) {
                  lVar22 = 1;
                  goto LAB_012283e0;
                }
                uVar17 = (ulong)(byte)(&DAT_0514cd46)[lVar16] + (uVar17 & 0xff);
                if (uVar26 < uVar17) {
                  lVar22 = 2;
                  goto LAB_012283e0;
                }
                uVar17 = (ulong)(byte)(&DAT_0514cd47)[lVar16] + (uVar17 & 0xff);
                if (uVar26 < uVar17) {
                  lVar22 = 3;
                  goto LAB_012283e0;
                }
                uVar17 = (ulong)(byte)(&DAT_0514cd48)[lVar16] + (uVar17 & 0xff);
                if (uVar26 < uVar17) {
                  lVar22 = 4;
                  goto LAB_012283e0;
                }
                if (uVar26 < (ulong)(byte)(&DAT_0514cd49)[lVar16] + (uVar17 & 0xff)) {
                  lVar22 = 5;
                  goto LAB_012283e0;
                }
                sVar5 = (short)local_90;
              }
              if (sVar5 != -2) {
                uVar17 = 0;
                iVar13 = 0;
                uVar7 = local_90._2_1_;
                uVar8 = local_90._3_1_;
                uVar4 = local_90._4_4_;
                fVar27 = *(float *)((long)&DAT_0514cd04 + lVar16);
                fVar28 = (float)(&DAT_0514cd0c)[lVar19 * 0x79];
                bVar11 = (&DAT_0514cd10)[lVar16];
                do {
                  if (0x23 < *(int *)(puVar1 + (long)iVar13 * 0x48 + 0x3c)) {
LAB_01228288:
                    psVar3 = (short *)(puVar1 + uVar17 * 0x48);
                    if (0x27 < (uint)uVar17) {
                      psVar3 = (short *)puVar1;
                    }
                    *(undefined2 *)((long)psVar3 + 0x45) = 0xff00;
                    psVar3[0] = -2;
                    psVar3[1] = 0;
                    psVar3[2] = 0;
                    psVar3[3] = 0;
                    FUN_0277d4ac(psVar3);
                    *(undefined1 *)(psVar3 + 1) = uVar7;
                    *(undefined1 *)((long)psVar3 + 3) = uVar8;
                    psVar3[4] = 0;
                    psVar3[5] = 0;
                    psVar3[6] = 0;
                    psVar3[7] = 0;
                    psVar3[8] = 0;
                    psVar3[9] = 0;
                    psVar3[0x10] = 0;
                    psVar3[0x11] = 0;
                    psVar3[0x12] = 0;
                    psVar3[0x13] = 0;
                    *psVar3 = sVar5;
                    *(undefined4 *)(psVar3 + 2) = uVar4;
                    *(uint *)(psVar3 + 0x18) =
                         (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
                    *(uint *)(psVar3 + 0x1a) =
                         (int)((float)(int)fVar28 / 5.0) - (uint)(fVar28 < 0.0);
                    psVar3[0x20] = 0;
                    psVar3[0x21] = 0;
                    psVar3[0x1c] = 0;
                    psVar3[0x1d] = 0;
                    psVar3[0x1e] = 0x22;
                    psVar3[0x1f] = 0;
                    if (7 < bVar11) {
                      bVar11 = 0xff;
                    }
                    *(undefined1 *)(psVar3 + 0x22) = 0xff;
                    *(byte *)(psVar3 + 0x23) = bVar11;
                    *(undefined1 *)((long)psVar3 + 0x47) = 0;
                    break;
                  }
                  if (0x23 < *(int *)(puVar1 + (long)(iVar13 + 1) * 0x48 + 0x3c)) {
                    uVar17 = (ulong)((int)uVar17 + 1);
                    goto LAB_01228288;
                  }
                  uVar12 = (int)uVar17 + 2;
                  uVar17 = (ulong)uVar12;
                  iVar13 = iVar13 + 2;
                } while (uVar12 != 0x28);
              }
              uVar17 = (ulong)(uint)(&DAT_0514ccf8)[lVar19 * 0x79];
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 < uVar17);
          uVar12 = *puVar2;
        }
        *puVar2 = uVar12 + 1;
      }
      else {
        (&DAT_0514cd00)[lVar19 * 0x79] = 0;
      }
    }
    lVar19 = lVar19 + 1;
  } while (lVar19 != 8);
  DAT_0514f7e8 = DAT_0514f7e8 + 1;
  FUN_022f2bf0();
  uVar17 = FUN_02640eb0();
  if ((uVar17 & 1) == 0) {
    return;
  }
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x3f5c743d) {
    return;
  }
  if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x2f1ac06c) &&
     (*(int *)(*(long *)PTR_DAT_04bb3728 + 0xb0) != 0)) {
    return;
  }
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 != -1) {
    local_90 = (undefined *)CONCAT44(local_90._4_4_,0x20);
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
    if (0xff < (uint)(int)sVar5) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) != 0) {
      return;
    }
  }
  lVar19 = **(long **)PTR_DAT_04bb27d0;
  if (1 < *(byte *)(lVar19 + 0x476)) {
    bVar11 = *(byte *)(lVar19 + 0x473);
    if ((long)(char)bVar11 != 0xffffffffffffffff) {
      pbVar25 = (byte *)(lVar19 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x80;
      if (7 < bVar11) {
        pbVar25 = (byte *)(lVar19 + 0x48);
      }
      if (((*pbVar25 >> 3 & 1) != 0) && (*(byte *)(lVar19 + 0x472) != bVar11)) {
        return;
      }
    }
  }
  iVar13 = FUN_0252d29c();
  if (iVar13 == -1) {
    return;
  }
  local_88 = CONCAT44(*(undefined4 *)(PTR_DAT_04bbbf90 + 0xc),1);
  local_80 = FUN_017baf44();
  local_80 = local_80 & 1;
  bVar10 = false;
  uVar12 = 0;
  local_90 = PTR_DAT_04bb6268 + 0x10;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  do {
    lVar19 = (long)((ulong)uVar12 << 0x20) >> 0x1c;
    if (*(int *)((long)&DAT_0514f4f0 + lVar19) != -1) {
      FUN_01a50240(&local_68,&local_90,0,(long)&DAT_0514f4e8 + lVar19);
      iVar14 = FUN_0277d6c4(&local_68);
      puVar6 = PTR_DAT_04bb43c0;
      if (iVar14 == 0x30dd) {
        local_98 = 0;
        local_a0 = CONCAT44(uStack_64,local_68);
        lVar16 = *(long *)PTR_DAT_04bb43c0;
        local_a8 = puVar1;
        uVar15 = FUN_0277d6c4(&local_a0);
        if (*(long *)puVar6 != 0) {
          lVar16 = *(long *)(lVar16 + 0x57e58);
          uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((uVar15 < *(uint *)(lVar16 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
            lVar16 = *(long *)PTR_DAT_04bc0428;
            uVar15 = FUN_0277d6c4(&local_68);
            uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
            if (uVar15 < *(uint *)(lVar16 + 0x1d8)) {
              lVar16 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar15 * 8);
              if (lVar16 != 0) {
                local_98 = lVar16;
              }
            }
          }
        }
        uVar17 = FUN_01ae59b0(&local_a8);
        bVar11 = local_a0._2_1_ >> 2 & 1;
        if ((uVar17 & 1) == 0) {
          bVar11 = local_a0._2_1_ & 4;
        }
        if ((bVar11 != 0) && (uVar17 = FUN_01b09bec(&local_a8), (uVar17 & 1) != 0))
        goto LAB_01228680;
      }
      if ((int)DAT_0514f5e0 == -1) {
        puVar23 = &DAT_0514f5d8;
LAB_012288e4:
        uVar4 = *(undefined4 *)((long)&DAT_0514f4f0 + lVar19 + 4);
        *(undefined4 *)(puVar23 + 1) = *(undefined4 *)((long)&DAT_0514f4f0 + lVar19);
        *(undefined4 *)((long)puVar23 + 0xc) = uVar4;
      }
      else {
        if ((int)DAT_0514f5f0 == -1) {
          puVar23 = &DAT_0514f5e8;
          goto LAB_012288e4;
        }
        puVar23 = &DAT_0514f5f8;
        if (((((((int)DAT_0514f600 == -1) || (puVar23 = &DAT_0514f608, (int)DAT_0514f610 == -1)) ||
              (puVar23 = &DAT_0514f618, (int)DAT_0514f620 == -1)) ||
             ((puVar23 = &DAT_0514f628, (int)DAT_0514f630 == -1 ||
              (puVar23 = &DAT_0514f638, (int)DAT_0514f640 == -1)))) ||
            (((puVar23 = &DAT_0514f648, (int)DAT_0514f650 == -1 ||
              ((puVar23 = &DAT_0514f658, (int)DAT_0514f660 == -1 ||
               (puVar23 = &DAT_0514f668, (int)DAT_0514f670 == -1)))) ||
             (puVar23 = &DAT_0514f678, (int)DAT_0514f680 == -1)))) ||
           (puVar23 = &DAT_0514f688, (int)DAT_0514f690 == -1)) {
          goto LAB_012288e4;
        }
        if ((int)DAT_0514f6a0 == -1) {
          puVar23 = &DAT_0514f698;
          goto LAB_012288e4;
        }
        if ((int)DAT_0514f6b0 == -1) {
          puVar23 = &DAT_0514f6a8;
          goto LAB_012288e4;
        }
        if ((int)DAT_0514f6c0 == -1) {
          puVar23 = &DAT_0514f6b8;
          goto LAB_012288e4;
        }
      }
      bVar10 = true;
      *(undefined8 *)((long)&DAT_0514f4f0 + lVar19) = 0xffffffffffffffff;
    }
LAB_01228680:
    uVar12 = uVar12 + 1;
  } while (uVar12 != 0xf);
  uVar12 = 0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  do {
    lVar19 = (long)((ulong)uVar12 << 0x20) >> 0x1c;
    if (*(int *)((long)&DAT_0514f5e0 + lVar19) != -1) {
      FUN_01a50240(&local_68,&local_90,0,(long)&DAT_0514f5d8 + lVar19);
      iVar14 = FUN_0277d6c4(&local_68);
      puVar6 = PTR_DAT_04bb43c0;
      if (iVar14 == 0x30dd) {
        local_98 = 0;
        local_a0 = CONCAT44(uStack_64,local_68);
        lVar16 = *(long *)PTR_DAT_04bb43c0;
        local_a8 = puVar1;
        uVar15 = FUN_0277d6c4(&local_a0);
        if (*(long *)puVar6 != 0) {
          lVar16 = *(long *)(lVar16 + 0x57e58);
          uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((uVar15 < *(uint *)(lVar16 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
            lVar16 = *(long *)PTR_DAT_04bc0428;
            uVar15 = FUN_0277d6c4(&local_68);
            uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
            if (uVar15 < *(uint *)(lVar16 + 0x1d8)) {
              lVar16 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar15 * 8);
              if (lVar16 != 0) {
                local_98 = lVar16;
              }
            }
          }
        }
        uVar17 = FUN_01ae59b0(&local_a8);
        bVar11 = local_a0._2_1_ >> 2 & 1;
        if ((uVar17 & 1) == 0) {
          bVar11 = local_a0._2_1_ & 4;
        }
        if ((bVar11 != 0) && (uVar17 = FUN_01b09bec(&local_a8), (uVar17 & 1) != 0)) {
          if ((int)DAT_0514f4f0 == -1) {
            puVar23 = &DAT_0514f4e8;
          }
          else if ((int)DAT_0514f500 == -1) {
            puVar23 = &DAT_0514f4f8;
          }
          else if ((int)DAT_0514f510 == -1) {
            puVar23 = &DAT_0514f508;
          }
          else if ((int)DAT_0514f520 == -1) {
            puVar23 = &DAT_0514f518;
          }
          else {
            puVar23 = &DAT_0514f528;
            if ((((((int)DAT_0514f530 == -1) || (puVar23 = &DAT_0514f538, (int)DAT_0514f540 == -1))
                 || (puVar23 = &DAT_0514f548, (int)DAT_0514f550 == -1)) ||
                (((puVar23 = &DAT_0514f558, (int)DAT_0514f560 == -1 ||
                  (puVar23 = &DAT_0514f568, (int)DAT_0514f570 == -1)) ||
                 ((puVar23 = &DAT_0514f578, (int)DAT_0514f580 == -1 ||
                  ((puVar23 = &DAT_0514f588, (int)DAT_0514f590 == -1 ||
                   (puVar23 = &DAT_0514f598, (int)DAT_0514f5a0 == -1)))))))) ||
               (puVar23 = &DAT_0514f5a8, (int)DAT_0514f5b0 == -1)) {
            }
            else if ((int)DAT_0514f5c0 == -1) {
              puVar23 = &DAT_0514f5b8;
            }
            else {
              if ((int)DAT_0514f5d0 != -1) goto LAB_0122895c;
              puVar23 = &DAT_0514f5c8;
            }
          }
          uVar4 = *(undefined4 *)((long)&DAT_0514f5e0 + lVar19 + 4);
          bVar10 = true;
          *(undefined4 *)(puVar23 + 1) = *(undefined4 *)((long)&DAT_0514f5e0 + lVar19);
          *(undefined4 *)((long)puVar23 + 0xc) = uVar4;
          *(undefined8 *)((long)&DAT_0514f5e0 + lVar19) = 0xffffffffffffffff;
        }
      }
    }
LAB_0122895c:
    uVar12 = uVar12 + 1;
  } while (uVar12 != 0xf);
  if (bVar10) {
    FUN_012298fc(iVar13,&DAT_0514f4e8);
  }
  if ((int)DAT_0514f6d0 == -1) {
    bVar10 = false;
  }
  else {
    FUN_01a50240(&local_a8,&local_90,0,&DAT_0514f6c8);
    iVar14 = FUN_0277d6c4(&local_a8);
    bVar10 = iVar14 != 0xed16;
    if (bVar10) {
      DAT_0514f6d0 = 0xffffffffffffffff;
    }
  }
  if ((int)DAT_0514f6e0 != -1) {
    FUN_01a50240(&local_a8,&local_90,0,&DAT_0514f6d8);
    iVar14 = FUN_0277d6c4(&local_a8);
    if (iVar14 != 0xed16) {
      bVar10 = true;
      DAT_0514f6e0 = 0xffffffffffffffff;
    }
  }
  if ((int)DAT_0514f6f0 != -1) {
    FUN_01a50240(&local_a8,&local_90,0,&DAT_0514f6e8);
    iVar14 = FUN_0277d6c4(&local_a8);
    if (iVar14 != 0xed16) {
      bVar10 = true;
      DAT_0514f6f0 = 0xffffffffffffffff;
    }
  }
  if ((int)DAT_0514f700 != -1) {
    FUN_01a50240(&local_a8,&local_90,0,&DAT_0514f6f8);
    iVar14 = FUN_0277d6c4(&local_a8);
    if (iVar14 != 0xed16) {
      bVar10 = true;
      DAT_0514f700 = 0xffffffffffffffff;
    }
  }
  if ((int)DAT_0514f710 != -1) {
    FUN_01a50240(&local_a8,&local_90,0,&DAT_0514f708);
    iVar14 = FUN_0277d6c4(&local_a8);
    if (iVar14 != 0xed16) {
      bVar10 = true;
      DAT_0514f710 = 0xffffffffffffffff;
    }
  }
  if ((int)DAT_0514f720 != -1) {
    FUN_01a50240(&local_a8,&local_90,0,&DAT_0514f718);
    iVar14 = FUN_0277d6c4(&local_a8);
    if (iVar14 != 0xed16) {
      bVar10 = true;
      DAT_0514f720 = 0xffffffffffffffff;
    }
  }
  if ((int)DAT_0514f730 != -1) {
    FUN_01a50240(&local_a8,&local_90,0,&DAT_0514f728);
    iVar14 = FUN_0277d6c4(&local_a8);
    if (iVar14 != 0xed16) {
      bVar10 = true;
      DAT_0514f730 = 0xffffffffffffffff;
    }
  }
  if ((int)DAT_0514f740 != -1) {
    FUN_01a50240(&local_a8,&local_90,0,&DAT_0514f738);
    iVar14 = FUN_0277d6c4(&local_a8);
    if (iVar14 != 0xed16) {
      bVar10 = true;
      DAT_0514f740 = 0xffffffffffffffff;
    }
  }
  if ((int)DAT_0514f750 != -1) {
    FUN_01a50240(&local_a8,&local_90,0,&DAT_0514f748);
    iVar14 = FUN_0277d6c4(&local_a8);
    if (iVar14 != 0xed16) {
      DAT_0514f750 = 0xffffffffffffffff;
      goto LAB_01228e94;
    }
  }
  if (!bVar10) {
    return;
  }
LAB_01228e94:
  FUN_01229e3c(iVar13,&DAT_0514f6c8);
  return;
}

