
void FUN_00887f80(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  char *__src;
  undefined *puVar9;
  byte bVar10;
  uint uVar11;
  uint *puVar12;
  short sVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  void *pvVar24;
  uint *puVar25;
  undefined8 uVar26;
  long lVar27;
  ushort *puVar28;
  long lVar29;
  char cVar30;
  uint uVar31;
  int iVar32;
  uint **ppuVar33;
  ulong uVar34;
  long *plVar35;
  undefined8 *puVar36;
  ulong *puVar37;
  ulong uVar38;
  undefined *puVar39;
  int *piVar40;
  ulong uVar41;
  int iVar42;
  uint *puVar43;
  long *plVar44;
  char *pcVar45;
  uint local_8ec;
  undefined8 local_870;
  undefined *local_868;
  undefined8 local_860;
  long local_858;
  uint local_10c;
  uint local_108;
  uint local_104;
  int local_100;
  uint local_f8;
  uint local_f4;
  undefined8 local_f0;
  uint **local_e8;
  undefined4 local_e0;
  char local_dc [63];
  undefined1 local_9d;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  uint *local_70 [2];
  
  if (param_2 == 0) {
    return;
  }
  FUN_00889778(param_2,PTR_DAT_04bb37e0);
  puVar37 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar37 == 0) {
    local_f0 = *(undefined ***)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)((ulong)local_f0 >> 0x20) < '\x05') {
      lVar23 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_f0);
      local_868 = (undefined *)(lVar23 + -0x15180);
      local_f0 = (undefined **)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_868);
    }
    puVar37 = &local_f0;
    uVar41 = (ulong)local_f0 >> 0x30;
    local_f0._0_6_ = CONCAT24(5,(undefined4)local_f0);
    local_f0 = (undefined **)(CONCAT26((short)uVar41,(undefined6)local_f0) & 0xff00ffffffffffff);
  }
  puVar6 = PTR_DAT_04bb57b8;
  uVar21 = *(uint *)(param_1 + 0x808);
  local_98 = (uint *)*puVar37;
  if ((0 < (int)uVar21) ||
     (((*(long *)(param_1 + 0x6f8) != 0 &&
       (puVar43 = *(uint **)(*(long *)(param_1 + 0x6f8) + 8), puVar43 != (uint *)0x0)) &&
      (uVar21 = *puVar43, 0 < (int)uVar21)))) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    uVar41 = 0;
    uVar22 = 0;
    puVar2 = PTR_DAT_04bb2f70 + 0x10;
    ppuVar3 = (undefined **)(PTR_DAT_04bb2bc0 + 0x10);
    puVar4 = PTR_DAT_04bbfe60 + 0x10;
    puVar5 = PTR_DAT_04bc0510 + 0x10;
LAB_0088811c:
    uVar17 = uVar22;
    if ((int)*(uint *)(param_1 + 0x808) < 1) {
      if (((((*(long *)(param_1 + 0x6f8) != 0) &&
            (puVar43 = *(uint **)(*(long *)(param_1 + 0x6f8) + 8), puVar43 != (uint *)0x0)) &&
           ((*(uint *)(param_1 + 0x710) <= uVar41 ||
            (*(char *)(*(long *)(param_1 + 0x718) + uVar41) != '\0')))) &&
          ((uVar41 < *puVar43 && (puVar43[1] != 0)))) && ((ushort)puVar43[2] != 0)) {
        iVar16 = 0xc;
        if (*(char *)((long)puVar43 + 10) != '\0') {
          iVar16 = 0x1c;
        }
        puVar43 = (uint *)((ulong)(puVar43[1] * (int)uVar41 + (uint)(ushort)puVar43[2] * 8 + iVar16)
                          + (long)puVar43);
        goto joined_r0x00888148;
      }
    }
    else if (uVar41 < *(uint *)(param_1 + 0x808)) {
      uVar38 = uVar41 & 0xffffffff;
      if (*(uint *)(param_1 + 0x7f8) <= uVar41) {
        uVar38 = 0;
      }
      puVar43 = *(uint **)(*(long *)(param_1 + 0x800) + uVar38 * 8);
joined_r0x00888148:
      if (puVar43 != (uint *)0x0) {
        if (((param_3 & 1) != 0) && (uVar14 = *puVar43, uVar14 != 0)) {
          cVar30 = *PTR_DAT_04bb57b0;
          do {
            if (cVar30 == '\0') {
              *(undefined8 *)puVar6 = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
              cVar30 = '\x01';
              *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
              uVar14 = *puVar43;
              *PTR_DAT_04bb57b0 = 1;
            }
            else {
              uVar31 = *(uint *)(puVar6 + 0x28);
              if (-1 < (int)uVar31) {
                if (((char *)((ulong)uVar31 + (long)puVar43) != (char *)0x0) &&
                   (*(char *)((ulong)uVar31 + (long)puVar43) != '\0')) goto LAB_00888110;
                break;
              }
              if (uVar31 != 0xffffffff) break;
            }
            if (((ulong)uVar14 == 0) || (lVar23 = (long)puVar43 - (ulong)uVar14, lVar23 == 0))
            break;
            lVar27 = 0xc;
            if (*(char *)(lVar23 + 10) != '\0') {
              lVar27 = 0x1c;
            }
            if (lVar27 + lVar23 == 0) break;
            uVar38 = (ulong)*(ushort *)(lVar23 + 8);
            *(undefined4 *)(puVar6 + 0x28) = 0xfffffffe;
            if (uVar38 == 0) break;
            piVar40 = (int *)(lVar27 + lVar23 + 4);
            while (piVar40[-1] != -0x4b0e54ce) {
              piVar40 = piVar40 + 2;
              uVar38 = uVar38 - 1;
              if (uVar38 == 0) goto LAB_008882b0;
            }
            iVar16 = 0;
            if (*piVar40 != -1) {
              iVar16 = *piVar40;
            }
            *(int *)(puVar6 + 0x28) = iVar16;
            uVar14 = *puVar43;
            if (uVar14 == 0) break;
          } while( true );
        }
LAB_008882b0:
        uVar14 = *puVar43;
        if (uVar14 != 0) {
          cVar30 = *PTR_DAT_04bb57b0;
          do {
            if (cVar30 == '\0') {
              *(undefined8 *)puVar6 = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
              cVar30 = '\x01';
              *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
              uVar14 = *puVar43;
              *PTR_DAT_04bb57b0 = 1;
            }
            else {
              uVar31 = *(uint *)(puVar6 + 0x1c);
              if (-1 < (int)uVar31) {
                pcVar45 = (char *)((ulong)uVar31 + (long)puVar43);
                goto LAB_0088838c;
              }
              if (uVar31 != 0xffffffff) break;
            }
            puVar25 = (uint *)(ulong)uVar14;
            pcVar45 = (char *)0x0;
            if ((puVar25 == (uint *)0x0) || (pcVar45 = (char *)0x0, puVar43 == puVar25))
            goto LAB_0088838c;
            lVar23 = 0xc;
            if (*(char *)((long)puVar43 + (10 - (long)puVar25)) != '\0') {
              lVar23 = 0x1c;
            }
            lVar23 = (long)puVar43 + (lVar23 - (long)puVar25);
            pcVar45 = (char *)0x0;
            if (lVar23 == 0) goto LAB_0088838c;
            uVar38 = (ulong)*(ushort *)((long)puVar43 + (8 - (long)puVar25));
            *(undefined4 *)(puVar6 + 0x1c) = 0xfffffffe;
            if (uVar38 == 0) break;
            piVar40 = (int *)(lVar23 + 4);
            while (piVar40[-1] != -0x41d928f2) {
              piVar40 = piVar40 + 2;
              uVar38 = uVar38 - 1;
              if (uVar38 == 0) goto LAB_00888388;
            }
            iVar16 = 0;
            if (*piVar40 != -1) {
              iVar16 = *piVar40;
            }
            *(int *)(puVar6 + 0x1c) = iVar16;
            uVar14 = *puVar43;
            if (uVar14 == 0) break;
          } while( true );
        }
LAB_00888388:
        pcVar45 = (char *)0x0;
LAB_0088838c:
        local_860 = PTR_DAT_04c47d00;
        if (pcVar45 != (char *)0x0) {
          local_860 = pcVar45;
        }
        local_868 = puVar1;
        uVar38 = FUN_0087c200(param_1,&local_868,&local_98,0);
        if ((uVar38 & 1) != 0) {
          uVar14 = *puVar43;
          if (uVar14 != 0) {
            cVar30 = *PTR_DAT_04bb57b0;
            do {
              if (cVar30 == '\0') {
                *(undefined8 *)puVar6 = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                cVar30 = '\x01';
                *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
                uVar14 = *puVar43;
                *PTR_DAT_04bb57b0 = 1;
              }
              else {
                uVar31 = *(uint *)(puVar6 + 0x20);
                if (-1 < (int)uVar31) {
                  pcVar45 = (char *)((ulong)uVar31 + (long)puVar43);
                  goto LAB_0088848c;
                }
                if (uVar31 != 0xffffffff) break;
              }
              puVar25 = (uint *)(ulong)uVar14;
              pcVar45 = (char *)0x0;
              if ((puVar25 == (uint *)0x0) || (pcVar45 = (char *)0x0, puVar43 == puVar25))
              goto LAB_0088848c;
              lVar23 = 0xc;
              if (*(char *)((long)puVar43 + (10 - (long)puVar25)) != '\0') {
                lVar23 = 0x1c;
              }
              lVar23 = (long)puVar43 + (lVar23 - (long)puVar25);
              pcVar45 = (char *)0x0;
              if (lVar23 == 0) goto LAB_0088848c;
              uVar38 = (ulong)*(ushort *)((long)puVar43 + (8 - (long)puVar25));
              *(undefined4 *)(puVar6 + 0x20) = 0xfffffffe;
              if (uVar38 == 0) break;
              piVar40 = (int *)(lVar23 + 4);
              while (piVar40[-1] != 0x46e66708) {
                piVar40 = piVar40 + 2;
                uVar38 = uVar38 - 1;
                if (uVar38 == 0) goto LAB_00888488;
              }
              iVar16 = 0;
              if (*piVar40 != -1) {
                iVar16 = *piVar40;
              }
              *(int *)(puVar6 + 0x20) = iVar16;
              uVar14 = *puVar43;
              if (uVar14 == 0) break;
            } while( true );
          }
LAB_00888488:
          pcVar45 = (char *)0x0;
LAB_0088848c:
          local_e0 = 0x40;
          local_9d = 0;
          __src = *(char **)PTR_PTR_04bb5818;
          if (pcVar45 != (char *)0x0) {
            __src = pcVar45;
          }
          local_e8 = (uint **)local_dc;
          if (local_dc != __src) {
            lVar23 = 0;
            do {
              if (__src[lVar23] == '\0') {
LAB_00888514:
                iVar16 = (int)lVar23;
joined_r0x00888518:
                if (0x3f < iVar16) {
                  iVar16 = 0x3f;
                }
                goto LAB_00888520;
              }
              if (__src[lVar23 + 1] == '\0') {
                lVar23 = lVar23 + 1;
                goto LAB_00888514;
              }
              if (__src[lVar23 + 2] == '\0') {
                iVar16 = (int)lVar23 + 2;
                goto joined_r0x00888518;
              }
              lVar23 = lVar23 + 3;
            } while (lVar23 != 0x80001);
            iVar16 = 0;
LAB_00888520:
            local_f0 = (undefined **)puVar2;
            memcpy(local_dc,__src,(long)iVar16);
            local_dc[iVar16] = '\0';
          }
          local_f4 = 0;
          uVar14 = 0;
          local_f0 = ppuVar3;
          do {
            pcVar45 = "";
            if (uVar14 < 0x13e) {
              pcVar45 = *(char **)(PTR_DAT_04bb5820 + (ulong)uVar14 * 8 + 0x1298);
            }
            (*(code *)local_f0[3])(&local_f0);
            if ((uint **)pcVar45 == local_e8) {
LAB_0088860c:
              local_f4 = uVar14;
              break;
            }
            if (*pcVar45 == *(char *)local_e8) {
              if (*pcVar45 == '\0') goto LAB_0088860c;
              lVar23 = 0x7fffe;
              ppuVar33 = local_e8;
              while( true ) {
                if (pcVar45[1] != *(char *)((long)ppuVar33 + 1)) break;
                if (pcVar45[1] == '\0') goto LAB_0088860c;
                if (pcVar45[2] != *(char *)((long)ppuVar33 + 2)) break;
                if (pcVar45[2] == '\0') goto LAB_0088860c;
                if ((lVar23 == 0) || (cVar30 = pcVar45[3], cVar30 != *(char *)((long)ppuVar33 + 3)))
                break;
                lVar23 = lVar23 + -3;
                ppuVar33 = (uint **)((long)ppuVar33 + 3);
                pcVar45 = pcVar45 + 3;
                if (cVar30 == '\0') goto LAB_0088860c;
              }
            }
            uVar31 = 0x13e;
            if ((int)uVar14 < 0x13e) {
              uVar31 = uVar14 + 1;
            }
            uVar14 = uVar31;
          } while (uVar31 != 0x13e);
          local_f8 = local_f4;
          if (local_f4 != 0) {
            local_868 = puVar4;
            memset(&local_860,0,0x754);
            uVar14 = nn::os::GetSystemTick();
            local_10c = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
            local_108 = (local_10c ^ local_10c >> 0x1e) * 0x6c078965 + 2;
            local_104 = (local_108 ^ local_108 >> 0x1e) * 0x6c078965 + 3;
            local_100 = (local_104 ^ local_104 >> 0x1e) * 0x6c078965 + 4;
            pvVar24 = (void *)(**(code **)(local_868 + 0x18))(&local_868);
            memset(pvVar24,0,0x754);
            local_88 = &local_f8;
            local_90 = &PTR_FUN_049ff4e8;
            FUN_008a1ba0(&local_868,&local_90);
            local_870 = CONCAT17((char)((ulong)local_870 >> 0x38),0x1010000);
            uVar14 = *puVar43;
            puVar25 = local_98;
            do {
              if (uVar14 != 0) {
                cVar30 = *PTR_DAT_04bb57b0;
                do {
                  if (cVar30 == '\0') {
                    *(undefined8 *)puVar6 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                    cVar30 = '\x01';
                    *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
                    uVar14 = *puVar43;
                    *PTR_DAT_04bb57b0 = 1;
                  }
                  else {
                    uVar31 = *(uint *)(puVar6 + 0x1c);
                    if (-1 < (int)uVar31) {
                      puVar39 = (undefined *)((ulong)uVar31 + (long)puVar43);
                      goto LAB_008887e8;
                    }
                    if (uVar31 != 0xffffffff) break;
                  }
                  puVar12 = (uint *)(ulong)uVar14;
                  puVar39 = (undefined *)0x0;
                  if ((puVar12 == (uint *)0x0) || (puVar39 = (undefined *)0x0, puVar43 == puVar12))
                  goto LAB_008887e8;
                  lVar23 = 0xc;
                  if (*(char *)((long)puVar43 + (10 - (long)puVar12)) != '\0') {
                    lVar23 = 0x1c;
                  }
                  lVar23 = (long)puVar43 + (lVar23 - (long)puVar12);
                  puVar39 = (undefined *)0x0;
                  if (lVar23 == 0) goto LAB_008887e8;
                  uVar38 = (ulong)*(ushort *)((long)puVar43 + (8 - (long)puVar12));
                  *(undefined4 *)(puVar6 + 0x1c) = 0xfffffffe;
                  if (uVar38 == 0) break;
                  piVar40 = (int *)(lVar23 + 4);
                  while (piVar40[-1] != -0x41d928f2) {
                    piVar40 = piVar40 + 2;
                    uVar38 = uVar38 - 1;
                    if (uVar38 == 0) goto LAB_008887e4;
                  }
                  iVar16 = 0;
                  if (*piVar40 != -1) {
                    iVar16 = *piVar40;
                  }
                  *(int *)(puVar6 + 0x1c) = iVar16;
                  uVar14 = *puVar43;
                  if (uVar14 == 0) break;
                } while( true );
              }
LAB_008887e4:
              puVar39 = (undefined *)0x0;
LAB_008887e8:
              puVar9 = PTR_DAT_04c47d00;
              if (puVar39 != (undefined *)0x0) {
                puVar9 = puVar39;
              }
              local_70[0] = puVar25;
              uVar15 = FUN_006bd550(puVar9,0);
              local_90 = (undefined **)CONCAT44(local_90._4_4_,uVar15);
              uVar26 = FUN_0088c0d0(param_1 + 8,&local_90);
              uVar38 = FUN_00875c10(param_1,uVar26,(ulong)puVar25 & 0xffffffff,
                                    (ulong)puVar25 >> 0x10 & 0xffffffff,
                                    (ulong)puVar25 >> 0x18 & 0xffffffff);
              if ((uVar38 & 1) == 0) goto code_r0x00888834;
              lVar23 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_70);
              local_90 = (undefined **)(lVar23 + -0x15180);
              puVar25 = (uint *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_90);
              uVar14 = *puVar43;
            } while( true );
          }
        }
      }
    }
    goto LAB_00888110;
  }
  uVar22 = 0;
LAB_00889248:
  puVar6 = PTR_DAT_04bb46b0;
  plVar44 = (long *)PTR_DAT_04bb43c0;
  lVar23 = *(long *)PTR_DAT_04bb46b0;
  if (lVar23 != 0) {
    plVar35 = *(long **)(lVar23 + 0x10);
    if ((*(byte *)(lVar23 + 0x453) & 1) == 0) {
      plVar35 = (long *)*plVar35;
    }
    else if ((plVar35 == (long *)0x0) || (plVar35 = (long *)plVar35[0x26], plVar35 == (long *)0x0))
    goto LAB_0088928c;
    (**(code **)(*plVar35 + 0x38))();
  }
LAB_0088928c:
  if ((param_3 & 1) == 0) goto LAB_008895fc;
  local_868 = PTR_DAT_04bb2020 + 0x10;
  local_860 = "RegionBigGame";
  uVar41 = FUN_0087c200(param_1,&local_868,&local_98,0);
  if ((uVar41 & 1) == 0) goto LAB_008895fc;
  local_70[0] = (uint *)CONCAT44(local_70[0]._4_4_,0xec);
  lVar23 = *(long *)puVar6;
  if (lVar23 == 0) {
LAB_00889348:
    iVar16 = 1;
  }
  else {
    puVar36 = *(undefined8 **)(lVar23 + 0x10);
    if ((*(byte *)(lVar23 + 0x453) & 1) == 0) {
      lVar23 = (**(code **)(*(long *)*puVar36 + 0x38))();
      if (lVar23 == 0) goto LAB_00889348;
      lVar23 = lVar23 + 0x70;
    }
    else if (((puVar36 == (undefined8 *)0x0) || ((long *)puVar36[0x26] == (long *)0x0)) ||
            (lVar23 = (**(code **)(*(long *)puVar36[0x26] + 0x38))(), lVar23 == 0))
    goto LAB_00889348;
    if ((*(long **)(lVar23 + 0x1c2520) == (long *)0x0) ||
       (puVar36 = (undefined8 *)**(long **)(lVar23 + 0x1c2520), puVar36 == (undefined8 *)0x0)) {
      uVar41 = 0;
    }
    else {
      uVar41 = (**(code **)*puVar36)();
      uVar41 = uVar41 & 0xffffffff;
    }
    sVar13 = (short)local_98;
    iVar16 = FUN_00a82f40((int)(short)local_98,local_98._2_1_,local_98._3_1_,1);
    uVar21 = iVar16 + sVar13 +
             (uint)*(byte *)(*(long *)(lVar23 + 0x1c2508) + *(long *)(lVar23 + 0x1c2500) + 1);
    uVar17 = uVar21 & 3;
    uVar21 = -uVar21;
    if (-1 < (int)uVar21) {
      uVar17 = -(uVar21 & 3);
    }
    if ((((uVar41 & 1) != 0) && (*(long *)(lVar23 + 0x1c2520) != 0)) &&
       (puVar36 = *(undefined8 **)(*(long *)(lVar23 + 0x1c2520) + 8), puVar36 != (undefined8 *)0x0))
    {
      (**(code **)*puVar36)();
    }
    iVar16 = uVar17 + 1;
  }
  local_868 = PTR_DAT_04bbfe60 + 0x10;
  memset(&local_860,0,0x754);
  uVar21 = nn::os::GetSystemTick();
  local_10c = (uVar21 ^ uVar21 >> 0x1e) * 0x6c078965 + 1;
  local_108 = (local_10c ^ local_10c >> 0x1e) * 0x6c078965 + 2;
  local_104 = (local_108 ^ local_108 >> 0x1e) * 0x6c078965 + 3;
  local_100 = (local_104 ^ local_104 >> 0x1e) * 0x6c078965 + 4;
  pvVar24 = (void *)(**(code **)(local_868 + 0x18))(&local_868);
  memset(pvVar24,0,0x754);
  local_e8 = local_70;
  local_f0 = &PTR_FUN_049ff4e8;
  FUN_008a1ba0(&local_868,&local_f0);
  puVar6 = PTR_DAT_04bb43c0;
  local_870 = CONCAT44(local_870._4_4_,0x37);
  local_e8 = (uint **)&local_870;
  local_f0 = &PTR_FUN_049ff448;
  uVar21 = 0;
  do {
    (**(code **)(local_868 + 0x10))(&local_90,&local_868,uVar21);
    lVar23 = (**(code **)(local_868 + 0x20))(&local_868);
    uVar17 = 1 << (ulong)(uVar21 & 0x1f);
    if ((*(uint *)(lVar23 + (ulong)(uVar21 >> 5) * 4) & uVar17) != 0) {
      lVar23 = *(long *)puVar6;
      uVar14 = FUN_0277d6c4(&local_90);
      if (*(long *)puVar6 != 0) {
        lVar23 = *(long *)(lVar23 + 0x57e58);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
        if (((uVar14 < *(uint *)(lVar23 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) &&
           (uVar41 = (*(code *)*local_f0)(&local_f0,&local_90), (uVar41 & 1) != 0))
        goto LAB_008894b4;
      }
      lVar23 = (**(code **)(local_868 + 0x18))(&local_868);
      lVar27 = (ulong)(uVar21 >> 5) * 4;
      *(uint *)(lVar23 + lVar27) = *(uint *)(lVar23 + lVar27) & (uVar17 ^ 0xffffffff);
    }
LAB_008894b4:
    uVar21 = uVar21 + 1;
  } while (uVar21 != 15000);
  (**(code **)(local_868 + 0x20))(&local_868);
  FUN_00889f80(&local_f0,&local_868,iVar16);
  plVar44 = (long *)PTR_DAT_04bb43c0;
  lVar23 = *(long *)PTR_DAT_04bb43c0;
  uVar21 = FUN_0277d6c4(&local_f0);
  if (*plVar44 != 0) {
    lVar23 = *(long *)(lVar23 + 0x57e58);
    uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
    if ((uVar21 < *(uint *)(lVar23 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar21 * 8) != 0)) {
      if (uVar22 == 0x40) {
        return;
      }
      puVar7 = (undefined4 *)(param_2 + ((long)((ulong)uVar22 << 0x20) >> 0x1d));
      *puVar7 = (undefined4)local_f0;
      puVar7[1] = local_f0._4_4_;
    }
  }
LAB_008895fc:
  uVar21 = 0;
  puVar6 = PTR_DAT_04bc0510 + 0x10;
  do {
    lVar23 = *plVar44;
    puVar8 = (undefined2 *)(param_2 + ((long)((ulong)uVar21 << 0x20) >> 0x1d));
    uVar22 = FUN_0277d6c4(puVar8);
    if (*plVar44 != 0) {
      lVar23 = *(long *)(lVar23 + 0x57e58);
      uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
      if ((uVar22 < *(uint *)(lVar23 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar22 * 8) != 0)) {
        iVar16 = FUN_0277d6c4(puVar8);
        if (iVar16 == 0x379f) {
          lVar23 = param_2 + (long)(int)uVar21 * 8;
          lVar27 = *plVar44;
          local_858 = 0;
          local_860 = (char *)CONCAT44(*(undefined4 *)(lVar23 + 4),
                                       CONCAT22(*(undefined2 *)(lVar23 + 2),*puVar8));
          local_868 = puVar6;
          uVar22 = FUN_0277d6c4(&local_860);
          if (*plVar44 != 0) {
            lVar27 = *(long *)(lVar27 + 0x57e58);
            uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
            if ((uVar22 < *(uint *)(lVar27 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar22 * 8) != 0)) {
              lVar27 = *(long *)PTR_DAT_04bc0428;
              uVar22 = FUN_0277d6c4(puVar8);
              uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
              if (uVar22 < *(uint *)(lVar27 + 0x1d8)) {
                lVar27 = *(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar22 * 8);
                if (lVar27 != 0) {
                  local_858 = lVar27;
                }
              }
            }
          }
          uVar41 = FUN_01ae6420(&local_868);
          if ((uVar41 & 1) != 0) {
            FUN_01b05630(&local_f0,&local_868);
            *puVar8 = (undefined2)local_f0;
            *(undefined1 *)(lVar23 + 2) = local_f0._2_1_;
            *(undefined1 *)(lVar23 + 3) = local_f0._3_1_;
            *(undefined4 *)(lVar23 + 4) = local_f0._4_4_;
          }
          plVar44 = (long *)PTR_DAT_04bb43c0;
        }
      }
    }
    uVar21 = uVar21 + 1;
  } while (uVar21 != 0x40);
  return;
code_r0x00888834:
  lVar23 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_70);
  local_90 = (undefined **)(lVar23 + 0x15180);
  local_870 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_90);
  iVar16 = FUN_00a82474(&local_98,&local_870);
  if ((param_3 & 1) == 0) {
LAB_00888a00:
    uVar14 = *puVar43;
    if (uVar14 != 0) {
      cVar30 = *PTR_DAT_04bb57b0;
LAB_00888a14:
      if (cVar30 == '\0') {
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        cVar30 = '\x01';
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        uVar14 = *puVar43;
        *PTR_DAT_04bb57b0 = 1;
joined_r0x00888a58:
        if (((ulong)uVar14 != 0) && (lVar23 = (long)puVar43 - (ulong)uVar14, lVar23 != 0)) {
          lVar27 = 0xc;
          if (*(char *)(lVar23 + 10) != '\0') {
            lVar27 = 0x1c;
          }
          if (lVar27 + lVar23 != 0) {
            uVar38 = (ulong)*(ushort *)(lVar23 + 8);
            *(undefined4 *)(puVar6 + 0x24) = 0xfffffffe;
            if (uVar38 != 0) goto code_r0x00888a8c;
          }
        }
      }
      else {
        uVar31 = *(uint *)(puVar6 + 0x24);
        if ((int)uVar31 < 0) {
          if (uVar31 == 0xffffffff) goto joined_r0x00888a58;
        }
        else if (((char *)((ulong)uVar31 + (long)puVar43) != (char *)0x0) &&
                (*(char *)((ulong)uVar31 + (long)puVar43) != '\0')) {
          if (uVar22 == 0x40) {
            return;
          }
          lVar27 = (**(code **)(local_868 + 0x20))(&local_868);
          lVar23 = 0;
          iVar42 = 0;
          do {
            puVar43 = (uint *)(lVar27 + lVar23);
            lVar23 = lVar23 + 4;
            uVar14 = *puVar43 - (*puVar43 >> 1 & 0x55555555);
            uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
            uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
            uVar14 = uVar14 + (uVar14 >> 8);
            iVar42 = (uVar14 + (uVar14 >> 0x10) & 0x3f) + iVar42;
          } while (lVar23 != 0x754);
          if (iVar42 != 0) {
            iVar20 = 0;
            do {
              lVar23 = *(long *)PTR_DAT_04bb46b0;
              if (lVar23 != 0) {
                puVar36 = *(undefined8 **)(lVar23 + 0x10);
                if ((*(byte *)(lVar23 + 0x453) & 1) == 0) {
                  lVar23 = (**(code **)(*(long *)*puVar36 + 0x38))();
                  if (lVar23 != 0) {
                    lVar23 = lVar23 + 0x70;
                    goto LAB_00888c6c;
                  }
                }
                else if (((puVar36 != (undefined8 *)0x0) && ((long *)puVar36[0x26] != (long *)0x0))
                        && (lVar23 = (**(code **)(*(long *)puVar36[0x26] + 0x38))(), lVar23 != 0)) {
LAB_00888c6c:
                  if ((*(long **)(lVar23 + 0x1c2520) == (long *)0x0) ||
                     (puVar36 = (undefined8 *)**(long **)(lVar23 + 0x1c2520),
                     puVar36 == (undefined8 *)0x0)) {
                    local_8ec = 0;
                  }
                  else {
                    local_8ec = (**(code **)*puVar36)();
                  }
                  FUN_00889f80(local_70,&local_868,iVar20 + 1);
                  puVar39 = PTR_DAT_04bb43c0;
                  local_80 = 0;
                  local_88 = local_70[0];
                  local_90 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
                  lVar27 = *(long *)PTR_DAT_04bb43c0;
                  uVar17 = FUN_0277d6c4(&local_88);
                  if (*(long *)puVar39 != 0) {
                    lVar27 = *(long *)(lVar27 + 0x57e58);
                    uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                    if ((uVar17 < *(uint *)(lVar27 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
                      lVar27 = *(long *)PTR_DAT_04bc0428;
                      uVar17 = FUN_0277d6c4(local_70);
                      uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                      if (uVar17 < *(uint *)(lVar27 + 0x1d8)) {
                        lVar27 = *(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar17 * 8);
                        if (lVar27 != 0) {
                          local_80 = lVar27;
                        }
                      }
                    }
                  }
                  iVar18 = FUN_01ad7260(&local_90);
                  iVar32 = (int)(short)local_98;
                  bVar10 = *(byte *)(*(long *)(lVar23 + 0x1c2508) + *(long *)(lVar23 + 0x1c2500) + 1
                                    );
                  iVar19 = FUN_01ad7260(&local_90);
                  if (iVar19 != 0) {
                    iVar19 = iVar16 + iVar32 + (uint)bVar10;
                    iVar32 = 0;
                    if (iVar18 != 0) {
                      iVar32 = iVar19 / iVar18;
                    }
                    iVar19 = iVar19 - iVar32 * iVar18;
                    if (((iVar19 == 0) || (iVar18 = FUN_01ad7260(&local_90), iVar19 < iVar18)) &&
                       (puVar28 = (ushort *)FUN_01afd600(&local_90), puVar28 != (ushort *)0x0)) {
                      *puVar28 = *puVar28 & 0xfff8 | (ushort)iVar19 & 7;
                    }
                  }
                  uVar38 = (ulong)uVar22;
                  uVar22 = uVar22 + 1;
                  puVar7 = (undefined4 *)(param_2 + ((long)(uVar38 << 0x20) >> 0x1d));
                  *puVar7 = (undefined4)local_88;
                  puVar7[1] = local_88._4_4_;
                  if ((((local_8ec & 1) != 0) && (*(long *)(lVar23 + 0x1c2520) != 0)) &&
                     (puVar36 = *(undefined8 **)(*(long *)(lVar23 + 0x1c2520) + 8),
                     puVar36 != (undefined8 *)0x0)) {
                    (**(code **)*puVar36)();
                  }
                }
              }
              iVar20 = iVar20 + 1;
              uVar17 = uVar22;
            } while (iVar20 != iVar42);
          }
          goto LAB_00888110;
        }
      }
    }
  }
  else {
    uVar14 = *puVar43;
    if (uVar14 != 0) {
      cVar30 = *PTR_DAT_04bb57b0;
      do {
        uVar38 = (ulong)uVar14;
        if (cVar30 == '\0') {
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          cVar30 = '\x01';
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          uVar38 = (ulong)*puVar43;
          *PTR_DAT_04bb57b0 = 1;
        }
        else {
          uVar14 = *(uint *)(puVar6 + 0x2c);
          if (-1 < (int)uVar14) {
            if (((char *)((ulong)uVar14 + (long)puVar43) == (char *)0x0) ||
               (*(char *)((ulong)uVar14 + (long)puVar43) == '\0')) goto LAB_00888a00;
            uVar34 = (ulong)*(uint *)(puVar6 + 0x24);
            goto LAB_00888980;
          }
          if (uVar14 != 0xffffffff) goto LAB_00888a00;
        }
        if ((uVar38 == 0) || (lVar23 = (long)puVar43 - uVar38, lVar23 == 0)) goto LAB_00888a00;
        lVar27 = 0xc;
        if (*(char *)(lVar23 + 10) != '\0') {
          lVar27 = 0x1c;
        }
        if (lVar27 + lVar23 == 0) goto LAB_00888a00;
        uVar38 = (ulong)*(ushort *)(lVar23 + 8);
        *(undefined4 *)(puVar6 + 0x2c) = 0xfffffffe;
        if (uVar38 == 0) goto LAB_00888a00;
        piVar40 = (int *)(lVar27 + lVar23 + 4);
        while (piVar40[-1] != 0x1c2c02f5) {
          piVar40 = piVar40 + 2;
          uVar38 = uVar38 - 1;
          if (uVar38 == 0) goto LAB_00888a00;
        }
        iVar42 = 0;
        if (*piVar40 != -1) {
          iVar42 = *piVar40;
        }
        *(int *)(puVar6 + 0x2c) = iVar42;
        uVar14 = *puVar43;
      } while (uVar14 != 0);
    }
  }
LAB_00888b54:
  lVar27 = (**(code **)(local_868 + 0x20))(&local_868);
  lVar23 = 0;
  iVar16 = 0;
  do {
    iVar42 = iVar16;
    puVar43 = (uint *)(lVar27 + lVar23);
    lVar23 = lVar23 + 4;
    uVar14 = *puVar43 - (*puVar43 >> 1 & 0x55555555);
    uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
    uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
    uVar14 = uVar14 + (uVar14 >> 8);
    uVar14 = uVar14 + (uVar14 >> 0x10);
    iVar16 = (uVar14 & 0x3f) + iVar42;
  } while (lVar23 != 0x754);
  if (iVar16 != 0) {
    iVar16 = 0;
    do {
      if (uVar22 == 0x40) {
        return;
      }
      iVar16 = iVar16 + 1;
      FUN_00889f80(&local_90,&local_868,iVar16);
      puVar7 = (undefined4 *)(param_2 + ((long)((ulong)uVar22 << 0x20) >> 0x1d));
      uVar22 = uVar22 + 1;
      *puVar7 = (undefined4)local_90;
      puVar7[1] = local_90._4_4_;
      uVar17 = uVar22;
    } while (iVar42 + (uVar14 & 0x3f) != iVar16);
  }
LAB_00888110:
  uVar22 = uVar17;
  uVar41 = uVar41 + 1;
  if (uVar41 == uVar21) goto LAB_00889248;
  goto LAB_0088811c;
LAB_00888980:
  if ((int)uVar34 < 0) {
    if ((uVar34 == 0xffffffff) && (lVar23 = (long)puVar43 - uVar38, lVar23 != 0)) {
      lVar27 = 0xc;
      if (*(char *)(lVar23 + 10) != '\0') {
        lVar27 = 0x1c;
      }
      if (lVar27 + lVar23 != 0) {
        uVar38 = (ulong)*(ushort *)(lVar23 + 8);
        *(undefined4 *)(puVar6 + 0x24) = 0xfffffffe;
        if (uVar38 != 0) goto code_r0x008889c4;
      }
    }
  }
  else if (((char *)(uVar34 + (long)puVar43) != (char *)0x0) &&
          (*(char *)(uVar34 + (long)puVar43) != '\0')) {
    if (uVar22 == 0x40) {
      return;
    }
    (**(code **)(local_868 + 0x20))(&local_868);
    lVar23 = *(long *)PTR_DAT_04bb46b0;
    if (lVar23 == 0) goto LAB_00888110;
    puVar36 = *(undefined8 **)(lVar23 + 0x10);
    if ((*(byte *)(lVar23 + 0x453) & 1) == 0) {
      lVar23 = (**(code **)(*(long *)*puVar36 + 0x38))();
      if (lVar23 == 0) goto LAB_00888110;
      lVar23 = lVar23 + 0x70;
    }
    else if (((puVar36 == (undefined8 *)0x0) || ((long *)puVar36[0x26] == (long *)0x0)) ||
            (lVar23 = (**(code **)(*(long *)puVar36[0x26] + 0x38))(), lVar23 == 0))
    goto LAB_00888110;
    lVar29 = (**(code **)(local_868 + 0x20))(&local_868);
    lVar27 = 0;
    iVar42 = 0;
    do {
      puVar43 = (uint *)(lVar29 + lVar27);
      lVar27 = lVar27 + 4;
      uVar17 = *puVar43 - (*puVar43 >> 1 & 0x55555555);
      uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
      uVar17 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
      uVar17 = uVar17 + (uVar17 >> 8);
      iVar42 = (uVar17 + (uVar17 >> 0x10) & 0x3f) + iVar42;
    } while (lVar27 != 0x754);
    if ((*(long **)(lVar23 + 0x1c2520) == (long *)0x0) ||
       (puVar36 = (undefined8 *)**(long **)(lVar23 + 0x1c2520), puVar36 == (undefined8 *)0x0)) {
      local_8ec = 0;
    }
    else {
      local_8ec = (**(code **)*puVar36)();
    }
    iVar20 = iVar16 + (short)local_98 +
             (uint)*(byte *)(*(long *)(lVar23 + 0x1c2508) + *(long *)(lVar23 + 0x1c2500) + 1);
    iVar18 = 0;
    if (iVar42 != 0) {
      iVar18 = iVar20 / iVar42;
    }
    FUN_00889f80(local_70,&local_868,(iVar20 - iVar18 * iVar42) + 1);
    puVar39 = PTR_DAT_04bb43c0;
    local_80 = 0;
    local_88 = local_70[0];
    lVar27 = *(long *)PTR_DAT_04bb43c0;
    local_90 = (undefined **)puVar5;
    uVar17 = FUN_0277d6c4(&local_88);
    if (*(long *)puVar39 != 0) {
      lVar27 = *(long *)(lVar27 + 0x57e58);
      uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
      if ((uVar17 < *(uint *)(lVar27 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
        lVar27 = *(long *)PTR_DAT_04bc0428;
        uVar17 = FUN_0277d6c4(local_70);
        uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
        if (uVar17 < *(uint *)(lVar27 + 0x1d8)) {
          lVar27 = *(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar17 * 8);
          if (lVar27 != 0) {
            local_80 = lVar27;
          }
        }
      }
    }
    iVar20 = FUN_01ad7260(&local_90);
    sVar13 = (short)local_98;
    bVar10 = *(byte *)(*(long *)(lVar23 + 0x1c2508) + *(long *)(lVar23 + 0x1c2500) + 1);
    iVar18 = FUN_01ad7260(&local_90);
    if (iVar18 != 0) {
      iVar18 = 0;
      if (iVar42 != 0) {
        iVar18 = iVar16 / iVar42;
      }
      iVar18 = iVar18 + (int)sVar13 + (uint)bVar10;
      iVar16 = 0;
      if (iVar20 != 0) {
        iVar16 = iVar18 / iVar20;
      }
      iVar18 = iVar18 - iVar16 * iVar20;
      if (((iVar18 == 0) || (iVar16 = FUN_01ad7260(&local_90), iVar18 < iVar16)) &&
         (puVar28 = (ushort *)FUN_01afd600(&local_90), puVar28 != (ushort *)0x0)) {
        *puVar28 = *puVar28 & 0xfff8 | (ushort)iVar18 & 7;
      }
    }
    puVar7 = (undefined4 *)(param_2 + ((long)((ulong)uVar22 << 0x20) >> 0x1d));
    *puVar7 = (undefined4)local_88;
    puVar7[1] = local_88._4_4_;
    uVar17 = uVar22 + 1;
    if (((local_8ec & 1) != 0) && (*(long *)(lVar23 + 0x1c2520) != 0)) {
      puVar36 = *(undefined8 **)(*(long *)(lVar23 + 0x1c2520) + 8);
      goto joined_r0x00889204;
    }
    goto LAB_00888110;
  }
  goto LAB_00888e74;
code_r0x008889c4:
  puVar25 = (uint *)(lVar27 + lVar23 + 4);
  while (puVar25[-1] != 0x3fc005f0) {
    puVar25 = puVar25 + 2;
    uVar38 = uVar38 - 1;
    if (uVar38 == 0) goto LAB_00888e74;
  }
  uVar34 = 0;
  if (*puVar25 != 0xffffffff) {
    uVar34 = (ulong)*puVar25;
  }
  *(int *)(puVar6 + 0x24) = (int)uVar34;
  uVar38 = (ulong)*puVar43;
  if (*puVar43 == 0) goto LAB_00888e74;
  goto LAB_00888980;
LAB_00888e74:
  if (uVar22 == 0x40) {
    return;
  }
  lVar23 = *(long *)PTR_DAT_04bb46b0;
  if (lVar23 != 0) {
    puVar36 = *(undefined8 **)(lVar23 + 0x10);
    if ((*(byte *)(lVar23 + 0x453) & 1) == 0) {
      lVar23 = (**(code **)(*(long *)*puVar36 + 0x38))();
      if (lVar23 == 0) goto LAB_00888110;
      lVar23 = lVar23 + 0x70;
    }
    else if (((puVar36 == (undefined8 *)0x0) || ((long *)puVar36[0x26] == (long *)0x0)) ||
            (lVar23 = (**(code **)(*(long *)puVar36[0x26] + 0x38))(), lVar23 == 0))
    goto LAB_00888110;
    if ((*(long **)(lVar23 + 0x1c2520) == (long *)0x0) ||
       (puVar36 = (undefined8 *)**(long **)(lVar23 + 0x1c2520), puVar36 == (undefined8 *)0x0)) {
      uVar14 = 0;
    }
    else {
      uVar14 = (**(code **)*puVar36)();
    }
    sVar13 = (short)local_98;
    bVar10 = *(byte *)(*(long *)(lVar23 + 0x1c2508) + *(long *)(lVar23 + 0x1c2500) + 1);
    lVar29 = (**(code **)(local_868 + 0x20))(&local_868);
    lVar27 = 0;
    uVar17 = 0;
    do {
      puVar43 = (uint *)(lVar29 + lVar27);
      lVar27 = lVar27 + 4;
      uVar31 = *puVar43 - (*puVar43 >> 1 & 0x55555555);
      uVar31 = (uVar31 >> 2 & 0x33333333) + (uVar31 & 0x33333333);
      uVar31 = uVar31 + (uVar31 >> 4) & 0xf0f0f0f;
      uVar31 = uVar31 + (uVar31 >> 8);
      uVar17 = (uVar31 + (uVar31 >> 0x10) & 0x3f) + uVar17;
    } while (lVar27 != 0x754);
    uVar31 = iVar16 + sVar13 + (uint)bVar10;
    uVar11 = 0;
    if (uVar17 != 0) {
      uVar11 = uVar31 / uVar17;
    }
    FUN_00889f80(&local_90,&local_868,(uVar31 - uVar11 * uVar17) + 1);
    puVar7 = (undefined4 *)(param_2 + ((long)((ulong)uVar22 << 0x20) >> 0x1d));
    *puVar7 = (undefined4)local_90;
    puVar7[1] = local_90._4_4_;
    uVar17 = uVar22 + 1;
    if (((uVar14 & 1) != 0) && (*(long *)(lVar23 + 0x1c2520) != 0)) {
      puVar36 = *(undefined8 **)(*(long *)(lVar23 + 0x1c2520) + 8);
joined_r0x00889204:
      uVar17 = uVar22 + 1;
      if (puVar36 != (undefined8 *)0x0) {
        (**(code **)*puVar36)();
        uVar17 = uVar22 + 1;
      }
    }
  }
  goto LAB_00888110;
code_r0x00888a8c:
  piVar40 = (int *)(lVar27 + lVar23 + 4);
  while (piVar40[-1] != 0x3fc005f0) {
    piVar40 = piVar40 + 2;
    uVar38 = uVar38 - 1;
    if (uVar38 == 0) goto LAB_00888b54;
  }
  iVar42 = 0;
  if (*piVar40 != -1) {
    iVar42 = *piVar40;
  }
  *(int *)(puVar6 + 0x24) = iVar42;
  uVar14 = *puVar43;
  if (uVar14 == 0) goto LAB_00888b54;
  goto LAB_00888a14;
}

