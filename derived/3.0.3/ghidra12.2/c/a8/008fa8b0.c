
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_008fa8b0(undefined1 param_1 [16],undefined8 param_2,float param_3,float *param_4,long *param_5)

{
  char *pcVar1;
  char cVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  int iVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  char **ppcVar16;
  float *pfVar17;
  long lVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_150;
  char *local_148;
  undefined8 local_140;
  char *local_138;
  undefined8 local_130;
  undefined *local_128;
  uint local_120;
  undefined4 uStack_11c;
  long local_118;
  uint local_110;
  undefined4 uStack_10c;
  undefined *local_108;
  undefined8 local_100;
  long *local_f8;
  uint local_f0;
  undefined *local_e8;
  undefined1 *local_e0;
  undefined *local_d8;
  char *local_d0;
  undefined4 local_c8;
  char local_c4 [31];
  undefined1 local_a5;
  undefined *local_a0;
  char *local_98;
  undefined4 local_90;
  char local_8c [31];
  undefined1 local_6d;
  undefined1 local_68 [4];
  undefined4 local_64;
  
  puVar4 = PTR_DAT_04bb2020;
  pfVar17 = (float *)&local_150;
  puVar10 = &local_150;
  local_6d = 0;
  local_8c[0] = '\0';
  local_a5 = 0;
  local_98 = local_8c;
  local_90 = 0x20;
  local_d0 = local_c4;
  local_c8 = 0x20;
  local_d8 = PTR_DAT_04bb2028 + 0x10;
  local_c4[0] = '\0';
  local_e8 = PTR_DAT_04bb2020 + 0x10;
  local_f0 = 0;
  local_e0 = &DAT_040addd9;
  local_f8 = param_5;
  local_a0 = local_d8;
  (**(code **)(*param_5 + 0x18))(param_5);
  fVar20 = (float)param_2;
  lVar14 = 0;
  do {
    if (*(char *)(param_5[1] + lVar14) == '\0') {
LAB_008fa994:
      uVar9 = (int)lVar14 + 1;
      if ((int)lVar14 != -1) goto LAB_008fa9ac;
      goto LAB_008fac34;
    }
    lVar18 = param_5[1] + lVar14;
    if (*(char *)(lVar18 + 1) == '\0') {
      lVar14 = lVar14 + 1;
      goto LAB_008fa994;
    }
    if (*(char *)(lVar18 + 2) == '\0') {
      uVar9 = (int)lVar14 + 3;
      if ((int)lVar14 == -3) goto LAB_008fac34;
      goto LAB_008fa9ac;
    }
    lVar14 = lVar14 + 3;
  } while (lVar14 != 0x80001);
  uVar9 = 1;
LAB_008fa9ac:
  FUN_008c8970(&local_f8,&local_a0);
  uVar7 = local_f0;
  plVar6 = local_f8;
  uVar19 = (ulong)local_f0;
  (**(code **)(*local_f8 + 0x18))(local_f8);
  lVar14 = 0;
  do {
    if (*(char *)(plVar6[1] + lVar14) == '\0') {
LAB_008faa1c:
      iVar12 = (int)lVar14;
      goto joined_r0x008faa20;
    }
    lVar18 = plVar6[1] + lVar14;
    if (*(char *)(lVar18 + 1) == '\0') {
      lVar14 = lVar14 + 1;
      goto LAB_008faa1c;
    }
    if (*(char *)(lVar18 + 2) == '\0') {
      iVar12 = (int)lVar14 + 2;
      goto joined_r0x008faa20;
    }
    lVar14 = lVar14 + 3;
  } while (lVar14 != 0x80001);
  iVar12 = 0;
joined_r0x008faa20:
  if (((int)uVar7 < 0) || (iVar12 < (int)uVar7)) {
    if (local_f8 == param_5) goto LAB_008fab00;
LAB_008fab08:
    FUN_008c8970(&local_f8,&local_d8);
    uVar9 = local_f0;
    plVar6 = local_f8;
    uVar19 = (ulong)local_f0;
    (**(code **)(*local_f8 + 0x18))(local_f8);
    fVar20 = (float)param_2;
    lVar14 = 0;
    do {
      if (*(char *)(plVar6[1] + lVar14) == '\0') {
LAB_008fab6c:
        iVar12 = (int)lVar14;
        goto joined_r0x008fab6c;
      }
      lVar18 = plVar6[1] + lVar14;
      if (*(char *)(lVar18 + 1) == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_008fab6c;
      }
      if (*(char *)(lVar18 + 2) == '\0') {
        iVar12 = (int)lVar14 + 2;
        goto joined_r0x008fab6c;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    iVar12 = 0;
joined_r0x008fab6c:
    if ((-1 < (int)uVar9) && ((int)uVar9 <= iVar12)) {
      pcVar1 = (char *)(local_f8[1] + uVar19);
      cVar2 = *pcVar1;
      while (cVar2 != '\0') {
        (**(code **)(local_e8 + 0x18))(&local_e8);
        fVar20 = (float)param_2;
        uVar15 = 0;
        bVar8 = true;
        cVar2 = *pcVar1;
        do {
          if (local_e0[uVar15] == '\0') break;
          if (local_e0[uVar15] == cVar2) {
            if (bVar8) goto LAB_008fac2c;
            break;
          }
          if (local_e0[uVar15 + 1] == '\0') break;
          if (local_e0[uVar15 + 1] == cVar2) goto LAB_008fac2c;
          if (local_e0[uVar15 + 2] == '\0') break;
          if (local_e0[uVar15 + 2] == cVar2) goto LAB_008fac2c;
          bVar8 = uVar15 < 0x7fffe;
          uVar15 = uVar15 + 3;
        } while (uVar15 != 0x80001);
        uVar19 = uVar19 + 1;
        pcVar1 = (char *)(local_f8[1] + uVar19);
        cVar2 = *pcVar1;
      }
LAB_008fac2c:
      local_f0 = (int)uVar19 + 1;
    }
  }
  else {
    pcVar1 = (char *)(local_f8[1] + uVar19);
    cVar2 = *pcVar1;
    while (cVar2 != '\0') {
      (**(code **)(local_e8 + 0x18))(&local_e8);
      uVar15 = 0;
      bVar8 = true;
      cVar2 = *pcVar1;
      do {
        if (local_e0[uVar15] == '\0') break;
        if (local_e0[uVar15] == cVar2) {
          if (bVar8) goto LAB_008faaf0;
          break;
        }
        if (local_e0[uVar15 + 1] == '\0') break;
        if (local_e0[uVar15 + 1] == cVar2) goto LAB_008faaf0;
        if (local_e0[uVar15 + 2] == '\0') break;
        if (local_e0[uVar15 + 2] == cVar2) goto LAB_008faaf0;
        bVar8 = uVar15 < 0x7fffe;
        uVar15 = uVar15 + 3;
      } while (uVar15 != 0x80001);
      uVar19 = uVar19 + 1;
      pcVar1 = (char *)(local_f8[1] + uVar19);
      cVar2 = *pcVar1;
    }
LAB_008faaf0:
    local_f0 = (int)uVar19 + 1;
    if (local_f8 != param_5) goto LAB_008fab08;
LAB_008fab00:
    fVar20 = (float)param_2;
    if (local_f0 != uVar9) goto LAB_008fab08;
  }
LAB_008fac34:
  local_150 = puVar4 + 0x10;
  local_148 = "Place";
  (**(code **)(local_a0 + 0x18))(&local_a0);
  (**(code **)(local_a0 + 0x18))(&local_a0);
  pcVar1 = local_98;
  (**(code **)(local_150 + 0x18))(&local_150);
  if (pcVar1 == local_148) {
LAB_008facc0:
    local_150 = puVar4 + 0x10;
    local_148 = "EventPlaza";
    (**(code **)(local_d8 + 0x18))(&local_d8);
    (**(code **)(local_d8 + 0x18))(&local_d8);
    pcVar1 = local_d0;
    (**(code **)(local_150 + 0x18))(&local_150);
    if (pcVar1 == local_148) {
LAB_008fae30:
      lVar14 = *(long *)PTR_DAT_04bb5c90;
      *param_4 = *(float *)(lVar14 + 0x40);
      param_4[1] = *(float *)(lVar14 + 0x44);
      param_4[2] = *(float *)(lVar14 + 0x48);
      lVar18 = *(long *)PTR_DAT_04bb27c8;
      if (((lVar18 != 0) && (lVar14 = *(long *)(lVar18 + 0xa8), lVar14 != 0)) &&
         (*(char *)(lVar18 + 0x11c8) == '\0')) {
        local_110 = local_110 & 0xffffff00;
        sVar3 = *(short *)PTR_DAT_04bb6298;
        if (sVar3 == -1) {
          uVar13 = 7;
        }
        else {
          local_150 = (undefined *)CONCAT44(local_150._4_4_,1);
          puVar11 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
          if (0xff < (uint)(int)sVar3) {
            puVar11 = (uint *)PTR_DAT_04bc39f8;
          }
          uVar13 = 7;
          if ((*puVar11 & 2) != 0) {
            uVar13 = 5;
          }
        }
        local_150 = (undefined *)CONCAT44(local_150._4_4_,uVar13);
        puVar11 = &local_110;
        goto LAB_008fb5bc;
      }
    }
    else {
      uVar19 = 0;
      bVar8 = true;
      do {
        if (local_d0[uVar19] != local_148[uVar19]) break;
        if (local_d0[uVar19] == '\0') {
          if (bVar8) goto LAB_008fae30;
          break;
        }
        bVar8 = uVar19 < 0x80000;
        uVar19 = uVar19 + 1;
      } while (uVar19 != 0x80001);
      local_150 = puVar4 + 0x10;
      local_148 = "EditArea";
      (**(code **)(local_d8 + 0x18))(&local_d8);
      (**(code **)(local_d8 + 0x18))(&local_d8);
      pcVar1 = local_d0;
      (**(code **)(local_150 + 0x18))(&local_150);
      if (pcVar1 == local_148) {
LAB_008fb1c4:
        local_150 = (undefined *)0x42200000;
        local_148 = (char *)CONCAT44(local_148._4_4_,0x42200000);
        sVar3 = *(short *)PTR_DAT_04bb6298;
        if (sVar3 == -1) {
LAB_008fb2e0:
          lVar14 = *(long *)PTR_DAT_04bb5ce0;
          if (lVar14 != 0) {
            fVar20 = *(float *)(lVar14 + 0xd78);
            pfVar17 = (float *)(lVar14 + 0xd74);
            ppcVar16 = (char **)(lVar14 + 0xd7c);
            goto LAB_008fb2fc;
          }
          fVar20 = 0.0;
          fVar22 = 40.0;
          fVar21 = 40.0;
        }
        else {
          local_110 = 1;
          puVar11 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
          if (0xff < (uint)(int)sVar3) {
            puVar11 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((((*puVar11 >> 1 & 1) == 0) || (local_110 = 0x1a, (*puVar11 >> 0x1a & 1) == 0)) ||
             (*(long *)PTR_DAT_04bb59d8 == 0)) goto LAB_008fb2e0;
          ppcVar16 = &local_148;
          FUN_012e20a8(*(long *)PTR_DAT_04bb59d8 + 0x18,&local_150);
          fVar20 = local_150._4_4_;
LAB_008fb2fc:
          fVar21 = *pfVar17;
          fVar22 = *(float *)ppcVar16;
        }
        *param_4 = fVar21;
        param_4[1] = fVar20;
        param_4[2] = fVar22;
        lVar14 = *(long *)PTR_DAT_04bb27c8;
        if (((lVar14 == 0) || (*(long *)(lVar14 + 0xa8) == 0)) ||
           (*(char *)(lVar14 + 0x11c8) != '\0')) {
          fVar21 = -500.0;
        }
        else {
          fVar21 = (float)FUN_0093b024(lVar14 + 0x28,param_4,0);
        }
        fVar20 = 0.0;
        if (0.0 <= fVar21) {
          fVar20 = fVar21;
        }
        goto LAB_008fb39c;
      }
      uVar19 = 0;
      bVar8 = true;
      do {
        if (local_d0[uVar19] != local_148[uVar19]) break;
        if (local_d0[uVar19] == '\0') {
          if (bVar8) goto LAB_008fb1c4;
          break;
        }
        bVar8 = uVar19 < 0x80000;
        uVar19 = uVar19 + 1;
      } while (uVar19 != 0x80001);
      (**(code **)(local_d8 + 0x18))(&local_d8);
      (**(code **)(local_d8 + 0x18))(&local_d8);
      if (local_d0 != "SafeArea") {
        uVar19 = 0;
        bVar8 = true;
        do {
          if (local_d0[uVar19] != "SafeArea"[uVar19]) break;
          if (local_d0[uVar19] == '\0') {
            if (bVar8) goto LAB_008fb360;
            break;
          }
          bVar8 = uVar19 < 0x80000;
          uVar19 = uVar19 + 1;
        } while (uVar19 != 0x80001);
        (**(code **)(local_d8 + 0x18))(&local_d8);
        (**(code **)(local_d8 + 0x18))(&local_d8);
        if (local_d0 == "SafeAreaSP_X") {
LAB_008fb43c:
          fVar21 = (float)FUN_008f918c();
          *param_4 = fVar21;
          param_4[1] = fVar20;
          param_4[2] = param_3;
          lVar14 = *(long *)PTR_DAT_04bb27c8;
          if (((lVar14 == 0) || (*(long *)(lVar14 + 0xa8) == 0)) ||
             (*(char *)(lVar14 + 0x11c8) != '\0')) {
            fVar20 = -500.0;
          }
          else {
            fVar20 = (float)FUN_0093a950(lVar14 + 0x28,param_4,0);
          }
          param_4[1] = fVar20;
          local_150 = (undefined *)0x42200000;
          local_148 = (char *)CONCAT44(local_148._4_4_,0x42200000);
          sVar3 = *(short *)PTR_DAT_04bb6298;
          if (sVar3 != -1) {
            puVar11 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
            if (0xff < (uint)(int)sVar3) {
              puVar11 = (uint *)PTR_DAT_04bc39f8;
            }
            if ((*puVar11 >> 1 & 1) != 0) {
              local_110 = 0x1a;
              uVar19 = FUN_0290cbcc(&local_110);
              if (((uVar19 & 1) != 0) && (*(long *)PTR_DAT_04bb59d8 != 0)) {
                FUN_012e20a8(*(long *)PTR_DAT_04bb59d8 + 0x18,&local_150);
                *param_4 = (float)local_150;
                return 1;
              }
            }
          }
          if (*(long *)PTR_DAT_04bb5ce0 == 0) {
            *param_4 = 40.0;
            return 1;
          }
          *param_4 = *(float *)(*(long *)PTR_DAT_04bb5ce0 + 0xd74);
          return 1;
        }
        uVar19 = 0;
        bVar8 = true;
        do {
          if (local_d0[uVar19] != "SafeAreaSP_X"[uVar19]) break;
          if (local_d0[uVar19] == '\0') {
            if (bVar8) goto LAB_008fb43c;
            break;
          }
          bVar8 = uVar19 < 0x80000;
          uVar19 = uVar19 + 1;
        } while (uVar19 != 0x80001);
        (**(code **)(local_d8 + 0x18))(&local_d8);
        (**(code **)(local_d8 + 0x18))(&local_d8);
        if (local_d0 != "WherearenGardenOrderStartNpcPos") {
          uVar19 = 0;
          bVar8 = true;
          while( true ) {
            if (local_d0[uVar19] != "WherearenGardenOrderStartNpcPos"[uVar19]) {
              return 0;
            }
            if (local_d0[uVar19] == '\0') break;
            bVar8 = uVar19 < 0x80000;
            uVar19 = uVar19 + 1;
            if (uVar19 == 0x80001) {
              return 0;
            }
          }
          if (!bVar8) {
            return 0;
          }
        }
        fVar21 = (float)FUN_0375f698(*(undefined8 *)PTR_DAT_04bb59d8);
        *param_4 = fVar21;
        param_4[1] = fVar20;
        puVar4 = PTR_DAT_04bb27c8;
        param_4[2] = param_3;
        fVar20 = (float)FUN_0093b024(*(long *)puVar4 + 0x28,param_4,0);
        goto LAB_008fb39c;
      }
LAB_008fb360:
      fVar21 = (float)FUN_008f918c();
      *param_4 = fVar21;
      param_4[1] = fVar20;
      param_4[2] = param_3;
      lVar14 = *(long *)PTR_DAT_04bb27c8;
      if (((lVar14 != 0) && (*(long *)(lVar14 + 0xa8) != 0)) && (*(char *)(lVar14 + 0x11c8) == '\0')
         ) {
        fVar20 = (float)FUN_0093a950(lVar14 + 0x28,param_4,0);
        goto LAB_008fb39c;
      }
    }
  }
  else {
    uVar19 = 0;
    bVar8 = true;
    do {
      if (local_98[uVar19] != local_148[uVar19]) break;
      if (local_98[uVar19] == '\0') {
        if (bVar8) goto LAB_008facc0;
        break;
      }
      bVar8 = uVar19 < 0x80000;
      uVar19 = uVar19 + 1;
    } while (uVar19 != 0x80001);
    (**(code **)(local_a0 + 0x18))(&local_a0);
    (**(code **)(local_a0 + 0x18))(&local_a0);
    if (local_98 != "Event") {
      uVar19 = 0;
      bVar8 = true;
      while( true ) {
        if (local_98[uVar19] != "Event"[uVar19]) {
          return 0;
        }
        if (local_98[uVar19] == '\0') break;
        bVar8 = uVar19 < 0x80000;
        uVar19 = uVar19 + 1;
        if (uVar19 == 0x80001) {
          return 0;
        }
      }
      if (!bVar8) {
        return 0;
      }
    }
    (**(code **)(local_d8 + 0x18))(&local_d8);
    (**(code **)(local_d8 + 0x18))(&local_d8);
    if (local_d0 != "HarvestCooking") {
      uVar19 = 0;
      bVar8 = true;
      while( true ) {
        if (local_d0[uVar19] != "HarvestCooking"[uVar19]) {
          return 0;
        }
        if (local_d0[uVar19] == '\0') break;
        bVar8 = uVar19 < 0x80000;
        uVar19 = uVar19 + 1;
        if (uVar19 == 0x80001) {
          return 0;
        }
      }
      if (!bVar8) {
        return 0;
      }
    }
    local_150 = puVar4 + 0x10;
    local_148 = "HarvestDemoCooking";
    uVar9 = FUN_02743000(&local_150);
    puVar4 = PTR_DAT_04bb2010;
    local_108 = PTR_DAT_04bb2010 + 0x10;
    local_110 = *(uint *)PTR_DAT_04bb37e0;
    uStack_10c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_100 = 0;
    if (uVar9 < 2) {
      uVar9 = 1;
    }
    iVar12 = uVar9 - 1;
    if (4 < uVar9) {
      iVar12 = 0;
    }
    FUN_01a55838(&local_110,iVar12);
    puVar5 = PTR_DAT_04bb43c0;
    lVar18 = *(long *)PTR_DAT_04bb43c0;
    uVar9 = FUN_0277d6c4(&local_110);
    lVar14 = *(long *)puVar5;
    if (lVar14 == 0) {
      return 0;
    }
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if (*(uint *)(lVar18 + 0x1d8) <= uVar9) {
      return 0;
    }
    if (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8) == 0) {
      return 0;
    }
    local_118 = 0;
    local_128 = PTR_DAT_04bc0510 + 0x10;
    local_120 = local_110;
    uStack_11c = uStack_10c;
    uVar9 = FUN_0277d6c4(&local_120);
    if (*(long *)puVar5 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        lVar14 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(&local_110);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if (uVar9 < *(uint *)(lVar14 + 0x1d8)) {
          lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8);
          if (lVar14 != 0) {
            local_118 = lVar14;
          }
        }
      }
    }
    local_148 = puVar4 + 0x10;
    local_140 = 0;
    local_130 = 0;
    local_150 = PTR_DAT_04bbc1a0 + 0x10;
    local_138 = local_148;
    FUN_01afb480(&local_128,&local_150);
    local_140._0_4_ = (int)local_140 + (int)local_100;
    local_140._4_4_ = local_140._4_4_ + local_100._4_4_;
    local_130._0_4_ = (int)local_130 + (int)local_100;
    local_130._4_4_ = local_130._4_4_ + local_100._4_4_;
    if (param_4 != (float *)0x0) {
      *param_4 = ((float)(int)local_140 * 5.0 + (float)(int)local_130 * 5.0 + 5.0) * 0.5;
      param_4[2] = ((float)local_140._4_4_ * 5.0 + (float)local_130._4_4_ * 5.0 + 5.0) * 0.5;
    }
    local_68[0] = 0;
    lVar14 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8);
    if (lVar14 != 0) {
      sVar3 = *(short *)PTR_DAT_04bb6298;
      if (sVar3 == -1) {
        local_64 = 7;
      }
      else {
        puVar11 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
        if (0xff < (uint)(int)sVar3) {
          puVar11 = (uint *)PTR_DAT_04bc39f8;
        }
        local_64 = 7;
        if ((*puVar11 & 2) != 0) {
          local_64 = 5;
        }
      }
      puVar10 = (undefined8 *)&local_64;
      puVar11 = (uint *)local_68;
LAB_008fb5bc:
      fVar20 = (float)FUN_00962700(lVar14,param_4,puVar10,1,puVar11);
      goto LAB_008fb39c;
    }
  }
  fVar20 = -500.0;
LAB_008fb39c:
  param_4[1] = fVar20;
  return 1;
}

