
undefined8 FUN_01f19510(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  undefined4 uVar4;
  short sVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  void *__s;
  long lVar16;
  uint *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  ulong uVar26;
  uint local_2484;
  uint local_2480;
  uint local_247c;
  uint local_2478;
  uint local_2474;
  uint local_2470;
  int local_2464;
  ulong local_2450;
  undefined1 *local_2448;
  undefined8 *******local_2440;
  undefined8 *******pppppppuStack_2438;
  undefined8 *******local_2430 [29];
  undefined8 *******local_2348 [29];
  undefined8 *******local_2260 [29];
  undefined8 *******local_2178 [29];
  undefined8 *******local_2090 [29];
  undefined8 *******local_1fa8 [29];
  undefined8 *******local_1ec0 [29];
  undefined8 *******local_1dd8 [29];
  undefined8 *******local_1cf0 [29];
  undefined8 *******local_1c08 [29];
  undefined8 *******local_1b20 [29];
  undefined8 *******local_1a38 [29];
  undefined8 *******local_1950 [29];
  undefined8 *******local_1868 [29];
  undefined8 *******local_1780 [29];
  undefined8 *******local_1698 [29];
  undefined8 *******local_15b0 [29];
  undefined8 *******local_14c8 [29];
  undefined8 *******local_13e0 [29];
  undefined8 *******local_12f8 [29];
  undefined8 *******local_1210 [29];
  undefined8 *******local_1128 [29];
  undefined8 *******local_1040 [29];
  undefined8 ******local_f58 [29];
  undefined8 *****local_e70 [29];
  undefined8 ****local_d88 [29];
  undefined8 ***local_ca0 [29];
  undefined8 **local_bb8 [29];
  undefined8 *local_ad0 [29];
  undefined8 local_9e8 [29];
  undefined1 local_900 [240];
  ulong local_810;
  undefined *local_808;
  undefined1 auStack_800 [1876];
  uint local_ac;
  uint local_a8;
  uint local_a4;
  int local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined1 *puStack_88;
  undefined4 local_80;
  undefined1 local_7c [7];
  undefined1 local_75;
  uint3 local_6c [3];
  
  puVar7 = PTR_DAT_04bb2720;
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 == -1) {
LAB_01f195dc:
    lVar23 = *(long *)PTR_DAT_04bb2720;
    iVar10 = 0;
    if (lVar23 != 0) {
      if (*(long *)(lVar23 + 0x330) == 0) {
        iVar10 = 0;
      }
      else {
        puVar24 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
        iVar14 = FUN_006bd550(*puVar24,0);
        iVar10 = 0;
        if (iVar14 == 0x758f7eaf) {
          iVar10 = 0;
          if (*(long *)puVar7 != 0) {
            lVar23 = *(long *)(*(long *)puVar7 + 0x330);
            iVar10 = 0;
            if (lVar23 != 0) {
              iVar10 = *(int *)(lVar23 + 0x244);
            }
          }
        }
      }
    }
    puVar8 = PTR_DAT_04bbe4b0;
    if (*(int *)(PTR_DAT_04bbe4b0 + 0x14) != iVar10) {
      lVar23 = *(long *)puVar7;
      iVar10 = 0;
      if (lVar23 != 0) {
        if (*(long *)(lVar23 + 0x330) == 0) {
          iVar10 = 0;
        }
        else {
          puVar24 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
          iVar14 = FUN_006bd550(*puVar24,0);
          iVar10 = 0;
          if (iVar14 == 0x758f7eaf) {
            iVar10 = 0;
            if (*(long *)puVar7 != 0) {
              lVar23 = *(long *)(*(long *)puVar7 + 0x330);
              iVar10 = 0;
              if (lVar23 != 0) {
                iVar10 = *(int *)(lVar23 + 0x244);
              }
            }
          }
        }
      }
      if (*(int *)(puVar8 + 0x34) != iVar10) goto LAB_01f19eb4;
    }
LAB_01f196d4:
    uVar20 = 0x37;
  }
  else {
    local_2450 = CONCAT44(local_2450._4_4_,0x13);
    puVar17 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar17 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar17 >> 0x13 & 1) == 0) goto LAB_01f195dc;
    lVar23 = *(long *)PTR_DAT_04bb46b0;
    if (lVar23 != 0) {
      lVar25 = *(long *)PTR_DAT_04bb4828;
      puVar24 = *(undefined8 **)(lVar23 + 0x10);
      if ((*(byte *)(lVar23 + 0x453) & 1) == 0) {
        lVar15 = (**(code **)(*(long *)*puVar24 + 0x38))();
        lVar23 = 0;
        if (lVar15 != 0) {
          lVar23 = lVar15 + 0x70;
        }
      }
      else {
        if ((puVar24 == (undefined8 *)0x0) || ((long *)puVar24[0x26] == (long *)0x0))
        goto LAB_01f19eb4;
        lVar23 = (**(code **)(*(long *)puVar24[0x26] + 0x38))();
      }
      if ((lVar25 != 0) && (lVar23 != 0)) {
        if ((*(long **)(lVar23 + 0x1bf1b8) == (long *)0x0) ||
           (puVar24 = (undefined8 *)**(long **)(lVar23 + 0x1bf1b8), puVar24 == (undefined8 *)0x0)) {
          local_2484 = 0;
        }
        else {
          local_2484 = (**(code **)*puVar24)();
        }
        local_98 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        local_808 = PTR_DAT_04bbfe60 + 0x10;
        memset(auStack_800,0,0x754);
        uVar9 = nn::os::GetSystemTick();
        local_ac = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
        local_a8 = (local_ac ^ local_ac >> 0x1e) * 0x6c078965 + 2;
        local_a4 = (local_a8 ^ local_a8 >> 0x1e) * 0x6c078965 + 3;
        local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 4;
        __s = (void *)FUN_01a451fc(&local_808);
        memset(__s,0,0x754);
        lVar15 = *(long *)PTR_DAT_04bb2720;
        if (lVar15 == 0) {
          puVar24 = &DAT_055c04a0;
        }
        else {
          puVar24 = &DAT_055c04a0;
          if (*(long *)(lVar15 + 0x330) != 0) {
            puVar24 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
            iVar10 = FUN_006bd550(*puVar24,0);
            puVar24 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar10 != 0x758f7eaf) {
              puVar24 = &DAT_055c04a0;
            }
          }
        }
        FUN_01c281f0(lVar25,&local_808,*(undefined4 *)(puVar24 + 7),1);
        lVar15 = (**(code **)(local_808 + 0x20))(&local_808);
        uVar26 = 0;
        do {
          if ((*(uint *)(lVar15 + (uVar26 >> 5) * 4) >> (ulong)((uint)uVar26 & 0x1f) & 1) != 0)
          goto LAB_01f198a0;
          uVar9 = (uint)uVar26 + 1;
          uVar26 = (ulong)uVar9;
        } while (uVar9 != 15000);
        uVar26 = 0;
LAB_01f198a0:
        lVar16 = (**(code **)(local_808 + 0x20))(&local_808);
        iVar10 = 15000;
        do {
          if ((*(uint *)(lVar16 + (ulong)(iVar10 - 1U >> 5) * 4) >> (ulong)(iVar10 - 1U & 0x1f) & 1)
              != 0) break;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        local_810 = 0xfffe;
        FUN_0277d4ac(&local_810);
        puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar3 = puVar17[3];
        uVar9 = *puVar17 ^ *puVar17 << 0xb;
        *puVar17 = puVar17[1];
        puVar17[1] = puVar17[2];
        uVar9 = uVar9 >> 8 ^ uVar3 >> 0x13 ^ uVar9 ^ uVar3;
        puVar17[2] = uVar3;
        puVar17[3] = uVar9;
        puVar8 = PTR_DAT_04bbfe58;
        puVar7 = PTR_DAT_04bb37e0;
        if (iVar10 != (int)uVar26) {
          uVar9 = (uint)(((ulong)uVar9 << 0x20) - (ulong)uVar9 >> 0x20);
          local_247c = (uVar9 >> 0x1e ^ uVar9) * 0x6c078965 + 1;
          local_2474 = (local_247c ^ local_247c >> 0x1e) * 0x6c078965 + 2;
          local_2470 = 0;
          local_2478 = (local_2474 ^ local_2474 >> 0x1e) * 0x6c078965 + 3;
          local_2464 = 8;
          local_2480 = (local_2478 ^ local_2478 >> 0x1e) * 0x6c078965 + 4;
LAB_01f19b4c:
          uVar9 = local_2478;
          puVar1 = (ulong *)(puVar8 + uVar26 * 8);
          if (0x752 < (uint)(uVar26 >> 3)) {
            puVar1 = (ulong *)puVar8;
          }
          puVar2 = (ulong *)puVar7;
          if ((uint)uVar26 < 0x3a99) {
            puVar2 = puVar1;
          }
          local_2450 = *puVar2;
          uVar22 = FUN_01c27700(lVar25,&local_2450);
          if ((uVar22 & 1) != 0) {
            local_2450 = *puVar2;
            uVar20 = FUN_027bf380(*(long *)(lVar23 + 0x1bf1a0) + *(long *)(lVar23 + 0x1bf198),
                                  &local_2450);
            uVar21 = (uint)((ulong)uVar20 >> 0x18) & 0xff;
            uVar11 = (uint)uVar20;
            uVar3 = uVar11 & 0xffff;
            uVar22 = (ulong)uVar3;
            uVar6 = uVar11 >> 0x10 & 0xff;
            uVar19 = nn::time::IsValidDate(uVar3,uVar6,uVar21);
            if ((uVar19 & 1) != 0) {
              uVar19 = nn::time::IsValidDate(uVar3,uVar6,uVar21);
              if ((uVar19 & 1) == 0) {
                local_2450 = 0x10107d0;
              }
              else {
                uVar12 = nn::time::IsValidDate(uVar3,uVar6,uVar21);
                uVar13 = nn::time::IsValidDate(uVar3,uVar6,uVar21);
                uVar18 = nn::time::IsValidDate(uVar3,uVar6,uVar21);
                uVar19 = (ulong)(uVar11 & 0xff000000);
                if ((uVar18 & 1) == 0) {
                  uVar19 = 0x1000000;
                }
                uVar18 = (ulong)(uVar11 & 0xff0000);
                if ((uVar13 & 1) == 0) {
                  uVar18 = 0x10000;
                }
                if ((uVar12 & 1) == 0) {
                  uVar22 = 2000;
                }
                local_2450 = uVar18 | uVar22 | uVar19;
              }
              iVar14 = FUN_00a82474(&local_98,&local_2450);
              if (iVar14 <= local_2464) {
                if (iVar14 == local_2464) {
                  uVar3 = local_247c ^ local_247c << 0xb;
                  local_2470 = local_2470 + 1;
                  local_247c = local_2474;
                  local_2478 = local_2480;
                  local_2474 = uVar9;
                  local_2480 = uVar3 >> 8 ^ local_2480 >> 0x13 ^ uVar3 ^ local_2480;
                  if (((ulong)local_2480 * (ulong)local_2470 & 0xffffffff00000000) != 0)
                  goto LAB_01f19cd0;
                }
                else {
                  local_2470 = 0;
                  local_2464 = iVar14;
                }
                local_810 = *puVar2;
              }
            }
          }
LAB_01f19cd0:
          do {
            uVar9 = (int)uVar26 + 1;
            uVar26 = (ulong)uVar9;
            if (0x752 < uVar9 >> 3) {
              uVar9 = 0x3a95;
              goto LAB_01f19d00;
            }
          } while ((*(uint *)(lVar15 + (ulong)(uVar9 >> 5) * 4) >> (ulong)(uVar9 & 0x1f) & 1) == 0);
          goto LAB_01f19b44;
        }
LAB_01f1992c:
        if ((short)local_810 != -2) {
          local_2450 = 0;
          local_2448 = (undefined1 *)0x0;
          local_2430[0] = local_2348;
          local_2348[0] = local_2260;
          local_2440 = local_2430;
          local_2260[0] = local_2178;
          local_2178[0] = local_2090;
          local_2090[0] = local_1fa8;
          local_1fa8[0] = local_1ec0;
          local_1ec0[0] = local_1dd8;
          local_9e8[0] = 0;
          local_1dd8[0] = local_1cf0;
          local_1cf0[0] = local_1c08;
          local_1c08[0] = local_1b20;
          local_1b20[0] = local_1a38;
          local_1a38[0] = local_1950;
          local_1950[0] = local_1868;
          local_1868[0] = local_1780;
          local_1780[0] = local_1698;
          local_1698[0] = local_15b0;
          local_15b0[0] = local_14c8;
          local_14c8[0] = local_13e0;
          local_13e0[0] = local_12f8;
          local_12f8[0] = local_1210;
          local_1210[0] = local_1128;
          local_1128[0] = local_1040;
          local_1040[0] = local_f58;
          local_f58[0] = local_e70;
          local_e70[0] = local_d88;
          local_d88[0] = local_ca0;
          local_ca0[0] = local_bb8;
          local_bb8[0] = local_ad0;
          local_ad0[0] = local_9e8;
          if (local_900 != (undefined1 *)0x0) {
            local_2450 = 0x1e00000000;
            local_2448 = local_900;
          }
          lVar15 = *(long *)PTR_DAT_04bb2720;
          pppppppuStack_2438 = local_2440;
          if (lVar15 == 0) {
            puVar24 = &DAT_055c04a0;
          }
          else {
            puVar24 = &DAT_055c04a0;
            if (*(long *)(lVar15 + 0x330) != 0) {
              puVar24 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
              iVar10 = FUN_006bd550(*puVar24,0);
              puVar24 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar10 != 0x758f7eaf) {
                puVar24 = &DAT_055c04a0;
              }
            }
          }
          local_75 = 0;
          local_7c[0] = 0;
          uVar4 = *(undefined4 *)(puVar24 + 7);
          local_80 = 8;
          puStack_88 = local_7c;
          local_90 = PTR_DAT_04bb3768 + 0x10;
          uVar26 = FUN_021d62e0(&local_90,*(undefined4 *)(*(long *)(param_1 + 8) + 0x50c));
          if ((uVar26 & 1) == 0) {
            local_6c[0] = *(uint3 *)PTR_DAT_04bb9cf0;
          }
          else {
            local_6c[0] = 0x80023;
            FUN_020fd3a0(local_6c,&local_90);
          }
          if ((local_6c[0] & 0xff) < 0x23) {
            uVar26 = (ulong)(uint)local_6c[0] & 0xff;
            if ((uint)(byte)PTR_DAT_04bc27f0[uVar26] < (local_6c[0] >> 8 & 0xff)) goto LAB_01f19e00;
            uVar22 = 0;
            if ((*(uint *)(PTR_DAT_04bc2a20 + uVar26 * 4) & 1 << (ulong)(local_6c[0] >> 8 & 0x1f))
                != 0) {
              uVar22 = uVar26;
            }
          }
          else {
LAB_01f19e00:
            uVar22 = 0;
          }
          FUN_01c23f70(lVar25,&local_2450,uVar4,uVar22,1,1);
          uVar26 = local_2450 & 0xffffffff;
          if (0 < (int)local_2450) {
            uVar22 = 0;
            do {
              if (uVar22 < (local_2450 & 0xffffffff)) {
                lVar25 = *(long *)(local_2448 + uVar22 * 8);
              }
              else {
                lVar25 = 0;
              }
              uVar19 = FUN_0277d7b4(lVar25 + 0x10,&local_810);
              if ((uVar19 & 1) != 0) {
                if ((((local_2484 & 1) != 0) && (*(long *)(lVar23 + 0x1bf1b8) != 0)) &&
                   (puVar24 = *(undefined8 **)(*(long *)(lVar23 + 0x1bf1b8) + 8),
                   puVar24 != (undefined8 *)0x0)) {
                  (**(code **)*puVar24)();
                }
                goto LAB_01f196d4;
              }
              uVar22 = uVar22 + 1;
            } while (uVar26 != uVar22);
          }
        }
        if ((((local_2484 & 1) != 0) && (*(long *)(lVar23 + 0x1bf1b8) != 0)) &&
           (puVar24 = *(undefined8 **)(*(long *)(lVar23 + 0x1bf1b8) + 8),
           puVar24 != (undefined8 *)0x0)) {
          (**(code **)*puVar24)();
        }
      }
    }
LAB_01f19eb4:
    uVar20 = 0x39;
  }
  return uVar20;
  while( true ) {
    uVar3 = uVar9 + 1;
    if ((*(uint *)(lVar15 + (ulong)(uVar3 >> 5) * 4) >> (ulong)(uVar3 & 0x1f) & 1) != 0)
    goto LAB_01f19b3c;
    if ((*(uint *)(lVar15 + (ulong)(uVar9 >> 5) * 4) >> (ulong)(uVar9 & 0x1f) & 1) != 0)
    goto LAB_01f19b40;
    uVar9 = uVar9 - 3;
    if (uVar9 == 0xfffffffd) break;
LAB_01f19d00:
    uVar3 = uVar9 + 2;
    if ((*(uint *)(lVar15 + (ulong)(uVar3 >> 5) * 4) >> (ulong)(uVar3 & 0x1f) & 1) != 0) {
LAB_01f19b3c:
      uVar9 = uVar3;
LAB_01f19b40:
      uVar26 = (ulong)(uVar9 + 1);
      goto LAB_01f19b44;
    }
  }
  uVar26 = 0;
LAB_01f19b44:
  if (iVar10 == (int)uVar26) goto LAB_01f1992c;
  goto LAB_01f19b4c;
}

