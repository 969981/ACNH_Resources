
void FUN_021a17a0(long param_1,ulong param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  uint uVar3;
  ushort uVar4;
  byte bVar5;
  short sVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  undefined4 uVar14;
  ulong uVar15;
  uint *puVar16;
  ushort *puVar17;
  int iVar18;
  long *plVar19;
  short *psVar20;
  undefined1 *puVar21;
  long lVar22;
  undefined1 *puVar23;
  char cVar24;
  uint uVar25;
  uint *puVar26;
  long lVar27;
  int *piVar28;
  long lVar29;
  uint uVar30;
  undefined8 uVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  undefined8 *puVar35;
  float fVar36;
  undefined *local_f0;
  char *local_e8;
  undefined8 local_e0;
  char *local_d8;
  undefined *local_d0;
  char *local_c8;
  int local_c0;
  char local_bc [63];
  undefined1 local_7d;
  CalendarTime local_68 [4];
  CalendarTime local_64 [4];
  
  puVar35 = (undefined8 *)PTR_DAT_04bb27d0;
  puVar7 = PTR_DAT_04bb2020;
  lVar29 = *(long *)PTR_DAT_04bb32f0;
  plVar19 = *(long **)PTR_DAT_04bb27d0;
  lVar27 = *plVar19;
  bVar5 = *(byte *)(lVar27 + 0x473);
  if ((long)(char)bVar5 == 0xffffffffffffffff) {
LAB_021a1818:
    bVar12 = true;
    if (lVar29 == 0) goto LAB_021a18c4;
LAB_021a1834:
    if ((plVar19[5] != 0) && ((int)plVar19[0x10] == 1)) goto LAB_021a18c4;
    sVar6 = *(short *)PTR_DAT_04bb6298;
    if (sVar6 != -1) {
      local_d0 = (undefined *)CONCAT44(local_d0._4_4_,0x20);
      puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8;
      if (0xff < (uint)(int)sVar6) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar2 + 4) & 1) != 0) goto LAB_021a18c4;
    }
    local_d0 = PTR_DAT_04bb2020 + 0x10;
    local_c8 = "TodayGlobalEventId";
    iVar13 = FUN_0273ea30(&local_d0);
    if (iVar13 == 0xffff) goto LAB_021a18c4;
    FUN_00882630(&local_d0,lVar29);
    FUN_00887de0(&local_e0,lVar29,&local_d0);
    local_c0 = 0x40;
    local_7d = 0;
    local_d0 = PTR_DAT_04bb2f70 + 0x10;
    local_c8 = local_bc;
    (**(code **)(local_e0 + 0x18))(&local_e0);
    pcVar10 = local_d8;
    if (local_bc != local_d8) {
      (**(code **)(local_e0 + 0x18))(&local_e0);
      lVar27 = 0;
      do {
        if (local_d8[lVar27] == '\0') goto LAB_021a1f3c;
        if (local_d8[lVar27 + 1] == '\0') {
          lVar27 = lVar27 + 1;
          goto LAB_021a1f3c;
        }
        if (local_d8[lVar27 + 2] == '\0') {
          lVar27 = lVar27 + 2;
          goto LAB_021a1f3c;
        }
        lVar27 = lVar27 + 3;
      } while (lVar27 != 0x80001);
      lVar27 = 0;
LAB_021a1f3c:
      iVar13 = (int)lVar27;
      if (local_c0 <= (int)lVar27) {
        iVar13 = local_c0 + -1;
      }
      memcpy(local_bc,pcVar10,(long)iVar13);
      local_bc[iVar13] = '\0';
    }
    local_e0 = puVar7 + 0x10;
    local_d0 = PTR_DAT_04bb2bc0 + 0x10;
    local_d8 = "FishingConvention";
    local_c8[(long)local_c0 + -1] = '\0';
    (**(code **)(PTR_DAT_04bb2bc0 + 0x28))(&local_d0);
    pcVar10 = local_c8;
    (**(code **)(local_e0 + 0x18))(&local_e0);
    if (pcVar10 == local_d8) {
LAB_021a20bc:
      uVar31 = 1;
    }
    else {
      uVar15 = 0;
      bVar11 = true;
      do {
        if (local_c8[uVar15] != local_d8[uVar15]) break;
        if (local_c8[uVar15] == '\0') {
          if (bVar11) goto LAB_021a20bc;
          break;
        }
        bVar11 = uVar15 < 0x80000;
        uVar15 = uVar15 + 1;
      } while (uVar15 != 0x80001);
      local_f0 = puVar7 + 0x10;
      local_e8 = "InsectConvention";
      (**(code **)(local_d0 + 0x18))(&local_d0);
      (**(code **)(local_d0 + 0x18))(&local_d0);
      pcVar10 = local_c8;
      (**(code **)(local_f0 + 0x18))(&local_f0);
      if (pcVar10 == local_e8) goto LAB_021a20bc;
      if (*local_c8 == *local_e8) {
        if (*local_c8 != '\0') {
          lVar27 = 0;
          do {
            if ((lVar27 == 0x80000) || (local_c8[lVar27 + 1] != local_e8[lVar27 + 1]))
            goto LAB_021a20c8;
            if (local_c8[lVar27 + 1] == '\0') break;
            lVar29 = lVar27 + 2;
            if (local_c8[lVar29] != local_e8[lVar27 + 2]) goto LAB_021a20c8;
            lVar27 = lVar27 + 2;
          } while (local_c8[lVar29] != '\0');
        }
        goto LAB_021a20bc;
      }
LAB_021a20c8:
      local_e0 = puVar7 + 0x10;
      local_d8 = "Countdown";
      (**(code **)(local_d0 + 0x18))(&local_d0);
      (**(code **)(local_d0 + 0x18))(&local_d0);
      pcVar10 = local_c8;
      (**(code **)(local_e0 + 0x18))(&local_e0);
      puVar8 = PTR_DAT_04bb6380;
      puVar2 = PTR_DAT_04bb2208;
      if (pcVar10 == local_d8) {
LAB_021a2160:
        if (!bVar12) goto LAB_021a328c;
        uVar30 = *(uint *)(param_1 + 0x55f80) - (*(uint *)(param_1 + 0x55f80) >> 1 & 0x55555555);
        uVar30 = (uVar30 >> 2 & 0x33333333) + (uVar30 & 0x33333333);
        uVar30 = uVar30 + (uVar30 >> 4) & 0xf0f0f0f;
        uVar30 = uVar30 + (uVar30 >> 8);
        if ((uVar30 + (uVar30 >> 0x10) & 0x3f) != 0) {
          lVar27 = 0;
          do {
            if ((*(char *)(param_1 + lVar27 * 0xba0 + 0xaf9) == '\0') ||
               ((*(uint *)(param_1 + 0x55f80) >> (ulong)((uint)lVar27 & 0x1f) & 1) == 0)) {
              lVar29 = *(long *)puVar2;
              uVar14 = FUN_006bd550("CountdownFieldNpc",0);
              local_e0 = (undefined *)CONCAT44(local_e0._4_4_,uVar14);
              puVar16 = (uint *)FUN_021cb820(lVar29 + 0x660,&local_e0);
              if (puVar16 != (uint *)0x0) {
                puVar21 = (undefined1 *)(param_1 + lVar27 * 0xba0 + 0x818);
                if (*puVar16 != 0) {
                  cVar24 = *PTR_DAT_04bb6378;
                  do {
                    if (cVar24 == '\0') {
                      cVar24 = '\x01';
                      *PTR_DAT_04bb6378 = 1;
                      *(undefined8 *)puVar8 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
                      uVar30 = *puVar16;
                    }
                    else {
                      uVar30 = *(uint *)(puVar8 + 8);
                      if (-1 < (int)uVar30) {
                        if (((ushort *)((ulong)uVar30 + (long)puVar16) != (ushort *)0x0) &&
                           (uVar4 = *(ushort *)((ulong)uVar30 + (long)puVar16), uVar4 < 0x80)) {
                          puVar21 = puVar21 + uVar4;
                        }
                        break;
                      }
                      if (uVar30 != 0xffffffff) break;
                      uVar30 = *puVar16;
                    }
                    if ((uVar30 == 0) || (puVar26 = (uint *)(ulong)uVar30, puVar16 == puVar26))
                    break;
                    lVar29 = 0xc;
                    if (*(char *)((long)puVar16 + (10 - (long)puVar26)) != '\0') {
                      lVar29 = 0x1c;
                    }
                    lVar29 = (long)puVar16 + (lVar29 - (long)puVar26);
                    if (lVar29 == 0) break;
                    uVar15 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar26));
                    *(undefined4 *)(puVar8 + 8) = 0xfffffffe;
                    if (uVar15 == 0) break;
                    piVar28 = (int *)(lVar29 + 4);
                    while (piVar28[-1] != 0x54706054) {
                      piVar28 = piVar28 + 2;
                      uVar15 = uVar15 - 1;
                      if (uVar15 == 0) goto LAB_021a21cc;
                    }
                    iVar13 = 0;
                    if (*piVar28 != -1) {
                      iVar13 = *piVar28;
                    }
                    *(int *)(puVar8 + 8) = iVar13;
                    if (*puVar16 == 0) break;
                  } while( true );
                }
LAB_021a21cc:
                *puVar21 = 0;
              }
            }
            else {
              lVar29 = *(long *)puVar2;
              uVar14 = FUN_006bd550("CountdownFieldNpc",0);
              local_e0 = (undefined *)CONCAT44(local_e0._4_4_,uVar14);
              puVar16 = (uint *)FUN_021cb820(lVar29 + 0x660,&local_e0);
              if (puVar16 != (uint *)0x0) {
                puVar21 = (undefined1 *)(param_1 + lVar27 * 0xba0 + 0x818);
                if (*puVar16 != 0) {
                  cVar24 = *PTR_DAT_04bb6378;
                  do {
                    if (cVar24 == '\0') {
                      cVar24 = '\x01';
                      *PTR_DAT_04bb6378 = 1;
                      *(undefined8 *)puVar8 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
                    }
                    else {
                      uVar30 = *(uint *)(puVar8 + 8);
                      if (-1 < (int)uVar30) {
                        if (((ushort *)((ulong)uVar30 + (long)puVar16) != (ushort *)0x0) &&
                           (uVar4 = *(ushort *)((ulong)uVar30 + (long)puVar16), uVar4 < 0x80)) {
                          puVar21 = puVar21 + uVar4;
                        }
                        break;
                      }
                      if (uVar30 != 0xffffffff) break;
                    }
                    puVar26 = (uint *)(ulong)*puVar16;
                    if ((*puVar16 == 0) || (puVar16 == puVar26)) break;
                    lVar29 = 0xc;
                    if (*(char *)((long)puVar16 + (10 - (long)puVar26)) != '\0') {
                      lVar29 = 0x1c;
                    }
                    lVar29 = (long)puVar16 + (lVar29 - (long)puVar26);
                    if (lVar29 == 0) break;
                    uVar15 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar26));
                    *(undefined4 *)(puVar8 + 8) = 0xfffffffe;
                    if (uVar15 == 0) break;
                    piVar28 = (int *)(lVar29 + 4);
                    while (piVar28[-1] != 0x54706054) {
                      piVar28 = piVar28 + 2;
                      uVar15 = uVar15 - 1;
                      if (uVar15 == 0) goto LAB_021a2424;
                    }
                    iVar13 = 0;
                    if (*piVar28 != -1) {
                      iVar13 = *piVar28;
                    }
                    *(int *)(puVar8 + 8) = iVar13;
                    if (*puVar16 == 0) break;
                  } while( true );
                }
LAB_021a2424:
                *puVar21 = 1;
              }
            }
            lVar27 = lVar27 + 1;
          } while (lVar27 != 10);
          goto LAB_021a328c;
        }
        iVar13 = *(int *)(param_1 + 0x7440);
        lVar27 = 0;
        uVar30 = 0;
        do {
          lVar29 = param_1 + lVar27 * 0xba0;
          uVar33 = 0;
          if (*(char *)(lVar29 + 0xaf9) != '\0') {
            uVar33 = 1 << (ulong)((uint)lVar27 & 0x1f);
          }
          lVar22 = *(long *)PTR_DAT_04bb2208;
          uVar14 = FUN_006bd550("CountdownFieldNpc",0);
          local_e0 = (undefined *)CONCAT44(local_e0._4_4_,uVar14);
          puVar16 = (uint *)FUN_021cb820(lVar22 + 0x660,&local_e0);
          if (puVar16 != (uint *)0x0) {
            puVar21 = (undefined1 *)(lVar29 + 0x818);
            if (*puVar16 != 0) {
              cVar24 = *PTR_DAT_04bb6378;
              do {
                if (cVar24 == '\0') {
                  cVar24 = '\x01';
                  *PTR_DAT_04bb6378 = 1;
                  *(undefined8 *)puVar8 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
                  uVar25 = *puVar16;
                }
                else {
                  uVar25 = *(uint *)(puVar8 + 8);
                  if (-1 < (int)uVar25) {
                    if (((ushort *)((ulong)uVar25 + (long)puVar16) != (ushort *)0x0) &&
                       (uVar4 = *(ushort *)((ulong)uVar25 + (long)puVar16), uVar4 < 0x80)) {
                      puVar21 = puVar21 + uVar4;
                    }
                    break;
                  }
                  if (uVar25 != 0xffffffff) break;
                  uVar25 = *puVar16;
                }
                if ((uVar25 == 0) || (puVar26 = (uint *)(ulong)uVar25, puVar16 == puVar26)) break;
                lVar29 = 0xc;
                if (*(char *)((long)puVar16 + (10 - (long)puVar26)) != '\0') {
                  lVar29 = 0x1c;
                }
                lVar29 = (long)puVar16 + (lVar29 - (long)puVar26);
                if (lVar29 == 0) break;
                uVar15 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar26));
                *(undefined4 *)(puVar8 + 8) = 0xfffffffe;
                if (uVar15 == 0) break;
                piVar28 = (int *)(lVar29 + 4);
                while (piVar28[-1] != 0x54706054) {
                  piVar28 = piVar28 + 2;
                  uVar15 = uVar15 - 1;
                  if (uVar15 == 0) goto LAB_021a32cc;
                }
                iVar32 = 0;
                if (*piVar28 != -1) {
                  iVar32 = *piVar28;
                }
                *(int *)(puVar8 + 8) = iVar32;
                if (*puVar16 == 0) break;
              } while( true );
            }
LAB_021a32cc:
            *puVar21 = 0;
          }
          lVar27 = lVar27 + 1;
          uVar30 = uVar33 | uVar30;
        } while (lVar27 != 10);
        iVar13 = (int)((float)iVar13 * 0.7 + 0.5);
        if (iVar13 == 0) goto LAB_021a328c;
        uVar33 = uVar30 - (uVar30 >> 1 & 0x55555555);
        uVar33 = (uVar33 >> 2 & 0x33333333) + (uVar33 & 0x33333333);
        uVar33 = uVar33 + (uVar33 >> 4) & 0xf0f0f0f;
        uVar33 = uVar33 + (uVar33 >> 8);
        uVar33 = uVar33 + (uVar33 >> 0x10) & 0x3f;
        do {
          puVar16 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
          uVar34 = puVar16[3];
          uVar25 = *puVar16 ^ *puVar16 << 0xb;
          *puVar16 = puVar16[1];
          puVar16[1] = puVar16[2];
          uVar3 = uVar25 >> 8 ^ uVar34 >> 0x13 ^ uVar25 ^ uVar34;
          puVar16[2] = uVar34;
          puVar16[3] = uVar3;
          uVar34 = 0xffffffff;
          uVar25 = uVar30 - (uVar30 >> 1 & 0x55555555);
          uVar25 = (uVar25 >> 2 & 0x33333333) + (uVar25 & 0x33333333);
          uVar25 = uVar25 + (uVar25 >> 4) & 0xf0f0f0f;
          uVar25 = uVar25 + (uVar25 >> 8);
          if ((int)((ulong)uVar3 * (ulong)uVar33 >> 0x20) + 1 <=
              (int)(uVar25 + (uVar25 >> 0x10) & 0x3f) && uVar30 != 0) {
            iVar32 = (int)((ulong)uVar3 * (ulong)uVar33 >> 0x20) + 2;
            uVar25 = uVar30;
            do {
              iVar32 = iVar32 + -1;
              if (iVar32 < 2) {
                uVar25 = uVar25 - 1 & (uVar25 ^ 0xffffffff);
                uVar25 = uVar25 - (uVar25 >> 1 & 0x55555555);
                uVar25 = (uVar25 >> 2 & 0x33333333) + (uVar25 & 0x33333333);
                uVar25 = uVar25 + (uVar25 >> 4) & 0xf0f0f0f;
                uVar25 = uVar25 + (uVar25 >> 8);
                uVar34 = uVar25 + (uVar25 >> 0x10) & 0x3f;
                goto LAB_021a357c;
              }
              uVar25 = uVar25 - 1 & uVar25;
            } while (uVar25 != 0);
            uVar34 = 0xffffffff;
          }
LAB_021a357c:
          lVar27 = param_1 + (ulong)uVar34 * 0xba0;
          if (9 < uVar34) {
            lVar27 = param_1;
          }
          lVar29 = *(long *)PTR_DAT_04bb2208;
          uVar14 = FUN_006bd550("CountdownFieldNpc",0);
          local_e0 = (undefined *)CONCAT44(local_e0._4_4_,uVar14);
          puVar16 = (uint *)FUN_021cb820(lVar29 + 0x660,&local_e0);
          if (puVar16 != (uint *)0x0) {
            puVar21 = (undefined1 *)(lVar27 + 0x818);
            if (*puVar16 != 0) {
              cVar24 = *PTR_DAT_04bb6378;
              do {
                if (cVar24 == '\0') {
                  cVar24 = '\x01';
                  *PTR_DAT_04bb6378 = 1;
                  *(undefined8 *)puVar8 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
                }
                else {
                  uVar25 = *(uint *)(puVar8 + 8);
                  if (-1 < (int)uVar25) {
                    if (((ushort *)((ulong)uVar25 + (long)puVar16) != (ushort *)0x0) &&
                       (uVar4 = *(ushort *)((ulong)uVar25 + (long)puVar16), uVar4 < 0x80)) {
                      puVar21 = puVar21 + uVar4;
                    }
                    break;
                  }
                  if (uVar25 != 0xffffffff) break;
                }
                puVar26 = (uint *)(ulong)*puVar16;
                if ((*puVar16 == 0) || (puVar16 == puVar26)) break;
                lVar27 = 0xc;
                if (*(char *)((long)puVar16 + (10 - (long)puVar26)) != '\0') {
                  lVar27 = 0x1c;
                }
                lVar27 = (long)puVar16 + (lVar27 - (long)puVar26);
                if (lVar27 == 0) break;
                uVar15 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar26));
                *(undefined4 *)(puVar8 + 8) = 0xfffffffe;
                if (uVar15 == 0) break;
                piVar28 = (int *)(lVar27 + 4);
                while (piVar28[-1] != 0x54706054) {
                  piVar28 = piVar28 + 2;
                  uVar15 = uVar15 - 1;
                  if (uVar15 == 0) goto LAB_021a36a4;
                }
                iVar32 = 0;
                if (*piVar28 != -1) {
                  iVar32 = *piVar28;
                }
                *(int *)(puVar8 + 8) = iVar32;
                if (*puVar16 == 0) break;
              } while( true );
            }
LAB_021a36a4:
            *puVar21 = 1;
          }
          if (uVar34 < 10) {
            uVar25 = 1 << (ulong)(uVar34 & 0x1f);
            uVar30 = uVar30 & (uVar25 ^ 0xffffffff);
            *(uint *)(param_1 + 0x55f80) = *(uint *)(param_1 + 0x55f80) | uVar25;
          }
          uVar31 = 0;
          uVar33 = uVar33 - 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      else {
        uVar15 = 0;
        bVar11 = true;
        do {
          if (local_c8[uVar15] != local_d8[uVar15]) break;
          if (local_c8[uVar15] == '\0') {
            if (bVar11) goto LAB_021a2160;
            break;
          }
          bVar11 = uVar15 < 0x80000;
          uVar15 = uVar15 + 1;
        } while (uVar15 != 0x80001);
        local_e0 = puVar7 + 0x10;
        local_d8 = "Fireworks";
        (**(code **)(local_d0 + 0x18))(&local_d0);
        (**(code **)(local_d0 + 0x18))(&local_d0);
        pcVar10 = local_c8;
        (**(code **)(local_e0 + 0x18))(&local_e0);
        puVar7 = PTR_DAT_04bb6380;
        if (pcVar10 == local_d8) {
LAB_021a24bc:
          if (!bVar12) {
            uVar30 = 0;
            lVar27 = 0;
            uVar33 = 0;
            do {
              puVar21 = (undefined1 *)(param_1 + lVar27 * 0xba0 + 0x818);
              lVar29 = *(long *)PTR_DAT_04bb2208;
              uVar14 = FUN_006bd550("FireworksAroundWater",0);
              local_e0 = (undefined *)CONCAT44(local_e0._4_4_,uVar14);
              puVar16 = (uint *)FUN_021cb820(lVar29 + 0x660,&local_e0);
              if (puVar16 != (uint *)0x0) {
                puVar23 = puVar21;
                if (*puVar16 != 0) {
                  cVar24 = *PTR_DAT_04bb6378;
                  do {
                    if (cVar24 == '\0') {
                      cVar24 = '\x01';
                      *PTR_DAT_04bb6378 = 1;
                      *(undefined8 *)puVar7 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                      uVar25 = *puVar16;
                    }
                    else {
                      uVar25 = *(uint *)(puVar7 + 8);
                      if (-1 < (int)uVar25) {
                        if (((ushort *)((ulong)uVar25 + (long)puVar16) != (ushort *)0x0) &&
                           (uVar4 = *(ushort *)((ulong)uVar25 + (long)puVar16), uVar4 < 0x80)) {
                          puVar23 = puVar21 + uVar4;
                        }
                        break;
                      }
                      if (uVar25 != 0xffffffff) break;
                      uVar25 = *puVar16;
                    }
                    if ((uVar25 == 0) || (puVar26 = (uint *)(ulong)uVar25, puVar16 == puVar26))
                    break;
                    lVar29 = 0xc;
                    if (*(char *)((long)puVar16 + (10 - (long)puVar26)) != '\0') {
                      lVar29 = 0x1c;
                    }
                    lVar29 = (long)puVar16 + (lVar29 - (long)puVar26);
                    if (lVar29 == 0) break;
                    uVar15 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar26));
                    *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
                    if (uVar15 == 0) break;
                    piVar28 = (int *)(lVar29 + 4);
                    while (piVar28[-1] != 0x54706054) {
                      piVar28 = piVar28 + 2;
                      uVar15 = uVar15 - 1;
                      if (uVar15 == 0) goto LAB_021a28b8;
                    }
                    iVar13 = 0;
                    if (*piVar28 != -1) {
                      iVar13 = *piVar28;
                    }
                    *(int *)(puVar7 + 8) = iVar13;
                    if (*puVar16 == 0) break;
                  } while( true );
                }
LAB_021a28b8:
                *puVar23 = 0;
              }
              uVar25 = 1 << (ulong)((uint)lVar27 & 0x1f);
              if ((uVar25 & *(ushort *)(param_1 + 0x55dec)) != 0) {
                uVar30 = uVar25 | uVar30;
                uVar34 = 0;
                if ((uVar25 & *(ushort *)(param_1 + 0x55dee)) != 0) {
                  uVar34 = uVar25;
                }
                uVar33 = uVar34 | uVar33;
                if ((uVar25 & *(ushort *)(param_1 + 0x55df0)) != 0) {
                  lVar29 = *(long *)PTR_DAT_04bb2208;
                  uVar14 = FUN_006bd550("GotoEventPlazaForCountdown",0);
                  local_e0._0_4_ = uVar14;
                  puVar16 = (uint *)FUN_021cb820(lVar29 + 0x660,&local_e0);
                  if (puVar16 != (uint *)0x0) {
                    puVar23 = puVar21;
                    if (*puVar16 != 0) {
                      cVar24 = *PTR_DAT_04bb6378;
                      do {
                        if (cVar24 == '\0') {
                          cVar24 = '\x01';
                          *PTR_DAT_04bb6378 = 1;
                          *(undefined8 *)puVar7 = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                        }
                        else {
                          uVar25 = *(uint *)(puVar7 + 8);
                          if (-1 < (int)uVar25) {
                            if (((ushort *)((ulong)uVar25 + (long)puVar16) != (ushort *)0x0) &&
                               (uVar4 = *(ushort *)((ulong)uVar25 + (long)puVar16), uVar4 < 0x80)) {
                              puVar23 = puVar21 + uVar4;
                            }
                            break;
                          }
                          if (uVar25 != 0xffffffff) break;
                        }
                        puVar26 = (uint *)(ulong)*puVar16;
                        if ((*puVar16 == 0) || (puVar16 == puVar26)) break;
                        lVar29 = 0xc;
                        if (*(char *)((long)puVar16 + (10 - (long)puVar26)) != '\0') {
                          lVar29 = 0x1c;
                        }
                        lVar29 = (long)puVar16 + (lVar29 - (long)puVar26);
                        if (lVar29 == 0) break;
                        uVar15 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar26));
                        *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
                        if (uVar15 == 0) break;
                        piVar28 = (int *)(lVar29 + 4);
                        while (piVar28[-1] != 0x54706054) {
                          piVar28 = piVar28 + 2;
                          uVar15 = uVar15 - 1;
                          if (uVar15 == 0) goto LAB_021a29f8;
                        }
                        iVar13 = 0;
                        if (*piVar28 != -1) {
                          iVar13 = *piVar28;
                        }
                        *(int *)(puVar7 + 8) = iVar13;
                        if (*puVar16 == 0) break;
                      } while( true );
                    }
LAB_021a29f8:
                    *puVar23 = 1;
                  }
                  lVar29 = *(long *)PTR_DAT_04bb2208;
                  uVar14 = FUN_006bd550("FireworksAroundWater",0);
                  local_e0 = (undefined *)CONCAT44(local_e0._4_4_,uVar14);
                  puVar16 = (uint *)FUN_021cb820(lVar29 + 0x660,&local_e0);
                  if (puVar16 != (uint *)0x0) {
                    if (*puVar16 != 0) {
                      cVar24 = *PTR_DAT_04bb6378;
                      do {
                        if (cVar24 == '\0') {
                          cVar24 = '\x01';
                          *PTR_DAT_04bb6378 = 1;
                          *(undefined8 *)puVar7 = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                        }
                        else {
                          uVar25 = *(uint *)(puVar7 + 8);
                          if (-1 < (int)uVar25) {
                            if (((ushort *)((ulong)uVar25 + (long)puVar16) != (ushort *)0x0) &&
                               (uVar4 = *(ushort *)((ulong)uVar25 + (long)puVar16), uVar4 < 0x80)) {
                              puVar21 = puVar21 + uVar4;
                            }
                            break;
                          }
                          if (uVar25 != 0xffffffff) break;
                        }
                        puVar26 = (uint *)(ulong)*puVar16;
                        if ((*puVar16 == 0) || (puVar16 == puVar26)) break;
                        lVar29 = 0xc;
                        if (*(char *)((long)puVar16 + (10 - (long)puVar26)) != '\0') {
                          lVar29 = 0x1c;
                        }
                        lVar29 = (long)puVar16 + (lVar29 - (long)puVar26);
                        if (lVar29 == 0) break;
                        uVar15 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar26));
                        *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
                        if (uVar15 == 0) break;
                        piVar28 = (int *)(lVar29 + 4);
                        while (piVar28[-1] != 0x54706054) {
                          piVar28 = piVar28 + 2;
                          uVar15 = uVar15 - 1;
                          if (uVar15 == 0) goto LAB_021a2798;
                        }
                        iVar13 = 0;
                        if (*piVar28 != -1) {
                          iVar13 = *piVar28;
                        }
                        *(int *)(puVar7 + 8) = iVar13;
                        if (*puVar16 == 0) break;
                      } while( true );
                    }
LAB_021a2798:
                    *puVar21 = 1;
                  }
                }
              }
              lVar27 = lVar27 + 1;
            } while (lVar27 != 10);
LAB_021a2b68:
            lVar27 = 0;
LAB_021a2b84:
            uVar25 = 1 << (ulong)((uint)lVar27 & 0x1f);
            if (*(char *)(param_1 + lVar27 * 0xba0 + 0xaf9) == '\0' || (uVar25 & uVar30) == 0) {
              puVar21 = (undefined1 *)(param_1 + lVar27 * 0xba0 + 0x818);
              lVar29 = *(long *)PTR_DAT_04bb2208;
              uVar14 = FUN_006bd550("FireworksFieldNpc",0);
              local_e0._0_4_ = uVar14;
              puVar16 = (uint *)FUN_021cb820(lVar29 + 0x660,&local_e0);
              if (puVar16 != (uint *)0x0) {
                puVar23 = puVar21;
                if (*puVar16 != 0) {
                  cVar24 = *PTR_DAT_04bb6378;
                  do {
                    if (cVar24 == '\0') {
                      cVar24 = '\x01';
                      *PTR_DAT_04bb6378 = 1;
                      *(undefined8 *)puVar7 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                      uVar25 = *puVar16;
                    }
                    else {
                      uVar25 = *(uint *)(puVar7 + 8);
                      if (-1 < (int)uVar25) {
                        if (((ushort *)((ulong)uVar25 + (long)puVar16) != (ushort *)0x0) &&
                           (uVar4 = *(ushort *)((ulong)uVar25 + (long)puVar16), uVar4 < 0x80)) {
                          puVar23 = puVar21 + uVar4;
                        }
                        break;
                      }
                      if (uVar25 != 0xffffffff) break;
                      uVar25 = *puVar16;
                    }
                    if ((uVar25 == 0) || (puVar26 = (uint *)(ulong)uVar25, puVar16 == puVar26))
                    break;
                    lVar29 = 0xc;
                    if (*(char *)((long)puVar16 + (10 - (long)puVar26)) != '\0') {
                      lVar29 = 0x1c;
                    }
                    lVar29 = (long)puVar16 + (lVar29 - (long)puVar26);
                    if (lVar29 == 0) break;
                    uVar15 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar26));
                    *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
                    if (uVar15 == 0) break;
                    piVar28 = (int *)(lVar29 + 4);
                    while (piVar28[-1] != 0x54706054) {
                      piVar28 = piVar28 + 2;
                      uVar15 = uVar15 - 1;
                      if (uVar15 == 0) goto LAB_021a2cb8;
                    }
                    iVar13 = 0;
                    if (*piVar28 != -1) {
                      iVar13 = *piVar28;
                    }
                    *(int *)(puVar7 + 8) = iVar13;
                    if (*puVar16 == 0) break;
                  } while( true );
                }
LAB_021a2cb8:
                *puVar23 = 0;
              }
              lVar29 = *(long *)PTR_DAT_04bb2208;
              local_e0._0_4_ = FUN_006bd550("FireworksFieldLater",0);
              puVar16 = (uint *)FUN_021cb820(lVar29 + 0x660,&local_e0);
              if (puVar16 != (uint *)0x0) {
                puVar23 = puVar21;
                if (*puVar16 != 0) {
                  cVar24 = *PTR_DAT_04bb6378;
                  do {
                    if (cVar24 == '\0') {
                      cVar24 = '\x01';
                      *PTR_DAT_04bb6378 = 1;
                      *(undefined8 *)puVar7 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                      uVar25 = *puVar16;
                    }
                    else {
                      uVar25 = *(uint *)(puVar7 + 8);
                      if (-1 < (int)uVar25) {
                        if (((ushort *)((ulong)uVar25 + (long)puVar16) != (ushort *)0x0) &&
                           (uVar4 = *(ushort *)((ulong)uVar25 + (long)puVar16), uVar4 < 0x80)) {
                          puVar23 = puVar21 + uVar4;
                        }
                        break;
                      }
                      if (uVar25 != 0xffffffff) break;
                      uVar25 = *puVar16;
                    }
                    if ((uVar25 == 0) || (puVar26 = (uint *)(ulong)uVar25, puVar16 == puVar26))
                    break;
                    lVar29 = 0xc;
                    if (*(char *)((long)puVar16 + (10 - (long)puVar26)) != '\0') {
                      lVar29 = 0x1c;
                    }
                    lVar29 = (long)puVar16 + (lVar29 - (long)puVar26);
                    if (lVar29 == 0) break;
                    uVar15 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar26));
                    *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
                    if (uVar15 == 0) break;
                    piVar28 = (int *)(lVar29 + 4);
                    while (piVar28[-1] != 0x54706054) {
                      piVar28 = piVar28 + 2;
                      uVar15 = uVar15 - 1;
                      if (uVar15 == 0) goto LAB_021a2dc8;
                    }
                    iVar13 = 0;
                    if (*piVar28 != -1) {
                      iVar13 = *piVar28;
                    }
                    *(int *)(puVar7 + 8) = iVar13;
                    if (*puVar16 == 0) break;
                  } while( true );
                }
LAB_021a2dc8:
                *puVar23 = 0;
              }
              lVar29 = *(long *)PTR_DAT_04bb2208;
              uVar14 = FUN_006bd550("FireworksAroundWater",0);
              local_e0 = (undefined *)CONCAT44(local_e0._4_4_,uVar14);
              puVar16 = (uint *)FUN_021cb820(lVar29 + 0x660,&local_e0);
              if (puVar16 == (uint *)0x0) goto LAB_021a2b78;
              if (*puVar16 != 0) {
                cVar24 = *PTR_DAT_04bb6378;
                do {
                  if (cVar24 == '\0') {
                    cVar24 = '\x01';
                    *PTR_DAT_04bb6378 = 1;
                    *(undefined8 *)puVar7 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                    uVar25 = *puVar16;
                  }
                  else {
                    uVar25 = *(uint *)(puVar7 + 8);
                    if (-1 < (int)uVar25) goto LAB_021a31c8;
                    if (uVar25 != 0xffffffff) break;
                    uVar25 = *puVar16;
                  }
                  if ((uVar25 == 0) || (puVar26 = (uint *)(ulong)uVar25, puVar16 == puVar26)) break;
                  lVar29 = 0xc;
                  if (*(char *)((long)puVar16 + (10 - (long)puVar26)) != '\0') {
                    lVar29 = 0x1c;
                  }
                  lVar29 = (long)puVar16 + (lVar29 - (long)puVar26);
                  if (lVar29 == 0) break;
                  uVar15 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar26));
                  *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
                  if (uVar15 == 0) break;
                  piVar28 = (int *)(lVar29 + 4);
                  while (piVar28[-1] != 0x54706054) {
                    piVar28 = piVar28 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_021a2b74;
                  }
                  iVar13 = 0;
                  if (*piVar28 != -1) {
                    iVar13 = *piVar28;
                  }
                  *(int *)(puVar7 + 8) = iVar13;
                  if (*puVar16 == 0) break;
                } while( true );
              }
              goto LAB_021a2b74;
            }
            puVar21 = (undefined1 *)(param_1 + lVar27 * 0xba0 + 0x818);
            lVar29 = *(long *)PTR_DAT_04bb2208;
            uVar14 = FUN_006bd550("FireworksFieldNpc",0);
            local_e0._0_4_ = uVar14;
            puVar16 = (uint *)FUN_021cb820(lVar29 + 0x660,&local_e0);
            if (puVar16 != (uint *)0x0) {
              puVar23 = puVar21;
              if (*puVar16 != 0) {
                cVar24 = *PTR_DAT_04bb6378;
                do {
                  if (cVar24 == '\0') {
                    cVar24 = '\x01';
                    *PTR_DAT_04bb6378 = 1;
                    *(undefined8 *)puVar7 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                    uVar34 = *puVar16;
                  }
                  else {
                    uVar34 = *(uint *)(puVar7 + 8);
                    if (-1 < (int)uVar34) {
                      if (((ushort *)((ulong)uVar34 + (long)puVar16) != (ushort *)0x0) &&
                         (uVar4 = *(ushort *)((ulong)uVar34 + (long)puVar16), uVar4 < 0x80)) {
                        puVar23 = puVar21 + uVar4;
                      }
                      break;
                    }
                    if (uVar34 != 0xffffffff) break;
                    uVar34 = *puVar16;
                  }
                  if ((uVar34 == 0) || (puVar26 = (uint *)(ulong)uVar34, puVar16 == puVar26)) break;
                  lVar29 = 0xc;
                  if (*(char *)((long)puVar16 + (10 - (long)puVar26)) != '\0') {
                    lVar29 = 0x1c;
                  }
                  lVar29 = (long)puVar16 + (lVar29 - (long)puVar26);
                  if (lVar29 == 0) break;
                  uVar15 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar26));
                  *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
                  if (uVar15 == 0) break;
                  piVar28 = (int *)(lVar29 + 4);
                  while (piVar28[-1] != 0x54706054) {
                    piVar28 = piVar28 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_021a2fd8;
                  }
                  iVar13 = 0;
                  if (*piVar28 != -1) {
                    iVar13 = *piVar28;
                  }
                  *(int *)(puVar7 + 8) = iVar13;
                  if (*puVar16 == 0) break;
                } while( true );
              }
LAB_021a2fd8:
              *puVar23 = 1;
            }
            lVar29 = *(long *)PTR_DAT_04bb2208;
            if ((uVar25 & uVar33) == 0) {
              uVar14 = FUN_006bd550("FireworksFieldLater",0);
              local_e0 = (undefined *)CONCAT44(local_e0._4_4_,uVar14);
              puVar16 = (uint *)FUN_021cb820(lVar29 + 0x660,&local_e0);
              if (puVar16 != (uint *)0x0) {
                if (*puVar16 != 0) {
                  cVar24 = *PTR_DAT_04bb6378;
                  do {
                    if (cVar24 == '\0') {
                      cVar24 = '\x01';
                      *PTR_DAT_04bb6378 = 1;
                      *(undefined8 *)puVar7 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                    }
                    else {
                      uVar25 = *(uint *)(puVar7 + 8);
                      if (-1 < (int)uVar25) goto LAB_021a31c8;
                      if (uVar25 != 0xffffffff) break;
                    }
                    puVar26 = (uint *)(ulong)*puVar16;
                    if ((*puVar16 == 0) || (puVar16 == puVar26)) break;
                    lVar29 = 0xc;
                    if (*(char *)((long)puVar16 + (10 - (long)puVar26)) != '\0') {
                      lVar29 = 0x1c;
                    }
                    lVar29 = (long)puVar16 + (lVar29 - (long)puVar26);
                    if (lVar29 == 0) break;
                    uVar15 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar26));
                    *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
                    if (uVar15 == 0) break;
                    piVar28 = (int *)(lVar29 + 4);
                    while (piVar28[-1] != 0x54706054) {
                      piVar28 = piVar28 + 2;
                      uVar15 = uVar15 - 1;
                      if (uVar15 == 0) goto LAB_021a2b74;
                    }
                    iVar13 = 0;
                    if (*piVar28 != -1) {
                      iVar13 = *piVar28;
                    }
                    *(int *)(puVar7 + 8) = iVar13;
                    if (*puVar16 == 0) break;
                  } while( true );
                }
                goto LAB_021a2b74;
              }
            }
            else {
              uVar14 = FUN_006bd550("FireworksFieldLater",0);
              local_e0 = (undefined *)CONCAT44(local_e0._4_4_,uVar14);
              puVar16 = (uint *)FUN_021cb820(lVar29 + 0x660,&local_e0);
              if (puVar16 != (uint *)0x0) {
                if (*puVar16 != 0) {
                  cVar24 = *PTR_DAT_04bb6378;
                  do {
                    if (cVar24 == '\0') {
                      cVar24 = '\x01';
                      *PTR_DAT_04bb6378 = 1;
                      *(undefined8 *)puVar7 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                    }
                    else {
                      uVar25 = *(uint *)(puVar7 + 8);
                      if (-1 < (int)uVar25) {
                        if (((ushort *)((ulong)uVar25 + (long)puVar16) != (ushort *)0x0) &&
                           (uVar4 = *(ushort *)((ulong)uVar25 + (long)puVar16), uVar4 < 0x80)) {
                          puVar21 = puVar21 + uVar4;
                        }
                        break;
                      }
                      if (uVar25 != 0xffffffff) break;
                    }
                    puVar26 = (uint *)(ulong)*puVar16;
                    if ((*puVar16 == 0) || (puVar16 == puVar26)) break;
                    lVar29 = 0xc;
                    if (*(char *)((long)puVar16 + (10 - (long)puVar26)) != '\0') {
                      lVar29 = 0x1c;
                    }
                    lVar29 = (long)puVar16 + (lVar29 - (long)puVar26);
                    if (lVar29 == 0) break;
                    uVar15 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar26));
                    *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
                    if (uVar15 == 0) break;
                    piVar28 = (int *)(lVar29 + 4);
                    while (piVar28[-1] != 0x54706054) {
                      piVar28 = piVar28 + 2;
                      uVar15 = uVar15 - 1;
                      if (uVar15 == 0) goto LAB_021a327c;
                    }
                    iVar13 = 0;
                    if (*piVar28 != -1) {
                      iVar13 = *piVar28;
                    }
                    *(int *)(puVar7 + 8) = iVar13;
                    if (*puVar16 == 0) break;
                  } while( true );
                }
LAB_021a327c:
                *puVar21 = 1;
              }
            }
            goto LAB_021a2b78;
          }
          uVar30 = *(uint *)(param_1 + 0x55f80);
          uVar33 = uVar30 - (uVar30 >> 1 & 0x55555555);
          uVar33 = (uVar33 >> 2 & 0x33333333) + (uVar33 & 0x33333333);
          uVar33 = uVar33 + (uVar33 >> 4) & 0xf0f0f0f;
          uVar33 = uVar33 + (uVar33 >> 8);
          if ((uVar33 + (uVar33 >> 0x10) & 0x3f) != 0) {
            uVar33 = *(uint *)(param_1 + 0x55f84);
            if ((param_2 & 1) != 0) {
              lVar27 = 0;
              do {
                puVar21 = (undefined1 *)(param_1 + lVar27 * 0xba0 + 0x818);
                lVar29 = *(long *)PTR_DAT_04bb2208;
                uVar14 = FUN_006bd550("FireworksAroundWater",0);
                local_e0._0_4_ = uVar14;
                puVar16 = (uint *)FUN_021cb820(lVar29 + 0x660,&local_e0);
                if (puVar16 != (uint *)0x0) {
                  puVar23 = puVar21;
                  if (*puVar16 != 0) {
                    cVar24 = *PTR_DAT_04bb6378;
                    do {
                      if (cVar24 == '\0') {
                        cVar24 = '\x01';
                        *PTR_DAT_04bb6378 = 1;
                        *(undefined8 *)puVar7 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                      }
                      else {
                        uVar25 = *(uint *)(puVar7 + 8);
                        if (-1 < (int)uVar25) {
                          if (((ushort *)((ulong)uVar25 + (long)puVar16) != (ushort *)0x0) &&
                             (uVar4 = *(ushort *)((ulong)uVar25 + (long)puVar16), uVar4 < 0x80)) {
                            puVar23 = puVar21 + uVar4;
                          }
                          break;
                        }
                        if (uVar25 != 0xffffffff) break;
                      }
                      puVar26 = (uint *)(ulong)*puVar16;
                      if ((*puVar16 == 0) || (puVar16 == puVar26)) break;
                      lVar29 = 0xc;
                      if (*(char *)((long)puVar16 + (10 - (long)puVar26)) != '\0') {
                        lVar29 = 0x1c;
                      }
                      lVar29 = (long)puVar16 + (lVar29 - (long)puVar26);
                      if (lVar29 == 0) break;
                      uVar15 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar26));
                      *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
                      if (uVar15 == 0) break;
                      piVar28 = (int *)(lVar29 + 4);
                      while (piVar28[-1] != 0x54706054) {
                        piVar28 = piVar28 + 2;
                        uVar15 = uVar15 - 1;
                        if (uVar15 == 0) goto LAB_021a263c;
                      }
                      iVar13 = 0;
                      if (*piVar28 != -1) {
                        iVar13 = *piVar28;
                      }
                      *(int *)(puVar7 + 8) = iVar13;
                      if (*puVar16 == 0) break;
                    } while( true );
                  }
LAB_021a263c:
                  *puVar23 = 0;
                }
                lVar29 = *(long *)PTR_DAT_04bb2208;
                uVar14 = FUN_006bd550("GotoEventPlazaForCountdown",0);
                local_e0 = (undefined *)CONCAT44(local_e0._4_4_,uVar14);
                puVar16 = (uint *)FUN_021cb820(lVar29 + 0x660,&local_e0);
                if (puVar16 != (uint *)0x0) {
                  if (*puVar16 != 0) {
                    cVar24 = *PTR_DAT_04bb6378;
                    do {
                      if (cVar24 == '\0') {
                        cVar24 = '\x01';
                        *PTR_DAT_04bb6378 = 1;
                        *(undefined8 *)puVar7 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                      }
                      else {
                        uVar25 = *(uint *)(puVar7 + 8);
                        if (-1 < (int)uVar25) {
                          if (((ushort *)((ulong)uVar25 + (long)puVar16) != (ushort *)0x0) &&
                             (uVar4 = *(ushort *)((ulong)uVar25 + (long)puVar16), uVar4 < 0x80)) {
                            puVar21 = puVar21 + uVar4;
                          }
                          break;
                        }
                        if (uVar25 != 0xffffffff) break;
                      }
                      puVar26 = (uint *)(ulong)*puVar16;
                      if ((*puVar16 == 0) || (puVar16 == puVar26)) break;
                      lVar29 = 0xc;
                      if (*(char *)((long)puVar16 + (10 - (long)puVar26)) != '\0') {
                        lVar29 = 0x1c;
                      }
                      lVar29 = (long)puVar16 + (lVar29 - (long)puVar26);
                      if (lVar29 == 0) break;
                      uVar15 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar26));
                      *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
                      if (uVar15 == 0) break;
                      piVar28 = (int *)(lVar29 + 4);
                      while (piVar28[-1] != 0x54706054) {
                        piVar28 = piVar28 + 2;
                        uVar15 = uVar15 - 1;
                        if (uVar15 == 0) goto LAB_021a2528;
                      }
                      iVar13 = 0;
                      if (*piVar28 != -1) {
                        iVar13 = *piVar28;
                      }
                      *(int *)(puVar7 + 8) = iVar13;
                      if (*puVar16 == 0) break;
                    } while( true );
                  }
LAB_021a2528:
                  *puVar21 = 1;
                }
                lVar27 = lVar27 + 1;
              } while (lVar27 != 10);
            }
            goto LAB_021a2b68;
          }
          lVar27 = 0;
          uVar30 = 0;
          fVar36 = (float)*(int *)(param_1 + 0x7440);
          do {
            lVar29 = param_1 + lVar27 * 0xba0;
            puVar21 = (undefined1 *)(lVar29 + 0x818);
            lVar22 = *(long *)PTR_DAT_04bb2208;
            uVar33 = 0;
            if (*(char *)(lVar29 + 0xaf9) != '\0') {
              uVar33 = 1 << (ulong)((uint)lVar27 & 0x1f);
            }
            uVar14 = FUN_006bd550("FireworksFieldNpc",0);
            local_e0._0_4_ = uVar14;
            puVar16 = (uint *)FUN_021cb820(lVar22 + 0x660,&local_e0);
            if (puVar16 != (uint *)0x0) {
              puVar23 = puVar21;
              if (*puVar16 != 0) {
                cVar24 = *PTR_DAT_04bb6378;
                do {
                  if (cVar24 == '\0') {
                    cVar24 = '\x01';
                    *PTR_DAT_04bb6378 = 1;
                    *(undefined8 *)puVar7 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                  }
                  else {
                    uVar25 = *(uint *)(puVar7 + 8);
                    if (-1 < (int)uVar25) {
                      if (((ushort *)((ulong)uVar25 + (long)puVar16) != (ushort *)0x0) &&
                         (uVar4 = *(ushort *)((ulong)uVar25 + (long)puVar16), uVar4 < 0x80)) {
                        puVar23 = puVar21 + uVar4;
                      }
                      break;
                    }
                    if (uVar25 != 0xffffffff) break;
                  }
                  puVar26 = (uint *)(ulong)*puVar16;
                  if ((*puVar16 == 0) || (puVar16 == puVar26)) break;
                  lVar29 = 0xc;
                  if (*(char *)((long)puVar16 + (10 - (long)puVar26)) != '\0') {
                    lVar29 = 0x1c;
                  }
                  lVar29 = (long)puVar16 + (lVar29 - (long)puVar26);
                  if (lVar29 == 0) break;
                  uVar15 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar26));
                  *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
                  if (uVar15 == 0) break;
                  piVar28 = (int *)(lVar29 + 4);
                  while (piVar28[-1] != 0x54706054) {
                    piVar28 = piVar28 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_021a3818;
                  }
                  iVar13 = 0;
                  if (*piVar28 != -1) {
                    iVar13 = *piVar28;
                  }
                  *(int *)(puVar7 + 8) = iVar13;
                  if (*puVar16 == 0) break;
                } while( true );
              }
LAB_021a3818:
              *puVar23 = 0;
            }
            lVar29 = *(long *)PTR_DAT_04bb2208;
            uVar14 = FUN_006bd550("FireworksAroundWater",0);
            local_e0 = (undefined *)CONCAT44(local_e0._4_4_,uVar14);
            puVar16 = (uint *)FUN_021cb820(lVar29 + 0x660,&local_e0);
            if (puVar16 != (uint *)0x0) {
              if (*puVar16 != 0) {
                cVar24 = *PTR_DAT_04bb6378;
                do {
                  if (cVar24 == '\0') {
                    cVar24 = '\x01';
                    *PTR_DAT_04bb6378 = 1;
                    *(undefined8 *)puVar7 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                  }
                  else {
                    uVar25 = *(uint *)(puVar7 + 8);
                    if (-1 < (int)uVar25) {
                      if (((ushort *)((ulong)uVar25 + (long)puVar16) != (ushort *)0x0) &&
                         (uVar4 = *(ushort *)((ulong)uVar25 + (long)puVar16), uVar4 < 0x80)) {
                        puVar21 = puVar21 + uVar4;
                      }
                      break;
                    }
                    if (uVar25 != 0xffffffff) break;
                  }
                  puVar26 = (uint *)(ulong)*puVar16;
                  if ((*puVar16 == 0) || (puVar16 == puVar26)) break;
                  lVar29 = 0xc;
                  if (*(char *)((long)puVar16 + (10 - (long)puVar26)) != '\0') {
                    lVar29 = 0x1c;
                  }
                  lVar29 = (long)puVar16 + (lVar29 - (long)puVar26);
                  if (lVar29 == 0) break;
                  uVar15 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar26));
                  *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
                  if (uVar15 == 0) break;
                  piVar28 = (int *)(lVar29 + 4);
                  while (piVar28[-1] != 0x54706054) {
                    piVar28 = piVar28 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_021a36ec;
                  }
                  iVar13 = 0;
                  if (*piVar28 != -1) {
                    iVar13 = *piVar28;
                  }
                  *(int *)(puVar7 + 8) = iVar13;
                  if (*puVar16 == 0) break;
                } while( true );
              }
LAB_021a36ec:
              *puVar21 = 0;
            }
            lVar27 = lVar27 + 1;
            uVar30 = uVar33 | uVar30;
          } while (lVar27 != 10);
          iVar13 = (int)(fVar36 * 0.8 + 0.5);
          if (iVar13 != 0) {
            uVar33 = uVar30 - (uVar30 >> 1 & 0x55555555);
            uVar33 = (uVar33 >> 2 & 0x33333333) + (uVar33 & 0x33333333);
            uVar33 = uVar33 + (uVar33 >> 4) & 0xf0f0f0f;
            uVar33 = uVar33 + (uVar33 >> 8);
            uVar33 = uVar33 + (uVar33 >> 0x10) & 0x3f;
            iVar32 = (int)(fVar36 * 0.7 + 0.5);
            do {
              puVar16 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
              uVar34 = puVar16[3];
              uVar25 = *puVar16 ^ *puVar16 << 0xb;
              *puVar16 = puVar16[1];
              puVar16[1] = puVar16[2];
              uVar3 = uVar25 >> 8 ^ uVar34 >> 0x13 ^ uVar25 ^ uVar34;
              puVar16[2] = uVar34;
              puVar16[3] = uVar3;
              uVar34 = 0xffffffff;
              uVar25 = uVar30 - (uVar30 >> 1 & 0x55555555);
              uVar25 = (uVar25 >> 2 & 0x33333333) + (uVar25 & 0x33333333);
              uVar25 = uVar25 + (uVar25 >> 4) & 0xf0f0f0f;
              uVar25 = uVar25 + (uVar25 >> 8);
              if ((int)((ulong)uVar3 * (ulong)uVar33 >> 0x20) + 1 <=
                  (int)(uVar25 + (uVar25 >> 0x10) & 0x3f) && uVar30 != 0) {
                iVar18 = (int)((ulong)uVar3 * (ulong)uVar33 >> 0x20) + 2;
                uVar25 = uVar30;
                do {
                  iVar18 = iVar18 + -1;
                  if (iVar18 < 2) {
                    uVar25 = uVar25 - 1 & (uVar25 ^ 0xffffffff);
                    uVar25 = uVar25 - (uVar25 >> 1 & 0x55555555);
                    uVar25 = (uVar25 >> 2 & 0x33333333) + (uVar25 & 0x33333333);
                    uVar25 = uVar25 + (uVar25 >> 4) & 0xf0f0f0f;
                    uVar25 = uVar25 + (uVar25 >> 8);
                    uVar34 = uVar25 + (uVar25 >> 0x10) & 0x3f;
                    goto LAB_021a3adc;
                  }
                  uVar25 = uVar25 - 1 & uVar25;
                } while (uVar25 != 0);
                uVar34 = 0xffffffff;
              }
LAB_021a3adc:
              lVar27 = param_1 + (ulong)uVar34 * 0xba0;
              if (9 < uVar34) {
                lVar27 = param_1;
              }
              puVar21 = (undefined1 *)(lVar27 + 0x818);
              lVar27 = *(long *)PTR_DAT_04bb2208;
              uVar14 = FUN_006bd550("FireworksFieldNpc",0);
              local_e0 = (undefined *)CONCAT44(local_e0._4_4_,uVar14);
              puVar16 = (uint *)FUN_021cb820(lVar27 + 0x660,&local_e0);
              if (puVar16 != (uint *)0x0) {
                puVar23 = puVar21;
                if (*puVar16 != 0) {
                  cVar24 = *PTR_DAT_04bb6378;
                  do {
                    if (cVar24 == '\0') {
                      cVar24 = '\x01';
                      *PTR_DAT_04bb6378 = 1;
                      *(undefined8 *)puVar7 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                    }
                    else {
                      uVar25 = *(uint *)(puVar7 + 8);
                      if (-1 < (int)uVar25) {
                        if (((ushort *)((ulong)uVar25 + (long)puVar16) != (ushort *)0x0) &&
                           (uVar4 = *(ushort *)((ulong)uVar25 + (long)puVar16), uVar4 < 0x80)) {
                          puVar23 = puVar21 + uVar4;
                        }
                        break;
                      }
                      if (uVar25 != 0xffffffff) break;
                    }
                    puVar26 = (uint *)(ulong)*puVar16;
                    if ((*puVar16 == 0) || (puVar16 == puVar26)) break;
                    lVar27 = 0xc;
                    if (*(char *)((long)puVar16 + (10 - (long)puVar26)) != '\0') {
                      lVar27 = 0x1c;
                    }
                    lVar27 = (long)puVar16 + (lVar27 - (long)puVar26);
                    if (lVar27 == 0) break;
                    uVar15 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar26));
                    *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
                    if (uVar15 == 0) break;
                    piVar28 = (int *)(lVar27 + 4);
                    while (piVar28[-1] != 0x54706054) {
                      piVar28 = piVar28 + 2;
                      uVar15 = uVar15 - 1;
                      if (uVar15 == 0) goto LAB_021a3bf8;
                    }
                    iVar18 = 0;
                    if (*piVar28 != -1) {
                      iVar18 = *piVar28;
                    }
                    *(int *)(puVar7 + 8) = iVar18;
                    if (*puVar16 == 0) break;
                  } while( true );
                }
LAB_021a3bf8:
                *puVar23 = 1;
              }
              if (uVar34 < 10) {
                uVar25 = 1 << (ulong)(uVar34 & 0x1f);
                uVar30 = uVar30 & (uVar25 ^ 0xffffffff);
                *(uint *)(param_1 + 0x55f80) = *(uint *)(param_1 + 0x55f80) | uVar25;
              }
              if (iVar32 < 1) {
                lVar27 = *(long *)PTR_DAT_04bb2208;
                uVar14 = FUN_006bd550("FireworksFieldLater",0);
                local_e0 = (undefined *)CONCAT44(local_e0._4_4_,uVar14);
                lVar27 = FUN_021cb820(lVar27 + 0x660,&local_e0);
                if (lVar27 != 0) {
                  puVar17 = (ushort *)FUN_00aa97d0(lVar27,2,0x54706054,DAT_054573c8);
                  if ((puVar17 != (ushort *)0x0) && (*puVar17 < 0x80)) {
                    puVar21 = puVar21 + *puVar17;
                  }
                  *puVar21 = 1;
                }
                if (uVar34 < 10) {
                  *(uint *)(param_1 + 0x55f84) =
                       *(uint *)(param_1 + 0x55f84) | 1 << (ulong)(uVar34 & 0x1f);
                }
              }
              uVar31 = 0;
              iVar13 = iVar13 + -1;
              iVar32 = iVar32 + -1;
              uVar33 = uVar33 - 1;
            } while (iVar13 != 0);
            goto LAB_021a3290;
          }
        }
        else {
          uVar15 = 0;
          bVar11 = true;
          do {
            if (local_c8[uVar15] != local_d8[uVar15]) break;
            if (local_c8[uVar15] == '\0') {
              if (bVar11) goto LAB_021a24bc;
              break;
            }
            bVar11 = uVar15 < 0x80000;
            uVar15 = uVar15 + 1;
          } while (uVar15 != 0x80001);
        }
LAB_021a328c:
        uVar31 = 0;
      }
    }
LAB_021a3290:
    puVar35 = (undefined8 *)PTR_DAT_04bb27d0;
  }
  else {
    pbVar1 = (byte *)(lVar27 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x80;
    if (7 < bVar5) {
      pbVar1 = (byte *)(lVar27 + 0x48);
    }
    if ((*pbVar1 >> 3 & 1) == 0) goto LAB_021a1818;
    bVar12 = *(byte *)(lVar27 + 0x472) == bVar5;
    if (lVar29 != 0) goto LAB_021a1834;
LAB_021a18c4:
    uVar31 = 0;
  }
  FUN_02150c20(&DAT_053febf8,0,uVar31);
  puVar7 = PTR_DAT_04bb32e8;
  psVar20 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*psVar20 == 0) {
    local_e0 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)((ulong)local_e0 >> 0x20) < '\x05') {
      lVar27 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_e0);
      local_d0 = (undefined *)(lVar27 + -0x15180);
      local_e0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_d0);
    }
    uVar9 = local_e0;
    psVar20 = (short *)&local_e0;
    local_e0._0_6_ = CONCAT24(5,(undefined4)local_e0);
    local_e0._7_1_ = SUB81(uVar9,7);
    local_e0._0_7_ = (uint7)(uint6)local_e0;
  }
  DAT_053fee18 = *(undefined8 *)psVar20;
  FUN_02150c20(&DAT_053ff798,1,uVar31);
  psVar20 = (short *)(*(long *)puVar7 + 0x4068);
  if (*psVar20 == 0) {
    local_e0 = *(undefined **)(*(long *)puVar7 + 0x4060);
    if ((char)((ulong)local_e0 >> 0x20) < '\x05') {
      lVar27 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_e0);
      local_d0 = (undefined *)(lVar27 + -0x15180);
      local_e0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_d0);
    }
    uVar9 = local_e0;
    psVar20 = (short *)&local_e0;
    local_e0._0_6_ = CONCAT24(5,(undefined4)local_e0);
    local_e0._7_1_ = SUB81(uVar9,7);
    local_e0._0_7_ = (uint7)(uint6)local_e0;
  }
  DAT_053ff9b8 = *(undefined8 *)psVar20;
  FUN_02150c20(&DAT_05400338,2,uVar31);
  psVar20 = (short *)(*(long *)puVar7 + 0x4068);
  if (*psVar20 == 0) {
    local_e0 = *(undefined **)(*(long *)puVar7 + 0x4060);
    if ((char)((ulong)local_e0 >> 0x20) < '\x05') {
      lVar27 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_e0);
      local_d0 = (undefined *)(lVar27 + -0x15180);
      local_e0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_d0);
    }
    uVar9 = local_e0;
    psVar20 = (short *)&local_e0;
    local_e0._0_6_ = CONCAT24(5,(undefined4)local_e0);
    local_e0._7_1_ = SUB81(uVar9,7);
    local_e0._0_7_ = (uint7)(uint6)local_e0;
  }
  DAT_05400558 = *(undefined8 *)psVar20;
  FUN_02150c20(&DAT_05400ed8,3,uVar31);
  psVar20 = (short *)(*(long *)puVar7 + 0x4068);
  if (*psVar20 == 0) {
    local_e0 = *(undefined **)(*(long *)puVar7 + 0x4060);
    if ((char)((ulong)local_e0 >> 0x20) < '\x05') {
      lVar27 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_e0);
      local_d0 = (undefined *)(lVar27 + -0x15180);
      local_e0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_d0);
    }
    uVar9 = local_e0;
    psVar20 = (short *)&local_e0;
    local_e0._0_6_ = CONCAT24(5,(undefined4)local_e0);
    local_e0._7_1_ = SUB81(uVar9,7);
    local_e0._0_7_ = (uint7)(uint6)local_e0;
  }
  DAT_054010f8 = *(undefined8 *)psVar20;
  FUN_02150c20(&DAT_05401a78,4,uVar31);
  psVar20 = (short *)(*(long *)puVar7 + 0x4068);
  if (*psVar20 == 0) {
    local_e0 = *(undefined **)(*(long *)puVar7 + 0x4060);
    if ((char)((ulong)local_e0 >> 0x20) < '\x05') {
      lVar27 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_e0);
      local_d0 = (undefined *)(lVar27 + -0x15180);
      local_e0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_d0);
    }
    uVar9 = local_e0;
    psVar20 = (short *)&local_e0;
    local_e0._0_6_ = CONCAT24(5,(undefined4)local_e0);
    local_e0._7_1_ = SUB81(uVar9,7);
    local_e0._0_7_ = (uint7)(uint6)local_e0;
  }
  DAT_05401c98 = *(undefined8 *)psVar20;
  FUN_02150c20(&DAT_05402618,5,uVar31);
  psVar20 = (short *)(*(long *)puVar7 + 0x4068);
  if (*psVar20 == 0) {
    local_e0 = *(undefined **)(*(long *)puVar7 + 0x4060);
    if ((char)((ulong)local_e0 >> 0x20) < '\x05') {
      lVar27 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_e0);
      local_d0 = (undefined *)(lVar27 + -0x15180);
      local_e0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_d0);
    }
    uVar9 = local_e0;
    psVar20 = (short *)&local_e0;
    local_e0._0_6_ = CONCAT24(5,(undefined4)local_e0);
    local_e0._7_1_ = SUB81(uVar9,7);
    local_e0._0_7_ = (uint7)(uint6)local_e0;
  }
  DAT_05402838 = *(undefined8 *)psVar20;
  FUN_02150c20(&DAT_054031b8,6,uVar31);
  psVar20 = (short *)(*(long *)puVar7 + 0x4068);
  if (*psVar20 == 0) {
    local_e0 = *(undefined **)(*(long *)puVar7 + 0x4060);
    if ((char)((ulong)local_e0 >> 0x20) < '\x05') {
      lVar27 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_e0);
      local_d0 = (undefined *)(lVar27 + -0x15180);
      local_e0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_d0);
    }
    uVar9 = local_e0;
    psVar20 = (short *)&local_e0;
    local_e0._0_6_ = CONCAT24(5,(undefined4)local_e0);
    local_e0._7_1_ = SUB81(uVar9,7);
    local_e0._0_7_ = (uint7)(uint6)local_e0;
  }
  DAT_054033d8 = *(undefined8 *)psVar20;
  FUN_02150c20(&DAT_05403d58,7,uVar31);
  psVar20 = (short *)(*(long *)puVar7 + 0x4068);
  if (*psVar20 == 0) {
    local_e0 = *(undefined **)(*(long *)puVar7 + 0x4060);
    if ((char)((ulong)local_e0 >> 0x20) < '\x05') {
      lVar27 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_e0);
      local_d0 = (undefined *)(lVar27 + -0x15180);
      local_e0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_d0);
    }
    uVar9 = local_e0;
    psVar20 = (short *)&local_e0;
    local_e0._0_6_ = CONCAT24(5,(undefined4)local_e0);
    local_e0._7_1_ = SUB81(uVar9,7);
    local_e0._0_7_ = (uint7)(uint6)local_e0;
  }
  DAT_05403f78 = *(undefined8 *)psVar20;
  FUN_02150c20(&DAT_054048f8,8,uVar31);
  psVar20 = (short *)(*(long *)puVar7 + 0x4068);
  if (*psVar20 == 0) {
    local_e0 = *(undefined **)(*(long *)puVar7 + 0x4060);
    if ((char)((ulong)local_e0 >> 0x20) < '\x05') {
      lVar27 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_e0);
      local_d0 = (undefined *)(lVar27 + -0x15180);
      local_e0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_d0);
    }
    uVar9 = local_e0;
    psVar20 = (short *)&local_e0;
    local_e0._0_6_ = CONCAT24(5,(undefined4)local_e0);
    local_e0._7_1_ = SUB81(uVar9,7);
    local_e0._0_7_ = (uint7)(uint6)local_e0;
  }
  DAT_05404b18 = *(undefined8 *)psVar20;
  FUN_02150c20(&DAT_05405498,9,uVar31);
  psVar20 = (short *)(*(long *)puVar7 + 0x4068);
  if (*psVar20 == 0) {
    local_e0 = *(undefined **)(*(long *)puVar7 + 0x4060);
    if ((char)((ulong)local_e0 >> 0x20) < '\x05') {
      lVar27 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_e0);
      local_d0 = (undefined *)(lVar27 + -0x15180);
      local_e0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_d0);
    }
    uVar31 = local_e0;
    psVar20 = (short *)&local_e0;
    local_e0._0_6_ = CONCAT24(5,(undefined4)local_e0);
    local_e0._7_1_ = SUB81(uVar31,7);
    local_e0._0_7_ = (uint7)(uint6)local_e0;
  }
  DAT_054056b8 = *(undefined8 *)psVar20;
  FUN_0252d11c(&local_e0);
  if ((byte)local_e0._0_1_ < 8) {
    if (*(byte *)(*(long *)*puVar35 + 0x476) < 2) {
      iVar13 = FUN_02582d8c(&local_e0,2);
      if (-1 < iVar13) goto LAB_021a1dac;
    }
    else {
      local_d0 = (undefined *)CONCAT71(local_d0._1_7_,local_e0._0_1_);
      uVar15 = FUN_01d3e2d0(*(long *)*puVar35 + 8,&local_d0);
      if ((uVar15 & 1) != 0) {
LAB_021a1dac:
        local_64[0] = local_e0._0_1_;
        if (7 < (byte)local_e0._0_1_) {
          local_64[0] = (CalendarTime)0xff;
        }
        uVar15 = FUN_02669430(local_64);
        if ((uVar15 & 1) != 0) {
          local_d0 = PTR_DAT_04bb2020 + 0x10;
          local_c8 = "TutorialFinishAndPast1day";
          iVar13 = FUN_0274bce0(&local_e0,&local_d0);
          if (iVar13 != 0) {
            if ((param_2 & 1) == 0) goto LAB_021a1df8;
            goto LAB_021a1d90;
          }
        }
      }
    }
    local_68[0] = local_e0._0_1_;
    if (7 < (byte)local_e0._0_1_) {
      local_68[0] = (CalendarTime)0xff;
    }
    uVar15 = FUN_02669430(local_68);
    if ((uVar15 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x92e4) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x92c0) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x92c8) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x92d0) = 0xffffffffffffffff;
      goto LAB_021a1e50;
    }
    uVar31 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x55bd5) == '\0') {
LAB_021a1df8:
      FUN_021a3ce0(param_1);
      goto LAB_021a1e50;
    }
LAB_021a1d90:
    uVar31 = 0;
  }
  FUN_021a4450(param_1,uVar31);
LAB_021a1e50:
  *(char *)(param_1 + 0x55bd5) = '\x01';
  return;
LAB_021a31c8:
  if (((ushort *)((ulong)uVar25 + (long)puVar16) != (ushort *)0x0) &&
     (uVar4 = *(ushort *)((ulong)uVar25 + (long)puVar16), uVar4 < 0x80)) {
    puVar21 = puVar21 + uVar4;
  }
LAB_021a2b74:
  *puVar21 = 0;
LAB_021a2b78:
  lVar27 = lVar27 + 1;
  if (lVar27 == 10) goto LAB_021a328c;
  goto LAB_021a2b84;
}

