
/* WARNING: Type propagation algorithm not settling */

void FUN_032ab3d0(long *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  byte bVar4;
  char cVar5;
  ulong uVar6;
  undefined *puVar7;
  bool bVar8;
  undefined ******ppppppuVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  ushort uVar13;
  ulong uVar14;
  long lVar15;
  undefined *******pppppppuVar16;
  undefined *local_450;
  undefined *puStack_448;
  undefined *local_440;
  undefined8 uStack_438;
  undefined *local_430;
  undefined2 *puStack_428;
  undefined *local_420;
  undefined *******local_418 [4];
  undefined8 uStack_3f8;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  long *local_3d8;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  long *local_3a8;
  undefined8 local_388;
  undefined8 uStack_380;
  long *local_378;
  undefined8 local_358;
  undefined8 uStack_350;
  long *local_348;
  undefined8 local_328;
  undefined8 uStack_320;
  long *local_318;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  long *local_2e8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  long *local_2b8;
  undefined8 local_298;
  undefined8 uStack_290;
  long *local_288;
  undefined8 local_268;
  undefined8 uStack_260;
  long *local_258;
  uint local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined **local_218;
  undefined2 local_210;
  undefined *local_208;
  undefined ******local_200;
  undefined4 local_1f8;
  undefined2 local_1f4 [31];
  undefined2 local_1b6;
  undefined *local_1b0;
  undefined *******local_1a8;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined *local_180;
  undefined1 *local_178;
  undefined4 local_170;
  undefined1 local_16c [63];
  undefined1 local_12d;
  undefined *local_128;
  undefined1 *local_120;
  undefined4 local_118;
  undefined1 local_114 [63];
  undefined1 local_d5;
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined *local_70;
  
  if (*(char *)(param_2 + 10) == '\0') {
    param_1[3] = 0;
    puVar2 = PTR_PTR_04bb2238;
    *(undefined2 *)(param_1 + 8) = 0;
    lVar10 = *(long *)(puVar2 + 8);
    *(undefined1 *)((long)param_1 + 0x42) = 0;
    param_1[5] = lVar10;
    param_1[7] = lVar10;
    *(undefined4 *)(*param_1 + 0x68) = 0;
    lVar10 = *param_1;
    plVar12 = *(long **)(lVar10 + 0x4e8);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 8))();
    }
    *(undefined8 *)(lVar10 + 0x4e8) = 0;
    local_90 = PTR_DAT_04bc8e78 + 0x10;
    puStack_88 = &DAT_04169358;
    local_1b0 = *(undefined **)(*(long *)(*param_1 + 0x20) + 0x18);
    local_420 = PTR_DAT_04bc8e68 + 0x10;
    local_418[0] = (undefined *******)&DAT_040c1e5f;
    local_420 = (undefined *)FUN_0328b6d0(&local_1b0,&local_420,0);
    FUN_032d67f0(&local_420,&local_90);
    lVar10 = *(long *)(*(long *)(*param_1 + 0x20) + 0x18);
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe;
    FUN_032883c0(*param_1,0);
    return;
  }
  puVar2 = (undefined *)0x0;
  if (*param_1 != 0) {
    puVar2 = PTR_LAB_04bc92c8;
  }
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  *(undefined4 *)(param_1 + 3) = *param_2;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2[1];
  param_1[5] = *(long *)(param_2 + 4);
  param_1[7] = *(long *)(param_2 + 8);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 10);
  *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x29);
  *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x2a);
  puVar2 = PTR_DAT_04bc8e68;
  if (**(char **)(param_2 + 4) != '\0') {
    puVar1 = param_2 + 2;
    (**(code **)(*(long *)(param_2 + 2) + 0x18))(puVar1);
    (**(code **)(*(long *)(param_2 + 2) + 0x18))(puVar1);
    puVar7 = PTR_DAT_04bb2020;
    if (*(undefined1 **)(param_2 + 4) != &DAT_0407bc05) {
      uVar14 = 0;
      bVar8 = true;
      do {
        cVar5 = (*(undefined1 **)(param_2 + 4))[uVar14];
        if (cVar5 != (&DAT_0407bc05)[uVar14]) break;
        if (cVar5 == '\0') {
          if (bVar8) goto LAB_032ab730;
          break;
        }
        bVar8 = uVar14 < 0x80000;
        uVar14 = uVar14 + 1;
      } while (uVar14 != 0x80001);
      (**(code **)(*(long *)(param_2 + 2) + 0x18))(puVar1);
      (**(code **)(*(long *)(param_2 + 2) + 0x18))(puVar1);
      if (*(undefined1 **)(param_2 + 4) != &DAT_040a049e) {
        uVar14 = 0;
        bVar8 = true;
        do {
          cVar5 = (*(undefined1 **)(param_2 + 4))[uVar14];
          if (cVar5 != (&DAT_040a049e)[uVar14]) break;
          if (cVar5 == '\0') {
            if (bVar8) goto LAB_032ab730;
            break;
          }
          bVar8 = uVar14 < 0x80000;
          uVar14 = uVar14 + 1;
        } while (uVar14 != 0x80001);
        (**(code **)(*(long *)(param_2 + 2) + 0x18))(puVar1);
        (**(code **)(*(long *)(param_2 + 2) + 0x18))(puVar1);
        if (*(undefined1 **)(param_2 + 4) != &DAT_0406c2cf) {
          uVar14 = 0;
          bVar8 = true;
          do {
            cVar5 = (*(undefined1 **)(param_2 + 4))[uVar14];
            if (cVar5 != (&DAT_0406c2cf)[uVar14]) break;
            if (cVar5 == '\0') {
              if (bVar8) goto LAB_032ab730;
              break;
            }
            bVar8 = uVar14 < 0x80000;
            uVar14 = uVar14 + 1;
          } while (uVar14 != 0x80001);
          (**(code **)(*(long *)(param_2 + 2) + 0x18))(puVar1);
          (**(code **)(*(long *)(param_2 + 2) + 0x18))(puVar1);
          if (*(undefined1 **)(param_2 + 4) != &DAT_04080da4) {
            uVar14 = 0;
            bVar8 = true;
            do {
              cVar5 = (*(undefined1 **)(param_2 + 4))[uVar14];
              if (cVar5 != (&DAT_04080da4)[uVar14]) break;
              if (cVar5 == '\0') {
                if (bVar8) goto LAB_032ab730;
                break;
              }
              bVar8 = uVar14 < 0x80000;
              uVar14 = uVar14 + 1;
            } while (uVar14 != 0x80001);
            local_420 = puVar7 + 0x10;
            local_418[0] = (undefined *******)&DAT_040d60e1;
            uVar14 = FUN_00710cb0(puVar1,&local_420);
            if ((uVar14 & 1) == 0) {
              uStack_438 = *(undefined8 *)(param_2 + 4);
              local_450 = puVar2 + 0x10;
              puStack_448 = &DAT_040c1e5f;
              local_440 = local_450;
              FUN_032897c8(*param_1,&local_440,&local_450);
              goto LAB_032ab9f8;
            }
          }
        }
      }
    }
LAB_032ab730:
    local_19c = 0;
    local_190 = 0xffffffff00000000;
    local_1a0 = 0x20;
    local_198 = 0xffffffff;
    local_178 = local_16c;
    local_1a8 = (undefined *******)local_d0;
    local_188 = 0xffffffff;
    local_170 = 0x40;
    local_12d = 0;
    local_16c[0] = 0;
    local_180 = PTR_DAT_04bb2bc0 + 0x10;
    local_120 = local_114;
    local_118 = 0x40;
    local_d5 = 0;
    local_114[0] = 0;
    local_1b0 = PTR_DAT_04bb4e10 + 0x10;
    local_98 = 0;
    local_a0 = 0;
    local_a8 = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = (undefined1  [8])0x0;
    ppuVar3 = &local_90;
    if (&local_90 <= local_d0 + 2) {
      ppuVar3 = (undefined **)(local_d0 + 2);
    }
    local_128 = local_180;
    memset(local_1a8,0,(size_t)((long)ppuVar3 + (-0xe0 - (long)&local_1b0)));
    local_1f8 = 0x20;
    local_200 = (undefined ******)local_1f4;
    local_1b6 = 0;
    local_1f4[0] = 0;
    local_208 = PTR_DAT_04bc0840 + 0x10;
    local_420 = puVar7 + 0x10;
    local_418[0] = (undefined *******)0x409ddf0;
    FUN_006f50a0(&local_1b0,&local_420,puVar1,0);
    memset(local_418,0,0x1e0);
    puVar7 = PTR_DAT_04bb2d80;
    local_3e8 = 0;
    uStack_3e0 = 0;
    local_3b8 = 0;
    uStack_3b0 = 0;
    local_418[2] = (undefined *******)(PTR_DAT_04bb2d80 + 0x10);
    local_388 = 0;
    uStack_380 = 0;
    local_238 = 0xffffffff;
    local_230 = 0;
    local_228 = 0;
    local_220 = 0;
    local_358 = 0;
    uStack_350 = 0;
    local_328 = 0;
    uStack_320 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_2c8 = 0;
    uStack_2c0 = 0;
    local_298 = 0;
    uStack_290 = 0;
    local_268 = 0;
    uStack_260 = 0;
    local_420 = PTR_DAT_04bb2d78 + 0x10;
    local_3d8 = (long *)local_418[2];
    local_3a8 = (long *)local_418[2];
    local_378 = (long *)local_418[2];
    local_348 = (long *)local_418[2];
    local_318 = (long *)local_418[2];
    local_2e8 = (long *)local_418[2];
    local_2b8 = (long *)local_418[2];
    local_288 = (long *)local_418[2];
    local_258 = (long *)local_418[2];
    local_218 = &local_208;
    *(undefined2 *)local_200 = 0;
    local_210 = 0;
    (**(code **)(local_420 + 0x10))(&local_420);
    local_238 = 0xffffffff;
    local_230 = 0;
    local_228 = 0;
    local_220 = 0;
    ppppppuVar9 = (undefined ******)(**(code **)(local_1b0 + 0x18))(&local_1b0);
    lVar10 = (**(code **)(local_1b0 + 0x18))(&local_1b0);
    if (((lVar10 != 0) &&
        (uVar14 = (**(code **)(local_1b0 + 0x20))(&local_1b0), ppppppuVar9 != (undefined ******)0x0)
        ) && ((int)local_238 < 9)) {
      local_238 = local_238 + 1;
      uVar6 = (ulong)local_238;
      bVar8 = 9 < local_238;
      pppppppuVar16 = (undefined *******)(local_418 + uVar6 * 6);
      if (bVar8) {
        pppppppuVar16 = (undefined *******)local_418;
      }
      *pppppppuVar16 = ppppppuVar9;
      pppppppuVar16 = (undefined *******)(local_418 + uVar6 * 6 + 1);
      if (bVar8) {
        pppppppuVar16 = (undefined *******)(local_418 + 1);
      }
      *pppppppuVar16 = (undefined ******)(lVar10 + (uVar14 & 0xffffffff) * 2);
      pppppppuVar16 = (undefined *******)(local_418 + uVar6 * 6 + 2);
      if (bVar8) {
        pppppppuVar16 = (undefined *******)(local_418 + 2);
      }
      *pppppppuVar16 = (undefined ******)(puVar7 + 0x10);
    }
    (**(code **)(local_420 + 0x18))(&local_420);
    FUN_006f1490(&local_420);
    local_70 = &DAT_040c1e5f;
    local_80 = *(undefined8 *)(*(long *)(*param_1 + 0x20) + 0x18);
    local_430 = PTR_DAT_04bc8e78 + 0x10;
    local_78 = puVar2 + 0x10;
    puStack_428 = (undefined2 *)local_200;
    local_78 = (undefined *)FUN_0328b6d0(&local_80,&local_78,0);
    FUN_032d67f0(&local_78,&local_430);
  }
LAB_032ab9f8:
  pppppppuVar16 = *(undefined ********)(param_2 + 8);
  if (*(char *)pppppppuVar16 == '\0') {
    *(undefined1 *)(param_1 + 9) = 1;
    FUN_032ac7c0(&local_420,param_2[1]);
    pppppppuVar16 = local_418[0];
  }
  else {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  puVar2 = puVar2 + 0x10;
  local_1b0 = *(undefined **)(*(long *)(*param_1 + 0x20) + 0x18);
  local_418[0] = (undefined *******)0x40791e2;
  local_420 = puVar2;
  local_80 = FUN_0328b6d0(&local_1b0,&local_420,0);
  plVar12 = *(long **)PTR_DAT_04bc9198;
  if (*(long **)(*(long *)PTR_DAT_04bc6338 + 0x88) != (long *)0x0) {
    plVar12 = *(long **)(*(long *)PTR_DAT_04bc6338 + 0x88);
  }
  local_70 = *(undefined **)(PTR_PTR_04bb2238 + 8);
  local_208 = puVar2;
  local_200 = (undefined ******)pppppppuVar16;
  local_78 = puVar2;
  (**(code **)(*plVar12 + 0x18))(&local_1b0,plVar12,&local_208,&local_78);
  local_420 = PTR_DAT_04bb8610 + 0x10;
  local_418[0] = local_1a8;
  FUN_032d67f0(&local_80,&local_420);
  FUN_032c8150(0,param_1[2],0,0);
  FUN_032abe00(param_1);
  if ((int)param_1[3] == 1) {
    *(undefined4 *)(*param_1 + 0x68) = 0;
    lVar10 = *param_1;
    local_418[1] = (undefined *******)&PTR_LAB_04b19e70;
    local_418[2] = (undefined *******)param_1;
  }
  else {
    if ((int)param_1[3] != 0) goto LAB_032abbcc;
    *(undefined4 *)(*param_1 + 0x68) = *(undefined4 *)((long)param_1 + 0x1c);
    lVar10 = *param_1;
    local_418[2] = (undefined *******)param_1[10];
    local_418[1] = (undefined *******)(PTR_DAT_04bc9288 + 0x10);
    local_418[3] = (undefined *******)PTR_LAB_04bc9250;
    uStack_3f8 = 0;
  }
  local_420 = PTR_DAT_04bc8e70 + 0x10;
  local_418[0] = (undefined *******)(local_418 + 1);
  plVar12 = *(long **)(lVar10 + 0x4e8);
  pppppppuVar16 = local_418[1];
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 8))(plVar12);
    if (local_418[0] == (undefined *******)0x0) {
      *(undefined8 *)(lVar10 + 0x4e8) = 0;
      goto LAB_032abbcc;
    }
    pppppppuVar16 = (undefined *******)*local_418[0];
  }
  uVar11 = (*(code *)pppppppuVar16[3])(local_418[0],lVar10 + 0x4f0);
  *(undefined8 *)(lVar10 + 0x4e8) = uVar11;
  if (local_418[0] != (undefined *******)0x0) {
    (*(code *)(*local_418[0])[1])();
  }
LAB_032abbcc:
  uVar11 = 3;
  if (*(char *)((long)param_1 + 0x41) == '\0') {
    uVar11 = 1;
  }
  FUN_0328a6e0(*param_1,uVar11,1);
  bVar4 = *(byte *)((long)param_1 + 0x42);
  *(uint *)(param_1 + 0xb) = (uint)bVar4 << 1;
  FUN_032883c0(*param_1,bVar4 == 0 && (int)param_1[0xb] == 0);
  lVar10 = *param_1;
  bVar8 = (int)param_1[0xb] != 2;
  FUN_0328a0b0(lVar10,6,1,bVar4 == 0 && bVar8);
  if ((bVar4 == 0 && bVar8) ||
     (((*(ushort *)(lVar10 + 0x578) >> 5 & 1) != 0 && ((*(ushort *)(lVar10 + 0x578) >> 4 & 1) != 0))
     )) {
    uVar13 = *(ushort *)(lVar10 + 0x250) & 0xfdff;
  }
  else {
    uVar13 = *(ushort *)(lVar10 + 0x250) | 0x200;
  }
  local_420 = (undefined *)CONCAT44(local_420._4_4_,9);
  *(ushort *)(lVar10 + 0x250) = uVar13;
  lVar10 = *(long *)(*(long *)(*param_1 + 0x20) + 0x18);
  *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 1;
  FUN_032883c0(*param_1,(int)param_1[0xb] == 0);
  lVar10 = param_1[0xb];
  lVar15 = *param_1;
  FUN_0328a0b0(lVar15,6,1,(int)lVar10 != 2);
  if (((int)lVar10 == 2) &&
     (((*(ushort *)(lVar15 + 0x578) >> 5 & 1) == 0 || ((*(ushort *)(lVar15 + 0x578) >> 4 & 1) == 0))
     )) {
    uVar13 = *(ushort *)(lVar15 + 0x250) | 0x200;
  }
  else {
    uVar13 = *(ushort *)(lVar15 + 0x250) & 0xfdff;
  }
  *(ushort *)(lVar15 + 0x250) = uVar13;
  *(undefined1 *)(param_1[10] + 0x112) = 1;
  return;
}

