
/* WARNING: Type propagation algorithm not settling */

void FUN_00e2d450(undefined4 *param_1,int param_2,byte *param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  long *plVar8;
  short *psVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined1 uVar13;
  short sVar14;
  undefined *puVar15;
  undefined1 uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  void *pvVar25;
  undefined8 *puVar26;
  long lVar27;
  long lVar28;
  char *pcVar29;
  long *plVar30;
  byte bVar31;
  int *piVar32;
  short *psVar33;
  ulong uVar34;
  ushort uVar35;
  uint *puVar36;
  char *pcVar37;
  char cVar38;
  ulong uVar39;
  uint *puVar40;
  undefined8 uVar41;
  ulong uVar42;
  long lVar43;
  long lVar44;
  undefined8 local_1708;
  uint *apuStack_1700 [234];
  uint local_fac;
  uint local_fa8;
  uint local_fa4;
  int local_fa0;
  uint local_f98;
  uint local_f94;
  undefined *local_f90;
  char *local_f88;
  undefined4 local_f80;
  char local_f7c [63];
  undefined1 local_f3d;
  undefined8 local_f38;
  undefined8 local_f30;
  uint *local_f28;
  uint local_7dc;
  uint local_7d8;
  uint local_7d4;
  int local_7d0;
  int local_7c4;
  undefined8 local_7c0;
  uint local_7b8 [470];
  
  puVar1 = PTR_DAT_04bb46b0;
  uVar17 = 0;
  local_7c4 = param_2;
  switch(param_2) {
  case 0:
    lVar28 = *(long *)PTR_DAT_04bb46b0;
    if (lVar28 == 0) {
LAB_00e2dc00:
      lVar28 = 0;
    }
    else {
      puVar26 = *(undefined8 **)(lVar28 + 0x10);
      if ((*(byte *)(lVar28 + 0x453) & 1) == 0) {
        lVar44 = (**(code **)(*(long *)*puVar26 + 0x38))();
        lVar28 = 0;
        if (lVar44 != 0) {
          lVar28 = lVar44 + 0x70;
        }
      }
      else {
        if (puVar26 == (undefined8 *)0x0) goto LAB_00e2dc00;
        lVar28 = 0;
        if ((long *)puVar26[0x26] != (long *)0x0) {
          lVar28 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
        }
      }
    }
    if ((*(long **)(lVar28 + 0x1a3d88) == (long *)0x0) ||
       (puVar26 = (undefined8 *)**(long **)(lVar28 + 0x1a3d88), puVar26 == (undefined8 *)0x0)) {
      uVar19 = 0;
    }
    else {
      uVar19 = (**(code **)*puVar26)();
    }
    lVar44 = *(long *)(lVar28 + 0x1a3d70) + *(long *)(lVar28 + 0x1a3d68);
    piVar32 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
    if (*(short *)piVar32 == 0) {
      local_1708 = *(undefined ***)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      if ((char)((ulong)local_1708 >> 0x20) < '\x05') {
        lVar43 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_1708);
        local_f38 = (undefined **)(lVar43 + -0x15180);
        local_1708 = (undefined **)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_f38);
      }
      piVar32 = (int *)&local_1708;
      uVar42 = (ulong)local_1708 >> 0x30;
      local_1708._0_6_ = CONCAT24(5,(int)local_1708);
      local_1708 = (undefined **)(CONCAT26((short)uVar42,(uint6)local_1708) & 0xff00ffffffffffff);
    }
    iVar23 = *piVar32;
    uVar21 = nn::time::GetDayOfWeek((int)(short)iVar23,(iVar23 << 8) >> 0x18,iVar23 >> 0x18);
    local_f38 = (undefined **)CONCAT44(local_f38._4_4_,uVar21);
    uVar17 = 0;
    uVar20 = 0;
    lVar43 = lVar44 + (ulong)uVar21 * 0x200;
    if (6 < uVar21) {
      lVar43 = lVar44;
    }
    do {
      puVar15 = PTR_DAT_04bb43c0;
      if (uVar17 == 0x80) break;
      puVar7 = (undefined2 *)(lVar43 + ((long)((ulong)uVar20 << 0x20) >> 0x1d));
      lVar44 = *(long *)PTR_DAT_04bb43c0;
      uVar21 = FUN_0277d6c4(puVar7);
      if (*(long *)puVar15 != 0) {
        lVar44 = *(long *)(lVar44 + 0x57e58);
        uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
        if ((uVar21 < *(uint *)(lVar44 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar21 * 8) != 0)) {
          lVar44 = *(long *)puVar1;
          if (lVar44 == 0) {
LAB_00e2dda0:
            lVar44 = 0;
          }
          else {
            puVar26 = *(undefined8 **)(lVar44 + 0x10);
            if ((*(byte *)(lVar44 + 0x453) & 1) == 0) {
              lVar24 = (**(code **)(*(long *)*puVar26 + 0x38))();
              lVar44 = 0;
              if (lVar24 != 0) {
                lVar44 = lVar24 + 0x70;
              }
            }
            else {
              if (puVar26 == (undefined8 *)0x0) goto LAB_00e2dda0;
              lVar44 = 0;
              if ((long *)puVar26[0x26] != (long *)0x0) {
                lVar44 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
              }
            }
          }
          if ((*(long **)(lVar44 + 0x1a3d88) == (long *)0x0) ||
             (puVar26 = (undefined8 *)**(long **)(lVar44 + 0x1a3d88), puVar26 == (undefined8 *)0x0))
          {
            uVar42 = 0;
          }
          else {
            uVar42 = (**(code **)*puVar26)();
            uVar42 = uVar42 & 0xffffffff;
          }
          uVar34 = FUN_028b3790(*(long *)(lVar44 + 0x1a3d70) + *(long *)(lVar44 + 0x1a3d68),puVar7);
          if ((((uVar42 & 1) != 0) && (*(long *)(lVar44 + 0x1a3d88) != 0)) &&
             (puVar26 = *(undefined8 **)(*(long *)(lVar44 + 0x1a3d88) + 8),
             puVar26 != (undefined8 *)0x0)) {
            (**(code **)*puVar26)();
          }
          if ((uVar34 & 1) == 0) {
            uVar42 = (ulong)uVar17;
            lVar44 = lVar43 + (long)(int)uVar20 * 8;
            uVar17 = uVar17 + 1;
            puVar5 = (undefined2 *)((long)param_1 + ((long)(uVar42 << 0x20) >> 0x1d));
            *puVar5 = *puVar7;
            *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(lVar44 + 2);
            *(undefined1 *)((long)puVar5 + 3) = *(undefined1 *)(lVar44 + 3);
            *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(lVar44 + 4);
          }
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != 0x40);
    local_f38 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    memset(&local_f30,0,0x754);
    uVar20 = nn::os::GetSystemTick();
    local_7dc = (uVar20 ^ uVar20 >> 0x1e) * 0x6c078965 + 1;
    local_7d8 = (local_7dc ^ local_7dc >> 0x1e) * 0x6c078965 + 2;
    local_7d4 = (local_7d8 ^ local_7d8 >> 0x1e) * 0x6c078965 + 3;
    local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 4;
    pvVar25 = (void *)(*(code *)local_f38[3])(&local_f38);
    memset(pvVar25,0,0x754);
    apuStack_1700[0] = (uint *)&local_7c0;
    local_7c0 = (undefined *)CONCAT44(local_7c0._4_4_,9);
    local_1708 = &PTR_FUN_049ff4e8;
    FUN_008a1ba0(&local_f38,&local_1708);
    lVar44 = (*(code *)local_f38[4])(&local_f38);
    uVar42 = 0;
    do {
      if ((*(uint *)(lVar44 + (uVar42 >> 5) * 4) >> (ulong)((uint)uVar42 & 0x1f) & 1) != 0)
      goto LAB_00e2df34;
      uVar20 = (uint)uVar42 + 1;
      uVar42 = (ulong)uVar20;
    } while (uVar20 != 15000);
    uVar42 = 0;
LAB_00e2df34:
    lVar43 = (*(code *)local_f38[4])(&local_f38);
    puVar1 = PTR_DAT_04bbfe58;
    iVar23 = 15000;
    do {
      if ((*(uint *)(lVar43 + (ulong)(iVar23 - 1U >> 5) * 4) >> (ulong)(iVar23 - 1U & 0x1f) & 1) !=
          0) break;
      iVar23 = iVar23 + -1;
    } while (iVar23 != 0);
    if ((uVar17 != 0x80) && (iVar23 != (int)uVar42)) {
      lVar43 = *(long *)PTR_DAT_04bb43c0;
LAB_00e2df94:
      plVar30 = (long *)(puVar1 + uVar42 * 8);
      if (0x752 < (uint)(uVar42 >> 3)) {
        plVar30 = (long *)puVar1;
      }
      plVar8 = (long *)PTR_DAT_04bb37e0;
      if ((uint)uVar42 < 0x3a99) {
        plVar8 = plVar30;
      }
      lVar24 = *plVar8;
      uVar16 = *(undefined1 *)((long)plVar8 + 2);
      uVar13 = *(undefined1 *)((long)plVar8 + 3);
      uVar18 = *(undefined4 *)((long)plVar8 + 4);
      local_1708 = (undefined **)*plVar8;
      uVar20 = FUN_0277d6c4(&local_1708);
      lVar27 = *(long *)PTR_DAT_04bb43c0;
      if (lVar27 == 0) {
        lVar27 = 0;
      }
      else {
        lVar43 = *(long *)(lVar43 + 0x57e58);
        uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar43 + 0x1f8);
        if ((uVar20 < *(uint *)(lVar43 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar43 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) {
          uVar34 = (ulong)uVar17;
          uVar17 = uVar17 + 1;
          puVar7 = (undefined2 *)((long)param_1 + ((long)(uVar34 << 0x20) >> 0x1d));
          *puVar7 = (short)lVar24;
          *(undefined1 *)(puVar7 + 1) = uVar16;
          *(undefined1 *)((long)puVar7 + 3) = uVar13;
          *(undefined4 *)(puVar7 + 2) = uVar18;
          lVar27 = *(long *)PTR_DAT_04bb43c0;
        }
      }
      do {
        uVar20 = (int)uVar42 + 1;
        uVar42 = (ulong)uVar20;
        if (0x752 < uVar20 >> 3) {
          uVar20 = 0x3a95;
          goto LAB_00e2e0a0;
        }
      } while ((*(uint *)(lVar44 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1) == 0);
      goto LAB_00e2e0f8;
    }
LAB_00e2e10c:
    puVar1 = PTR_DAT_04bb32e8;
    if (uVar17 != 0x80) {
      psVar33 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
      if (*psVar33 == 0) {
        local_1708 = *(undefined ***)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        if ((char)((ulong)local_1708 >> 0x20) < '\x05') {
          lVar44 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_1708);
          local_f38 = (undefined **)(lVar44 + -0x15180);
          local_1708 = (undefined **)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_f38);
        }
        uVar41 = local_1708;
        psVar33 = (short *)&local_1708;
        local_1708._0_6_ = CONCAT24(5,(int)local_1708);
        local_1708._7_1_ = SUB81(uVar41,7);
        local_1708._0_7_ = (uint7)(uint6)local_1708;
      }
      puVar3 = PTR_DAT_04bb32f0;
      puVar15 = PTR_DAT_04bb2020;
      local_f90 = *(undefined **)psVar33;
      uVar41 = *(undefined8 *)PTR_DAT_04bb32f0;
      local_f30 = (undefined **)0x40d4383;
      local_f38 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_7c0 = local_f90;
      if ((char)((ulong)local_f90 >> 0x20) < '\x05') {
        lVar44 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_7c0);
        local_1708 = (undefined **)(lVar44 + -0x15180);
        local_7c0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_1708);
      }
      puVar4 = local_7c0;
      local_7c0._7_1_ = SUB81(puVar4,7);
      local_7c0._0_7_ = (uint7)CONCAT24(5,(uint)local_7c0);
      uVar42 = FUN_00879dd0(uVar41,&local_f38,puVar4,(ulong)puVar4 >> 0x10,(ulong)puVar4 >> 0x18,0);
      if ((uVar42 & 1) == 0) {
        local_1708 = (undefined **)(puVar15 + 0x10);
        apuStack_1700[0] = (uint *)0x40d4383;
        uVar42 = FUN_0087b568(*(undefined8 *)puVar3,&local_1708,&local_f90,1,1);
        if ((uVar42 & 1) != 0) goto LAB_00e2e220;
      }
      else {
LAB_00e2e220:
        local_f38 = (undefined **)0x338d;
        FUN_0277d4ac(&local_f38);
        uVar42 = (ulong)uVar17;
        puVar6 = (undefined4 *)((long)param_1 + ((long)(uVar42 << 0x20) >> 0x1d));
        *puVar6 = (undefined4)local_f38;
        puVar6[1] = local_f38._4_4_;
        local_f38 = (undefined **)0x33ab;
        FUN_0277d4ac(&local_f38);
        uVar17 = uVar17 + 2;
        puVar6 = (undefined4 *)((long)param_1 + ((long)((uVar42 << 0x20) + 0x100000000) >> 0x1d));
        *puVar6 = (undefined4)local_f38;
        puVar6[1] = local_f38._4_4_;
      }
      if (uVar17 != 0x80) {
        local_f30 = (undefined **)0x40defe0;
        ppuVar2 = (undefined **)(puVar15 + 0x10);
        local_f38 = ppuVar2;
        iVar23 = FUN_0274bce0(param_3,&local_f38);
        if (iVar23 != 0) {
          apuStack_1700[0] = (uint *)0x405c285;
          local_1708 = ppuVar2;
          iVar23 = FUN_0274bce0(param_3,&local_1708);
          if (iVar23 == 0) {
            local_f38 = (undefined **)FUN_00a82790(*(undefined8 *)puVar1);
            uVar42 = FUN_00e31150(*(undefined8 *)puVar3,&local_f38,0,0);
            if ((uVar42 & 1) != 0) {
              local_1708 = (undefined **)0x36ce;
              FUN_0277d4ac(&local_1708);
              uVar42 = (ulong)uVar17;
              uVar17 = uVar17 + 1;
              piVar32 = (int *)((long)param_1 + ((long)(uVar42 << 0x20) >> 0x1d));
              *piVar32 = (int)local_1708;
              piVar32[1] = local_1708._4_4_;
            }
          }
        }
      }
    }
    if ((((uVar19 & 1) == 0) || (*(long *)(lVar28 + 0x1a3d88) == 0)) ||
       (puVar26 = *(undefined8 **)(*(long *)(lVar28 + 0x1a3d88) + 8), puVar26 == (undefined8 *)0x0))
    goto switchD_00e2d4c4_caseD_1;
    goto LAB_00e2ee80;
  default:
    goto switchD_00e2d4c4_caseD_1;
  case 3:
    lVar28 = *(long *)PTR_DAT_04bb46b0;
    if (lVar28 == 0) {
LAB_00e2e308:
      lVar28 = 0;
    }
    else {
      puVar26 = *(undefined8 **)(lVar28 + 0x10);
      if ((*(byte *)(lVar28 + 0x453) & 1) == 0) {
        lVar44 = (**(code **)(*(long *)*puVar26 + 0x38))();
        lVar28 = 0;
        if (lVar44 != 0) {
          lVar28 = lVar44 + 0x70;
        }
      }
      else {
        if (puVar26 == (undefined8 *)0x0) goto LAB_00e2e308;
        lVar28 = 0;
        if ((long *)puVar26[0x26] != (long *)0x0) {
          lVar28 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
        }
      }
    }
    plVar30 = (long *)(lVar28 + 0x1a0d80);
    if ((*(long **)(lVar28 + 0x1a0da0) == (long *)0x0) ||
       (puVar26 = (undefined8 *)**(long **)(lVar28 + 0x1a0da0), puVar26 == (undefined8 *)0x0)) {
      uVar19 = 0;
    }
    else {
      uVar19 = (**(code **)*puVar26)();
    }
    puVar1 = PTR_DAT_04bb43c0;
    uVar17 = 0;
    uVar20 = 0;
    lVar44 = *(long *)(lVar28 + 0x1a0d88) + *plVar30 + 4;
    do {
      if (uVar17 == 0x80) break;
      lVar43 = *(long *)puVar1;
      puVar7 = (undefined2 *)(lVar44 + ((long)((ulong)uVar20 << 0x20) >> 0x1d));
      uVar21 = FUN_0277d6c4(puVar7);
      if (*(long *)puVar1 != 0) {
        lVar43 = *(long *)(lVar43 + 0x57e58);
        uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar43 + 0x1f8);
        if ((uVar21 < *(uint *)(lVar43 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar43 + 0x1e0) + (long)(int)uVar21 * 8) != 0)) {
          puVar5 = (undefined2 *)((long)param_1 + ((long)((ulong)uVar17 << 0x20) >> 0x1d));
          lVar43 = lVar44 + (long)(int)uVar20 * 8;
          uVar17 = uVar17 + 1;
          *puVar5 = *puVar7;
          *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(lVar43 + 2);
          *(undefined1 *)((long)puVar5 + 3) = *(undefined1 *)(lVar43 + 3);
          *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(lVar43 + 4);
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != 0x80);
    uVar42 = FUN_0289c060(*(long *)(lVar28 + 0x1a0d88) + *plVar30,0);
    uVar34 = uVar42 & 0xffffffff;
    iVar23 = 0;
    while( true ) {
      iVar22 = iVar23;
      FUN_0297ac30(&local_f38,uVar42,uVar34,iVar22);
      lVar44 = *(long *)puVar1;
      uVar42 = FUN_0277d6c4(&local_f38);
      if (*(long *)puVar1 == 0) break;
      lVar44 = *(long *)(lVar44 + 0x57e58);
      uVar20 = ((uint)uVar42 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
      if ((*(uint *)(lVar44 + 0x1d8) <= uVar20) ||
         (iVar23 = iVar22 + 1, *(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar20 * 8) == 0))
      break;
    }
    if (iVar22 != 0) {
      iVar23 = 0;
      ppuVar2 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
      do {
        uVar18 = FUN_0289c060(*(long *)(lVar28 + 0x1a0d88) + *plVar30,0);
        FUN_0297ac30(&local_1708,*(undefined8 *)PTR_DAT_04bb4700,uVar18,iVar23);
        if (uVar17 == 0x80) break;
        lVar44 = *(long *)puVar1;
        uVar20 = FUN_0277d6c4(&local_1708);
        lVar43 = *(long *)puVar1;
        if (lVar43 != 0) {
          lVar44 = *(long *)(lVar44 + 0x57e58);
          uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
          if ((uVar20 < *(uint *)(lVar44 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) {
            local_f28 = (uint *)0x0;
            local_f30 = local_1708;
            local_f38 = ppuVar2;
            uVar20 = FUN_0277d6c4(&local_f30);
            if (*(long *)puVar1 != 0) {
              lVar44 = *(long *)(lVar43 + 0x57e58);
              uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
              if ((uVar20 < *(uint *)(lVar44 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) {
                lVar44 = *(long *)PTR_DAT_04bc0428;
                uVar20 = FUN_0277d6c4(&local_1708);
                uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
                if (uVar20 < *(uint *)(lVar44 + 0x1d8)) {
                  puVar36 = *(uint **)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar20 * 8);
                  if (puVar36 != (uint *)0x0) {
                    local_f28 = puVar36;
                  }
                }
              }
            }
            FUN_01ae2fa0(&local_7c0,&local_f38);
            uVar20 = 0;
            do {
              uVar42 = FUN_0277d7b4((long)param_1 + ((long)((ulong)uVar20 << 0x20) >> 0x1d),
                                    &local_7c0);
              if ((uVar42 & 1) != 0) goto LAB_00e2e4a0;
              uVar20 = uVar20 + 1;
            } while (uVar20 != 0x80);
            uVar42 = (ulong)uVar17;
            uVar17 = uVar17 + 1;
            puVar36 = (uint *)((long)param_1 + ((long)(uVar42 << 0x20) >> 0x1d));
            *puVar36 = (uint)local_7c0;
            puVar36[1] = local_7c0._4_4_;
          }
        }
LAB_00e2e4a0:
        iVar23 = iVar23 + 1;
      } while (iVar22 != iVar23);
    }
    uVar42 = FUN_0289c060(*(long *)(lVar28 + 0x1a0d88) + *plVar30,1);
    uVar34 = uVar42 & 0xffffffff;
    iVar23 = 0;
    while( true ) {
      iVar22 = iVar23;
      FUN_0297ac30(&local_f38,uVar42,uVar34,iVar22);
      lVar44 = *(long *)puVar1;
      uVar42 = FUN_0277d6c4(&local_f38);
      if (*(long *)puVar1 == 0) break;
      lVar44 = *(long *)(lVar44 + 0x57e58);
      uVar20 = ((uint)uVar42 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
      if ((*(uint *)(lVar44 + 0x1d8) <= uVar20) ||
         (iVar23 = iVar22 + 1, *(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar20 * 8) == 0))
      break;
    }
    if (iVar22 != 0) {
      iVar23 = 0;
      ppuVar2 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
      do {
        uVar18 = FUN_0289c060(*(long *)(lVar28 + 0x1a0d88) + *plVar30,1);
        FUN_0297ac30(&local_1708,*(undefined8 *)PTR_DAT_04bb4700,uVar18,iVar23);
        if (uVar17 == 0x80) break;
        lVar44 = *(long *)puVar1;
        uVar20 = FUN_0277d6c4(&local_1708);
        lVar43 = *(long *)puVar1;
        if (lVar43 != 0) {
          lVar44 = *(long *)(lVar44 + 0x57e58);
          uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
          if ((uVar20 < *(uint *)(lVar44 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) {
            local_f28 = (uint *)0x0;
            local_f30 = local_1708;
            local_f38 = ppuVar2;
            uVar20 = FUN_0277d6c4(&local_f30);
            if (*(long *)puVar1 != 0) {
              lVar44 = *(long *)(lVar43 + 0x57e58);
              uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
              if ((uVar20 < *(uint *)(lVar44 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) {
                lVar44 = *(long *)PTR_DAT_04bc0428;
                uVar20 = FUN_0277d6c4(&local_1708);
                uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
                if (uVar20 < *(uint *)(lVar44 + 0x1d8)) {
                  puVar36 = *(uint **)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar20 * 8);
                  if (puVar36 != (uint *)0x0) {
                    local_f28 = puVar36;
                  }
                }
              }
            }
            FUN_01ae2fa0(&local_7c0,&local_f38);
            uVar20 = 0;
            do {
              uVar42 = FUN_0277d7b4((long)param_1 + ((long)((ulong)uVar20 << 0x20) >> 0x1d),
                                    &local_7c0);
              if ((uVar42 & 1) != 0) goto LAB_00e2e6a0;
              uVar20 = uVar20 + 1;
            } while (uVar20 != 0x80);
            uVar42 = (ulong)uVar17;
            uVar17 = uVar17 + 1;
            puVar36 = (uint *)((long)param_1 + ((long)(uVar42 << 0x20) >> 0x1d));
            *puVar36 = (uint)local_7c0;
            puVar36[1] = local_7c0._4_4_;
          }
        }
LAB_00e2e6a0:
        iVar23 = iVar23 + 1;
      } while (iVar22 != iVar23);
    }
    if ((uVar19 & 1) == 0) goto switchD_00e2d4c4_caseD_1;
    goto LAB_00e2ee68;
  case 4:
    lVar28 = *(long *)PTR_DAT_04bb46b0;
    if (lVar28 == 0) {
LAB_00e2e828:
      lVar28 = 0;
    }
    else {
      puVar26 = *(undefined8 **)(lVar28 + 0x10);
      if ((*(byte *)(lVar28 + 0x453) & 1) == 0) {
        lVar44 = (**(code **)(*(long *)*puVar26 + 0x38))();
        lVar28 = 0;
        if (lVar44 != 0) {
          lVar28 = lVar44 + 0x70;
        }
      }
      else {
        if (puVar26 == (undefined8 *)0x0) goto LAB_00e2e828;
        lVar28 = 0;
        if ((long *)puVar26[0x26] != (long *)0x0) {
          lVar28 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
        }
      }
    }
    plVar30 = (long *)(lVar28 + 0x1a3550);
    if ((*(long **)(lVar28 + 0x1a3570) == (long *)0x0) ||
       (puVar26 = (undefined8 *)**(long **)(lVar28 + 0x1a3570), puVar26 == (undefined8 *)0x0)) {
      uVar42 = 0;
    }
    else {
      uVar42 = (**(code **)*puVar26)();
      uVar42 = uVar42 & 0xffffffff;
    }
    puVar1 = PTR_DAT_04bb43c0;
    uVar17 = 0;
    uVar19 = 0;
    lVar28 = *(long *)(lVar28 + 0x1a3558) + *plVar30;
    do {
      if (uVar17 == 0x80) break;
      lVar44 = *(long *)puVar1;
      puVar7 = (undefined2 *)(lVar28 + ((long)((ulong)uVar19 << 0x20) >> 0x1d));
      uVar20 = FUN_0277d6c4(puVar7);
      if (*(long *)puVar1 != 0) {
        lVar44 = *(long *)(lVar44 + 0x57e58);
        uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
        if ((uVar20 < *(uint *)(lVar44 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) {
          puVar5 = (undefined2 *)((long)param_1 + ((long)((ulong)uVar17 << 0x20) >> 0x1d));
          lVar44 = lVar28 + (long)(int)uVar19 * 8;
          uVar17 = uVar17 + 1;
          *puVar5 = *puVar7;
          *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(lVar44 + 2);
          *(undefined1 *)((long)puVar5 + 3) = *(undefined1 *)(lVar44 + 3);
          *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(lVar44 + 4);
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != 0x20);
    break;
  case 7:
    local_f30 = (undefined **)0x40f41db;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_f38 = (undefined **)puVar1;
    uVar42 = FUN_0273f0a0(&local_f38);
    if ((uVar42 & 1) == 0) {
      uVar17 = 0;
    }
    else {
      lVar28 = *(long *)PTR_DAT_04bb46b0;
      if (lVar28 == 0) {
LAB_00e2eeac:
        lVar28 = 0;
      }
      else {
        puVar26 = *(undefined8 **)(lVar28 + 0x10);
        if ((*(byte *)(lVar28 + 0x453) & 1) == 0) {
          lVar44 = (**(code **)(*(long *)*puVar26 + 0x38))();
          lVar28 = 0;
          if (lVar44 != 0) {
            lVar28 = lVar44 + 0x70;
          }
        }
        else {
          if (puVar26 == (undefined8 *)0x0) goto LAB_00e2eeac;
          lVar28 = 0;
          if ((long *)puVar26[0x26] != (long *)0x0) {
            lVar28 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
          }
        }
      }
      if ((*(long **)(lVar28 + 0x1a0b70) == (long *)0x0) ||
         (puVar26 = (undefined8 *)**(long **)(lVar28 + 0x1a0b70), puVar26 == (undefined8 *)0x0)) {
        uVar42 = 0;
      }
      else {
        uVar42 = (**(code **)*puVar26)();
        uVar42 = uVar42 & 0xffffffff;
      }
      puVar15 = PTR_DAT_04bb43c0;
      uVar17 = 0;
      uVar19 = 0;
      lVar44 = *(long *)(lVar28 + 0x1a0b58) + *(long *)(lVar28 + 0x1a0b50) + 0x3088;
      do {
        if (uVar17 == 0x80) break;
        lVar43 = *(long *)puVar15;
        puVar7 = (undefined2 *)(lVar44 + ((long)((ulong)uVar19 << 0x20) >> 0x1d));
        uVar20 = FUN_0277d6c4(puVar7);
        if (*(long *)puVar15 != 0) {
          lVar43 = *(long *)(lVar43 + 0x57e58);
          uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar43 + 0x1f8);
          if ((uVar20 < *(uint *)(lVar43 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar43 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) {
            puVar5 = (undefined2 *)((long)param_1 + ((long)((ulong)uVar17 << 0x20) >> 0x1d));
            lVar43 = lVar44 + (long)(int)uVar19 * 8;
            uVar17 = uVar17 + 1;
            *puVar5 = *puVar7;
            *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(lVar43 + 2);
            *(undefined1 *)((long)puVar5 + 3) = *(undefined1 *)(lVar43 + 3);
            *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(lVar43 + 4);
          }
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != 0x10);
      if ((((uVar42 & 1) != 0) && (*(long *)(lVar28 + 0x1a0b70) != 0)) &&
         (puVar26 = *(undefined8 **)(*(long *)(lVar28 + 0x1a0b70) + 8), puVar26 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar26)();
      }
    }
    local_f30 = (undefined **)0x40fe362;
    local_f38 = (undefined **)puVar1;
    uVar42 = FUN_0273f0a0(&local_f38);
    puVar1 = PTR_DAT_04bbfe60;
    if ((uVar42 & 1) == 0) {
      local_7c0 = (undefined *)0x2e0000002f;
      local_f38 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
      memset(&local_f30,0,0x754);
      uVar19 = nn::os::GetSystemTick();
      local_7dc = (uVar19 ^ uVar19 >> 0x1e) * 0x6c078965 + 1;
      local_7d8 = (local_7dc ^ local_7dc >> 0x1e) * 0x6c078965 + 2;
      local_7d4 = (local_7d8 ^ local_7d8 >> 0x1e) * 0x6c078965 + 3;
      local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 4;
      pvVar25 = (void *)(**(code **)((long)local_f38 + 0x18))(&local_f38);
      memset(pvVar25,0,0x754);
      local_1708 = &PTR_FUN_049ff4e8;
      apuStack_1700[0] = (uint *)&local_7c0;
      FUN_008a1ba0(&local_f38,&local_1708);
      lVar28 = (**(code **)((long)local_f38 + 0x20))(&local_f38);
      uVar42 = 0;
      do {
        if ((*(uint *)(lVar28 + (uVar42 >> 5) * 4) >> (ulong)((uint)uVar42 & 0x1f) & 1) != 0)
        goto LAB_00e2f654;
        uVar19 = (uint)uVar42 + 1;
        uVar42 = (ulong)uVar19;
      } while (uVar19 != 15000);
      uVar42 = 0;
LAB_00e2f654:
      lVar44 = (**(code **)((long)local_f38 + 0x20))(&local_f38);
      puVar3 = PTR_DAT_04bbfe58;
      puVar15 = PTR_DAT_04bb37e0;
      iVar23 = 15000;
      do {
        if ((*(uint *)(lVar44 + (ulong)(iVar23 - 1U >> 5) * 4) >> (ulong)(iVar23 - 1U & 0x1f) & 1)
            != 0) break;
        iVar23 = iVar23 + -1;
      } while (iVar23 != 0);
      if ((uVar17 != 0x80) && (iVar23 != (int)uVar42)) {
LAB_00e2f6b4:
        puVar6 = (undefined4 *)((long)param_1 + ((long)((ulong)uVar17 << 0x20) >> 0x1d));
        uVar17 = uVar17 + 1;
        puVar10 = (undefined4 *)(puVar3 + uVar42 * 8);
        if (0x752 < (uint)(uVar42 >> 3)) {
          puVar10 = (undefined4 *)puVar3;
        }
        puVar11 = (undefined4 *)puVar15;
        if ((uint)uVar42 < 0x3a99) {
          puVar11 = puVar10;
        }
        uVar18 = puVar11[1];
        *puVar6 = *puVar11;
        puVar6[1] = uVar18;
        do {
          uVar19 = (int)uVar42 + 1;
          uVar42 = (ulong)uVar19;
          if (0x752 < uVar19 >> 3) {
            uVar19 = 0x3a95;
            goto LAB_00e2f710;
          }
        } while ((*(uint *)(lVar28 + (ulong)(uVar19 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) == 0);
        goto LAB_00e2f764;
      }
LAB_00e2f774:
      local_f38 = (undefined **)(puVar1 + 0x10);
      memset(&local_f30,0,0x754);
      uVar19 = nn::os::GetSystemTick();
      local_7dc = (uVar19 ^ uVar19 >> 0x1e) * 0x6c078965 + 1;
      local_7d8 = (local_7dc ^ local_7dc >> 0x1e) * 0x6c078965 + 2;
      local_7d4 = (local_7d8 ^ local_7d8 >> 0x1e) * 0x6c078965 + 3;
      local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 4;
      pvVar25 = (void *)(**(code **)((long)local_f38 + 0x18))(&local_f38);
      memset(pvVar25,0,0x754);
      local_1708 = &PTR_FUN_049ff4e8;
      apuStack_1700[0] = (uint *)((long)&local_7c0 + 4);
      FUN_008a1ba0(&local_f38,&local_1708);
      lVar28 = (**(code **)((long)local_f38 + 0x20))(&local_f38);
      uVar42 = 0;
      do {
        if ((*(uint *)(lVar28 + (uVar42 >> 5) * 4) >> (ulong)((uint)uVar42 & 0x1f) & 1) != 0)
        goto LAB_00e2f840;
        uVar19 = (uint)uVar42 + 1;
        uVar42 = (ulong)uVar19;
      } while (uVar19 != 15000);
      uVar42 = 0;
LAB_00e2f840:
      lVar44 = (**(code **)((long)local_f38 + 0x20))(&local_f38);
      puVar15 = PTR_DAT_04bbfe58;
      puVar1 = PTR_DAT_04bb37e0;
      iVar23 = 15000;
      do {
        if ((*(uint *)(lVar44 + (ulong)(iVar23 - 1U >> 5) * 4) >> (ulong)(iVar23 - 1U & 0x1f) & 1)
            != 0) break;
        iVar23 = iVar23 + -1;
      } while (iVar23 != 0);
      if ((iVar23 != (int)uVar42) && (uVar17 != 0x80)) {
LAB_00e2f8b0:
        puVar6 = (undefined4 *)((long)param_1 + ((long)((ulong)uVar17 << 0x20) >> 0x1d));
        uVar17 = uVar17 + 1;
        puVar10 = (undefined4 *)(puVar15 + uVar42 * 8);
        if (0x752 < (uint)(uVar42 >> 3)) {
          puVar10 = (undefined4 *)puVar15;
        }
        puVar11 = (undefined4 *)puVar1;
        if ((uint)uVar42 < 0x3a99) {
          puVar11 = puVar10;
        }
        uVar18 = puVar11[1];
        *puVar6 = *puVar11;
        puVar6[1] = uVar18;
        do {
          uVar19 = (int)uVar42 + 1;
          uVar42 = (ulong)uVar19;
          if (0x752 < uVar19 >> 3) {
            uVar19 = 0x3a95;
            goto LAB_00e2f910;
          }
        } while ((*(uint *)(lVar28 + (ulong)(uVar19 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) == 0);
        goto LAB_00e2f964;
      }
    }
    else {
      local_f38 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
      memset(&local_f30,0,0x754);
      uVar19 = nn::os::GetSystemTick();
      local_7dc = (uVar19 ^ uVar19 >> 0x1e) * 0x6c078965 + 1;
      local_7d8 = (local_7dc ^ local_7dc >> 0x1e) * 0x6c078965 + 2;
      local_7d4 = (local_7d8 ^ local_7d8 >> 0x1e) * 0x6c078965 + 3;
      local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 4;
      pvVar25 = (void *)(**(code **)((long)local_f38 + 0x18))(&local_f38);
      memset(pvVar25,0,0x754);
      local_7c0._0_4_ = 0x38;
      local_1708 = &PTR_FUN_049ff4e8;
      apuStack_1700[0] = (uint *)&local_7c0;
      FUN_008a1ba0(&local_f38,&local_1708);
      local_7c0._0_4_ = 0x39;
      local_1708 = &PTR_FUN_049ff4e8;
      apuStack_1700[0] = (uint *)&local_7c0;
      FUN_008a1ba0(&local_f38,&local_1708);
      local_7c0._0_4_ = 0x3a;
      local_1708 = &PTR_FUN_049ff4e8;
      apuStack_1700[0] = (uint *)&local_7c0;
      FUN_008a1ba0(&local_f38,&local_1708);
      local_7c0._0_4_ = 0x3b;
      local_1708 = &PTR_FUN_049ff4e8;
      apuStack_1700[0] = (uint *)&local_7c0;
      FUN_008a1ba0(&local_f38,&local_1708);
      local_7c0 = (undefined *)CONCAT44(local_7c0._4_4_,0x3c);
      local_1708 = &PTR_FUN_049ff4e8;
      apuStack_1700[0] = (uint *)&local_7c0;
      FUN_008a1ba0(&local_f38,&local_1708);
      lVar28 = (**(code **)((long)local_f38 + 0x20))(&local_f38);
      uVar42 = 0;
      do {
        if ((*(uint *)(lVar28 + (uVar42 >> 5) * 4) >> (ulong)((uint)uVar42 & 0x1f) & 1) != 0)
        goto LAB_00e2f130;
        uVar19 = (uint)uVar42 + 1;
        uVar42 = (ulong)uVar19;
      } while (uVar19 != 15000);
      uVar42 = 0;
LAB_00e2f130:
      lVar44 = (**(code **)((long)local_f38 + 0x20))(&local_f38);
      puVar3 = PTR_DAT_04bbfe58;
      puVar15 = PTR_DAT_04bb46f0;
      puVar1 = PTR_DAT_04bb37e0;
      iVar23 = 15000;
      do {
        if ((*(uint *)(lVar44 + (ulong)(iVar23 - 1U >> 5) * 4) >> (ulong)(iVar23 - 1U & 0x1f) & 1)
            != 0) break;
        iVar23 = iVar23 + -1;
      } while (iVar23 != 0);
      if ((uVar17 != 0x80) && (iVar23 != (int)uVar42)) {
LAB_00e2f1a0:
        plVar30 = (long *)(puVar3 + uVar42 * 8);
        if (0x752 < (uint)(uVar42 >> 3)) {
          plVar30 = (long *)puVar3;
        }
        plVar8 = (long *)puVar1;
        if ((uint)uVar42 < 0x3a99) {
          plVar8 = plVar30;
        }
        local_1708 = (undefined **)*plVar8;
        uVar34 = FUN_0261f280(*(undefined8 *)puVar15,&local_1708,param_3);
        if ((uVar34 & 1) == 0) {
          local_7c0 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_7c0);
          uVar34 = FUN_026219b0(*(undefined8 *)puVar15,&local_7c0,&local_1708);
          if ((uVar34 & 1) != 0) {
            uVar34 = (ulong)uVar17;
            uVar17 = uVar17 + 1;
            puVar36 = (uint *)((long)param_1 + ((long)(uVar34 << 0x20) >> 0x1d));
            *puVar36 = (uint)local_7c0;
            puVar36[1] = local_7c0._4_4_;
          }
        }
        do {
          uVar19 = (int)uVar42 + 1;
          uVar42 = (ulong)uVar19;
          if (0x752 < uVar19 >> 3) {
            uVar19 = 0x3a95;
            goto LAB_00e2f240;
          }
        } while ((*(uint *)(lVar28 + (ulong)(uVar19 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) == 0);
        goto LAB_00e2f294;
      }
LAB_00e2f2a8:
      puVar3 = PTR_DAT_04bbfe58;
      puVar15 = PTR_DAT_04bb37e0;
      local_7c0 = (undefined *)0x2f00000031;
      lVar28 = 0;
      local_7b8[0] = 0x2e;
      puVar1 = PTR_DAT_04bbfe60 + 0x10;
      do {
        local_f38 = (undefined **)puVar1;
        memset(&local_f30,0,0x754);
        uVar19 = nn::os::GetSystemTick();
        local_7dc = (uVar19 ^ uVar19 >> 0x1e) * 0x6c078965 + 1;
        local_7d8 = (local_7dc ^ local_7dc >> 0x1e) * 0x6c078965 + 2;
        local_7d4 = (local_7d8 ^ local_7d8 >> 0x1e) * 0x6c078965 + 3;
        local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 4;
        pvVar25 = (void *)(**(code **)((long)local_f38 + 0x18))(&local_f38);
        memset(pvVar25,0,0x754);
        local_1708 = &PTR_FUN_049ff4e8;
        apuStack_1700[0] = (uint *)((long)&local_7c0 + lVar28 * 4);
        FUN_008a1ba0(&local_f38,&local_1708);
        lVar44 = (**(code **)((long)local_f38 + 0x20))(&local_f38);
        uVar42 = 0;
        do {
          uVar19 = (uint)uVar42;
          if ((*(uint *)(lVar44 + (uVar42 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) != 0)
          goto LAB_00e2f404;
          uVar20 = uVar19 + 1;
          if (((*(uint *)(lVar44 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1) != 0) ||
             (uVar20 = uVar19 + 2,
             (*(uint *)(lVar44 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1) != 0)) {
            uVar42 = (ulong)uVar20;
            goto LAB_00e2f404;
          }
          uVar42 = (ulong)(uVar19 + 3);
        } while (uVar19 + 3 != 15000);
        uVar42 = 0;
LAB_00e2f404:
        lVar43 = (**(code **)((long)local_f38 + 0x20))(&local_f38);
        uVar19 = 0x3a95;
        do {
          uVar20 = uVar19 + 2;
          if ((*(uint *)(lVar43 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1) != 0) {
LAB_00e2f474:
            uVar19 = uVar20;
LAB_00e2f478:
            iVar23 = uVar19 + 1;
            if (iVar23 != (int)uVar42) goto LAB_00e2f484;
            goto LAB_00e2f2f4;
          }
          uVar20 = uVar19 + 1;
          if ((*(uint *)(lVar43 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1) != 0)
          goto LAB_00e2f474;
          if ((*(uint *)(lVar43 + (ulong)(uVar19 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) != 0)
          goto LAB_00e2f478;
          uVar19 = uVar19 - 3;
        } while (uVar19 != 0xfffffffd);
        iVar23 = 0;
        if ((int)uVar42 != 0) {
LAB_00e2f484:
          if (uVar17 != 0x80) {
LAB_00e2f490:
            puVar6 = (undefined4 *)((long)param_1 + ((long)((ulong)uVar17 << 0x20) >> 0x1d));
            uVar17 = uVar17 + 1;
            puVar10 = (undefined4 *)(puVar3 + uVar42 * 8);
            if (0x752 < (uint)(uVar42 >> 3)) {
              puVar10 = (undefined4 *)puVar3;
            }
            puVar11 = (undefined4 *)puVar15;
            if ((uint)uVar42 < 0x3a99) {
              puVar11 = puVar10;
            }
            uVar18 = puVar11[1];
            *puVar6 = *puVar11;
            puVar6[1] = uVar18;
            do {
              uVar19 = (int)uVar42 + 1;
              uVar42 = (ulong)uVar19;
              if (0x752 < uVar19 >> 3) {
                uVar19 = 0x3a95;
                goto LAB_00e2f4f0;
              }
            } while ((*(uint *)(lVar44 + (ulong)(uVar19 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) ==
                     0);
            goto LAB_00e2f548;
          }
        }
LAB_00e2f2f4:
        lVar28 = lVar28 + 1;
      } while (lVar28 != 3);
    }
LAB_00e2f974:
    local_f30 = (undefined **)0x4086c2b;
    ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_f38 = ppuVar2;
    iVar23 = FUN_0274bce0(param_3,&local_f38);
    if (iVar23 != 0) {
      local_f38 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
      memset(&local_f30,0,0x754);
      uVar19 = nn::os::GetSystemTick();
      local_7dc = (uVar19 ^ uVar19 >> 0x1e) * 0x6c078965 + 1;
      local_7d8 = (local_7dc ^ local_7dc >> 0x1e) * 0x6c078965 + 2;
      local_7d4 = (local_7d8 ^ local_7d8 >> 0x1e) * 0x6c078965 + 3;
      local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 4;
      pvVar25 = (void *)(**(code **)((long)local_f38 + 0x18))(&local_f38);
      memset(pvVar25,0,0x754);
      apuStack_1700[0] = (uint *)&local_7c0;
      local_7c0 = (undefined *)CONCAT44(local_7c0._4_4_,0x3d);
      local_1708 = &PTR_FUN_049ff4e8;
      FUN_008a1ba0(&local_f38,&local_1708);
      lVar28 = (**(code **)((long)local_f38 + 0x20))(&local_f38);
      uVar42 = 0;
      do {
        if ((*(uint *)(lVar28 + (uVar42 >> 5) * 4) >> (ulong)((uint)uVar42 & 0x1f) & 1) != 0)
        goto LAB_00e2fa90;
        uVar19 = (uint)uVar42 + 1;
        uVar42 = (ulong)uVar19;
      } while (uVar19 != 15000);
      uVar42 = 0;
LAB_00e2fa90:
      lVar44 = (**(code **)((long)local_f38 + 0x20))(&local_f38);
      puVar3 = PTR_DAT_04bbfe58;
      puVar15 = PTR_DAT_04bb46f0;
      puVar1 = PTR_DAT_04bb37e0;
      iVar23 = 15000;
      do {
        if ((*(uint *)(lVar44 + (ulong)(iVar23 - 1U >> 5) * 4) >> (ulong)(iVar23 - 1U & 0x1f) & 1)
            != 0) break;
        iVar23 = iVar23 + -1;
      } while (iVar23 != 0);
      if ((iVar23 != (int)uVar42) && (uVar17 != 0x80)) {
LAB_00e2fb00:
        plVar30 = (long *)(puVar3 + uVar42 * 8);
        if (0x752 < (uint)(uVar42 >> 3)) {
          plVar30 = (long *)puVar3;
        }
        plVar8 = (long *)puVar1;
        if ((uint)uVar42 < 0x3a99) {
          plVar8 = plVar30;
        }
        local_1708 = (undefined **)*plVar8;
        uVar34 = FUN_0261f280(*(undefined8 *)puVar15,&local_1708,param_3);
        if ((uVar34 & 1) == 0) {
          local_7c0 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_7c0);
          uVar34 = FUN_026219b0(*(undefined8 *)puVar15,&local_7c0,&local_1708);
          if ((uVar34 & 1) != 0) {
            uVar34 = (ulong)uVar17;
            uVar17 = uVar17 + 1;
            puVar36 = (uint *)((long)param_1 + ((long)(uVar34 << 0x20) >> 0x1d));
            *puVar36 = (uint)local_7c0;
            puVar36[1] = local_7c0._4_4_;
          }
        }
        do {
          uVar19 = (int)uVar42 + 1;
          uVar42 = (ulong)uVar19;
          if (0x752 < uVar19 >> 3) {
            uVar19 = 0x3a95;
            goto LAB_00e2fba0;
          }
        } while ((*(uint *)(lVar28 + (ulong)(uVar19 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) == 0);
        goto LAB_00e2fbf4;
      }
    }
LAB_00e2fc28:
    local_f30 = (undefined **)0x40f9462;
    local_f38 = ppuVar2;
    iVar23 = FUN_0274bce0(param_3,&local_f38);
    if (iVar23 != 0) {
      if (uVar17 == 0x80) goto switchD_00e2d4c4_caseD_1;
      local_1708 = (undefined **)0x38d1;
      FUN_0277d4ac(&local_1708);
      psVar33 = (short *)((long)param_1 + ((long)((ulong)uVar17 << 0x20) >> 0x1d));
      *psVar33 = (short)local_1708;
      *(undefined1 *)((long)psVar33 + 3) = local_1708._3_1_;
      *(int *)(psVar33 + 2) = local_1708._4_4_;
      *(undefined1 *)(psVar33 + 1) = local_1708._2_1_;
      puVar1 = PTR_DAT_04bb43c0;
      local_f38 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
      local_f30 = local_1708;
      local_f28 = (uint *)0x0;
      lVar28 = *(long *)PTR_DAT_04bb43c0;
      uVar19 = FUN_0277d6c4(&local_f30);
      if (*(long *)puVar1 != 0) {
        lVar28 = *(long *)(lVar28 + 0x57e58);
        uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
        if ((uVar19 < *(uint *)(lVar28 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar19 * 8) != 0)) {
          FUN_0277d6c4(&local_1708);
        }
      }
      uVar17 = uVar17 + 1;
    }
    local_f30 = (undefined **)0x409b75b;
    local_f38 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    iVar23 = FUN_0274bce0(param_3,&local_f38);
    if ((iVar23 != 0) && (uVar17 != 0x80)) {
      local_1708 = (undefined **)0x38f1;
      FUN_0277d4ac(&local_1708);
      psVar33 = (short *)((long)param_1 + ((long)((ulong)uVar17 << 0x20) >> 0x1d));
      *psVar33 = (short)local_1708;
      *(undefined1 *)((long)psVar33 + 3) = local_1708._3_1_;
      *(int *)(psVar33 + 2) = local_1708._4_4_;
      *(undefined1 *)(psVar33 + 1) = local_1708._2_1_;
      puVar1 = PTR_DAT_04bb43c0;
      local_f38 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
      local_f30 = local_1708;
      local_f28 = (uint *)0x0;
      lVar28 = *(long *)PTR_DAT_04bb43c0;
      uVar19 = FUN_0277d6c4(&local_f30);
      if (*(long *)puVar1 != 0) {
        lVar28 = *(long *)(lVar28 + 0x57e58);
        uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
        if ((uVar19 < *(uint *)(lVar28 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar19 * 8) != 0)) {
          FUN_0277d6c4(&local_1708);
        }
      }
      uVar17 = uVar17 + 1;
    }
    goto switchD_00e2d4c4_caseD_1;
  case 9:
  case 0x15:
    local_f38 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    memset(&local_f30,0,0x754);
    uVar17 = nn::os::GetSystemTick();
    local_7dc = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 1;
    local_7d8 = (local_7dc ^ local_7dc >> 0x1e) * 0x6c078965 + 2;
    local_7d4 = (local_7d8 ^ local_7d8 >> 0x1e) * 0x6c078965 + 3;
    local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 4;
    pvVar25 = (void *)FUN_01a451fc(&local_f38);
    memset(pvVar25,0,0x754);
    apuStack_1700[0] = (uint *)&local_7c0;
    local_7c0 = (undefined *)CONCAT44(local_7c0._4_4_,0x4c);
    local_1708 = &PTR_FUN_049ff4e8;
    FUN_008a1ba0(&local_f38,&local_1708);
    lVar28 = (*(code *)local_f38[4])(&local_f38);
    uVar42 = 0;
    do {
      if ((*(uint *)(lVar28 + (uVar42 >> 5) * 4) >> (ulong)((uint)uVar42 & 0x1f) & 1) != 0)
      goto LAB_00e2d5b0;
      uVar17 = (uint)uVar42 + 1;
      uVar42 = (ulong)uVar17;
    } while (uVar17 != 15000);
    uVar42 = 0;
LAB_00e2d5b0:
    lVar44 = (*(code *)local_f38[4])(&local_f38);
    puVar15 = PTR_DAT_04bbfe58;
    puVar1 = PTR_DAT_04bb37e0;
    iVar23 = 15000;
    do {
      if ((*(uint *)(lVar44 + (ulong)(iVar23 - 1U >> 5) * 4) >> (ulong)(iVar23 - 1U & 0x1f) & 1) !=
          0) break;
      iVar23 = iVar23 + -1;
    } while (iVar23 != 0);
    if (iVar23 != (int)uVar42) {
      uVar17 = 0;
LAB_00e2d610:
      puVar6 = (undefined4 *)((long)param_1 + ((long)((ulong)uVar17 << 0x20) >> 0x1d));
      uVar17 = uVar17 + 1;
      puVar10 = (undefined4 *)(puVar15 + uVar42 * 8);
      if (0x752 < (uint)(uVar42 >> 3)) {
        puVar10 = (undefined4 *)puVar15;
      }
      puVar11 = (undefined4 *)puVar1;
      if ((uint)uVar42 < 0x3a99) {
        puVar11 = puVar10;
      }
      uVar18 = puVar11[1];
      *puVar6 = *puVar11;
      puVar6[1] = uVar18;
      do {
        uVar19 = (int)uVar42 + 1;
        uVar42 = (ulong)uVar19;
        if (0x752 < uVar19 >> 3) {
          uVar19 = 0x3a95;
          goto LAB_00e2d670;
        }
      } while ((*(uint *)(lVar28 + (ulong)(uVar19 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) == 0);
      goto LAB_00e2d6c8;
    }
    goto LAB_00e2d804;
  case 10:
  case 0x16:
    local_f38 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    memset(&local_f30,0,0x754);
    uVar17 = nn::os::GetSystemTick();
    local_7dc = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 1;
    local_7d8 = (local_7dc ^ local_7dc >> 0x1e) * 0x6c078965 + 2;
    local_7d4 = (local_7d8 ^ local_7d8 >> 0x1e) * 0x6c078965 + 3;
    local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 4;
    pvVar25 = (void *)FUN_01a451fc(&local_f38);
    memset(pvVar25,0,0x754);
    apuStack_1700[0] = (uint *)&local_7c0;
    local_7c0 = (undefined *)CONCAT44(local_7c0._4_4_,0x4d);
    local_1708 = &PTR_FUN_049ff4e8;
    FUN_008a1ba0(&local_f38,&local_1708);
    lVar28 = (*(code *)local_f38[4])(&local_f38);
    uVar42 = 0;
    do {
      if ((*(uint *)(lVar28 + (uVar42 >> 5) * 4) >> (ulong)((uint)uVar42 & 0x1f) & 1) != 0)
      goto LAB_00e2d7c0;
      uVar17 = (uint)uVar42 + 1;
      uVar42 = (ulong)uVar17;
    } while (uVar17 != 15000);
    uVar42 = 0;
LAB_00e2d7c0:
    lVar44 = (*(code *)local_f38[4])(&local_f38);
    puVar15 = PTR_DAT_04bbfe58;
    puVar1 = PTR_DAT_04bb37e0;
    iVar23 = 15000;
    do {
      if ((*(uint *)(lVar44 + (ulong)(iVar23 - 1U >> 5) * 4) >> (ulong)(iVar23 - 1U & 0x1f) & 1) !=
          0) break;
      iVar23 = iVar23 + -1;
    } while (iVar23 != 0);
    if (iVar23 != (int)uVar42) {
      uVar17 = 0;
LAB_00e2db10:
      puVar6 = (undefined4 *)((long)param_1 + ((long)((ulong)uVar17 << 0x20) >> 0x1d));
      uVar17 = uVar17 + 1;
      puVar10 = (undefined4 *)(puVar15 + uVar42 * 8);
      if (0x752 < (uint)(uVar42 >> 3)) {
        puVar10 = (undefined4 *)puVar15;
      }
      puVar11 = (undefined4 *)puVar1;
      if ((uint)uVar42 < 0x3a99) {
        puVar11 = puVar10;
      }
      uVar18 = puVar11[1];
      *puVar6 = *puVar11;
      puVar6[1] = uVar18;
      do {
        uVar19 = (int)uVar42 + 1;
        uVar42 = (ulong)uVar19;
        if (0x752 < uVar19 >> 3) {
          uVar19 = 0x3a95;
          goto LAB_00e2db70;
        }
      } while ((*(uint *)(lVar28 + (ulong)(uVar19 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) == 0);
      goto LAB_00e2dbc8;
    }
LAB_00e2d804:
    uVar17 = 0;
    goto switchD_00e2d4c4_caseD_1;
  case 0xb:
    lVar28 = *(long *)PTR_DAT_04bb46b0;
    if (lVar28 == 0) {
LAB_00e2e930:
      lVar28 = 0;
    }
    else {
      puVar26 = *(undefined8 **)(lVar28 + 0x10);
      if ((*(byte *)(lVar28 + 0x453) & 1) == 0) {
        lVar44 = (**(code **)(*(long *)*puVar26 + 0x38))();
        lVar28 = 0;
        if (lVar44 != 0) {
          lVar28 = lVar44 + 0x70;
        }
      }
      else {
        if (puVar26 == (undefined8 *)0x0) goto LAB_00e2e930;
        lVar28 = 0;
        if ((long *)puVar26[0x26] != (long *)0x0) {
          lVar28 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
        }
      }
    }
    plVar30 = (long *)(lVar28 + 0x1a0d80);
    if ((*(long **)(lVar28 + 0x1a0da0) == (long *)0x0) ||
       (puVar26 = (undefined8 *)**(long **)(lVar28 + 0x1a0da0), puVar26 == (undefined8 *)0x0)) {
      uVar42 = 0;
    }
    else {
      uVar42 = (**(code **)*puVar26)();
      uVar42 = uVar42 & 0xffffffff;
    }
    puVar1 = PTR_DAT_04bb43c0;
    uVar17 = 0;
    uVar19 = 0;
    lVar28 = *(long *)(lVar28 + 0x1a0d88) + *plVar30 + 4;
    do {
      if (uVar17 == 0x80) break;
      lVar44 = *(long *)puVar1;
      puVar7 = (undefined2 *)(lVar28 + ((long)((ulong)uVar19 << 0x20) >> 0x1d));
      uVar20 = FUN_0277d6c4(puVar7);
      if (*(long *)puVar1 != 0) {
        lVar44 = *(long *)(lVar44 + 0x57e58);
        uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
        if ((uVar20 < *(uint *)(lVar44 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) {
          puVar5 = (undefined2 *)((long)param_1 + ((long)((ulong)uVar17 << 0x20) >> 0x1d));
          lVar44 = lVar28 + (long)(int)uVar19 * 8;
          uVar17 = uVar17 + 1;
          *puVar5 = *puVar7;
          *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(lVar44 + 2);
          *(undefined1 *)((long)puVar5 + 3) = *(undefined1 *)(lVar44 + 3);
          *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(lVar44 + 4);
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != 0x80);
    break;
  case 0xc:
    local_f38 = (undefined **)0x948;
    FUN_0277d4ac(&local_f38);
    *param_1 = (undefined4)local_f38;
    param_1[1] = local_f38._4_4_;
    local_f38 = (undefined **)0xbfc;
    FUN_0277d4ac(&local_f38);
    param_1[2] = (undefined4)local_f38;
    param_1[3] = local_f38._4_4_;
    local_f38 = (undefined **)0xc0a;
    FUN_0277d4ac(&local_f38);
    param_1[4] = (undefined4)local_f38;
    param_1[5] = local_f38._4_4_;
    local_f38 = (undefined **)0xc0c;
    FUN_0277d4ac(&local_f38);
    uVar17 = 4;
    param_1[6] = (undefined4)local_f38;
    param_1[7] = local_f38._4_4_;
    goto switchD_00e2d4c4_caseD_1;
  case 0xd:
    lVar28 = *(long *)PTR_DAT_04bb46b0;
    if (lVar28 == 0) {
LAB_00e2ea40:
      lVar28 = 0;
    }
    else {
      puVar26 = *(undefined8 **)(lVar28 + 0x10);
      if ((*(byte *)(lVar28 + 0x453) & 1) == 0) {
        lVar44 = (**(code **)(*(long *)*puVar26 + 0x38))();
        lVar28 = 0;
        if (lVar44 != 0) {
          lVar28 = lVar44 + 0x70;
        }
      }
      else {
        if (puVar26 == (undefined8 *)0x0) goto LAB_00e2ea40;
        lVar28 = 0;
        if ((long *)puVar26[0x26] != (long *)0x0) {
          lVar28 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
        }
      }
    }
    plVar30 = (long *)(lVar28 + 0x1b8898);
    if ((*(long **)((long)&DAT_001b88b8 + lVar28) == (long *)0x0) ||
       (puVar26 = (undefined8 *)**(long **)((long)&DAT_001b88b8 + lVar28),
       puVar26 == (undefined8 *)0x0)) {
      uVar42 = 0;
    }
    else {
      uVar42 = (**(code **)*puVar26)();
      uVar42 = uVar42 & 0xffffffff;
    }
    puVar1 = PTR_DAT_04bb43c0;
    uVar17 = 0;
    uVar19 = 0;
    lVar28 = *(long *)(lVar28 + 0x1b88a0) + *plVar30;
    do {
      if (uVar17 == 0x80) break;
      lVar44 = *(long *)puVar1;
      puVar7 = (undefined2 *)(lVar28 + ((long)((ulong)uVar19 << 0x20) >> 0x1d));
      uVar20 = FUN_0277d6c4(puVar7);
      if (*(long *)puVar1 != 0) {
        lVar44 = *(long *)(lVar44 + 0x57e58);
        uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
        if ((uVar20 < *(uint *)(lVar44 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) {
          puVar5 = (undefined2 *)((long)param_1 + ((long)((ulong)uVar17 << 0x20) >> 0x1d));
          lVar44 = lVar28 + (long)(int)uVar19 * 8;
          uVar17 = uVar17 + 1;
          *puVar5 = *puVar7;
          *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(lVar44 + 2);
          *(undefined1 *)((long)puVar5 + 3) = *(undefined1 *)(lVar44 + 3);
          *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(lVar44 + 4);
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != 0x20);
    break;
  case 0x10:
    lVar28 = *(long *)PTR_DAT_04bb46b0;
    if (lVar28 == 0) {
LAB_00e2eb50:
      lVar28 = 0;
    }
    else {
      puVar26 = *(undefined8 **)(lVar28 + 0x10);
      if ((*(byte *)(lVar28 + 0x453) & 1) == 0) {
        lVar44 = (**(code **)(*(long *)*puVar26 + 0x38))();
        lVar28 = 0;
        if (lVar44 != 0) {
          lVar28 = lVar44 + 0x70;
        }
      }
      else {
        if (puVar26 == (undefined8 *)0x0) goto LAB_00e2eb50;
        lVar28 = 0;
        if ((long *)puVar26[0x26] != (long *)0x0) {
          lVar28 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
        }
      }
    }
    plVar30 = (long *)(lVar28 + 0x1bc098);
    if ((*(long **)(lVar28 + 0x1bc0b8) == (long *)0x0) ||
       (puVar26 = (undefined8 *)**(long **)(lVar28 + 0x1bc0b8), puVar26 == (undefined8 *)0x0)) {
      uVar42 = 0;
    }
    else {
      uVar42 = (**(code **)*puVar26)();
      uVar42 = uVar42 & 0xffffffff;
    }
    puVar1 = PTR_DAT_04bb43c0;
    uVar17 = 0;
    uVar19 = 0;
    lVar28 = *(long *)(lVar28 + 0x1bc0a0) + *plVar30;
    do {
      if (uVar17 == 0x80) break;
      lVar44 = *(long *)puVar1;
      puVar7 = (undefined2 *)(lVar28 + ((long)((ulong)uVar19 << 0x20) >> 0x1d));
      uVar20 = FUN_0277d6c4(puVar7);
      if (*(long *)puVar1 != 0) {
        lVar44 = *(long *)(lVar44 + 0x57e58);
        uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
        if ((uVar20 < *(uint *)(lVar44 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) {
          puVar5 = (undefined2 *)((long)param_1 + ((long)((ulong)uVar17 << 0x20) >> 0x1d));
          lVar44 = lVar28 + (long)(int)uVar19 * 8;
          uVar17 = uVar17 + 1;
          *puVar5 = *puVar7;
          *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(lVar44 + 2);
          *(undefined1 *)((long)puVar5 + 3) = *(undefined1 *)(lVar44 + 3);
          *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(lVar44 + 4);
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != 0x20);
    break;
  case 0x11:
    lVar28 = *(long *)PTR_DAT_04bb46b0;
    if (lVar28 == 0) {
LAB_00e2ec60:
      lVar28 = 0;
    }
    else {
      puVar26 = *(undefined8 **)(lVar28 + 0x10);
      if ((*(byte *)(lVar28 + 0x453) & 1) == 0) {
        lVar44 = (**(code **)(*(long *)*puVar26 + 0x38))();
        lVar28 = 0;
        if (lVar44 != 0) {
          lVar28 = lVar44 + 0x70;
        }
      }
      else {
        if (puVar26 == (undefined8 *)0x0) goto LAB_00e2ec60;
        lVar28 = 0;
        if ((long *)puVar26[0x26] != (long *)0x0) {
          lVar28 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
        }
      }
    }
    plVar30 = (long *)(lVar28 + 0x1bcf78);
    if ((*(long **)(lVar28 + 0x1bcf98) == (long *)0x0) ||
       (puVar26 = (undefined8 *)**(long **)(lVar28 + 0x1bcf98), puVar26 == (undefined8 *)0x0)) {
      uVar42 = 0;
    }
    else {
      uVar42 = (**(code **)*puVar26)();
      uVar42 = uVar42 & 0xffffffff;
    }
    puVar1 = PTR_DAT_04bb43c0;
    uVar17 = 0;
    uVar19 = 0;
    lVar28 = *(long *)(lVar28 + 0x1bcf80) + *plVar30;
    do {
      if (uVar17 == 0x80) break;
      lVar44 = *(long *)puVar1;
      puVar7 = (undefined2 *)(lVar28 + ((long)((ulong)uVar19 << 0x20) >> 0x1d));
      uVar20 = FUN_0277d6c4(puVar7);
      if (*(long *)puVar1 != 0) {
        lVar44 = *(long *)(lVar44 + 0x57e58);
        uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
        if ((uVar20 < *(uint *)(lVar44 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) {
          puVar5 = (undefined2 *)((long)param_1 + ((long)((ulong)uVar17 << 0x20) >> 0x1d));
          lVar44 = lVar28 + (long)(int)uVar19 * 8;
          uVar17 = uVar17 + 1;
          *puVar5 = *puVar7;
          *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(lVar44 + 2);
          *(undefined1 *)((long)puVar5 + 3) = *(undefined1 *)(lVar44 + 3);
          *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(lVar44 + 4);
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != 0x20);
    break;
  case 0x13:
    lVar28 = *(long *)PTR_DAT_04bb46b0;
    if (lVar28 == 0) {
LAB_00e2ed70:
      lVar28 = 0;
    }
    else {
      puVar26 = *(undefined8 **)(lVar28 + 0x10);
      if ((*(byte *)(lVar28 + 0x453) & 1) == 0) {
        lVar44 = (**(code **)(*(long *)*puVar26 + 0x38))();
        lVar28 = 0;
        if (lVar44 != 0) {
          lVar28 = lVar44 + 0x70;
        }
      }
      else {
        if (puVar26 == (undefined8 *)0x0) goto LAB_00e2ed70;
        lVar28 = 0;
        if ((long *)puVar26[0x26] != (long *)0x0) {
          lVar28 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
        }
      }
    }
    plVar30 = (long *)(lVar28 + 0x1bc808);
    if ((*(long **)(lVar28 + 0x1bc828) == (long *)0x0) ||
       (puVar26 = (undefined8 *)**(long **)(lVar28 + 0x1bc828), puVar26 == (undefined8 *)0x0)) {
      uVar42 = 0;
    }
    else {
      uVar42 = (**(code **)*puVar26)();
      uVar42 = uVar42 & 0xffffffff;
    }
    puVar1 = PTR_DAT_04bb43c0;
    uVar17 = 0;
    uVar19 = 0;
    lVar28 = *(long *)(lVar28 + 0x1bc810) + *plVar30;
    do {
      if (uVar17 == 0x80) break;
      lVar44 = *(long *)puVar1;
      puVar7 = (undefined2 *)(lVar28 + ((long)((ulong)uVar19 << 0x20) >> 0x1d));
      uVar20 = FUN_0277d6c4(puVar7);
      if (*(long *)puVar1 != 0) {
        lVar44 = *(long *)(lVar44 + 0x57e58);
        uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
        if ((uVar20 < *(uint *)(lVar44 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) {
          puVar5 = (undefined2 *)((long)param_1 + ((long)((ulong)uVar17 << 0x20) >> 0x1d));
          lVar44 = lVar28 + (long)(int)uVar19 * 8;
          uVar17 = uVar17 + 1;
          *puVar5 = *puVar7;
          *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(lVar44 + 2);
          *(undefined1 *)((long)puVar5 + 3) = *(undefined1 *)(lVar44 + 3);
          *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(lVar44 + 4);
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != 0x20);
  }
  if ((uVar42 & 1) != 0) {
LAB_00e2ee68:
    if ((plVar30[4] != 0) &&
       (puVar26 = *(undefined8 **)(plVar30[4] + 8), puVar26 != (undefined8 *)0x0)) {
LAB_00e2ee80:
      (**(code **)*puVar26)();
    }
  }
switchD_00e2d4c4_caseD_1:
  puVar15 = PTR_DAT_04bbfe58;
  puVar1 = PTR_DAT_04bb9278;
  uVar19 = *(uint *)(*(long *)PTR_DAT_04bb4700 + 0x1c8);
  if ((0 < (int)uVar19) ||
     (((lVar28 = *(long *)(*(long *)PTR_DAT_04bb4700 + 0xb8), lVar28 != 0 &&
       (puVar36 = *(uint **)(lVar28 + 8), puVar36 != (uint *)0x0)) &&
      (uVar19 = *puVar36, 0 < (int)uVar19)))) {
    uVar42 = 0;
    ppuVar2 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    puVar3 = PTR_DAT_04bb2f70 + 0x10;
    puVar4 = PTR_DAT_04bb2bc0 + 0x10;
    do {
      local_f38 = ppuVar2;
      memset(&local_f30,0,0x754);
      uVar20 = nn::os::GetSystemTick();
      local_7dc = (uVar20 ^ uVar20 >> 0x1e) * 0x6c078965 + 1;
      local_7d8 = (local_7dc ^ local_7dc >> 0x1e) * 0x6c078965 + 2;
      local_7d4 = (local_7d8 ^ local_7d8 >> 0x1e) * 0x6c078965 + 3;
      local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 4;
      pvVar25 = (void *)(*(code *)local_f38[3])(&local_f38);
      memset(pvVar25,0,0x754);
      lVar28 = *(long *)PTR_DAT_04bb4700;
      uVar20 = *(uint *)(lVar28 + 0x1c8);
      uVar34 = (ulong)uVar20;
      iVar23 = (int)uVar42;
      if ((int)uVar20 < 1) {
        if (*(long *)(lVar28 + 0xb8) == 0) goto LAB_00e2fff4;
        puVar36 = *(uint **)(*(long *)(lVar28 + 0xb8) + 8);
        if ((((puVar36 == (uint *)0x0) ||
             ((uVar42 < *(uint *)(lVar28 + 0xd0) &&
              (*(char *)(*(long *)(lVar28 + 0xd8) + uVar42) == '\0')))) || (*puVar36 <= uVar42)) ||
           ((puVar36[1] == 0 || ((ushort)puVar36[2] == 0)))) {
          puVar36 = (uint *)0x0;
        }
        else {
          iVar22 = 0xc;
          if (*(char *)((long)puVar36 + 10) != '\0') {
            iVar22 = 0x1c;
          }
          puVar36 = (uint *)((ulong)(puVar36[1] * iVar23 + (uint)(ushort)puVar36[2] * 8 + iVar22) +
                            (long)puVar36);
        }
      }
      else if (uVar42 < uVar34) {
        uVar39 = uVar42 & 0xffffffff;
        if (*(uint *)(lVar28 + 0x1b8) <= uVar42) {
          uVar39 = 0;
        }
        puVar36 = *(uint **)(*(long *)(lVar28 + 0x1c0) + uVar39 * 8);
      }
      else {
LAB_00e2fff4:
        puVar36 = (uint *)0x0;
      }
      uVar21 = *puVar36;
      uVar35 = 0;
      if ((uVar21 != 0) && (puVar36 != (uint *)(ulong)uVar21)) {
        puVar40 = (uint *)((long)puVar36 - (long)(ulong)uVar21);
        uVar35 = 0;
        if (*puVar40 != 0) {
          uVar21 = puVar40[1];
          if ((uVar21 != 0) && ((ulong)(ushort)puVar40[2] != 0)) {
            lVar44 = 0xc;
            if (*(char *)((long)puVar40 + 10) != '\0') {
              lVar44 = 0x1c;
            }
            lVar44 = (long)puVar40 + lVar44 + (ulong)(ushort)puVar40[2] * 8;
            if (lVar44 != 0) {
              uVar12 = 0;
              if ((ulong)uVar21 != 0) {
                uVar12 = (uint)((ulong)((long)puVar36 - lVar44) / (ulong)uVar21);
              }
              if (*puVar40 <= uVar12) {
                uVar12 = 0xffffffff;
              }
              if ((uVar12 < *(uint *)PTR_DAT_04bb9268) &&
                 (uVar35 = *(ushort *)(*(long *)(PTR_DAT_04bb9268 + 8) + (long)(int)uVar12 * 2),
                 uVar35 < 2)) goto LAB_00e30094;
            }
          }
          uVar35 = 0;
        }
      }
LAB_00e30094:
      if ((int)uVar20 < 1) {
        puVar36 = (uint *)0x0;
        if ((*(long *)(lVar28 + 0xb8) != 0) &&
           (puVar36 = *(uint **)(*(long *)(lVar28 + 0xb8) + 8), puVar36 != (uint *)0x0)) {
          if (((uVar42 < *(uint *)(lVar28 + 0xd0)) &&
              (*(char *)(*(long *)(lVar28 + 0xd8) + uVar42) == '\0')) ||
             (((*puVar36 <= uVar42 || (puVar36[1] == 0)) || ((ushort)puVar36[2] == 0))))
          goto LAB_00e30130;
          iVar22 = 0xc;
          if (*(char *)((long)puVar36 + 10) != '\0') {
            iVar22 = 0x1c;
          }
          puVar36 = (uint *)((ulong)(puVar36[1] * iVar23 + (uint)(ushort)puVar36[2] * 8 + iVar22) +
                            (long)puVar36);
        }
      }
      else if (uVar42 < uVar34) {
        uVar39 = uVar42 & 0xffffffff;
        if (*(uint *)(lVar28 + 0x1b8) <= uVar42) {
          uVar39 = 0;
        }
        puVar36 = *(uint **)(*(long *)(lVar28 + 0x1c0) + uVar39 * 8);
      }
      else {
LAB_00e30130:
        puVar36 = (uint *)0x0;
      }
      uVar21 = *puVar36;
      if (uVar21 != 0) {
        cVar38 = *PTR_DAT_04bb9270;
        do {
          if (cVar38 == '\0') {
            *(undefined4 *)(puVar1 + 0x10) = 0xffffffff;
            *(undefined8 *)puVar1 = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
            cVar38 = '\x01';
            uVar21 = *puVar36;
            *PTR_DAT_04bb9270 = 1;
          }
          else {
            uVar12 = *(uint *)(puVar1 + 0xc);
            if (-1 < (int)uVar12) {
              if ((char *)((ulong)uVar12 + (long)puVar36) != (char *)0x0) {
                uVar16 = *(char *)((ulong)uVar12 + (long)puVar36) != '\0';
                goto joined_r0x00e30220;
              }
              break;
            }
            if (uVar12 != 0xffffffff) break;
          }
          uVar41 = ZEXT48(uVar21);
          uVar16 = false;
          if (((uint *)uVar41 == (uint *)0x0) || (uVar16 = false, puVar36 == (uint *)uVar41))
          goto joined_r0x00e30220;
          lVar44 = 0xc;
          if (*(char *)((long)puVar36 + (10 - uVar41)) != '\0') {
            lVar44 = 0x1c;
          }
          lVar44 = (long)puVar36 + (lVar44 - uVar41);
          if (lVar44 == 0) break;
          uVar39 = (ulong)*(ushort *)((long)puVar36 + (8 - uVar41));
          *(undefined4 *)(puVar1 + 0xc) = 0xfffffffe;
          if (uVar39 == 0) break;
          piVar32 = (int *)(lVar44 + 4);
          while (piVar32[-1] != 0x74b2eb78) {
            piVar32 = piVar32 + 2;
            uVar39 = uVar39 - 1;
            if (uVar39 == 0) goto LAB_00e30240;
          }
          iVar22 = 0;
          if (*piVar32 != -1) {
            iVar22 = *piVar32;
          }
          *(int *)(puVar1 + 0xc) = iVar22;
          uVar21 = *puVar36;
          if (uVar21 == 0) break;
        } while( true );
      }
LAB_00e30240:
      uVar16 = false;
joined_r0x00e30220:
      if (uVar35 == 0) {
        if (local_7c4 == 0) goto LAB_00e30250;
      }
      else if ((uVar35 == 1) && (local_7c4 == 7)) {
LAB_00e30250:
        if ((int)uVar20 < 1) {
          puVar36 = (uint *)0x0;
          if ((*(long *)(lVar28 + 0xb8) != 0) &&
             (puVar36 = *(uint **)(*(long *)(lVar28 + 0xb8) + 8), puVar36 != (uint *)0x0)) {
            if (((uVar42 < *(uint *)(lVar28 + 0xd0)) &&
                (*(char *)(*(long *)(lVar28 + 0xd8) + uVar42) == '\0')) ||
               (((*puVar36 <= uVar42 || (puVar36[1] == 0)) || ((ushort)puVar36[2] == 0))))
            goto LAB_00e302e4;
            iVar22 = 0xc;
            if (*(char *)((long)puVar36 + 10) != '\0') {
              iVar22 = 0x1c;
            }
            puVar36 = (uint *)((ulong)(puVar36[1] * iVar23 + (uint)(ushort)puVar36[2] * 8 + iVar22)
                              + (long)puVar36);
          }
        }
        else if (uVar42 < uVar34) {
          uVar39 = uVar42 & 0xffffffff;
          if (*(uint *)(lVar28 + 0x1b8) <= uVar42) {
            uVar39 = 0;
          }
          puVar36 = *(uint **)(*(long *)(lVar28 + 0x1c0) + uVar39 * 8);
        }
        else {
LAB_00e302e4:
          puVar36 = (uint *)0x0;
        }
        uVar20 = *puVar36;
        if (uVar20 != 0) {
          cVar38 = *PTR_DAT_04bb9270;
          do {
            if (cVar38 == '\0') {
              *(undefined4 *)(puVar1 + 0x10) = 0xffffffff;
              *(undefined8 *)puVar1 = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
              cVar38 = '\x01';
              uVar20 = *puVar36;
              *PTR_DAT_04bb9270 = 1;
            }
            else {
              uVar21 = *(uint *)(puVar1 + 4);
              if (-1 < (int)uVar21) {
                if ((uint *)((ulong)uVar21 + (long)puVar36) != (uint *)0x0) {
                  uVar20 = *(uint *)((ulong)uVar21 + (long)puVar36);
                  if (-1 < (int)uVar20) {
                    bVar31 = *param_3;
                    if (7 < bVar31) {
                      bVar31 = 0xff;
                    }
                    local_1708 = (undefined **)CONCAT71(local_1708._1_7_,bVar31);
                    lVar28 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_1708,1);
                    if (lVar28 == 0) goto LAB_00e2feb8;
                    if ((*(long **)(lVar28 + 0x18320) == (long *)0x0) ||
                       (puVar26 = (undefined8 *)**(long **)(lVar28 + 0x18320),
                       puVar26 == (undefined8 *)0x0)) {
                      uVar21 = 1;
                    }
                    else {
                      uVar21 = (**(code **)*puVar26)();
                      uVar21 = uVar21 ^ 1;
                    }
                    psVar33 = (short *)(*(long *)(lVar28 + 0x18308) + *(long *)(lVar28 + 0x18300));
                    psVar9 = psVar33 + uVar20;
                    if (0x7ff < uVar20) {
                      psVar9 = psVar33;
                    }
                    sVar14 = *psVar9;
                    if ((((uVar21 & 1) == 0) && (*(long *)(lVar28 + 0x18320) != 0)) &&
                       (puVar26 = *(undefined8 **)(*(long *)(lVar28 + 0x18320) + 8),
                       puVar26 != (undefined8 *)0x0)) {
                      (**(code **)*puVar26)();
                    }
                    if (sVar14 == 0) goto LAB_00e2feb8;
                    lVar28 = *(long *)PTR_DAT_04bb4700;
                    uVar34 = (ulong)*(uint *)(lVar28 + 0x1c8);
                  }
                }
                break;
              }
              if (uVar21 != 0xffffffff) break;
            }
            if (((ulong)uVar20 == 0) || (lVar44 = (long)puVar36 - (ulong)uVar20, lVar44 == 0))
            break;
            lVar43 = 0xc;
            if (*(char *)(lVar44 + 10) != '\0') {
              lVar43 = 0x1c;
            }
            if (lVar43 + lVar44 == 0) break;
            uVar39 = (ulong)*(ushort *)(lVar44 + 8);
            *(undefined4 *)(puVar1 + 4) = 0xfffffffe;
            if (uVar39 == 0) break;
            piVar32 = (int *)(lVar43 + lVar44 + 4);
            while (piVar32[-1] != 0x4171a41d) {
              piVar32 = piVar32 + 2;
              uVar39 = uVar39 - 1;
              if (uVar39 == 0) goto LAB_00e304a0;
            }
            iVar22 = 0;
            if (*piVar32 != -1) {
              iVar22 = *piVar32;
            }
            *(int *)(puVar1 + 4) = iVar22;
            uVar20 = *puVar36;
            if (uVar20 == 0) break;
          } while( true );
        }
LAB_00e304a0:
        if ((int)uVar34 < 1) {
          puVar36 = (uint *)0x0;
          if ((*(long *)(lVar28 + 0xb8) != 0) &&
             (puVar36 = *(uint **)(*(long *)(lVar28 + 0xb8) + 8), puVar36 != (uint *)0x0)) {
            if (((uVar42 < *(uint *)(lVar28 + 0xd0)) &&
                (*(char *)(*(long *)(lVar28 + 0xd8) + uVar42) == '\0')) ||
               (((*puVar36 <= uVar42 || (puVar36[1] == 0)) || ((ushort)puVar36[2] == 0))))
            goto LAB_00e3053c;
            iVar22 = 0xc;
            if (*(char *)((long)puVar36 + 10) != '\0') {
              iVar22 = 0x1c;
            }
            puVar36 = (uint *)((ulong)(puVar36[1] * iVar23 + (uint)(ushort)puVar36[2] * 8 + iVar22)
                              + (long)puVar36);
          }
        }
        else if (uVar42 < uVar34) {
          uVar39 = uVar42 & 0xffffffff;
          if (*(uint *)(lVar28 + 0x1b8) <= uVar42) {
            uVar39 = 0;
          }
          puVar36 = *(uint **)(*(long *)(lVar28 + 0x1c0) + uVar39 * 8);
        }
        else {
LAB_00e3053c:
          puVar36 = (uint *)0x0;
        }
        uVar20 = *puVar36;
        if (uVar20 != 0) {
          cVar38 = *PTR_DAT_04bb9270;
          do {
            if (cVar38 == '\0') {
              *(undefined4 *)(puVar1 + 0x10) = 0xffffffff;
              *(undefined8 *)puVar1 = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
              cVar38 = '\x01';
              uVar20 = *puVar36;
              *PTR_DAT_04bb9270 = 1;
            }
            else {
              uVar21 = *(uint *)puVar1;
              if (-1 < (int)uVar21) {
                if (((int *)((ulong)uVar21 + (long)puVar36) != (int *)0x0) &&
                   (-1 < *(int *)((ulong)uVar21 + (long)puVar36))) {
                  iVar22 = FUN_02740318();
                  if (iVar22 < 1) goto LAB_00e2feb8;
                  lVar28 = *(long *)PTR_DAT_04bb4700;
                  uVar34 = (ulong)*(uint *)(lVar28 + 0x1c8);
                }
                break;
              }
              if (uVar21 != 0xffffffff) break;
            }
            if (((ulong)uVar20 == 0) || (lVar44 = (long)puVar36 - (ulong)uVar20, lVar44 == 0))
            break;
            lVar43 = 0xc;
            if (*(char *)(lVar44 + 10) != '\0') {
              lVar43 = 0x1c;
            }
            if (lVar43 + lVar44 == 0) break;
            uVar39 = (ulong)*(ushort *)(lVar44 + 8);
            *(undefined4 *)puVar1 = 0xfffffffe;
            if (uVar39 == 0) break;
            piVar32 = (int *)(lVar43 + lVar44 + 4);
            while (piVar32[-1] != 0x3fe43170) {
              piVar32 = piVar32 + 2;
              uVar39 = uVar39 - 1;
              if (uVar39 == 0) goto LAB_00e30640;
            }
            iVar22 = 0;
            if (*piVar32 != -1) {
              iVar22 = *piVar32;
            }
            *(int *)puVar1 = iVar22;
            uVar20 = *puVar36;
            if (uVar20 == 0) break;
          } while( true );
        }
LAB_00e30640:
        uVar20 = uRam0000000000000000;
        if ((int)uVar34 < 1) {
          if (*(long *)(lVar28 + 0xb8) == 0) goto LAB_00e306f4;
          puVar36 = *(uint **)(*(long *)(lVar28 + 0xb8) + 8);
          if ((puVar36 == (uint *)0x0) ||
             ((((uVar42 < *(uint *)(lVar28 + 0xd0) &&
                (*(char *)(*(long *)(lVar28 + 0xd8) + uVar42) == '\0')) || (*puVar36 <= uVar42)) ||
              ((puVar36[1] == 0 || ((ushort)puVar36[2] == 0)))))) {
            puVar36 = (uint *)0x0;
          }
          else {
            iVar22 = 0xc;
            if (*(char *)((long)puVar36 + 10) != '\0') {
              iVar22 = 0x1c;
            }
            puVar36 = (uint *)((ulong)(puVar36[1] * iVar23 + (uint)(ushort)puVar36[2] * 8 + iVar22)
                              + (long)puVar36);
            uVar20 = *puVar36;
          }
        }
        else if (uVar42 < uVar34) {
          uVar34 = uVar42 & 0xffffffff;
          if (*(uint *)(lVar28 + 0x1b8) <= uVar42) {
            uVar34 = 0;
          }
          puVar36 = *(uint **)(*(long *)(lVar28 + 0x1c0) + uVar34 * 8);
          uVar20 = *puVar36;
        }
        else {
LAB_00e306f4:
          puVar36 = (uint *)0x0;
        }
        if (uVar20 != 0) {
          cVar38 = *PTR_DAT_04bb9270;
          do {
            if (cVar38 == '\0') {
              *(undefined4 *)(puVar1 + 0x10) = 0xffffffff;
              *(undefined8 *)puVar1 = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
              cVar38 = '\x01';
              uVar20 = *puVar36;
              *PTR_DAT_04bb9270 = 1;
            }
            else {
              uVar21 = *(uint *)(puVar1 + 0x10);
              if (-1 < (int)uVar21) {
                pcVar37 = (char *)((ulong)uVar21 + (long)puVar36);
                goto LAB_00e307e4;
              }
              if (uVar21 != 0xffffffff) break;
            }
            puVar40 = (uint *)(ulong)uVar20;
            pcVar37 = (char *)0x0;
            if ((puVar40 == (uint *)0x0) || (pcVar37 = (char *)0x0, puVar36 == puVar40))
            goto LAB_00e307e4;
            lVar28 = 0xc;
            if (*(char *)((long)puVar36 + (10 - (long)puVar40)) != '\0') {
              lVar28 = 0x1c;
            }
            lVar28 = (long)puVar36 + (lVar28 - (long)puVar40);
            pcVar37 = (char *)0x0;
            if (lVar28 == 0) goto LAB_00e307e4;
            uVar34 = (ulong)*(ushort *)((long)puVar36 + (8 - (long)puVar40));
            *(undefined4 *)(puVar1 + 0x10) = 0xfffffffe;
            if (uVar34 == 0) break;
            piVar32 = (int *)(lVar28 + 4);
            while (piVar32[-1] != 0x46e66708) {
              piVar32 = piVar32 + 2;
              uVar34 = uVar34 - 1;
              if (uVar34 == 0) goto LAB_00e307e0;
            }
            iVar23 = 0;
            if (*piVar32 != -1) {
              iVar23 = *piVar32;
            }
            *(int *)(puVar1 + 0x10) = iVar23;
            uVar20 = *puVar36;
            if (uVar20 == 0) break;
          } while( true );
        }
LAB_00e307e0:
        pcVar37 = (char *)0x0;
LAB_00e307e4:
        local_f80 = 0x40;
        local_f3d = 0;
        pcVar29 = *(char **)PTR_PTR_04bb9280;
        if (pcVar37 != (char *)0x0) {
          pcVar29 = pcVar37;
        }
        local_f88 = local_f7c;
        if (local_f7c != pcVar29) {
          lVar28 = 0;
          do {
            if (pcVar29[lVar28] == '\0') {
LAB_00e30858:
              iVar23 = (int)lVar28;
joined_r0x00e3085c:
              if (0x3f < iVar23) {
                iVar23 = 0x3f;
              }
              goto LAB_00e30864;
            }
            if (pcVar29[lVar28 + 1] == '\0') {
              lVar28 = lVar28 + 1;
              goto LAB_00e30858;
            }
            if (pcVar29[lVar28 + 2] == '\0') {
              iVar23 = (int)lVar28 + 2;
              goto joined_r0x00e3085c;
            }
            lVar28 = lVar28 + 3;
          } while (lVar28 != 0x80001);
          iVar23 = 0;
LAB_00e30864:
          local_f90 = puVar3;
          memcpy(local_f7c,pcVar29,(long)iVar23);
          local_f7c[iVar23] = '\0';
        }
        local_f94 = 0;
        uVar20 = 0;
        local_f90 = puVar4;
        do {
          pcVar37 = "";
          if (uVar20 < 0x13e) {
            pcVar37 = *(char **)(PTR_DAT_04bb5820 + (ulong)uVar20 * 8 + 0x1298);
          }
          (**(code **)(local_f90 + 0x18))(&local_f90);
          if (pcVar37 == local_f88) {
LAB_00e3094c:
            local_f94 = uVar20;
            break;
          }
          if (*pcVar37 == *local_f88) {
            if (*pcVar37 == '\0') goto LAB_00e3094c;
            lVar28 = 0x7fffe;
            pcVar29 = local_f88;
            while( true ) {
              if (pcVar37[1] != pcVar29[1]) break;
              if (pcVar37[1] == '\0') goto LAB_00e3094c;
              if (pcVar37[2] != pcVar29[2]) break;
              if (pcVar37[2] == '\0') goto LAB_00e3094c;
              if ((lVar28 == 0) || (cVar38 = pcVar37[3], cVar38 != pcVar29[3])) break;
              lVar28 = lVar28 + -3;
              pcVar29 = pcVar29 + 3;
              pcVar37 = pcVar37 + 3;
              if (cVar38 == '\0') goto LAB_00e3094c;
            }
          }
          uVar21 = 0x13e;
          if ((int)uVar20 < 0x13e) {
            uVar21 = uVar20 + 1;
          }
          uVar20 = uVar21;
        } while (uVar21 != 0x13e);
        local_f98 = local_f94;
        if (local_f94 != 0) {
          apuStack_1700[0] = &local_f98;
          local_1708 = &PTR_FUN_049ff4e8;
          FUN_008a1ba0(&local_f38,&local_1708);
          if ((bool)uVar16) {
            local_1708 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
            memset(apuStack_1700,0,0x754);
            uVar20 = nn::os::GetSystemTick();
            local_fac = (uVar20 ^ uVar20 >> 0x1e) * 0x6c078965 + 1;
            local_fa8 = (local_fac ^ local_fac >> 0x1e) * 0x6c078965 + 2;
            local_fa4 = (local_fa8 ^ local_fa8 >> 0x1e) * 0x6c078965 + 3;
            local_fa0 = (local_fa4 ^ local_fa4 >> 0x1e) * 0x6c078965 + 4;
            pvVar25 = (void *)(*(code *)local_1708[3])(&local_1708);
            memset(pvVar25,0,0x754);
            if ((((*param_3 < 8) && (uVar20 = FUN_02582d8c(param_3,1), uVar20 < 8)) &&
                (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar20 * 0x13f0 + 0x13d4) != '\0')) &&
               (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar20 * 0x13f0 + 0x13d6) != '\0')) {
              bVar31 = *param_3;
              if (7 < bVar31) {
                bVar31 = 0xff;
              }
              local_7c0 = (undefined *)CONCAT71(local_7c0._1_7_,bVar31);
              lVar28 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_7c0,1);
              if (lVar28 != 0) {
                lVar44 = lVar28 + 0x194b0;
                if (*(long *)(lVar28 + 0x194b8) == 0) {
                  lVar44 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
                  plVar30 = *(long **)(lVar44 + 0x1090);
                }
                else {
                  plVar30 = *(long **)(lVar28 + 0x1a540);
                }
                if ((plVar30 == (long *)0x0) || ((undefined8 *)*plVar30 == (undefined8 *)0x0)) {
                  memcpy(apuStack_1700,
                         (void *)(*(long *)(lVar44 + 0x1078) + *(long *)(lVar44 + 0x1070)),0x754);
                }
                else {
                  uVar34 = (*(code *)**(undefined8 **)*plVar30)();
                  memcpy(apuStack_1700,
                         (void *)(*(long *)(lVar44 + 0x1078) + *(long *)(lVar44 + 0x1070)),0x754);
                  if ((((uVar34 & 1) != 0) && (*(long *)(lVar44 + 0x1090) != 0)) &&
                     (puVar26 = *(undefined8 **)(*(long *)(lVar44 + 0x1090) + 8),
                     puVar26 != (undefined8 *)0x0)) {
                    (**(code **)*puVar26)();
                  }
                }
              }
            }
            pvVar25 = (void *)(*(code *)local_1708[3])(&local_1708);
            lVar28 = 0;
            do {
              puVar36 = (uint *)((long)pvVar25 + lVar28);
              lVar44 = lVar28 + 0x1c;
              *(uint *)((long)&local_7c0 + lVar28) = ~*puVar36;
              *(uint *)((long)&local_7c0 + lVar28 + 4) = ~puVar36[1];
              *(uint *)((long)local_7b8 + lVar28) = ~puVar36[2];
              *(uint *)((long)local_7b8 + lVar28 + 4) = ~puVar36[3];
              *(uint *)((long)local_7b8 + lVar28 + 8) = ~puVar36[4];
              *(uint *)((long)local_7b8 + lVar28 + 0xc) = ~puVar36[5];
              *(uint *)((long)local_7b8 + lVar28 + 0x10) = ~puVar36[6];
              lVar28 = lVar44;
            } while (lVar44 != 0x754);
            memcpy(pvVar25,&local_7c0,0x754);
            *(uint *)((long)pvVar25 + 0x750) = *(uint *)((long)pvVar25 + 0x750) & 0xffffff;
            pvVar25 = (void *)(*(code *)local_f38[3])(&local_f38);
            lVar44 = (*(code *)local_1708[4])(&local_1708);
            lVar28 = 0;
            while( true ) {
              puVar36 = (uint *)(lVar44 + 8 + lVar28);
              *(uint *)((long)&local_7c0 + lVar28) = puVar36[-2] & *(uint *)((long)pvVar25 + lVar28)
              ;
              if (lVar28 == 0x750) break;
              *(uint *)((long)&local_7c0 + lVar28 + 4) =
                   puVar36[-1] & *(uint *)((long)pvVar25 + lVar28 + 4);
              *(uint *)((long)local_7b8 + lVar28) = *puVar36 & *(uint *)((long)pvVar25 + lVar28 + 8)
              ;
              *(uint *)((long)local_7b8 + lVar28 + 4) =
                   puVar36[1] & *(uint *)((long)pvVar25 + lVar28 + 0xc);
              lVar28 = lVar28 + 0x10;
            }
            memcpy(pvVar25,&local_7c0,0x754);
            *(uint *)((long)pvVar25 + 0x750) = *(uint *)((long)pvVar25 + 0x750) & 0xffffff;
          }
          lVar28 = (*(code *)local_f38[4])(&local_f38);
          uVar34 = 0;
          do {
            uVar20 = (uint)uVar34;
            if ((*(uint *)(lVar28 + (uVar34 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1) != 0)
            goto LAB_00e30d04;
            uVar21 = uVar20 + 1;
            if (((*(uint *)(lVar28 + (ulong)(uVar21 >> 5) * 4) >> (ulong)(uVar21 & 0x1f) & 1) != 0)
               || (uVar21 = uVar20 + 2,
                  (*(uint *)(lVar28 + (ulong)(uVar21 >> 5) * 4) >> (ulong)(uVar21 & 0x1f) & 1) != 0)
               ) {
              uVar34 = (ulong)uVar21;
              goto LAB_00e30d04;
            }
            uVar34 = (ulong)(uVar20 + 3);
          } while (uVar20 + 3 != 15000);
          uVar34 = 0;
LAB_00e30d04:
          lVar44 = (*(code *)local_f38[4])(&local_f38);
          uVar20 = 0x3a95;
          do {
            uVar21 = uVar20 + 2;
            if ((((*(uint *)(lVar44 + (ulong)(uVar21 >> 5) * 4) >> (ulong)(uVar21 & 0x1f) & 1) != 0)
                || (uVar21 = uVar20 + 1,
                   (*(uint *)(lVar44 + (ulong)(uVar21 >> 5) * 4) >> (ulong)(uVar21 & 0x1f) & 1) != 0
                   )) || (uVar21 = uVar20,
                         (*(uint *)(lVar44 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1
                         ) != 0)) {
              iVar23 = uVar21 + 1;
              if (iVar23 != (int)uVar34) goto LAB_00e30d8c;
              goto LAB_00e2feb8;
            }
            uVar20 = uVar20 - 3;
          } while (uVar20 != 0xfffffffd);
          iVar23 = 0;
          if ((int)uVar34 != 0) {
LAB_00e30d8c:
            if (uVar17 != 0x80) {
LAB_00e30da0:
              puVar6 = (undefined4 *)((long)param_1 + ((long)((ulong)uVar17 << 0x20) >> 0x1d));
              puVar10 = (undefined4 *)(puVar15 + uVar34 * 8);
              if (0x752 < (uint)(uVar34 >> 3)) {
                puVar10 = (undefined4 *)puVar15;
              }
              uVar17 = uVar17 + 1;
              puVar11 = (undefined4 *)PTR_DAT_04bb37e0;
              if ((uint)uVar34 < 0x3a99) {
                puVar11 = puVar10;
              }
              uVar18 = puVar11[1];
              *puVar6 = *puVar11;
              puVar6[1] = uVar18;
              do {
                uVar20 = (int)uVar34 + 1;
                uVar34 = (ulong)uVar20;
                if (0x752 < uVar20 >> 3) {
                  uVar20 = 0x3a95;
                  goto LAB_00e30e04;
                }
              } while ((*(uint *)(lVar28 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1)
                       == 0);
              goto LAB_00e30e58;
            }
          }
        }
      }
LAB_00e2feb8:
      uVar42 = uVar42 + 1;
    } while (uVar42 != uVar19);
  }
  puVar36 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar19 = *puVar36 ^ *puVar36 << 0xb;
  uVar20 = puVar36[3];
  *puVar36 = puVar36[1];
  puVar36[1] = puVar36[2];
  puVar36[2] = uVar20;
  puVar36[3] = uVar19 >> 8 ^ uVar20 >> 0x13 ^ uVar19 ^ uVar20;
  puVar15 = PTR_DAT_04bc0428;
  puVar1 = PTR_DAT_04bb43c0;
  if (uVar17 != 0) {
    uVar19 = 0;
    ppuVar2 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    do {
      lVar44 = *(long *)puVar1;
      puVar7 = (undefined2 *)((long)param_1 + ((long)((ulong)uVar19 << 0x20) >> 0x1d));
      uVar20 = FUN_0277d6c4(puVar7);
      lVar28 = *(long *)puVar1;
      if (lVar28 != 0) {
        lVar44 = *(long *)(lVar44 + 0x57e58);
        uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar44 + 0x1f8);
        if ((uVar20 < *(uint *)(lVar44 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar44 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) {
          local_f28 = (uint *)0x0;
          local_f30 = (undefined **)
                      CONCAT44(param_1[(long)(int)uVar19 * 2 + 1],
                               CONCAT22(*(undefined2 *)((long)param_1 + (long)(int)uVar19 * 8 + 2),
                                        *puVar7));
          local_f38 = ppuVar2;
          uVar20 = FUN_0277d6c4(&local_f30);
          if (*(long *)puVar1 == 0) {
LAB_00e30ff4:
            puVar36 = (uint *)0x0;
          }
          else {
            lVar28 = *(long *)(lVar28 + 0x57e58);
            uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
            if ((*(uint *)(lVar28 + 0x1d8) <= uVar20) ||
               (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar20 * 8) == 0))
            goto LAB_00e30ff4;
            lVar28 = *(long *)puVar15;
            uVar20 = FUN_0277d6c4(puVar7);
            uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
            if (*(uint *)(lVar28 + 0x1d8) <= uVar20) goto LAB_00e30ff4;
            puVar36 = *(uint **)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar20 * 8);
            if (puVar36 != (uint *)0x0) {
              local_f28 = puVar36;
            }
          }
          iVar23 = FUN_01ad7260(&local_f38);
          if (((iVar23 != 0) && (uVar42 = FUN_01ae6580(&local_f38), (uVar42 & 1) != 0)) &&
             (iVar23 = FUN_01afe130(&local_f38), iVar23 != 1)) {
            uVar20 = 0;
            if (((puVar36 != (uint *)0x0) && (uVar21 = *puVar36, uVar21 != 0)) &&
               (puVar36 != (uint *)(ulong)uVar21)) {
              puVar40 = (uint *)((long)puVar36 - (long)(ulong)uVar21);
              uVar20 = 0;
              if (*puVar40 != 0) {
                uVar20 = puVar40[1];
                if ((uVar20 != 0) && ((ulong)(ushort)puVar40[2] != 0)) {
                  lVar28 = 0xc;
                  if (*(char *)((long)puVar40 + 10) != '\0') {
                    lVar28 = 0x1c;
                  }
                  lVar28 = (long)puVar40 + lVar28 + (ulong)(ushort)puVar40[2] * 8;
                  if (lVar28 != 0) {
                    uVar21 = 0;
                    if ((ulong)uVar20 != 0) {
                      uVar21 = (uint)((ulong)((long)puVar36 - lVar28) / (ulong)uVar20);
                    }
                    if (*puVar40 <= uVar21) {
                      uVar21 = 0xffffffff;
                    }
                    if ((uVar21 < *(uint *)PTR_DAT_04bc0068) &&
                       (uVar20 = (uint)*(ushort *)
                                        (*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar21 * 2),
                       uVar20 < 0x13e)) goto LAB_00e310b0;
                  }
                }
                uVar20 = 0;
              }
            }
LAB_00e310b0:
            local_7c0 = (undefined *)CONCAT44(local_7c0._4_4_,uVar20);
            if (uVar20 != 9) {
              FUN_01a4c66c(&local_1708,puVar7);
            }
          }
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar17);
  }
  return;
  while( true ) {
    uVar20 = uVar19 + 1;
    if ((*(uint *)(lVar28 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1) != 0)
    goto LAB_00e2dbc0;
    if ((*(uint *)(lVar28 + (ulong)(uVar19 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) != 0)
    goto LAB_00e2dbc4;
    uVar19 = uVar19 - 3;
    if (uVar19 == 0xfffffffd) break;
LAB_00e2db70:
    uVar20 = uVar19 + 2;
    if ((*(uint *)(lVar28 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1) != 0) {
LAB_00e2dbc0:
      uVar19 = uVar20;
LAB_00e2dbc4:
      uVar42 = (ulong)(uVar19 + 1);
      goto LAB_00e2dbc8;
    }
  }
  uVar42 = 0;
LAB_00e2dbc8:
  if ((iVar23 == (int)uVar42) || (uVar17 == 0x80)) goto switchD_00e2d4c4_caseD_1;
  goto LAB_00e2db10;
  while( true ) {
    uVar20 = uVar19 + 1;
    if ((*(uint *)(lVar28 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1) != 0)
    goto LAB_00e2d6c0;
    if ((*(uint *)(lVar28 + (ulong)(uVar19 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) != 0)
    goto LAB_00e2d6c4;
    uVar19 = uVar19 - 3;
    if (uVar19 == 0xfffffffd) break;
LAB_00e2d670:
    uVar20 = uVar19 + 2;
    if ((*(uint *)(lVar28 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1) != 0) {
LAB_00e2d6c0:
      uVar19 = uVar20;
LAB_00e2d6c4:
      uVar42 = (ulong)(uVar19 + 1);
      goto LAB_00e2d6c8;
    }
  }
  uVar42 = 0;
LAB_00e2d6c8:
  if ((iVar23 == (int)uVar42) || (uVar17 == 0x80)) goto switchD_00e2d4c4_caseD_1;
  goto LAB_00e2d610;
  while( true ) {
    uVar20 = uVar19 + 1;
    if ((*(uint *)(lVar28 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1) != 0)
    goto LAB_00e2f75c;
    if ((*(uint *)(lVar28 + (ulong)(uVar19 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) != 0)
    goto LAB_00e2f760;
    uVar19 = uVar19 - 3;
    if (uVar19 == 0xfffffffd) break;
LAB_00e2f710:
    uVar20 = uVar19 + 2;
    if ((*(uint *)(lVar28 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1) != 0) {
LAB_00e2f75c:
      uVar19 = uVar20;
LAB_00e2f760:
      uVar42 = (ulong)(uVar19 + 1);
      goto LAB_00e2f764;
    }
  }
  uVar42 = 0;
LAB_00e2f764:
  if ((uVar17 == 0x80) || (iVar23 == (int)uVar42)) goto LAB_00e2f774;
  goto LAB_00e2f6b4;
  while( true ) {
    uVar20 = uVar19 + 1;
    if ((*(uint *)(lVar28 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1) != 0)
    goto LAB_00e2f95c;
    if ((*(uint *)(lVar28 + (ulong)(uVar19 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) != 0)
    goto LAB_00e2f960;
    uVar19 = uVar19 - 3;
    if (uVar19 == 0xfffffffd) break;
LAB_00e2f910:
    uVar20 = uVar19 + 2;
    if ((*(uint *)(lVar28 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1) != 0) {
LAB_00e2f95c:
      uVar19 = uVar20;
LAB_00e2f960:
      uVar42 = (ulong)(uVar19 + 1);
      goto LAB_00e2f964;
    }
  }
  uVar42 = 0;
LAB_00e2f964:
  if ((uVar17 == 0x80) || (iVar23 == (int)uVar42)) goto LAB_00e2f974;
  goto LAB_00e2f8b0;
  while( true ) {
    uVar20 = uVar19 + 1;
    if ((*(uint *)(lVar28 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1) != 0)
    goto LAB_00e2f28c;
    if ((*(uint *)(lVar28 + (ulong)(uVar19 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) != 0)
    goto LAB_00e2f290;
    uVar19 = uVar19 - 3;
    if (uVar19 == 0xfffffffd) break;
LAB_00e2f240:
    uVar20 = uVar19 + 2;
    if ((*(uint *)(lVar28 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1) != 0) {
LAB_00e2f28c:
      uVar19 = uVar20;
LAB_00e2f290:
      uVar42 = (ulong)(uVar19 + 1);
      goto LAB_00e2f294;
    }
  }
  uVar42 = 0;
LAB_00e2f294:
  if ((iVar23 == (int)uVar42) || (uVar17 == 0x80)) goto LAB_00e2f2a8;
  goto LAB_00e2f1a0;
  while( true ) {
    uVar20 = uVar19 + 1;
    if ((*(uint *)(lVar44 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1) != 0)
    goto LAB_00e2f540;
    if ((*(uint *)(lVar44 + (ulong)(uVar19 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) != 0)
    goto LAB_00e2f544;
    uVar19 = uVar19 - 3;
    if (uVar19 == 0xfffffffd) break;
LAB_00e2f4f0:
    uVar20 = uVar19 + 2;
    if ((*(uint *)(lVar44 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1) != 0) {
LAB_00e2f540:
      uVar19 = uVar20;
LAB_00e2f544:
      uVar42 = (ulong)(uVar19 + 1);
      goto LAB_00e2f548;
    }
  }
  uVar42 = 0;
LAB_00e2f548:
  if ((uVar17 == 0x80) || (iVar23 == (int)uVar42)) goto LAB_00e2f2f4;
  goto LAB_00e2f490;
  while( true ) {
    uVar20 = uVar19 + 1;
    if ((*(uint *)(lVar28 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1) != 0)
    goto LAB_00e2fbec;
    if ((*(uint *)(lVar28 + (ulong)(uVar19 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) != 0)
    goto LAB_00e2fbf0;
    uVar19 = uVar19 - 3;
    if (uVar19 == 0xfffffffd) break;
LAB_00e2fba0:
    uVar20 = uVar19 + 2;
    if ((*(uint *)(lVar28 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1) != 0) {
LAB_00e2fbec:
      uVar19 = uVar20;
LAB_00e2fbf0:
      uVar42 = (ulong)(uVar19 + 1);
      goto LAB_00e2fbf4;
    }
  }
  uVar42 = 0;
LAB_00e2fbf4:
  if ((iVar23 == (int)uVar42) || (uVar17 == 0x80)) goto LAB_00e2fc28;
  goto LAB_00e2fb00;
  while (uVar20 = uVar20 - 3, uVar20 != 0xfffffffd) {
LAB_00e2e0a0:
    uVar21 = uVar20 + 2;
    if ((((*(uint *)(lVar44 + (ulong)(uVar21 >> 5) * 4) >> (ulong)(uVar21 & 0x1f) & 1) != 0) ||
        (uVar21 = uVar20 + 1,
        (*(uint *)(lVar44 + (ulong)(uVar21 >> 5) * 4) >> (ulong)(uVar21 & 0x1f) & 1) != 0)) ||
       (uVar21 = uVar20,
       (*(uint *)(lVar44 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1) != 0)) {
      uVar42 = (ulong)(uVar21 + 1);
      goto LAB_00e2e0f8;
    }
  }
  uVar42 = 0;
LAB_00e2e0f8:
  if ((iVar23 == (int)uVar42) || (lVar43 = lVar27, uVar17 == 0x80)) goto LAB_00e2e10c;
  goto LAB_00e2df94;
  while (uVar20 = uVar20 - 3, uVar20 != 0xfffffffd) {
LAB_00e30e04:
    uVar21 = uVar20 + 2;
    if ((((*(uint *)(lVar28 + (ulong)(uVar21 >> 5) * 4) >> (ulong)(uVar21 & 0x1f) & 1) != 0) ||
        (uVar21 = uVar20 + 1,
        (*(uint *)(lVar28 + (ulong)(uVar21 >> 5) * 4) >> (ulong)(uVar21 & 0x1f) & 1) != 0)) ||
       (uVar21 = uVar20,
       (*(uint *)(lVar28 + (ulong)(uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1) != 0)) {
      uVar34 = (ulong)(uVar21 + 1);
      goto LAB_00e30e58;
    }
  }
  uVar34 = 0;
LAB_00e30e58:
  if ((uVar17 == 0x80) || (iVar23 == (int)uVar34)) goto LAB_00e2feb8;
  goto LAB_00e30da0;
}

