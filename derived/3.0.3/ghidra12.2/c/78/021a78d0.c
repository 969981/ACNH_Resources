
void FUN_021a78d0(long param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint *puVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  char *pcVar19;
  long lVar20;
  undefined8 *puVar21;
  uint *puVar22;
  ulong *puVar23;
  int *piVar24;
  CalendarTime *pCVar25;
  uint uVar26;
  CalendarTime *pCVar27;
  long *plVar28;
  int iVar29;
  undefined8 *puVar30;
  int iVar31;
  uint uVar32;
  char cVar33;
  uint uVar34;
  int iVar35;
  ulong uVar36;
  uint uVar37;
  long *plVar38;
  undefined8 uVar39;
  char *pcVar40;
  long lVar41;
  ulong uVar42;
  int iVar43;
  long *plVar44;
  uint local_120;
  uint local_118;
  uint local_110;
  uint local_fc;
  uint local_f8;
  uint local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8 [3];
  undefined1 local_9c;
  undefined1 local_9b;
  undefined1 local_9a;
  undefined1 local_99;
  undefined4 local_98;
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_92;
  undefined8 local_90;
  CalendarTime local_88;
  CalendarTime local_87;
  CalendarTime local_86;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  
  puVar1 = (uint *)(param_1 + 0x92cc);
  uVar6 = nn::os::GetSystemTick();
  puVar5 = PTR_DAT_04bb6380;
  puVar4 = PTR_DAT_04bb2208;
  uVar37 = 0;
  uVar34 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
  uVar36 = 0;
  uVar32 = (uVar34 ^ uVar34 >> 0x1e) * 0x6c078965 + 2;
  uVar6 = *param_3 - (*param_3 >> 1 & 0x55555555);
  uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
  uVar17 = (uVar32 ^ uVar32 >> 0x1e) * 0x6c078965 + 3;
  uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
  uVar6 = uVar6 + (uVar6 >> 8);
  do {
    uVar8 = 1 << (ulong)((uint)uVar36 & 0x1f);
    if ((param_2[uVar36 >> 5 & 0x7ffffff] & uVar8) != 0) {
      pcVar40 = (char *)(param_1 + uVar36 * 0xba0 + 0x818);
      lVar18 = *(long *)puVar4;
      uVar7 = FUN_006bd550("CountdownFieldNpc",0);
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar7);
      puVar13 = (uint *)FUN_021cb820(lVar18 + 0x660,&local_c8);
      if (puVar13 != (uint *)0x0) {
        pcVar19 = pcVar40;
        if (*puVar13 != 0) {
          cVar33 = *PTR_DAT_04bb6378;
          do {
            puVar3 = PTR_DAT_04bb6378;
            if (cVar33 == '\0') {
              cVar33 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *puVar3 = 1;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              uVar9 = *puVar13;
            }
            else {
              uVar9 = *(uint *)(puVar5 + 8);
              if (-1 < (int)uVar9) {
                if (((ushort *)((ulong)uVar9 + (long)puVar13) != (ushort *)0x0) &&
                   (uVar2 = *(ushort *)((ulong)uVar9 + (long)puVar13), uVar2 < 0x80)) {
                  pcVar19 = pcVar40 + uVar2;
                }
                break;
              }
              if (uVar9 != 0xffffffff) break;
              uVar9 = *puVar13;
            }
            if ((uVar9 == 0) || (puVar22 = (uint *)(ulong)uVar9, puVar13 == puVar22)) break;
            lVar18 = 0xc;
            if (*(char *)((long)puVar13 + (10 - (long)puVar22)) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar13 + (lVar18 - (long)puVar22);
            if (lVar18 == 0) break;
            uVar42 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar22));
            *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
            if (uVar42 == 0) break;
            piVar24 = (int *)(lVar18 + 4);
            while (piVar24[-1] != 0x54706054) {
              piVar24 = piVar24 + 2;
              uVar42 = uVar42 - 1;
              if (uVar42 == 0) goto LAB_021a7af4;
            }
            iVar35 = 0;
            if (*piVar24 != -1) {
              iVar35 = *piVar24;
            }
            *(int *)(puVar5 + 8) = iVar35;
            if (*puVar13 == 0) break;
          } while( true );
        }
LAB_021a7af4:
        if (*pcVar19 != '\0') goto LAB_021a79c0;
      }
      lVar18 = *(long *)puVar4;
      uVar7 = FUN_006bd550("FireworksFieldNpc",0);
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar7);
      puVar13 = (uint *)FUN_021cb820(lVar18 + 0x660,&local_c8);
      if (puVar13 != (uint *)0x0) {
        if (*puVar13 != 0) {
          cVar33 = *PTR_DAT_04bb6378;
          do {
            puVar3 = PTR_DAT_04bb6378;
            if (cVar33 == '\0') {
              cVar33 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *puVar3 = 1;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              uVar9 = *puVar13;
            }
            else {
              uVar9 = *(uint *)(puVar5 + 8);
              if (-1 < (int)uVar9) {
                if (((ushort *)((ulong)uVar9 + (long)puVar13) != (ushort *)0x0) &&
                   (uVar2 = *(ushort *)((ulong)uVar9 + (long)puVar13), uVar2 < 0x80)) {
                  pcVar40 = pcVar40 + uVar2;
                }
                break;
              }
              if (uVar9 != 0xffffffff) break;
              uVar9 = *puVar13;
            }
            if ((uVar9 == 0) || (puVar22 = (uint *)(ulong)uVar9, puVar13 == puVar22)) break;
            lVar18 = 0xc;
            if (*(char *)((long)puVar13 + (10 - (long)puVar22)) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar13 + (lVar18 - (long)puVar22);
            if (lVar18 == 0) break;
            uVar42 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar22));
            *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
            if (uVar42 == 0) break;
            piVar24 = (int *)(lVar18 + 4);
            while (piVar24[-1] != 0x54706054) {
              piVar24 = piVar24 + 2;
              uVar42 = uVar42 - 1;
              if (uVar42 == 0) goto LAB_021a7c40;
            }
            iVar35 = 0;
            if (*piVar24 != -1) {
              iVar35 = *piVar24;
            }
            *(int *)(puVar5 + 8) = iVar35;
            if (*puVar13 == 0) break;
          } while( true );
        }
LAB_021a7c40:
        if (*pcVar40 != '\0') goto LAB_021a79c0;
      }
      uVar37 = uVar8 | uVar37;
    }
LAB_021a79c0:
    puVar3 = PTR_DAT_04bb2020;
    uVar36 = uVar36 + 1;
  } while (uVar36 != 10);
  uVar39 = *(undefined8 *)PTR_DAT_04bb32f0;
  local_c8 = PTR_DAT_04bb2020 + 0x10;
  local_c0 = (long *)0x40e90fb;
  puVar23 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar23 == 0) {
    local_90 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_90 >> 0x20) < '\x05') {
      lVar18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
      local_80 = (undefined *)(lVar18 + -0x15180);
      local_90 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
    }
    puVar23 = &local_90;
    uVar36 = local_90 >> 0x30;
    local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
    local_90 = CONCAT26((short)uVar36,(undefined6)local_90) & 0xff00ffffffffffff;
  }
  uVar36 = *puVar23;
  uVar36 = FUN_00879dd0(uVar39,&local_c8,uVar36,uVar36 >> 0x10,uVar36 >> 0x18,0);
  if ((((uVar36 & 1) != 0) && (uVar8 = *param_3, uVar8 != 0)) &&
     (uVar9 = uVar8 - (uVar8 >> 1 & 0x55555555),
     uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333),
     uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f, uVar9 = uVar9 + (uVar9 >> 8),
     (uVar9 + (uVar9 >> 0x10) & 0x3f) == 1)) {
    uVar8 = uVar8 - 1 & (uVar8 ^ 0xffffffff);
    uVar8 = uVar8 - (uVar8 >> 1 & 0x55555555);
    uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
    uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
    uVar8 = uVar8 + (uVar8 >> 8);
    local_c0 = (long *)0x406845d;
    local_c8 = puVar3 + 0x10;
    FUN_027490f0(uVar8 + (uVar8 >> 0x10) & 0x3f,&local_c8);
    local_c8 = (undefined *)0x0;
    local_c0 = (long *)0x0;
    if ((uVar37 & 1) == 0) {
LAB_021a8340:
      local_d8 = 0xffffffff;
      uVar8 = uVar37;
      uVar9 = 0xffffffff;
      uVar10 = uVar37;
      if ((uVar37 >> 1 & 1) == 0) goto joined_r0x021a8350;
LAB_021a7dc4:
      local_80 = puVar3 + 0x10;
      local_78 = "CarnivalFeatherColor";
      local_110 = FUN_027490f0(1,&local_80);
      if (3 < local_110) {
        uVar8 = uVar37 & 0xfffffffd;
        uVar9 = local_d8;
        uVar10 = uVar37;
        goto joined_r0x021a8350;
      }
      *(int *)((long)local_b8 + (ulong)local_110 * 4 + -0x10) =
           *(int *)((long)local_b8 + (ulong)local_110 * 4 + -0x10) + 1;
      uVar8 = local_110;
      if ((uVar37 >> 2 & 1) != 0) goto LAB_021a8364;
LAB_021a83a8:
      local_118 = 0xffffffff;
      uVar8 = 0xffffffff;
      if ((uVar37 >> 3 & 1) == 0) goto LAB_021a842c;
LAB_021a83b4:
      local_118 = uVar8;
      local_80 = puVar3 + 0x10;
      local_78 = "CarnivalFeatherColor";
      local_f8 = FUN_027490f0(3,&local_80);
      if (3 < local_f8) {
        uVar37 = uVar37 & 0xfffffff7;
        goto LAB_021a842c;
      }
      *(int *)((long)local_b8 + (ulong)local_f8 * 4 + -0x10) =
           *(int *)((long)local_b8 + (ulong)local_f8 * 4 + -0x10) + 1;
      uVar8 = local_f8;
      if ((uVar37 >> 4 & 1) != 0) goto LAB_021a83ec;
LAB_021a8438:
      local_f8 = uVar8;
      uVar8 = uVar37;
      uVar9 = uVar37;
joined_r0x021a843c:
      uVar37 = uVar8;
      uVar8 = 0xffffffff;
      uVar10 = uVar37;
      uVar12 = 0xffffffff;
      uVar26 = uVar37;
      if ((uVar9 >> 5 & 1) == 0) goto joined_r0x021a849c;
LAB_021a8458:
      local_80 = puVar3 + 0x10;
      local_78 = "CarnivalFeatherColor";
      uVar9 = FUN_027490f0(5,&local_80);
      if (3 < uVar9) {
        uVar10 = uVar37 & 0xffffffdf;
        uVar12 = uVar8;
        uVar26 = uVar37;
        goto joined_r0x021a849c;
      }
      *(int *)((long)local_b8 + (ulong)uVar9 * 4 + -0x10) =
           *(int *)((long)local_b8 + (ulong)uVar9 * 4 + -0x10) + 1;
      uVar10 = uVar9;
      if ((uVar37 >> 6 & 1) != 0) goto LAB_021a84a0;
LAB_021a84e4:
      local_120 = 0xffffffff;
      uVar10 = local_120;
      local_120 = 0xffffffff;
      if ((uVar37 >> 7 & 1) == 0) goto LAB_021a856c;
LAB_021a84f0:
      local_120 = uVar10;
      local_80 = puVar3 + 0x10;
      local_78 = "CarnivalFeatherColor";
      uVar10 = FUN_027490f0(7,&local_80);
      if (3 < uVar10) {
        uVar37 = uVar37 & 0xffffff7f;
        goto LAB_021a856c;
      }
      *(int *)((long)local_b8 + (ulong)uVar10 * 4 + -0x10) =
           *(int *)((long)local_b8 + (ulong)uVar10 * 4 + -0x10) + 1;
      uVar12 = uVar37;
      uVar26 = uVar10;
      if ((uVar37 >> 8 & 1) == 0) goto LAB_021a8578;
LAB_021a852c:
      local_80 = puVar3 + 0x10;
      local_78 = "CarnivalFeatherColor";
      uVar11 = FUN_027490f0(8,&local_80);
      if (uVar11 < 4) {
        *(int *)((long)local_b8 + (ulong)uVar11 * 4 + -0x10) =
             *(int *)((long)local_b8 + (ulong)uVar11 * 4 + -0x10) + 1;
        uVar37 = uVar12;
        goto joined_r0x021a857c;
      }
      uVar37 = uVar12 & 0xfffffeff;
      uVar11 = 0xffffffff;
      uVar26 = 0xffffffff;
      if ((uVar12 >> 9 & 1) != 0) goto LAB_021a8590;
LAB_021a85c8:
      uVar12 = 0xffffffff;
    }
    else {
      local_78 = "CarnivalFeatherColor";
      local_80 = puVar3 + 0x10;
      local_d8 = FUN_027490f0(0,&local_80);
      if (3 < local_d8) {
        uVar37 = uVar37 & 0xfffffffe;
        goto LAB_021a8340;
      }
      *(int *)((long)local_b8 + (ulong)local_d8 * 4 + -0x10) =
           *(int *)((long)local_b8 + (ulong)local_d8 * 4 + -0x10) + 1;
      uVar8 = uVar37;
      uVar9 = local_d8;
      uVar10 = uVar37;
      if ((uVar37 >> 1 & 1) != 0) goto LAB_021a7dc4;
joined_r0x021a8350:
      local_d8 = uVar9;
      uVar37 = uVar8;
      local_110 = 0xffffffff;
      uVar8 = 0xffffffff;
      if ((uVar10 >> 2 & 1) == 0) goto LAB_021a83a8;
LAB_021a8364:
      local_110 = uVar8;
      local_80 = puVar3 + 0x10;
      local_78 = "CarnivalFeatherColor";
      local_118 = FUN_027490f0(2,&local_80);
      if (3 < local_118) {
        uVar37 = uVar37 & 0xfffffffb;
        goto LAB_021a83a8;
      }
      *(int *)((long)local_b8 + (ulong)local_118 * 4 + -0x10) =
           *(int *)((long)local_b8 + (ulong)local_118 * 4 + -0x10) + 1;
      uVar8 = local_118;
      if ((uVar37 >> 3 & 1) != 0) goto LAB_021a83b4;
LAB_021a842c:
      local_f8 = 0xffffffff;
      uVar8 = local_f8;
      local_f8 = 0xffffffff;
      if ((uVar37 >> 4 & 1) == 0) goto LAB_021a8438;
LAB_021a83ec:
      local_80 = puVar3 + 0x10;
      local_78 = "CarnivalFeatherColor";
      uVar8 = FUN_027490f0(4,&local_80);
      if (3 < uVar8) {
        uVar8 = uVar37 & 0xffffffef;
        uVar9 = uVar37;
        goto joined_r0x021a843c;
      }
      *(int *)((long)local_b8 + (ulong)uVar8 * 4 + -0x10) =
           *(int *)((long)local_b8 + (ulong)uVar8 * 4 + -0x10) + 1;
      uVar10 = uVar37;
      uVar12 = uVar8;
      uVar26 = uVar37;
      if ((uVar37 >> 5 & 1) != 0) goto LAB_021a8458;
joined_r0x021a849c:
      uVar8 = uVar12;
      uVar37 = uVar10;
      uVar9 = 0xffffffff;
      uVar10 = 0xffffffff;
      if ((uVar26 >> 6 & 1) == 0) goto LAB_021a84e4;
LAB_021a84a0:
      uVar9 = uVar10;
      local_80 = puVar3 + 0x10;
      local_78 = "CarnivalFeatherColor";
      local_120 = FUN_027490f0(6,&local_80);
      if (3 < local_120) {
        uVar37 = uVar37 & 0xffffffbf;
        goto LAB_021a84e4;
      }
      *(int *)((long)local_b8 + (ulong)local_120 * 4 + -0x10) =
           *(int *)((long)local_b8 + (ulong)local_120 * 4 + -0x10) + 1;
      uVar10 = local_120;
      if ((uVar37 >> 7 & 1) != 0) goto LAB_021a84f0;
LAB_021a856c:
      uVar26 = 0xffffffff;
      uVar10 = 0xffffffff;
      uVar12 = uVar37;
      if ((uVar37 >> 8 & 1) != 0) goto LAB_021a852c;
LAB_021a8578:
      uVar11 = 0xffffffff;
      uVar10 = uVar26;
joined_r0x021a857c:
      uVar26 = uVar11;
      if ((uVar37 >> 9 & 1) == 0) goto LAB_021a85c8;
LAB_021a8590:
      uVar11 = uVar26;
      local_80 = puVar3 + 0x10;
      local_78 = "CarnivalFeatherColor";
      uVar12 = FUN_027490f0(9,&local_80);
      if (3 < uVar12) {
        uVar37 = uVar37 & 0xfffffdff;
        goto LAB_021a85c8;
      }
      *(int *)((long)local_b8 + (ulong)uVar12 * 4 + -0x10) =
           *(int *)((long)local_b8 + (ulong)uVar12 * 4 + -0x10) + 1;
    }
    if ((int)local_c8 < 2) {
      if (((local_c8._4_4_ < 2) && ((int)local_c0 < 2)) && (local_c0._4_4_ < 2)) goto LAB_021a7e04;
      if (local_d8 == 0) {
        lVar18 = 0;
      }
      else if (local_110 == 0) {
        lVar18 = 1;
      }
      else if (local_118 == 0) {
        lVar18 = 2;
      }
      else if (local_f8 == 0) {
        lVar18 = 3;
      }
      else if (uVar8 == 0) {
        lVar18 = 4;
      }
      else if (uVar9 == 0) {
        lVar18 = 5;
      }
      else if (local_120 == 0) {
        lVar18 = 6;
      }
      else if (uVar10 == 0) {
        lVar18 = 7;
      }
      else if (uVar11 == 0) {
        lVar18 = 8;
      }
      else {
        if (uVar12 != 0) goto LAB_021a8d24;
        lVar18 = 9;
      }
      uVar37 = uVar37 & (1 << lVar18 ^ 0xffffffffU);
    }
LAB_021a8d24:
    if (local_c8._4_4_ < 2) {
      if (local_d8 == 1) {
        uVar26 = 0;
      }
      else {
        uVar26 = 1;
        if (local_110 != 1) {
          if (local_118 == 1) {
            uVar26 = 2;
          }
          else if (local_f8 == 1) {
            uVar26 = 3;
          }
          else if (uVar8 == 1) {
            uVar26 = 4;
          }
          else if (uVar9 == 1) {
            uVar26 = 5;
          }
          else if (local_120 == 1) {
            uVar26 = 6;
          }
          else if (uVar10 == 1) {
            uVar26 = 7;
          }
          else if (uVar11 == 1) {
            uVar26 = 8;
          }
          else {
            if (uVar12 != 1) goto LAB_021a8dd8;
            uVar26 = 9;
          }
        }
      }
      uVar37 = uVar37 & (1 << (ulong)uVar26 ^ 0xffffffffU);
    }
LAB_021a8dd8:
    if ((int)local_c0 < 2) {
      if (local_d8 == 2) {
        uVar26 = 0;
      }
      else if (local_110 == 2) {
        uVar26 = 1;
      }
      else {
        uVar26 = local_118;
        if (local_118 != 2) {
          if (local_f8 == 2) {
            uVar26 = 3;
          }
          else if (uVar8 == 2) {
            uVar26 = 4;
          }
          else if (uVar9 == 2) {
            uVar26 = 5;
          }
          else if (local_120 == 2) {
            uVar26 = 6;
          }
          else if (uVar10 == 2) {
            uVar26 = 7;
          }
          else if (uVar11 == 2) {
            uVar26 = 8;
          }
          else {
            if (uVar12 != 2) goto LAB_021a8e90;
            uVar26 = 9;
          }
        }
      }
      uVar37 = uVar37 & (1 << (ulong)(uVar26 & 0x1f) ^ 0xffffffffU);
    }
LAB_021a8e90:
    if (local_c0._4_4_ < 2) {
      if (local_d8 == 3) {
        lVar18 = 0;
      }
      else if (local_110 == 3) {
        lVar18 = 1;
      }
      else if (local_118 == 3) {
        lVar18 = 2;
      }
      else if (local_f8 == 3) {
        lVar18 = 3;
      }
      else if (uVar8 == 3) {
        lVar18 = 4;
      }
      else if (uVar9 == 3) {
        lVar18 = 5;
      }
      else if (local_120 == 3) {
        lVar18 = 6;
      }
      else if (uVar10 == 3) {
        lVar18 = 7;
      }
      else if (uVar11 == 3) {
        lVar18 = 8;
      }
      else {
        if (uVar12 != 3) goto LAB_021a7e04;
        lVar18 = 9;
      }
      uVar37 = uVar37 & (1 << lVar18 ^ 0xffffffffU);
    }
  }
LAB_021a7e04:
  uVar8 = uVar37 - (uVar37 >> 1 & 0x55555555);
  uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
  uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
  uVar8 = uVar8 + (uVar8 >> 8);
  uVar8 = uVar8 + (uVar8 >> 0x10) & 0x3f;
  if (uVar8 == 0) {
    uVar37 = *param_2;
    uVar8 = uVar37 - (uVar37 >> 1 & 0x55555555);
    uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
    uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
    uVar8 = uVar8 + (uVar8 >> 8);
    uVar8 = uVar8 + (uVar8 >> 0x10) & 0x3f;
  }
  uVar6 = uVar6 + (uVar6 >> 0x10) & 0x3f;
  uVar36 = (ulong)uVar6;
  lVar18 = *(long *)PTR_DAT_04bb3968;
  uVar9 = *param_4;
  uVar10 = *(uint *)(lVar18 + 0x16718);
  if ((int)uVar10 < 1) {
    lVar20 = *(long *)(lVar18 + 0x16608);
    if (lVar20 == 0) goto LAB_021a7f38;
    puVar13 = *(uint **)(lVar20 + 8);
    if ((((puVar13 == (uint *)0x0) ||
         ((0xe < *(uint *)(lVar18 + 0x16620) &&
          (*(char *)(*(long *)(lVar18 + 0x16628) + 0xe) == '\0')))) || (*puVar13 < 0xf)) ||
       ((puVar13[1] == 0 || ((ushort)puVar13[2] == 0)))) {
      lVar41 = 0;
    }
    else {
      iVar35 = 0xc;
      if (*(char *)((long)puVar13 + 10) != '\0') {
        iVar35 = 0x1c;
      }
      lVar41 = (ulong)(puVar13[1] * 0xe + (uint)(ushort)puVar13[2] * 8 + iVar35) + (long)puVar13;
    }
    puVar13 = *(uint **)(lVar20 + 8);
    if ((puVar13 == (uint *)0x0) ||
       ((((0xf < *(uint *)(lVar18 + 0x16620) &&
          (*(char *)(*(long *)(lVar18 + 0x16628) + 0xf) == '\0')) || (*puVar13 < 0x10)) ||
        ((puVar13[1] == 0 || ((ushort)puVar13[2] == 0)))))) goto LAB_021a7f3c;
    iVar35 = 0xc;
    if (*(char *)((long)puVar13 + 10) != '\0') {
      iVar35 = 0x1c;
    }
    lVar18 = (ulong)(puVar13[1] * 0xf + (uint)(ushort)puVar13[2] * 8 + iVar35) + (long)puVar13;
  }
  else {
    if (uVar10 < 0xf) {
LAB_021a7f38:
      lVar41 = 0;
    }
    else {
      lVar20 = 0x70;
      if (*(uint *)(lVar18 + 0x16708) < 0xf) {
        lVar20 = 0;
      }
      lVar41 = *(long *)(*(long *)(lVar18 + 0x16710) + lVar20);
      if (uVar10 != 0xf) {
        lVar20 = 0x78;
        if (*(uint *)(lVar18 + 0x16708) < 0x10) {
          lVar20 = 0;
        }
        lVar18 = *(long *)(*(long *)(lVar18 + 0x16710) + lVar20);
        goto LAB_021a7f40;
      }
    }
LAB_021a7f3c:
    lVar18 = 0;
  }
LAB_021a7f40:
  lVar20 = *(long *)PTR_DAT_04bb46b0;
  if (lVar20 == 0) {
LAB_021a7f98:
    lVar20 = 0;
  }
  else {
    puVar21 = *(undefined8 **)(lVar20 + 0x10);
    if ((*(byte *)(lVar20 + 0x453) & 1) == 0) {
      lVar14 = (**(code **)(*(long *)*puVar21 + 0x38))();
      lVar20 = 0;
      if (lVar14 != 0) {
        lVar20 = lVar14 + 0x70;
      }
    }
    else {
      if (puVar21 == (undefined8 *)0x0) goto LAB_021a7f98;
      lVar20 = 0;
      if ((long *)puVar21[0x26] != (long *)0x0) {
        lVar20 = (**(code **)(*(long *)puVar21[0x26] + 0x38))();
      }
    }
  }
  lVar14 = lVar20 + 0xa8;
  if (lVar20 == 0) {
    lVar14 = 0;
  }
  if (uVar6 == 0) {
    return;
  }
  uVar9 = uVar9 - (uVar9 >> 1 & 0x55555555);
  uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
  uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
  uVar9 = uVar9 + (uVar9 >> 8);
  uVar9 = uVar9 + (uVar9 >> 0x10) & 0x3f;
  if (uVar9 == 0) {
    return;
  }
  if (uVar8 + uVar6 < 2) {
    return;
  }
  if (lVar41 == 0) {
    return;
  }
  if (lVar18 == 0) {
    return;
  }
  if (lVar20 == 0) {
    return;
  }
  uVar10 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 4;
  if ((*(long *)(lVar14 + 0x28) == 0) ||
     (puVar21 = *(undefined8 **)(*(long *)(lVar14 + 0x28) + 0x10), puVar21 == (undefined8 *)0x0)) {
    local_fc = 0;
  }
  else {
    local_fc = (**(code **)*puVar21)();
  }
  FUN_0214ca00(&local_90,lVar41);
  FUN_0214ca00(&local_9c,lVar18);
  local_c0 = local_b8;
  iVar43 = 0;
  uVar42 = 0;
  uVar12 = 0;
  local_c8 = (undefined *)0x300000000;
  iVar35 = 2;
  do {
    uVar26 = *param_3;
    if ((uVar26 != 0) &&
       (uVar11 = uVar26 - (uVar26 >> 1 & 0x55555555),
       uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333),
       uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f, uVar11 = uVar11 + (uVar11 >> 8),
       uVar12 < (uVar11 + (uVar11 >> 0x10) & 0x3f))) {
      iVar29 = iVar35;
      do {
        iVar29 = iVar29 + -1;
        if (iVar29 < 2) {
          uVar26 = uVar26 - 1 & (uVar26 ^ 0xffffffff);
          uVar26 = uVar26 - (uVar26 >> 1 & 0x55555555);
          uVar26 = (uVar26 >> 2 & 0x33333333) + (uVar26 & 0x33333333);
          uVar26 = uVar26 + (uVar26 >> 4) & 0xf0f0f0f;
          uVar26 = uVar26 + (uVar26 >> 8);
          uVar26 = uVar26 + (uVar26 >> 0x10) & 0x3f;
          if (uVar26 < 10) {
            if ((&DAT_053fee41)[(ulong)uVar26 * 0xba0] != '\0') {
              if (iVar43 < local_c8._4_4_) {
                local_c0[iVar43] = (long)(&DAT_053fe348 + (ulong)uVar26 * 0xba0);
                iVar43 = (int)local_c8 + 1;
                local_c8 = (undefined *)CONCAT44(local_c8._4_4_,iVar43);
              }
              uVar11 = (uint)uVar42;
              if (2 < uVar11) {
                uVar42 = 0;
              }
              puVar1[uVar42] = uVar26;
              uVar42 = (ulong)(uVar11 + 1);
            }
          }
          break;
        }
        uVar26 = uVar26 - 1 & uVar26;
      } while (uVar26 != 0);
    }
    uVar12 = uVar12 + 1;
    iVar35 = iVar35 + 1;
  } while (uVar12 != uVar6);
  if ((*(long *)(lVar14 + 0x28) != 0) &&
     (plVar15 = *(long **)(*(long *)(lVar14 + 0x28) + 0x20), plVar15 != (long *)0x0)) {
    local_80 = *(undefined **)(lVar14 + 8);
    local_78 = *(char **)(lVar14 + 0x10);
    local_70 = 0x1e3388;
    (**(code **)(*plVar15 + 0x20))(plVar15,&local_80);
  }
  cVar33 = *(char *)(*(long *)(lVar14 + 0x10) + *(long *)(lVar14 + 8) + 0x1e335c);
  iVar43 = (int)cVar33;
  iVar35 = (int)uVar42;
  if (cVar33 == -1) {
    uVar6 = 0xffffffff;
    uVar34 = uVar34 ^ uVar34 * 0x800;
    uVar12 = uVar34 >> 8 ^ uVar10 >> 0x13 ^ uVar34 ^ uVar10;
    uVar34 = *param_4;
    if ((uVar34 != 0) &&
       (uVar26 = uVar34 - (uVar34 >> 1 & 0x55555555),
       uVar26 = (uVar26 >> 2 & 0x33333333) + (uVar26 & 0x33333333),
       uVar26 = uVar26 + (uVar26 >> 4) & 0xf0f0f0f, uVar26 = uVar26 + (uVar26 >> 8),
       uVar9 = (uint)((ulong)uVar9 * (ulong)uVar12 >> 0x20),
       uVar9 < (uVar26 + (uVar26 >> 0x10) & 0x3f))) {
      iVar43 = uVar9 + 2;
      do {
        iVar43 = iVar43 + -1;
        if (iVar43 < 2) {
          uVar6 = uVar34 - 1 & (uVar34 ^ 0xffffffff);
          uVar6 = uVar6 - (uVar6 >> 1 & 0x55555555);
          uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
          uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
          uVar6 = uVar6 + (uVar6 >> 8);
          uVar6 = uVar6 + (uVar6 >> 0x10) & 0x3f;
          break;
        }
        uVar34 = uVar34 - 1 & uVar34;
      } while (uVar34 != 0);
    }
    local_80 = (undefined *)((ulong)local_80._4_4_ << 0x20);
    uVar16 = FUN_02b67a30(&local_80,uVar6);
    if ((uVar16 & 1) == 0) {
      iVar43 = -1;
    }
    else {
      iVar43 = (int)local_80;
    }
    uVar34 = uVar32;
    if (1 < iVar35) goto LAB_021a88c8;
LAB_021a86c0:
    iVar29 = 0;
    iVar35 = 2 - iVar35;
    uVar16 = (ulong)uVar8;
    if (iVar35 < 2) {
      iVar35 = 1;
    }
    do {
      uVar6 = uVar10;
      uVar10 = uVar12;
      uVar34 = uVar34 ^ uVar34 << 0xb;
      uVar12 = uVar34 >> 8 ^ uVar10 >> 0x13 ^ uVar34 ^ uVar10;
      uVar34 = (uint)(uVar16 * uVar12 >> 0x20);
      if ((uVar37 != 0) &&
         (uVar32 = uVar37 - (uVar37 >> 1 & 0x55555555),
         uVar32 = (uVar32 >> 2 & 0x33333333) + (uVar32 & 0x33333333),
         uVar32 = uVar32 + (uVar32 >> 4) & 0xf0f0f0f, uVar32 = uVar32 + (uVar32 >> 8),
         (int)(uVar34 + 1) <= (int)(uVar32 + (uVar32 >> 0x10) & 0x3f))) {
        iVar31 = uVar34 + 2;
        uVar32 = uVar37;
        do {
          iVar31 = iVar31 + -1;
          if (iVar31 < 2) {
            uVar32 = uVar32 - 1 & (uVar32 ^ 0xffffffff);
            uVar32 = uVar32 - (uVar32 >> 1 & 0x55555555);
            uVar32 = (uVar32 >> 2 & 0x33333333) + (uVar32 & 0x33333333);
            uVar32 = uVar32 + (uVar32 >> 4) & 0xf0f0f0f;
            uVar32 = uVar32 + (uVar32 >> 8);
            uVar32 = uVar32 + (uVar32 >> 0x10) & 0x3f;
            if (uVar32 < 10) {
              if ((&DAT_053fee41)[(ulong)uVar32 * 0xba0] != '\0') {
                if ((int)local_c8 < local_c8._4_4_) {
                  local_c0[(int)local_c8] = (long)(&DAT_053fe348 + (ulong)uVar32 * 0xba0);
                  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,(int)local_c8 + 1);
                }
                uVar9 = (uint)uVar42;
                if (2 < uVar9) {
                  uVar42 = 0;
                }
                puVar1[uVar42] = uVar32;
                uVar42 = (ulong)(uVar9 + 1);
              }
            }
            break;
          }
          uVar32 = uVar32 - 1 & uVar32;
        } while (uVar32 != 0);
      }
      if (2 < (int)local_c8) {
        plVar15 = local_c0 + ((ulong)local_c8 & 0xffffffff);
        plVar38 = local_c0;
        plVar44 = (long *)PTR_DAT_04bb46b0;
        goto LAB_021a895c;
      }
      if (iVar29 == uVar8 - (uVar8 != 0)) break;
      if (uVar34 < 10) {
        uVar34 = 1 << (ulong)(uVar34 & 0x1f);
        uVar37 = uVar37 & (uVar34 ^ 0xffffffff);
        *param_2 = *param_2 & (uVar34 ^ 0xffffffff);
      }
      iVar29 = iVar29 + 1;
      uVar16 = uVar16 - 1;
      uVar34 = uVar17;
      uVar17 = uVar6;
    } while (iVar29 != iVar35);
  }
  else {
    local_80 = (undefined *)((ulong)local_80._4_4_ << 0x20);
    uVar16 = FUN_02b67a30(&local_80,*puVar1);
    if ((uVar16 & 1) == 0) {
LAB_021a824c:
      if (uVar6 != 1) {
        local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
        uVar16 = FUN_02b67a30(&local_80,*(uint *)(param_1 + 0x92d0));
        iVar29 = (int)cVar33;
        if ((uVar16 & 1) != 0) {
          puVar13 = (uint *)(param_1 + 0x92d0);
          if ((int)local_80 == iVar29) goto LAB_021a88b4;
        }
        if (uVar6 != 2) {
          local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
          uVar16 = FUN_02b67a30(&local_80,*(uint *)(param_1 + 0x92d4));
          if ((uVar16 & 1) != 0) {
            puVar13 = (uint *)(param_1 + 0x92d4);
            if ((int)local_80 == iVar29) goto LAB_021a88b4;
          }
          if (uVar6 != 3) {
            lVar18 = uVar36 - 3;
            uVar6 = 0xffffffff;
            do {
              local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
              uVar16 = FUN_02b67a30(&local_80,*puVar1);
              if (((uVar16 & 1) != 0) && ((int)local_80 == iVar29)) {
                puVar13 = puVar1;
                goto LAB_021a88b4;
              }
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            goto LAB_021a88b8;
          }
        }
      }
      uVar6 = 0xffffffff;
    }
    else {
      puVar13 = puVar1;
      if ((int)local_80 != cVar33) goto LAB_021a824c;
LAB_021a88b4:
      uVar6 = *puVar13;
    }
LAB_021a88b8:
    uVar12 = uVar10;
    uVar10 = uVar17;
    uVar17 = uVar32;
    if (iVar35 < 2) goto LAB_021a86c0;
LAB_021a88c8:
    uVar37 = *puVar1;
    if ((uVar37 != uVar6) &&
       ((puVar13 = (uint *)(param_1 + 0x92d0), *puVar13 == uVar6 ||
        ((iVar35 != 2 && (puVar13 = (uint *)(param_1 + 0x92d4), *puVar13 == uVar6)))))) {
      *puVar1 = uVar6;
      *puVar13 = uVar37;
    }
  }
  plVar44 = (long *)PTR_DAT_04bb46b0;
  if ((int)local_c8 != 0) {
    plVar15 = local_c0 + (int)local_c8;
    plVar38 = local_c0;
LAB_021a895c:
    do {
      lVar20 = *plVar38;
      uVar6 = (int)uVar36 - 1;
      lVar18 = lVar20 + 0x8b0;
      iVar35 = (int)*(char *)(lVar20 + 0xaf8);
      if ((int)uVar36 < 1) {
        if (*(int *)(lVar20 + 0x930) < *(int *)(lVar20 + 0x948)) {
          puVar21 = *(undefined8 **)(lVar20 + 0x938);
          if (puVar21 != (undefined8 *)0x0) {
            *(undefined8 *)(lVar20 + 0x938) = *puVar21;
          }
          *puVar21 = 0;
          puVar21[3] = 0;
          *(undefined1 *)puVar21 = local_9c;
          *(undefined1 *)((long)puVar21 + 1) = local_9b;
          *(undefined1 *)((long)puVar21 + 2) = local_9a;
          *(undefined1 *)((long)puVar21 + 3) = local_99;
          *(undefined4 *)((long)puVar21 + 4) = local_98;
          *(undefined1 *)(puVar21 + 1) = local_94;
          *(undefined1 *)((long)puVar21 + 9) = local_93;
          plVar28 = puVar21 + 2;
          *plVar28 = 0;
          *(undefined1 *)((long)puVar21 + 10) = local_92;
          puVar30 = *(undefined8 **)(lVar20 + 0x928);
          *(long **)(lVar20 + 0x928) = plVar28;
          *plVar28 = lVar20 + 0x920;
          puVar21[3] = puVar30;
          if (puVar30 != (undefined8 *)0x0) {
            *puVar30 = plVar28;
          }
          *(int *)(lVar20 + 0x930) = *(int *)(lVar20 + 0x930) + 1;
        }
        FUN_0214d220(lVar18);
        FUN_0214f520(lVar18,iVar35);
        FUN_0214f360(lVar18,iVar35);
        uVar6 = 0;
      }
      else {
        if (*(int *)(lVar20 + 0x930) < *(int *)(lVar20 + 0x948)) {
          pCVar25 = *(CalendarTime **)(lVar20 + 0x938);
          if (pCVar25 != (CalendarTime *)0x0) {
            *(undefined8 *)(lVar20 + 0x938) = *(undefined8 *)pCVar25;
          }
          *(undefined8 *)pCVar25 = 0;
          *(undefined8 *)(pCVar25 + 0x18) = 0;
          *pCVar25 = local_90._0_1_;
          pCVar25[1] = local_90._1_1_;
          pCVar25[2] = local_90._2_1_;
          pCVar25[3] = local_90._3_1_;
          *(undefined4 *)(pCVar25 + 4) = local_90._4_4_;
          pCVar25[8] = local_88;
          pCVar25[9] = local_87;
          pCVar27 = pCVar25 + 0x10;
          *(long *)pCVar27 = 0;
          pCVar25[10] = local_86;
          puVar21 = *(undefined8 **)(lVar20 + 0x928);
          *(CalendarTime **)(lVar20 + 0x928) = pCVar27;
          *(long *)pCVar27 = lVar20 + 0x920;
          *(undefined8 **)(pCVar25 + 0x18) = puVar21;
          if (puVar21 != (undefined8 *)0x0) {
            *puVar21 = pCVar27;
          }
          *(int *)(lVar20 + 0x930) = *(int *)(lVar20 + 0x930) + 1;
        }
        FUN_0214d220(lVar18);
        FUN_0214f520(lVar18,iVar35);
        FUN_0214f360(lVar18,iVar35);
      }
      uVar36 = (ulong)uVar6;
      plVar38 = plVar38 + 1;
    } while (plVar38 != plVar15);
  }
  if ((*(long *)(lVar14 + 0x28) != 0) &&
     (plVar15 = *(long **)(*(long *)(lVar14 + 0x28) + 0x20), plVar15 != (long *)0x0)) {
    local_80 = *(undefined **)(lVar14 + 8);
    local_78 = *(char **)(lVar14 + 0x10);
    local_70 = 0x1e3388;
    (**(code **)(*plVar15 + 0x20))(plVar15,&local_80);
  }
  *(char *)(*(long *)(lVar14 + 0x10) + *(long *)(lVar14 + 8) + 0x1e335c) = (char)iVar43;
  *(int *)(param_1 + 0x92e8) = iVar43;
  lVar18 = *plVar44;
  if (lVar18 == 0) goto LAB_021a8ca8;
  puVar21 = *(undefined8 **)(lVar18 + 0x10);
  if ((*(byte *)(lVar18 + 0x453) & 1) == 0) {
    lVar18 = (**(code **)(*(long *)*puVar21 + 0x38))();
    if (lVar18 == 0) goto LAB_021a8ca8;
    lVar18 = lVar18 + 0x70;
  }
  else if (((puVar21 == (undefined8 *)0x0) || ((long *)puVar21[0x26] == (long *)0x0)) ||
          (lVar18 = (**(code **)(*(long *)puVar21[0x26] + 0x38))(), lVar18 == 0)) goto LAB_021a8ca8;
  puVar23 = (ulong *)(lVar18 + 0xe6ef0);
  if ((*(long **)(lVar18 + 0xe6f48) == (long *)0x0) ||
     (puVar21 = (undefined8 *)**(long **)(lVar18 + 0xe6f48), puVar21 == (undefined8 *)0x0)) {
    cVar33 = *(char *)(*(long *)(lVar18 + 0xe6f30) + *(long *)(lVar18 + 0xe6f28) + 0x2c);
  }
  else {
    uVar36 = (**(code **)*puVar21)();
    cVar33 = *(char *)(*(long *)(lVar18 + 0xe6f30) + *(long *)(lVar18 + 0xe6f28) + 0x2c);
    if ((((uVar36 & 1) != 0) && (*(long *)(lVar18 + 0xe6f48) != 0)) &&
       (puVar21 = *(undefined8 **)(*(long *)(lVar18 + 0xe6f48) + 8), puVar21 != (undefined8 *)0x0))
    {
      (**(code **)*puVar21)();
    }
  }
  uVar6 = (uint)cVar33;
  if (((*puVar1 == 0xffffffff) || (*puVar1 != uVar6)) &&
     (((*(uint *)(param_1 + 0x92d0) == 0xffffffff || (*(uint *)(param_1 + 0x92d0) != uVar6)) &&
      ((*(uint *)(param_1 + 0x92d4) == 0xffffffff || (*(uint *)(param_1 + 0x92d4) != uVar6))))))
  goto LAB_021a8ca8;
  lVar20 = *(long *)(lVar18 + 0xe6f10);
  if (lVar20 == 0) {
    FUN_0284c3b0(*(long *)(lVar18 + 0xe6ef8) + *puVar23,0);
    goto LAB_021a8ca8;
  }
  if (*(undefined8 **)(lVar20 + 0x10) == (undefined8 *)0x0) {
    uVar36 = 0;
LAB_021a8c44:
    plVar15 = *(long **)(lVar20 + 0x20);
    if (plVar15 != (long *)0x0) {
      local_80 = (undefined *)*puVar23;
      local_78 = *(char **)(lVar18 + 0xe6ef8);
      local_70 = 0x3c;
      (**(code **)(*plVar15 + 0x20))(plVar15,&local_80);
    }
  }
  else {
    uVar36 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
    lVar20 = *(long *)(lVar18 + 0xe6f10);
    uVar36 = uVar36 & 0xffffffff;
    if (lVar20 != 0) goto LAB_021a8c44;
  }
  FUN_0284c3b0(*(long *)(lVar18 + 0xe6ef8) + *puVar23,0);
  if ((((uVar36 & 1) != 0) && (*(long *)(lVar18 + 0xe6f10) != 0)) &&
     (puVar21 = *(undefined8 **)(*(long *)(lVar18 + 0xe6f10) + 0x18), puVar21 != (undefined8 *)0x0))
  {
    (**(code **)*puVar21)();
  }
LAB_021a8ca8:
  if ((((local_fc & 1) != 0) && (*(long *)(lVar14 + 0x28) != 0)) &&
     (puVar21 = *(undefined8 **)(*(long *)(lVar14 + 0x28) + 0x18), puVar21 != (undefined8 *)0x0)) {
    (**(code **)*puVar21)();
  }
  return;
}

