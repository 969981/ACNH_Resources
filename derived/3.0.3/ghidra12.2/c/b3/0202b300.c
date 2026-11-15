
/* WARNING: Removing unreachable block (ram,0x0202b5c0) */

void FUN_0202b300(long param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  undefined *local_380;
  undefined8 *local_378;
  undefined4 local_370;
  undefined8 local_36c;
  uint local_364;
  undefined8 local_360;
  undefined4 local_358;
  undefined *local_350;
  char *pcStack_348;
  undefined4 local_340;
  char local_33c [8];
  char local_334 [8];
  char local_32c [8];
  char local_324 [8];
  char local_31c [8];
  char local_314 [8];
  undefined4 local_30c;
  undefined1 local_308;
  undefined1 local_2bd;
  undefined4 local_2b8;
  undefined2 local_2b4;
  undefined8 local_2b0;
  undefined *local_2a8;
  undefined4 *local_2a0;
  float local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  long local_28c;
  undefined8 local_284;
  undefined *local_278;
  undefined8 *local_270;
  int local_268;
  undefined1 local_264 [127];
  undefined1 local_1e5;
  undefined4 local_1e0;
  undefined2 local_1dc;
  undefined8 local_1d8;
  undefined *local_1d0;
  undefined1 *local_1c8;
  undefined4 local_1c0;
  undefined1 local_1bc [7];
  undefined1 local_1b5;
  undefined4 local_1ac;
  undefined *local_1a8;
  char *pcStack_1a0;
  undefined4 local_198;
  char local_194 [7];
  char cStack_18d;
  char acStack_18c [7];
  undefined1 local_185;
  undefined1 local_155;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 local_12c;
  undefined *local_120;
  undefined1 *puStack_118;
  undefined4 local_110;
  undefined1 local_10c [127];
  undefined1 local_8d;
  undefined4 local_88;
  undefined2 local_84;
  undefined8 local_80;
  
  puVar6 = PTR_DAT_04bb2d88;
  puVar5 = PTR_DAT_04bb2720;
  local_138 = 0;
  local_8d = 0;
  local_150 = 0xa00000000;
  uStack_148 = 0x41f00000;
  puStack_118 = local_10c;
  local_140 = 0x3f80000041a00000;
  local_110 = 0x80;
  local_10c[0] = 0;
  local_120 = PTR_DAT_04bb2d88 + 0x10;
  local_80 = 0;
  local_84 = 0;
  local_134 = 0;
  local_12c = 0;
  local_155 = 0;
  local_185 = 0;
  local_88 = 7;
  local_198 = 0x40;
  local_194 = (char  [7])s_CoordinateHouse_040ff576._0_7_;
  pcStack_1a0 = local_194;
  cStack_18d = s_CoordinateHouse_040ff576[7];
  acStack_18c = (char  [7])s_CoordinateHouse_040ff576._8_7_;
  local_1a8 = PTR_DAT_04bb2bc0 + 0x10;
  local_1ac = 0;
  lVar12 = *(long *)PTR_DAT_04bb2720;
  if (lVar12 == 0) {
    puVar14 = &DAT_055c04a0;
  }
  else {
    puVar14 = &DAT_055c04a0;
    if (*(long *)(lVar12 + 0x330) != 0) {
      puVar14 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
      iVar8 = FUN_006bd550(*puVar14,0);
      puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar14 = &DAT_055c04a0;
      }
    }
  }
  uVar10 = FUN_02b64e40(&local_1ac,*(undefined4 *)(puVar14 + 7));
  if ((uVar10 & 1) == 0) {
    return;
  }
  local_2a8 = (undefined *)CONCAT44(local_2a8._4_4_,local_1ac);
  lVar12 = *(long *)PTR_DAT_04bb46b0;
  if (lVar12 != 0) {
    puVar14 = *(undefined8 **)(lVar12 + 0x10);
    if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
      lVar12 = (**(code **)(*(long *)*puVar14 + 0x38))();
      if (lVar12 != 0) {
        lVar12 = lVar12 + 0x70;
        goto LAB_0202b4a4;
      }
    }
    else if (((puVar14 != (undefined8 *)0x0) && ((long *)puVar14[0x26] != (long *)0x0)) &&
            (lVar12 = (**(code **)(*(long *)puVar14[0x26] + 0x38))(), lVar12 != 0)) {
LAB_0202b4a4:
      if ((uint)local_2a8 < 10) {
        lVar15 = lVar12 + 0x1962d8 + ((ulong)local_2a8 & 0xffffffff) * 0x10d8;
        if (9 < (uint)local_2a8) {
          lVar15 = lVar12 + 0x1962d8;
        }
        goto LAB_0202b4b4;
      }
    }
  }
  lVar15 = 0;
LAB_0202b4b4:
  local_28c._1_7_ = (uint7)((ulong)local_28c >> 8) & 0xffffffffffff;
  local_28c = (ulong)local_28c._1_7_ << 8;
  local_298 = 2.24208e-44;
  uStack_294 = 0x72746e45;
  uStack_290 = 0x65636e61;
  local_2a0 = &uStack_294;
  local_2a8 = PTR_DAT_04bb2ab0 + 0x10;
  lVar12 = FUN_02917a1c(&local_2a8);
  if (lVar12 == 0) {
    lVar12 = *(long *)puVar5;
    if (lVar12 == 0) {
      return;
    }
    if (*(long *)(lVar12 + 0x330) == 0) {
      return;
    }
    puVar14 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
    iVar8 = FUN_006bd550(*puVar14,0);
    if (iVar8 != 0x758f7eaf) {
      return;
    }
    lVar12 = *(long *)puVar5;
    if (lVar12 == 0) {
      return;
    }
    lVar13 = *(long *)(lVar12 + 0x330);
    if (lVar13 == 0) {
      return;
    }
    if (*(int *)(lVar13 + 0x260) == 0) {
      return;
    }
    lVar12 = 0;
    if (*(long *)(lVar13 + 600) != 0) {
      lVar12 = *(long *)(lVar13 + 600) + -0x40;
    }
  }
  if ((lVar15 != 0) && (lVar12 != 0)) {
    if ((*(long **)(lVar15 + 0x28) == (long *)0x0) ||
       (puVar14 = (undefined8 *)**(long **)(lVar15 + 0x28), puVar14 == (undefined8 *)0x0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)*puVar14)();
      uVar10 = uVar10 & 0xffffffff;
    }
    local_2a8 = (undefined *)((ulong)local_2a8 & 0xffffffff00000000);
    bVar2 = *(byte *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x1c4);
    if (bVar2 < 10) {
      local_1b5 = 0;
      local_1c0 = 8;
      local_1c8 = local_1bc;
      local_1bc[0] = 0;
      local_1d0 = PTR_DAT_04bb3768 + 0x10;
      FUN_0202a330(param_1);
      uVar11 = FUN_021d7c00(&local_1d0,(int)(char)bVar2);
      if ((uVar11 & 1) != 0) {
        local_1e5 = 0;
        local_2a8 = (undefined *)0xa00000000;
        local_2a0 = (undefined4 *)0x43250000;
        local_298 = 195.0;
        uStack_294 = 0x3f800000;
        uStack_290 = 0x80000000;
        local_270 = (undefined8 *)local_264;
        local_268 = 0x80;
        local_278 = puVar6 + 0x10;
        local_264[0] = 0;
        local_1e0 = 7;
        local_1d8 = 0;
        local_1dc = 0;
        local_28c = 0;
        local_284 = 0;
        FUN_0074fda4(&local_380,"rco/AIC:CoordinateRco/AIF:AI_NPC_CoordinateHouse");
        puVar7 = local_270;
        (**(code **)(local_380 + 0x18))(&local_380);
        puVar14 = local_378;
        if (puVar7 != local_378) {
          (**(code **)(local_380 + 0x18))(&local_380);
          lVar12 = 0;
          do {
            if (*(char *)((long)local_378 + lVar12) == '\0') goto LAB_0202b724;
            if (*(char *)((long)local_378 + lVar12 + 1) == '\0') {
              lVar12 = lVar12 + 1;
              goto LAB_0202b724;
            }
            if (*(char *)((long)local_378 + lVar12 + 2) == '\0') {
              lVar12 = lVar12 + 2;
              goto LAB_0202b724;
            }
            lVar12 = lVar12 + 3;
          } while (lVar12 != 0x80001);
          lVar12 = 0;
LAB_0202b724:
          iVar8 = (int)lVar12;
          if (local_268 <= (int)lVar12) {
            iVar8 = local_268 + -1;
          }
          memcpy(puVar7,puVar14,(long)iVar8);
          *(undefined1 *)((long)puVar7 + (long)iVar8) = 0;
        }
        FUN_02030e80(param_1,&local_2a8);
        uVar9 = nn::os::GetSystemTick();
        local_350._0_4_ = (uint)(uint3)local_350;
        local_370 = 0x20;
        local_378 = &local_36c;
        local_36c = 0x65636e6172746e45;
        local_364 = local_364 & 0xffffff00;
        local_380 = PTR_DAT_04bb2028 + 0x10;
        lVar12 = FUN_02917a1c(&local_380);
        lVar13 = *(long *)(param_1 + 0x5898);
        if ((int)*(uint *)(lVar13 + 8) < 1) {
LAB_0202b894:
          uStack_290 = 0;
          fVar16 = 195.0;
          fVar17 = 160.0;
        }
        else {
          uVar3 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
          uVar9 = 0;
          uVar1 = uVar3 ^ uVar3 * 0x800;
          uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
          uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
          uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
          uVar11 = (ulong)*(uint *)(lVar13 + 0x18) *
                   (ulong)(uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3) >> 0x20;
          do {
            if ((*(uint *)(*(long *)(lVar13 + 0x10) + (ulong)(uVar9 >> 5) * 4) >>
                 (ulong)(uVar9 & 0x1f) & 1) != 0) {
              if ((int)uVar11 == 0) {
                if (lVar12 == 0) goto LAB_0202b894;
                iVar8 = *(int *)(lVar13 + 0x1c);
                iVar4 = 0;
                if (iVar8 != 0) {
                  iVar4 = (int)uVar9 / iVar8;
                }
                fVar16 = (float)(int)(iVar4 + (uint)*(ushort *)(param_1 + 0x585a)) * 5.0;
                fVar17 = (float)(int)((uVar9 - iVar4 * iVar8) + (uint)*(ushort *)(param_1 + 0x5858))
                         * 5.0;
                uStack_290 = FUN_006f0400(*(float *)(lVar12 + 0xc) - fVar17,
                                          *(float *)(lVar12 + 0x14) - fVar16);
                goto LAB_0202b8b4;
              }
              uVar11 = (ulong)((int)uVar11 - 1);
            }
            uVar9 = uVar9 + 1;
          } while (*(uint *)(lVar13 + 8) != uVar9);
          uStack_290 = 0;
          fVar16 = 195.0;
          fVar17 = 160.0;
        }
LAB_0202b8b4:
        local_2a0 = (undefined4 *)(ulong)(uint)fVar17;
        local_298 = fVar16;
        (**(code **)(local_1d0 + 0x18))(&local_1d0);
        FUN_0074fda4(&local_380,"%s/AIC:Coordinate/AIF:AI_NPC_CoordinateHouse",local_1c8);
        puVar7 = local_270;
        (**(code **)(local_380 + 0x18))(&local_380);
        puVar14 = local_378;
        if (puVar7 != local_378) {
          (**(code **)(local_380 + 0x18))(&local_380);
          lVar12 = 0;
          do {
            if (*(char *)((long)local_378 + lVar12) == '\0') goto LAB_0202b960;
            if (*(char *)((long)local_378 + lVar12 + 1) == '\0') {
              lVar12 = lVar12 + 1;
              goto LAB_0202b960;
            }
            if (*(char *)((long)local_378 + lVar12 + 2) == '\0') {
              lVar12 = lVar12 + 2;
              goto LAB_0202b960;
            }
            lVar12 = lVar12 + 3;
          } while (lVar12 != 0x80001);
          lVar12 = 0;
LAB_0202b960:
          iVar8 = (int)lVar12;
          if (local_268 <= (int)lVar12) {
            iVar8 = local_268 + -1;
          }
          memcpy(puVar7,puVar14,(long)iVar8);
          *(undefined1 *)((long)puVar7 + (long)iVar8) = 0;
        }
        local_28c = CONCAT44(local_28c._4_4_,(int)(char)bVar2);
        FUN_02030e80(param_1,&local_2a8);
        local_370 = 0;
        local_36c = 0x3f800000;
        pcStack_348 = local_33c;
        local_340 = 0x80;
        local_350 = puVar6 + 0x10;
        local_2b8 = 7;
        local_334[0] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[8];
        local_334[1] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[9];
        local_334[2] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[10];
        local_334[3] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0xb];
        local_334[4] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0xc];
        local_334[5] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0xd];
        local_334[6] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0xe];
        local_334[7] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0xf];
        local_2bd = 0;
        local_2b0 = 0;
        local_2b4 = 0;
        local_360 = 0;
        local_358 = 0;
        local_33c[0] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0];
        local_33c[1] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[1];
        local_33c[2] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[2];
        local_33c[3] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[3];
        local_33c[4] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[4];
        local_33c[5] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[5];
        local_33c[6] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[6];
        local_33c[7] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[7];
        local_308 = 0;
        local_314[0] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x28];
        local_314[1] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x29];
        local_314[2] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x2a];
        local_314[3] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x2b];
        local_314[4] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x2c];
        local_314[5] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x2d];
        local_314[6] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x2e];
        local_314[7] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x2f];
        local_31c[0] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x20];
        local_31c[1] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x21];
        local_31c[2] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x22];
        local_31c[3] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x23];
        local_31c[4] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x24];
        local_31c[5] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x25];
        local_31c[6] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x26];
        local_31c[7] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x27];
        local_380 = (undefined *)0x3700000000;
        local_378 = (undefined8 *)0x0;
        local_324[0] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x18];
        local_324[1] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x19];
        local_324[2] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x1a];
        local_324[3] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x1b];
        local_324[4] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x1c];
        local_324[5] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x1d];
        local_324[6] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x1e];
        local_324[7] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x1f];
        local_32c[0] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x10];
        local_32c[1] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x11];
        local_32c[2] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x12];
        local_32c[3] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x13];
        local_32c[4] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x14];
        local_32c[5] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x15];
        local_32c[6] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x16];
        local_32c[7] = s_SNPC_rco_12_CoordinateNpcHouse_N_040da9d1[0x17];
        local_30c = 0x676f6c6f;
        local_364 = 4;
        FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_380,0,1);
      }
    }
    if ((((uVar10 & 1) != 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
       (puVar14 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8), puVar14 != (undefined8 *)0x0)) {
      (**(code **)*puVar14)();
    }
  }
  return;
}

