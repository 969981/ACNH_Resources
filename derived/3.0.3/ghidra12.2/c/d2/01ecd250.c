
undefined8 FUN_01ecd250(long param_1)

{
  uint uVar1;
  uint *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined4 uVar5;
  short sVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  void *__s;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  ulong uVar26;
  byte *pbVar27;
  uint local_245c;
  uint local_2458;
  uint local_2454;
  uint local_2450;
  uint local_244c;
  uint local_2448;
  int local_243c;
  ulong local_2428;
  undefined1 *local_2420;
  undefined8 *******local_2418;
  undefined8 *******pppppppuStack_2410;
  undefined8 *******local_2408 [29];
  undefined8 *******local_2320 [29];
  undefined8 *******local_2238 [29];
  undefined8 *******local_2150 [29];
  undefined8 *******local_2068 [29];
  undefined8 *******local_1f80 [29];
  undefined8 *******local_1e98 [29];
  undefined8 *******local_1db0 [29];
  undefined8 *******local_1cc8 [29];
  undefined8 *******local_1be0 [29];
  undefined8 *******local_1af8 [29];
  undefined8 *******local_1a10 [29];
  undefined8 *******local_1928 [29];
  undefined8 *******local_1840 [29];
  undefined8 *******local_1758 [29];
  undefined8 *******local_1670 [29];
  undefined8 *******local_1588 [29];
  undefined8 *******local_14a0 [29];
  undefined8 *******local_13b8 [29];
  undefined8 *******local_12d0 [29];
  undefined8 *******local_11e8 [29];
  undefined8 *******local_1100 [29];
  undefined8 *******local_1018 [29];
  undefined8 ******local_f30 [29];
  undefined8 *****local_e48 [29];
  undefined8 ****local_d60 [29];
  undefined8 ***local_c78 [29];
  undefined8 **local_b90 [29];
  undefined8 *local_aa8 [29];
  undefined8 local_9c0 [29];
  undefined1 local_8d8 [240];
  ulong local_7e8;
  undefined *local_7e0;
  undefined1 auStack_7d8 [1876];
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  undefined8 local_70 [2];
  
  puVar8 = PTR_DAT_04bb2720;
  sVar6 = *(short *)PTR_DAT_04bb6298;
  if (sVar6 == -1) {
LAB_01ecd31c:
    lVar23 = *(long *)PTR_DAT_04bb2720;
    iVar11 = 0;
    if (lVar23 != 0) {
      if (*(long *)(lVar23 + 0x330) == 0) {
        iVar11 = 0;
      }
      else {
        puVar24 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
        iVar15 = FUN_006bd550(*puVar24,0);
        iVar11 = 0;
        if (iVar15 == 0x758f7eaf) {
          iVar11 = 0;
          if (*(long *)puVar8 != 0) {
            lVar23 = *(long *)(*(long *)puVar8 + 0x330);
            iVar11 = 0;
            if (lVar23 != 0) {
              iVar11 = *(int *)(lVar23 + 0x244);
            }
          }
        }
      }
    }
    puVar9 = PTR_DAT_04bbe4b0;
    if (*(int *)(PTR_DAT_04bbe4b0 + 0x14) != iVar11) {
      lVar23 = *(long *)puVar8;
      iVar11 = 0;
      if (lVar23 != 0) {
        if (*(long *)(lVar23 + 0x330) == 0) {
          iVar11 = 0;
        }
        else {
          puVar24 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
          iVar15 = FUN_006bd550(*puVar24,0);
          iVar11 = 0;
          if (iVar15 == 0x758f7eaf) {
            iVar11 = 0;
            if (*(long *)puVar8 != 0) {
              lVar23 = *(long *)(*(long *)puVar8 + 0x330);
              iVar11 = 0;
              if (lVar23 != 0) {
                iVar11 = *(int *)(lVar23 + 0x244);
              }
            }
          }
        }
      }
      if (*(int *)(puVar9 + 0x34) != iVar11) goto LAB_01ecdba4;
    }
LAB_01ecd414:
    uVar20 = 0x37;
  }
  else {
    local_2428 = CONCAT44(local_2428._4_4_,0x13);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
    if (0xff < (uint)(int)sVar6) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x13 & 1) == 0) goto LAB_01ecd31c;
    lVar23 = *(long *)PTR_DAT_04bb46b0;
    if (lVar23 != 0) {
      lVar25 = *(long *)PTR_DAT_04bb4828;
      puVar24 = *(undefined8 **)(lVar23 + 0x10);
      if ((*(byte *)(lVar23 + 0x453) & 1) == 0) {
        lVar16 = (**(code **)(*(long *)*puVar24 + 0x38))();
        lVar23 = 0;
        if (lVar16 != 0) {
          lVar23 = lVar16 + 0x70;
        }
      }
      else {
        if ((puVar24 == (undefined8 *)0x0) || ((long *)puVar24[0x26] == (long *)0x0))
        goto LAB_01ecdba4;
        lVar23 = (**(code **)(*(long *)puVar24[0x26] + 0x38))();
      }
      if ((lVar25 != 0) && (lVar23 != 0)) {
        if ((*(long **)(lVar23 + 0x1bf1b8) == (long *)0x0) ||
           (puVar24 = (undefined8 *)**(long **)(lVar23 + 0x1bf1b8), puVar24 == (undefined8 *)0x0)) {
          local_245c = 0;
        }
        else {
          local_245c = (**(code **)*puVar24)();
        }
        local_70[0] = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        local_7e0 = PTR_DAT_04bbfe60 + 0x10;
        memset(auStack_7d8,0,0x754);
        uVar10 = nn::os::GetSystemTick();
        local_84 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
        local_80 = (local_84 ^ local_84 >> 0x1e) * 0x6c078965 + 2;
        local_7c = (local_80 ^ local_80 >> 0x1e) * 0x6c078965 + 3;
        local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 4;
        __s = (void *)FUN_01a451fc(&local_7e0);
        memset(__s,0,0x754);
        lVar16 = *(long *)PTR_DAT_04bb2720;
        if (lVar16 == 0) {
          puVar24 = &DAT_055c04a0;
        }
        else {
          puVar24 = &DAT_055c04a0;
          if (*(long *)(lVar16 + 0x330) != 0) {
            puVar24 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
            iVar11 = FUN_006bd550(*puVar24,0);
            puVar24 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar11 != 0x758f7eaf) {
              puVar24 = &DAT_055c04a0;
            }
          }
        }
        FUN_01c281f0(lVar25,&local_7e0,*(undefined4 *)(puVar24 + 7),1);
        lVar16 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
        uVar26 = 0;
        do {
          if ((*(uint *)(lVar16 + (uVar26 >> 5) * 4) >> (ulong)((uint)uVar26 & 0x1f) & 1) != 0)
          goto LAB_01ecd5e0;
          uVar10 = (uint)uVar26 + 1;
          uVar26 = (ulong)uVar10;
        } while (uVar10 != 15000);
        uVar26 = 0;
LAB_01ecd5e0:
        lVar17 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
        iVar11 = 15000;
        do {
          if ((*(uint *)(lVar17 + (ulong)(iVar11 - 1U >> 5) * 4) >> (ulong)(iVar11 - 1U & 0x1f) & 1)
              != 0) break;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        local_7e8 = 0xfffe;
        FUN_0277d4ac(&local_7e8);
        uVar10 = nn::os::GetSystemTick();
        puVar9 = PTR_DAT_04bbfe58;
        puVar8 = PTR_DAT_04bb37e0;
        if (iVar11 != (int)uVar26) {
          local_2454 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
          local_244c = (local_2454 ^ local_2454 >> 0x1e) * 0x6c078965 + 2;
          local_2448 = 0;
          local_2450 = (local_244c ^ local_244c >> 0x1e) * 0x6c078965 + 3;
          local_243c = 8;
          local_2458 = (local_2450 ^ local_2450 >> 0x1e) * 0x6c078965 + 4;
LAB_01ecd84c:
          uVar10 = local_2450;
          puVar3 = (ulong *)(puVar9 + uVar26 * 8);
          if (0x752 < (uint)(uVar26 >> 3)) {
            puVar3 = (ulong *)puVar9;
          }
          puVar4 = (ulong *)puVar8;
          if ((uint)uVar26 < 0x3a99) {
            puVar4 = puVar3;
          }
          local_2428 = *puVar4;
          uVar22 = FUN_01c27700(lVar25,&local_2428);
          if ((uVar22 & 1) != 0) {
            local_2428 = *puVar4;
            uVar20 = FUN_027bf380(*(long *)(lVar23 + 0x1bf1a0) + *(long *)(lVar23 + 0x1bf198),
                                  &local_2428);
            uVar21 = (uint)((ulong)uVar20 >> 0x18) & 0xff;
            uVar12 = (uint)uVar20;
            uVar1 = uVar12 & 0xffff;
            uVar22 = (ulong)uVar1;
            uVar7 = uVar12 >> 0x10 & 0xff;
            uVar19 = nn::time::IsValidDate(uVar1,uVar7,uVar21);
            if ((uVar19 & 1) != 0) {
              uVar19 = nn::time::IsValidDate(uVar1,uVar7,uVar21);
              if ((uVar19 & 1) == 0) {
                local_2428 = 0x10107d0;
              }
              else {
                uVar13 = nn::time::IsValidDate(uVar1,uVar7,uVar21);
                uVar14 = nn::time::IsValidDate(uVar1,uVar7,uVar21);
                uVar18 = nn::time::IsValidDate(uVar1,uVar7,uVar21);
                uVar19 = (ulong)(uVar12 & 0xff000000);
                if ((uVar18 & 1) == 0) {
                  uVar19 = 0x1000000;
                }
                uVar18 = (ulong)(uVar12 & 0xff0000);
                if ((uVar14 & 1) == 0) {
                  uVar18 = 0x10000;
                }
                if ((uVar13 & 1) == 0) {
                  uVar22 = 2000;
                }
                local_2428 = uVar18 | uVar22 | uVar19;
              }
              iVar15 = FUN_00a82474(local_70,&local_2428);
              if (iVar15 <= local_243c) {
                if (iVar15 == local_243c) {
                  uVar1 = local_2454 ^ local_2454 << 0xb;
                  local_2448 = local_2448 + 1;
                  local_2454 = local_244c;
                  local_2450 = local_2458;
                  local_244c = uVar10;
                  local_2458 = uVar1 >> 8 ^ local_2458 >> 0x13 ^ uVar1 ^ local_2458;
                  if (((ulong)local_2458 * (ulong)local_2448 & 0xffffffff00000000) != 0)
                  goto LAB_01ecd9d0;
                }
                else {
                  local_2448 = 0;
                  local_243c = iVar15;
                }
                local_7e8 = *puVar4;
              }
            }
          }
LAB_01ecd9d0:
          do {
            uVar10 = (int)uVar26 + 1;
            uVar26 = (ulong)uVar10;
            if (0x752 < uVar10 >> 3) {
              uVar10 = 0x3a95;
              goto LAB_01ecda00;
            }
          } while ((*(uint *)(lVar16 + (ulong)(uVar10 >> 5) * 4) >> (ulong)(uVar10 & 0x1f) & 1) == 0
                  );
          goto LAB_01ecd844;
        }
LAB_01ecd63c:
        if ((short)local_7e8 != -2) {
          local_2428 = 0;
          local_2420 = (undefined1 *)0x0;
          local_2408[0] = local_2320;
          local_2320[0] = local_2238;
          local_2418 = local_2408;
          local_2238[0] = local_2150;
          local_2150[0] = local_2068;
          local_2068[0] = local_1f80;
          local_1f80[0] = local_1e98;
          local_1e98[0] = local_1db0;
          local_9c0[0] = 0;
          local_1db0[0] = local_1cc8;
          local_1cc8[0] = local_1be0;
          local_1be0[0] = local_1af8;
          local_1af8[0] = local_1a10;
          local_1a10[0] = local_1928;
          local_1928[0] = local_1840;
          local_1840[0] = local_1758;
          local_1758[0] = local_1670;
          local_1670[0] = local_1588;
          local_1588[0] = local_14a0;
          local_14a0[0] = local_13b8;
          local_13b8[0] = local_12d0;
          local_12d0[0] = local_11e8;
          local_11e8[0] = local_1100;
          local_1100[0] = local_1018;
          local_1018[0] = local_f30;
          local_f30[0] = local_e48;
          local_e48[0] = local_d60;
          local_d60[0] = local_c78;
          local_c78[0] = local_b90;
          local_b90[0] = local_aa8;
          local_aa8[0] = local_9c0;
          if (local_8d8 != (undefined1 *)0x0) {
            local_2428 = 0x1e00000000;
            local_2420 = local_8d8;
          }
          lVar16 = *(long *)PTR_DAT_04bb2720;
          pppppppuStack_2410 = local_2418;
          if (lVar16 == 0) {
            puVar24 = &DAT_055c04a0;
          }
          else {
            puVar24 = &DAT_055c04a0;
            if (*(long *)(lVar16 + 0x330) != 0) {
              puVar24 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
              iVar11 = FUN_006bd550(*puVar24,0);
              puVar24 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar11 != 0x758f7eaf) {
                puVar24 = &DAT_055c04a0;
              }
            }
          }
          uVar5 = *(undefined4 *)(puVar24 + 7);
          lVar16 = FUN_0265c2a0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
          if (lVar16 == 0) {
            pbVar27 = PTR_DAT_04bb9cf0;
          }
          else if ((*(long **)(lVar16 + 0x28) == (long *)0x0) ||
                  (puVar24 = (undefined8 *)**(long **)(lVar16 + 0x28), puVar24 == (undefined8 *)0x0)
                  ) {
            pbVar27 = (byte *)(*(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8));
          }
          else {
            uVar26 = (**(code **)*puVar24)();
            pbVar27 = (byte *)(*(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8));
            if ((uVar26 & 1) != 0) {
              if (*(long *)(lVar16 + 0x28) != 0) {
                puVar24 = *(undefined8 **)(*(long *)(lVar16 + 0x28) + 8);
                if (puVar24 != (undefined8 *)0x0) {
                  (**(code **)*puVar24)();
                }
              }
            }
          }
          uVar26 = (ulong)*pbVar27;
          if ((uVar26 < 0x23) && (pbVar27[1] <= (byte)PTR_DAT_04bc27f0[uVar26])) {
            uVar22 = 0;
            if ((*(uint *)(PTR_DAT_04bc2a20 + uVar26 * 4) & 1 << (ulong)(pbVar27[1] & 0x1f)) != 0) {
              uVar22 = uVar26;
            }
          }
          else {
            uVar22 = 0;
          }
          FUN_01c23f70(lVar25,&local_2428,uVar5,uVar22,1,1);
          uVar26 = local_2428 & 0xffffffff;
          if (0 < (int)local_2428) {
            uVar22 = 0;
            do {
              if (uVar22 < (local_2428 & 0xffffffff)) {
                lVar25 = *(long *)(local_2420 + uVar22 * 8);
              }
              else {
                lVar25 = 0;
              }
              uVar19 = FUN_0277d7b4(lVar25 + 0x10,&local_7e8);
              if ((uVar19 & 1) != 0) {
                if ((((local_245c & 1) != 0) && (*(long *)(lVar23 + 0x1bf1b8) != 0)) &&
                   (puVar24 = *(undefined8 **)(*(long *)(lVar23 + 0x1bf1b8) + 8),
                   puVar24 != (undefined8 *)0x0)) {
                  (**(code **)*puVar24)();
                }
                goto LAB_01ecd414;
              }
              uVar22 = uVar22 + 1;
            } while (uVar26 != uVar22);
          }
        }
        if ((((local_245c & 1) != 0) && (*(long *)(lVar23 + 0x1bf1b8) != 0)) &&
           (puVar24 = *(undefined8 **)(*(long *)(lVar23 + 0x1bf1b8) + 8),
           puVar24 != (undefined8 *)0x0)) {
          (**(code **)*puVar24)();
        }
      }
    }
LAB_01ecdba4:
    uVar20 = 0x39;
  }
  return uVar20;
  while( true ) {
    uVar1 = uVar10 + 1;
    if ((*(uint *)(lVar16 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0)
    goto LAB_01ecd83c;
    if ((*(uint *)(lVar16 + (ulong)(uVar10 >> 5) * 4) >> (ulong)(uVar10 & 0x1f) & 1) != 0)
    goto LAB_01ecd840;
    uVar10 = uVar10 - 3;
    if (uVar10 == 0xfffffffd) break;
LAB_01ecda00:
    uVar1 = uVar10 + 2;
    if ((*(uint *)(lVar16 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0) {
LAB_01ecd83c:
      uVar10 = uVar1;
LAB_01ecd840:
      uVar26 = (ulong)(uVar10 + 1);
      goto LAB_01ecd844;
    }
  }
  uVar26 = 0;
LAB_01ecd844:
  if (iVar11 == (int)uVar26) goto LAB_01ecd63c;
  goto LAB_01ecd84c;
}

