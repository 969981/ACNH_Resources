
void FUN_02212d40(long param_1,long *param_2)

{
  void *__dest;
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  long extraout_x11;
  undefined *puVar17;
  long lVar18;
  undefined8 *puVar19;
  void *__src;
  uint uVar20;
  long *plVar21;
  int iVar22;
  undefined *puVar23;
  byte *pbVar24;
  uint local_ac;
  char *local_a0;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined *local_88;
  char *local_80;
  undefined4 local_78;
  char local_74 [7];
  undefined1 local_6d;
  undefined8 local_68;
  
  FUN_02211080(param_1,0);
  FUN_022135d0(param_1);
  FUN_0376baa0(param_2);
  uVar11 = FUN_0376f950();
  bVar7 = (uVar11 & 1) == 0;
  local_ac = 0;
  iVar9 = 9;
  if (bVar7) {
    iVar9 = 6;
  }
  lVar16 = param_1 + 0x1b;
  uVar20 = 0;
  uVar10 = 0;
  bVar6 = false;
  iVar22 = 0;
  lVar15 = param_1;
  if (bVar7) {
    lVar15 = lVar16;
  }
  puVar23 = PTR_DAT_04bb3768 + 0x10;
  puVar17 = PTR_DAT_04bc27f0;
  do {
    pbVar1 = (byte *)(lVar15 + (long)iVar22 + (long)iVar22 * 2);
    uVar13 = (ulong)*pbVar1;
    if (uVar13 < 0x23) {
      pbVar24 = (byte *)(lVar15 + (long)iVar22 * 3 + 1);
      bVar4 = *pbVar24;
      if (((byte)puVar17[uVar13] < bVar4) ||
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar13 * 4) >> (ulong)(bVar4 & 0x1f) & 1) == 0))
      goto LAB_02212f30;
      local_78 = 8;
      local_6d = 0;
      local_74[0] = '\0';
      local_88 = puVar23;
      local_80 = local_74;
      FUN_038d1270(&local_88,"-----");
      uVar13 = (ulong)*pbVar1;
      if (uVar13 < 0x23) {
        FUN_038d1270(&local_88,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar13 * 8 + 0xb0),
                     *pbVar24);
      }
      (**(code **)(local_88 + 0x18))(&local_88);
      (**(code **)(local_88 + 0x18))(&local_88);
      pcVar5 = local_80;
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar14 = (char *)param_2[1];
      if (pcVar5 == pcVar14) {
LAB_0221301c:
        uVar20 = uVar10;
        break;
      }
      uVar13 = 0;
      bVar7 = true;
      do {
        if (local_80[uVar13] != pcVar14[uVar13]) break;
        if (local_80[uVar13] == '\0') {
          if (bVar7) goto LAB_0221301c;
          break;
        }
        if (local_80[uVar13 + 1] != pcVar14[uVar13 + 1]) break;
        if (local_80[uVar13 + 1] == '\0') goto LAB_0221301c;
        if (local_80[uVar13 + 2] != pcVar14[uVar13 + 2]) break;
        if (local_80[uVar13 + 2] == '\0') goto LAB_0221301c;
        bVar7 = uVar13 < 0x7fffe;
        uVar13 = uVar13 + 3;
      } while (uVar13 != 0x80001);
      if (0 < *(int *)(param_1 + 0x30)) {
        lVar18 = 0;
        do {
          iVar8 = FUN_02217e90(*(undefined8 *)(*(long *)(param_1 + 0x38) + lVar18 * 8),&local_88);
          if (iVar8 == 0) {
            if (!(*(long *)(*(long *)(param_1 + 0x38) + lVar18 * 8) != 0 || bVar6))
            goto LAB_02212fa0;
            goto LAB_02212ff0;
          }
          lVar18 = lVar18 + 1;
        } while (lVar18 < *(int *)(param_1 + 0x30));
      }
      if (!bVar6) {
LAB_02212fa0:
        local_ac = local_ac + 1;
        puVar12 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        bVar6 = false;
        uVar3 = puVar12[3];
        uVar2 = *puVar12 ^ *puVar12 << 0xb;
        *puVar12 = puVar12[1];
        puVar12[1] = puVar12[2];
        uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
        puVar12[2] = uVar3;
        puVar12[3] = uVar2;
        if (((ulong)uVar2 * (ulong)local_ac & 0xffffffff00000000) == 0) {
          uVar20 = uVar10;
        }
      }
LAB_02212ff0:
      puVar17 = PTR_DAT_04bc27f0;
    }
    else {
LAB_02212f30:
      if (!bVar6) {
        uVar20 = uVar10;
      }
      bVar6 = true;
    }
    iVar22 = iVar22 + 1;
    uVar10 = uVar10 + 1;
  } while (iVar9 != iVar22);
  puVar23 = PTR_DAT_04bb2020;
  if ((uVar11 & 1) != 0) {
    local_88 = PTR_DAT_04bb2020 + 0x10;
    local_80 = "IsBuiltAllNpcHouse";
    iVar9 = FUN_02758850(&local_88);
    lVar15 = param_1;
    if (iVar9 == 0) {
      lVar16 = extraout_x11;
      uVar10 = uVar20;
      goto LAB_0221324c;
    }
    uVar10 = 0;
    iVar9 = 0;
    bVar7 = true;
    puVar23 = PTR_DAT_04bb3768 + 0x10;
    puVar17 = PTR_DAT_04bc27f0;
    do {
      local_a0 = local_74;
      pbVar1 = (byte *)(lVar16 + (long)iVar9 + (long)iVar9 * 2);
      uVar11 = (ulong)*pbVar1;
      if (uVar11 < 0x23) {
        pbVar24 = (byte *)(lVar16 + (long)iVar9 * 3 + 1);
        bVar4 = *pbVar24;
        if ((bVar4 <= (byte)puVar17[uVar11]) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar11 * 4) >> (ulong)(bVar4 & 0x1f) & 1) != 0)) {
          local_6d = 0;
          local_78 = 8;
          local_74[0] = '\0';
          local_80 = local_a0;
          local_88 = puVar23;
          FUN_038d1270(&local_88,"-----");
          uVar11 = (ulong)*pbVar1;
          if (uVar11 < 0x23) {
            FUN_038d1270(&local_88,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar11 * 8 + 0xb0),
                         *pbVar24);
          }
          (**(code **)(local_88 + 0x18))(&local_88);
          (**(code **)(local_88 + 0x18))(&local_88);
          pcVar5 = local_80;
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar14 = (char *)param_2[1];
          if (pcVar5 == pcVar14) {
LAB_0221321c:
            puVar23 = PTR_DAT_04bb2020;
            uVar20 = uVar10;
            if (bVar7) goto LAB_0221308c;
            goto LAB_0221324c;
          }
          uVar11 = 0;
          bVar6 = true;
          do {
            if (local_80[uVar11] != pcVar14[uVar11]) break;
            if (local_80[uVar11] == '\0') {
              if (bVar6) goto LAB_0221321c;
              break;
            }
            if (local_80[uVar11 + 1] != pcVar14[uVar11 + 1]) break;
            if (local_80[uVar11 + 1] == '\0') goto LAB_0221321c;
            if (local_80[uVar11 + 2] != pcVar14[uVar11 + 2]) break;
            if (local_80[uVar11 + 2] == '\0') goto LAB_0221321c;
            bVar6 = uVar11 < 0x7fffe;
            uVar11 = uVar11 + 3;
          } while (uVar11 != 0x80001);
          puVar17 = PTR_DAT_04bc27f0;
        }
      }
      iVar9 = iVar9 + 1;
      uVar10 = uVar10 + 1;
      bVar7 = iVar9 != 6;
    } while (uVar10 != 6);
    puVar23 = PTR_DAT_04bb2020;
    uVar10 = uVar20;
    if (iVar9 == 6) goto LAB_0221324c;
  }
LAB_0221308c:
  lVar15 = lVar16;
  puVar23 = PTR_DAT_04bb2020;
  uVar10 = uVar20;
LAB_0221324c:
  iVar9 = (int)lVar16;
  if ((int)uVar10 < 1) {
    lVar16 = 0;
  }
  else {
    uVar20 = uVar10 & 3;
    if (uVar10 < 4) {
      iVar22 = 0;
    }
    else {
      iVar9 = 0;
      uVar10 = uVar10 & 0xfffffffc;
      do {
        uVar10 = uVar10 - 4;
        iVar9 = iVar9 + 4;
        iVar22 = iVar9;
      } while (uVar10 != 0);
    }
    for (; uVar20 != 0; uVar20 = uVar20 - 1) {
      iVar9 = iVar22 + 1;
      iVar22 = iVar9;
    }
    lVar16 = (long)iVar9;
  }
  FUN_020fd3a0(lVar15 + lVar16 * 3,param_2);
  local_8c = 0x23;
  local_8a = 8;
  FUN_020fd3a0(&local_8c,param_2);
  uVar10 = FUN_021d7d60(&local_8c);
  if (uVar10 != 0xffffffff) {
    FUN_0252d11c(&local_68);
    uVar11 = FUN_0221119c();
    if ((uVar11 & 1) == 0) {
      local_88 = puVar23 + 0x10;
      local_80 = "ChocolateVillagerIndex";
      FUN_0274bfe8(&local_68,&local_88,0);
      if (0 < *(int *)(param_1 + 0x30)) {
        lVar16 = 0;
        do {
          puVar19 = *(undefined8 **)(*(long *)(param_1 + 0x38) + lVar16 * 8);
          (**(code **)*puVar19)(puVar19);
          lVar16 = lVar16 + 1;
          *puVar19 = *(undefined8 *)(param_1 + 0x40);
          *(undefined8 **)(param_1 + 0x40) = puVar19;
        } while (lVar16 < *(int *)(param_1 + 0x30));
      }
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    local_88 = puVar23 + 0x10;
    local_80 = "ChocolateVillagerIndex";
    FUN_0274ca70(&local_68,&local_88,1 << (ulong)(uVar10 & 0x1f));
  }
  iVar9 = *(int *)(param_1 + 0x30);
  if (iVar9 < *(int *)(param_1 + 0x34)) {
    if (0 < iVar9) {
      lVar16 = 0;
      do {
        iVar9 = FUN_02217e90(*(undefined8 *)(*(long *)(param_1 + 0x38) + lVar16 * 8),param_2);
        if (iVar9 == 0) {
          if (*(long *)(*(long *)(param_1 + 0x38) + lVar16 * 8) != 0) goto LAB_022135a0;
          iVar9 = *(int *)(param_1 + 0x30);
          break;
        }
        iVar9 = *(int *)(param_1 + 0x30);
        lVar16 = lVar16 + 1;
      } while (lVar16 < iVar9);
    }
    if (iVar9 < *(int *)(param_1 + 0x34)) {
      plVar21 = *(long **)(param_1 + 0x40);
      if (plVar21 != (long *)0x0) {
        *(long *)(param_1 + 0x40) = *plVar21;
      }
      __dest = (void *)((long)plVar21 + 0x14);
      *(undefined4 *)(plVar21 + 2) = 8;
      puVar17 = PTR_DAT_04bb6a30;
      *(undefined1 *)((long)plVar21 + 0x1b) = 0;
      *plVar21 = (long)(puVar17 + 0x10);
      plVar21[1] = (long)__dest;
      (**(code **)(*param_2 + 0x18))(param_2);
      __src = (void *)param_2[1];
      if (__dest != __src) {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar16 = 0;
        do {
          if (*(char *)(param_2[1] + lVar16) == '\0') goto LAB_0221348c;
          lVar15 = param_2[1] + lVar16;
          if (*(char *)(lVar15 + 1) == '\0') {
            lVar16 = lVar16 + 1;
            goto LAB_0221348c;
          }
          if (*(char *)(lVar15 + 2) == '\0') {
            lVar16 = lVar16 + 2;
            goto LAB_0221348c;
          }
          lVar16 = lVar16 + 3;
        } while (lVar16 != 0x80001);
        lVar16 = 0;
LAB_0221348c:
        iVar9 = (int)lVar16;
        if ((int)plVar21[2] <= (int)lVar16) {
          iVar9 = (int)plVar21[2] + -1;
        }
        memcpy(__dest,__src,(long)iVar9);
        *(undefined1 *)((long)__dest + (long)iVar9) = 0;
      }
      *plVar21 = (long)(PTR_DAT_04bb3768 + 0x10);
      if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
        *(long **)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x30) * 8) = plVar21;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      }
    }
    puVar12 = (uint *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
    if (*(short *)puVar12 == 0) {
      local_68 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      if ((char)(local_68 >> 0x20) < '\x05') {
        lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
        local_88 = (undefined *)(lVar16 + -0x15180);
        local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
      }
      puVar12 = (uint *)&local_68;
      uVar11 = local_68 >> 0x30;
      local_68._0_6_ = CONCAT24(5,(uint)local_68);
      local_68 = CONCAT26((short)uVar11,(undefined6)local_68) & 0xff00ffffffffffff;
    }
    uVar10 = *puVar12;
    uVar20 = (short)uVar10 * 0x147b;
    FUN_0252d11c(&local_68);
    local_88 = puVar23 + 0x10;
    local_80 = "LatestChocolateDate";
    FUN_0274bfe8(&local_68,&local_88,
                 uVar10 >> 0xb & 0x1e0 | uVar10 >> 0x18 & 0x1f |
                 (uVar10 + ((uVar20 >> 0x13) - ((int)uVar20 >> 0x1f)) * -100) * 0x200 & 0x7e00);
  }
LAB_022135a0:
  FUN_02211824(param_1);
  return;
}

